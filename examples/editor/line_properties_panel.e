note
	description: "Panel to display and change properties of a line."
	date: "$Date$"
	revision: "$Revision$"

class
	LINE_PROPERTIES_PANEL

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

			create l_label.make_with_text ("Line Properties")
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

			name_field.key_release_actions.extend (agent on_key_released)

			update_display
		end

feature -- Access

	line: LINE
			-- City that is being displayed.

	name_field: EV_TEXT_FIELD
			-- Text field for line name.

feature -- Element change

	set_line (a_line: LINE)
			-- Set `line' to `a_line'.
		do
			line := a_line
			update_display
		ensure
			line_set: line = a_line
		end

feature {NONE} -- Implementation

	update_display
			-- Update display according to station that is set.
		do
			if line = Void then
				name_field.remove_text
				name_field.disable_sensitive
			else
				name_field.set_text (line.name.out)
				name_field.enable_sensitive
			end
		end

	on_key_released (a_key: EV_KEY)
			-- Handle key released event.
		do
			if name_field.text.is_integer then
				line.set_name (name_field.text.to_integer)
			end
		end

end
