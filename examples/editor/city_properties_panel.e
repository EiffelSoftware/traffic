note
	description: "Panel to display and change properties of a city."
	date: "$Date$"
	revision: "$Revision$"

class
	CITY_PROPERTIES_PANEL

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
		end

feature -- Access

	city: CITY
			-- City that is being displayed.

	name_field: EV_TEXT_FIELD
			-- Text field for city name.

feature -- Element change

	set_city (a_city: CITY)
			-- Set `city' to `a_city'.
		do
			city := a_city
			if city = Void then
				name_field.remove_text
				name_field.disable_sensitive
			else
				name_field.set_text (city.name)
				name_field.enable_sensitive
			end
			update_display
		ensure
			city_set: city = a_city
		end
feature -- Status report

	is_valid_data: BOOLEAN
			-- <Precursor>
		do
			Result := not name_field.text.is_empty
		end

	has_changes: BOOLEAN
			-- <Precursor>
		do
			Result := not name_field.text.is_equal (city.name)
		end

feature -- Basic operations

	save
			-- <Precursor>
		do
			city.set_name (name_field.text)
		end

feature {NONE} -- Implementation

	title: STRING = "City Properties"
			-- <Precursor>

end
