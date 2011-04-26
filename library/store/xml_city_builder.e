note
	description: "[
		XML event consumer that constructs a city.
		]"

class
	XML_CITY_BUILDER

inherit
	XM_CALLBACKS_NULL
		redefine
			on_start_tag,
			on_attribute,
			on_start_tag_finish,
			on_end_tag
		end

create
	with_error_handler

feature {NONE} -- Initialization

	with_error_handler (a_error_handler: XM_CALLBACKS)
			-- Create a city builder with error handler `a_error_handler'.
		require
			a_error_handler_exists: a_error_handler /= Void
		do
			error_handler := a_error_handler
		ensure
			error_handler_set: error_handler = a_error_handler
		end

feature -- Access

	city: CITY
			-- City under construction.

feature -- Events

	on_start_tag (a_namespace: STRING; a_prefix: STRING; a_local_part: STRING)
			-- Start of start tag.
		do
			current_tag := a_local_part
		end

	on_start_tag_finish
			-- End of start tag.
		do
			if current_tag ~ City_tag then
				build_city
			elseif current_tag ~ Station_tag then
				build_station
			elseif current_tag ~ Line_tag then
				build_line
			elseif current_tag ~ Stop_tag then
				build_stop
			end
		end

	on_attribute (a_namespace: STRING; a_prefix: STRING; a_local_part: STRING; a_value: STRING)
			-- Start of attribute.
		do
			if current_tag ~ City_tag and a_local_part ~ City_name_attribute then
				city_name := a_value
			elseif current_tag ~ Station_tag and a_local_part ~ Station_name_attribute then
				station_name := a_value
			elseif current_tag ~ Station_tag and a_local_part ~ Station_x_attribute then
				station_x := a_value
			elseif current_tag ~ Station_tag and a_local_part ~ Station_y_attribute then
				station_y := a_value
			elseif current_tag ~ Line_tag and a_local_part ~ Line_name_attribute then
				line_name := a_value
			elseif current_tag ~ Line_tag and a_local_part ~ Line_kind_attribute then
				line_kind := a_value
			elseif current_tag ~ Line_tag and a_local_part ~ Line_color_attribute then
				line_color := a_value
			elseif current_tag ~ Stop_tag and a_local_part ~ Stop_name_attribute then
				stop_name := a_value
			end
		end

	on_end_tag (a_namespace: STRING; a_prefix: STRING; a_local_part: STRING)
			-- End tag.
		do
			if a_local_part ~ City_tag then
				city_name := Void
			elseif a_local_part ~ Station_tag then
				station_name := Void
				station_x := Void
				station_y := Void
			elseif a_local_part ~ Line_tag then
				line_name := Void
				line_kind := Void
				line_color := Void
			elseif a_local_part ~ Stop_tag then
				stop_name := Void
			end
		end

feature -- Tag names

	City_tag: STRING = "city"
			-- City tag name.

	Station_tag: STRING = "station"
			-- Station tag name.

	Line_tag: STRING = "line"
			-- Line tag name.

	Stop_tag: STRING = "stop"
			-- Stop tag name.

feature -- Attribute names
	City_name_attribute: STRING = "name"
			-- Name of attribute that stores city name.

	Station_name_attribute: STRING = "name"
			-- Name of attribute that stores station name.	

	Station_x_attribute: STRING = "x"
			-- Name of attribute that stores station x location.	

	Station_y_attribute: STRING = "y"
			-- Name of attribute that stores station y location.		

	Line_name_attribute: STRING = "name"
			-- Name of attribute that stores line name.

	Line_kind_attribute: STRING = "kind"
			-- Name of attribute that stores line kind.

	Line_color_attribute: STRING = "color"
			-- Name of attribute that stores line color.			

	Stop_name_attribute: STRING = "name"
			-- Name of attribute that stores stop name.

feature {NONE} -- State

	current_tag: STRING
			-- Tag being processed.

	city_name: STRING
			-- Value of last read city name attribute.

	station_name: STRING
			-- Value of last read station name attribute.	

	station_x: STRING
			-- Value of last read station x attribute.

	station_y: STRING
			-- Value of last read station y attribute.	

	line_name: STRING
			-- Value of last read line name attribute.	

	line_kind: STRING
			-- Value of last read line kind attribute.

	line_color: STRING
			-- Value of last read line color attribute.

	stop_name: STRING
			-- Value of last read stop name attribute.

feature {NONE} -- City building

	build_city
			-- If possible in current state, create `city';
			-- otherwise report an error.
		do
			if city_name = Void then
				error_handler.on_error (missing_attribute_message (City_tag, City_name_attribute))
			else
				create city.make (city_name)
			end
		end

	build_station
			-- If possible in current state, add new station to `city';
			-- otherwise report an error.
		do
			if station_name = Void then
				error_handler.on_error (missing_attribute_message (Station_tag, Station_name_attribute))
			elseif station_x = Void then
				error_handler.on_error (missing_attribute_message (Station_tag, Station_x_attribute))
			elseif station_y = Void then
				error_handler.on_error (missing_attribute_message (Station_tag, Station_y_attribute))
			elseif city = Void then
				error_handler.on_error (misplaced_tag_message (Station_tag, City_tag))
			elseif city.stations.has_key (station_name) then
				error_handler.on_error ("Station " + station_name + " occurs more than once")
			elseif not station_x.is_double or not station_y.is_double then
				error_handler.on_error ("Station " + station_name + " coordinate is not a real number")
			else
				city.add_station (station_name, [station_x.to_double, station_y.to_double])
			end
		end

	build_line
			-- If possible in current state, add new line to `city';
			-- otherwise report an error.
		do
			if line_name = Void then
				error_handler.on_error (missing_attribute_message (Line_tag, Line_name_attribute))
			elseif line_kind = Void then
				error_handler.on_error (missing_attribute_message (Line_tag, Line_kind_attribute))
			elseif city = Void then
				error_handler.on_error (misplaced_tag_message (Line_tag, City_tag))
			elseif not line_name.is_integer then
				error_handler.on_error ("Line name " + line_name + " is not an integer number")
			elseif city.lines.has_key (line_name.to_integer) then
				error_handler.on_error ("Line " + station_name + " occurs more than once")
			elseif city.transport_kind (line_kind) = Void then
				error_handler.on_error ("Lines of kind " + line_kind + " are not supported")
			else
				city.add_line (line_name.to_integer, city.transport_kind (line_kind))
				if line_color /= Void then
					if line_color.count /= {COLOR}.Hex_format_length or
						not (across line_color as i all i.item.is_hexa_digit end) then
						error_handler.on_error ("Invalid color: " + line_color)
					else
						city.lines [line_name.to_integer].set_color (create {COLOR}.make_from_hex (line_color))
					end
				end
			end
		end

	build_stop
			-- If possible in current state, add new stop to the current line;
			-- otherwise report an error.
		do
			if stop_name = Void then
				error_handler.on_error (missing_attribute_message (Stop_tag, Stop_name_attribute))
			elseif line_name = Void then
				error_handler.on_error (misplaced_tag_message (Stop_tag, Line_tag))
			elseif not city.stations.has_key (stop_name) then
				error_handler.on_error ("Cannot connect unknown station " + stop_name)
			elseif city.lines [line_name.to_integer].stations.has (city.stations [stop_name]) then
				error_handler.on_error ("Station " + stop_name + " occurs twice on line " + line_name)
			else
				city.connect_station (line_name.to_integer, stop_name)
			end
		end

feature {NONE} -- Errors

	error_handler: XM_CALLBACKS
			-- Event consumer that knows what to do when an error occurs.

	missing_attribute_message (a_tag, a_attribute: STRING): STRING
			-- Message reporting that required attribute `a_attribute' is missing in tag `a_tag'.
		do
			Result := "Attribute " + a_attribute + " missing in tag " + a_tag
		end

	misplaced_tag_message (a_tag, a_context: STRING): STRING
			-- Message reporting that tag `a_tag' must be a subnode of `a_context'.
		do
			Result := "Tag " + a_tag + " found outside " + a_context
		end

invariant
	error_handler_exists: error_handler /= Void
end
