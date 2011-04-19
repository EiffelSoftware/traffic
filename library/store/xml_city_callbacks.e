note
	description: "[
		XML event consumer that constructs a city.
		Assumes that the XML file structure is correct.
		Produces an error if data has a wrong type.
		]"

class
	XML_CITY_CALLBACKS

inherit
	XM_CALLBACKS_NULL
		redefine
			on_start_tag,
			on_attribute,
			on_start_tag_finish
		end

feature -- Access

	city: CITY
			-- City under construction.

feature -- Events

	on_start_tag (a_namespace: STRING; a_prefix: STRING; a_local_part: STRING) is
			-- Start of start tag.
		do
			current_tag := a_local_part
		end

	on_start_tag_finish is
			-- End of start tag.
		do
			if current_tag ~ City_tag then
				create city.make (city_name)
			elseif current_tag ~ Station_tag then
				city.add_station (station_name, [station_x, station_y])
			elseif current_tag ~ Line_tag then
				city.add_line (line_name, line_kind)
			elseif current_tag ~ Stop_tag then
				city.connect_station (line_name, stop_name)
			end
		end

	on_attribute (a_namespace: STRING; a_prefix: STRING; a_local_part: STRING; a_value: STRING) is
			-- Start of attribute.
		do
			if current_tag ~ City_tag and a_local_part ~ City_name_attribute then
				city_name := a_value
			elseif current_tag ~ Station_tag and a_local_part ~ Station_name_attribute then
				station_name := a_value
			elseif current_tag ~ Station_tag and a_local_part ~ Station_x_attribute then
				station_x := a_value.to_double
			elseif current_tag ~ Station_tag and a_local_part ~ Station_y_attribute then
				station_y := a_value.to_double
			elseif current_tag ~ Line_tag and a_local_part ~ Line_name_attribute then
				line_name := a_value.to_integer
			elseif current_tag ~ Line_tag and a_local_part ~ Line_kind_attribute then
				line_kind := city.transport_kind (a_value)
			elseif current_tag ~ Stop_tag and a_local_part ~ Stop_name_attribute then
				stop_name := a_value
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

	Stop_name_attribute: STRING = "name"
			-- Name of attribute that stores stop name.

feature -- State
	current_tag: STRING
			-- Tag being processed.

	city_name: STRING
			-- Value of last read city name attribute.

	station_name: STRING
			-- Value of last read station name attribute.	

	station_x: REAL_64
			-- Value of last read station x attribute.

	station_y: REAL_64
			-- Value of last read station y attribute.	

	line_name: INTEGER
			-- Value of last read line name attribute.	

	line_kind: TRANSPORT_KIND
			-- Value of last read line kind attribute.	

	stop_name: STRING
			-- Value of last read stop name attribute.

end
