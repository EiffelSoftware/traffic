note
	description: "Panel to display and change properties of a line."
	date: "$Date$"
	revision: "$Revision$"

class
	LINE_PROPERTIES_PANEL

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

	line: LINE
			-- City that is being displayed.

	city: CITY
			-- City that `line' belongs to.

	name_field: EV_TEXT_FIELD
			-- Text field for line name.

feature -- Element change

	set_line (a_line: LINE; a_city: CITY)
			-- Set `line' to `a_line'.
		require
			line_in_city: a_line /= Void implies a_city.lines.has (a_line)
		do
			line := a_line
			city := a_city
			if line = Void then
				name_field.remove_text
				name_field.disable_sensitive
			else
				name_field.set_text (line.number.out)
				name_field.enable_sensitive
			end
			update_display
		ensure
			line_set: line = a_line
		end

feature -- Status report

	is_valid_data: BOOLEAN
			-- <Precursor>
		do
			Result :=
				not name_field.text.is_empty and then name_field.text.is_integer and then
				(name_field.text.to_integer /~ line.number implies not city.lines.has_key (name_field.text.to_integer))
		end

	has_changes: BOOLEAN
			-- <Precursor>
		do
			Result := name_field.text.to_integer /= line.number
		end

feature -- Basic operations

	save
			-- <Precursor>
		do
			if line.number /~ name_field.text.to_integer then
				city.rename_line (line.number, name_field.text.to_integer)
			end
		end

feature {NONE} -- Implementation

	title: STRING = "Line Properties"
			-- <Precursor>

end
