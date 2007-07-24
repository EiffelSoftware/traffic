indexing

	description: "Text labels for use with EV_CANVAS"
	status:	"See notice at end of class"
	author: "Till G. Bay"
	date: "$Date: 2004/10/20 10:03:03 $"
	revision: "$Revision: 1.3 $"

class DRAWABLE_TEXT inherit

	DRAWABLE_OBJECT

	EV_FONT_CONSTANTS
		undefine
			is_equal,
			copy
		end

create

	make

feature -- Creation

	make (a_label: like text; a_position: like position) is
			-- Create `a_label' at `a_position'
		require
			a_label_not_void: a_label /= Void
			a_position_not_void: a_position /= Void
		do
			set_position (a_position)
			set_color (create {EV_COLOR}.make_with_rgb (0.0,0.0,0.0))
			create font.make_with_values (Family_sans, Weight_regular, Shape_regular, 10)
			set_text (a_label)
			is_shown := True
		ensure
			position_set: position = a_position
			text_set: text = a_label
			shown: is_shown
		end

feature -- Commands

	set_font (a_font: like font) is
			-- Change the font of the text to `a_font'.
		require
			a_font_not_void: a_font /= Void
		do
			font:= a_font
		ensure
			new_font: font = a_font
		end

	set_text (a_text: like text) is
			-- Change the text to `a_text'.
		require
			a_text_not_void: a_text /= Void
		do
			text := a_text
		ensure
			new_text: text = a_text
		end

	set_position (a_position: like position) is
			-- Change the position of the text to `a_position'.
		require
			a_position_not_void: a_position /= Void
		do
			position := a_position
		ensure
			new_position: position = a_position
		end

feature -- Access

	text_width: INTEGER is
			-- Width of text
		do
			Result := font.width * text.count
		end

	text_height: INTEGER is
			-- Height of text
		do
			Result := font.height
		end

	bounding_box : REAL_RECTANGLE is
			-- The bounding box of the text
		local
			lower: REAL_COORDINATE
		do
			create lower.make (position.x + text_width, position.y - text_height)
			create Result.make (position, lower)
		end

feature {EV_CANVAS} -- Display

	draw_object is
			-- Draw the text label.
		local
			scaled_position : EV_COORDINATE
		do
			scaled_position := real_to_integer_coordinate (position)
			canvas.set_foreground_color (color)
			canvas.set_font (font)
			canvas.draw_text_top_left (scaled_position.x, scaled_position.y, text)
		end

feature {NONE} -- Implementation

	position: REAL_COORDINATE
			-- The position of the text

	font: EV_FONT
			-- The font of the text

	text: STRING
			-- The string

invariant

	position_not_void: position /= Void
	font_not_void: font /= Void
	text_not_void: text /= Void

end

--|--------------------------------------------------------
--| This file is Copyright (C) 2003 by ETH Zurich.
--|
--| For questions, comments, additions or suggestions on
--| how to improve this package, please write to:
--|
--|     Till G. Bay <tillbay@student.ethz.ch>
--|
--|--------------------------------------------------------
