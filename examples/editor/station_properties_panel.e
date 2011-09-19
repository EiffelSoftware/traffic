note
	description: "Panel to display and change properties of a station."
	date: "$Date$"
	revision: "$Revision$"

class
	STATION_PROPERTIES_PANEL

inherit
	PROPERTIES_PANEL

create
	make

feature {NONE} -- Initialization

	initialize_widgets
			-- Initialize empty panel.
		do
			create name_field
			add_widget ("Name:", name_field)
			create position_x_field
			add_widget ("Pos X:", position_x_field)
			create position_y_field
			add_widget ("Pos Y:", position_y_field)
		end

feature -- Access

	station: STATION
			-- Station that is being displayed.

	city: CITY
			-- City where station belongs to.

	name_field: EV_TEXT_FIELD
			-- Text field for station name.

	position_x_field: EV_TEXT_FIELD
			-- Text field for x position.

	position_y_field: EV_TEXT_FIELD
			-- Text field for y position.

feature -- Element change

	set_station (a_station: STATION; a_city: CITY)
			-- Set `station' to `a_station' and `city' to `a_city'.
		require
			city_has_station: a_city /= Void implies a_city.stations.has (a_station)
		do
			station := a_station
			city := a_city
			if station = Void then
				name_field.remove_text
				name_field.disable_sensitive

				position_x_field.remove_text
				position_x_field.disable_sensitive

				position_y_field.remove_text
				position_y_field.disable_sensitive
			else
				name_field.set_text (station.name)
				name_field.enable_sensitive

				position_x_field.set_text (station.position.x.out)
				position_x_field.enable_sensitive

				position_y_field.set_text (station.position.y.out)
				position_y_field.enable_sensitive
			end
			update_display
		ensure
			station_set: station = a_station
		end

feature -- Status report

	is_valid_data: BOOLEAN
			-- <Precursor>
		do
			Result :=
				not name_field.text.is_empty and then
				(name_field.text /~ station.name implies not city.stations.has_key (name_field.text)) and
				position_x_field.text.is_real and
				position_y_field.text.is_real
		end

	has_changes: BOOLEAN
			-- <Precursor>
		do
			Result :=
				not name_field.text.is_equal (station.name) or
				position_x_field.text.to_double /= station.position.x or
				position_y_field.text.to_double /= station.position.y
		end

feature -- Basic operations

	save
			-- <Precursor>
		do
			if station.name /~ name_field.text then
				city.rename_station (station, name_field.text)
			end
			station.set_position ([position_x_field.text.to_double, position_y_field.text.to_double])
		end

feature {NONE} -- Implementation

	title: STRING = "Station Properties"
			-- <Precursor>

end
