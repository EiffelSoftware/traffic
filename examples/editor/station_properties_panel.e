note
	description: "Panel to display and change properties of a station."
	date: "$Date$"
	revision: "$Revision$"

class
	STATION_PROPERTIES_PANEL

inherit
	EV_VERTICAL_BOX

create
	make

feature {NONE} -- Initialization

	make
			-- Initialize empty panel.
		local
			l_horizontal_box: EV_HORIZONTAL_BOX
			l_label: EV_LABEL
		do
			default_create

			create l_label.make_with_text ("Station Properties")
			l_label.font.set_weight ({EV_FONT_CONSTANTS}.Weight_bold)
			extend (l_label)
			disable_item_expand (l_label)

			create name_field
			create l_label.make_with_text ("Name:")
			l_label.set_minimum_width (60)
			create l_horizontal_box
			l_horizontal_box.extend (l_label)
			l_horizontal_box.disable_item_expand (l_label)
			l_horizontal_box.extend (name_field)
			extend (l_horizontal_box)
			disable_item_expand (l_horizontal_box)

			create position_x_field
			create l_label.make_with_text ("Pos X:")
			l_label.set_minimum_width (60)
			create l_horizontal_box
			l_horizontal_box.extend (l_label)
			l_horizontal_box.disable_item_expand (l_label)
			l_horizontal_box.extend (position_x_field)
			extend (l_horizontal_box)
			disable_item_expand (l_horizontal_box)

			create position_y_field
			create l_label.make_with_text ("Pos Y:")
			l_label.set_minimum_width (60)
			create l_horizontal_box
			l_horizontal_box.extend (l_label)
			l_horizontal_box.disable_item_expand (l_label)
			l_horizontal_box.extend (position_y_field)
			extend (l_horizontal_box)
			disable_item_expand (l_horizontal_box)

			name_field.key_release_actions.extend (agent on_key_released)

			update_display
		end

feature -- Access

	station: STATION
			-- Station that is being displayed.

	name_field: EV_TEXT_FIELD
			-- Text field for station name.

	position_x_field: EV_TEXT_FIELD
			-- Text field for x position.

	position_y_field: EV_TEXT_FIELD
			-- Text field for y position.

feature -- Element change

	set_station (a_station: STATION)
			-- Set `station' to `a_station'.
		do
			station := a_station
			update_display
		ensure
			station_set: station = a_station
		end

feature {NONE} -- Implementation

	update_display
			-- Update display according to station that is set.
		do
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
		end

	on_key_released (a_key: EV_KEY)
			-- Handle key released event.
		local
			l_x, l_y: REAL_64
		do
			if position_x_field.text.is_real then
				l_x := position_x_field.text.to_double
			else
				l_x := station.position.x
			end
			if position_y_field.text.is_real then
				l_y := position_y_field.text.to_double
			else
				l_y := station.position.y
			end
			station.set_name (name_field.text)
			station.set_position ([l_x, l_y])
		end

end
