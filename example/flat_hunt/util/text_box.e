indexing
	description: "Text box for displaying one or several text lines."
	date: "$Date$"
	revision: "$Revision$"

class
	TEXT_BOX

inherit
	EM_DRAWABLE_CONTAINER [EM_DRAWABLE]
		redefine
			draw, height, width, publish_mouse_event
		end
		
	SHARED_THEME
		undefine
			default_create, copy, is_equal
		end

	DISPLAY_CONSTANTS
		undefine
			default_create, copy, is_equal
		end

create
	make_at_position, make_from_coordinates, make_from_position_and_size

feature -- Initialization
	
	make_at_position (an_x: INTEGER; a_y: INTEGER; a_title: STRING) is
			-- Create status box with default values at position (`an_x', `a_y').
		require
			a_title_exists: a_title /= Void
			position_valid: an_x >= 0 and an_x <= Window_width and a_y >= 0 and a_y <= Window_height
		do
			make
			set_default_values
			set_x_y (an_x, a_y)
			
			create box.make_from_coordinates (0, 0, 50, 50)
			initialize_with_title (a_title)
		ensure
			positioned: x = an_x and y = a_y
		end

	make_from_coordinates (x1: INTEGER; y1: INTEGER; x2: INTEGER; y2: INTEGER; a_title: STRING) is
			-- Create status box from coordinates (`x1', `y1') to (`x2', `y2').
		require
			a_title_exists: a_title /= Void
			position1_valid: x1 >= 0 and x1 <= Window_width and y1 >= 0 and y1 <= Window_height
			position2_valid: x2 >= 0 and x2 <= Window_width and y2 >= 0 and y2 <= Window_height			
		do
			make
			set_default_values
			set_x_y (x1, y1)
			
			create box.make_from_coordinates (0, 0, x2 - x1, y2 - y1)
			initialize_with_title (a_title)
		ensure
			positioned: x = x1 and y = y1
		end
		
	make_from_position_and_size (an_x: INTEGER; a_y: INTEGER; a_width: INTEGER; a_height: INTEGER; a_title: STRING) is
			-- Create status box from position (`an_x', `a_y') and size (`a_width', `a_height').
		require
			a_title_exists: a_title /= Void
			a_width_positive: a_width >= 0
			a_height_positive: a_height >= 0
			position_valid: an_x >= 0 and an_x <= Window_width and a_y >= 0 and a_y <= Window_height
		do
			make
			set_default_values
			set_x_y (an_x, a_y)
			
			create box.make_from_position_and_size (0, 0, a_width, a_height)
			initialize_with_title (a_title)
		ensure
			positioned: x = an_x and y = a_y
		end

feature {NONE} -- Initialization Implementation

	set_default_values is
			-- Set default values for all attributes.
		do
--			opacity := 255		
			color := theme.Status_color
			alignment := theme.Left
			font := theme.Small_default_font
			title_font := theme.Big_default_font
			max_line_width := 0
			text_height := 0
			padding := 0
			auto_resize := False
		ensure
			color_set: color /= Void
			font_set: font /= Void
			title_font_set: title_font /= Void
		end
		
	initialize_box is
			-- Initialize box with default values.
		require
			color_exists: color /= Void
		do
			box.set_rounded_corner_radius (10)
			box.set_line_width (1)			
			box.set_line_color (color)
--			box.line_color.set_alpha (255)
			box.set_fill_color (color)
--			box.fill_color.set_alpha (opacity)
			extend (box)
		ensure
			box_added: has (box)		
		end

	initialize_with_title (a_title: STRING) is
			-- Initialize box with `a_title'.
		require
			a_title_exists: a_title /= Void
		do
			-- Initialize background box.
			initialize_box
			
			-- Create title.
			create title.make (a_title, title_font)
			if title.value.is_empty then
				title.set_value (" ")
			end
			title.set_x_y (15, 0)
			extend (title)
			
			update_box_position
		ensure
			title_exists: title /= Void
			title_added: has (title)
		end
		
feature -- Access

	height: INTEGER is
		local
			tmp_height: INTEGER
		do
			Result := Precursor
			if auto_resize then
				tmp_height := text_height + 2 * Vertical_margin + title.height
				if tmp_height > Result then
					Result := tmp_height
				end				
			end
		end
		
	width: INTEGER is
		local
			tmp_width: INTEGER
		do
			Result := Precursor
			if auto_resize then
				tmp_width := max_line_width + 2 * Horizontal_margin
				if tmp_width > Result then
					Result := tmp_width
				end				
			end			
		end

	text: STRING
			-- Text to be drawn in the status box.

	title: EM_STRING
			-- Title of the status box, displayed on top.
			
feature -- Status Report


feature -- Status setting

	set_text (a_text: like text) is
			-- Set `text' to `a_text'.
		require
			a_text_exists: a_text /= Void
		do
			text := a_text
			update_lines
		ensure
			text_set: text = a_text
		end		

	set_padding (a_padding: like padding) is
			-- Set `padding' to `a_padding'.
		do
			padding := a_padding
			update_lines
		ensure
			padding_set: padding = a_padding
		end

--	set_opacity (an_opacity: like opacity) is
--			-- Set `opacity' to `an_opacity'.
--		do
--			opacity := an_opacity
--			update_color
--		ensure
--			opacity_set: opacity = an_opacity
--		end
--		
--	set_fill_color (a_color: like fill_color) is
--			-- Set `fill_color' to `a_color'.
--		require
--			a_color_exists: a_color /= Void
--		do
--			fill_color := a_color
--			update_color
--		ensure
--			color_set: fill_color = a_color
--		end
--		
--	set_line_color (a_color: like line_color) is
--			-- Set `line_color' to `a_color'.
--		require
--			a_color_exists: a_color /= Void
--		do
--			line_color := a_color
--			update_color
--		ensure
--			color_set: line_color = a_color
--		end
	
	set_color (a_color: like color) is
			-- Set `color' to `a_color'.
		require
			a_color_exists: a_color /= Void
		do
			color := a_color
			update_color
		ensure
			color_set: color = a_color
		end
	
	set_alignment (an_alignment: like alignment) is
			-- Set `alignment' of the lines to `an_alignment'.
		require
			an_alignment_valid: an_alignment >= 0 and an_alignment < 4
		do
			alignment := an_alignment
		ensure
			alignment_set: alignment = an_alignment
		end
		
	set_font (a_font: like font) is
			-- Set `font' to be used for the text to `a_font'.
		require
			a_font_exists: a_font /= Void
		do
			font := a_font
			update_lines
		ensure
			font_set: font = a_font
		end

	set_title_font (a_font: like title_font) is
			-- Set `title_font' to be used for the title to `a_font'.
		require
			a_font_exists: a_font /= Void
		do
			title_font := a_font
			update_title
		ensure
			title_font_set: title_font = a_font
		end	
	
	set_title (a_title: STRING) is
			-- Set title to `a_title'.
		require
			a_title_exists: a_title /= Void
		do
			title.set_value (a_title)
		ensure
			title_set: title.value.is_equal (a_title)
		end
	
	set_auto_resize (b: like auto_resize) is
			-- Should the box automatically resize?
		do
			auto_resize := b
			update_lines
		end
				
	toggle_visibility is
			-- Toggle visibility of status box.
		do
			set_visible (not is_visible)
		end

	set_position_and_size (an_x: INTEGER; a_y: INTEGER; a_width: INTEGER; a_height: INTEGER) is
			-- Set text box to position (`an_x', `a_y') and size (`a_width', `a_height').
		do
			set_x_y (an_x, a_y)
			box.set_size (a_width, a_height)
		ensure
			positioned: x = an_x and y = a_y
			box_resized: box.width = a_width and box.height = a_height
		end		

feature {NONE} -- Constants

	Vertical_margin: INTEGER is 15
			-- Distance between top border <-> text, bottom border <-> text.
	
	Horizontal_margin: INTEGER is 18
			-- Distance between left border <-> text, right border <-> text.
		
feature {NONE} -- Implementation

	publish_mouse_event (a_mouse_event: EM_MOUSE_EVENT) is
			-- Publish mouse events to children
			-- We don't publish mouse events if the widget is not visible.
		do
			if is_visible then
				Precursor (a_mouse_event)				
			end
		end
		

	lines: LIST [STRING]
			-- `text' divided into lines.

	alignment: INTEGER
			-- Alignment of the lines.

--	opacity: INTEGER
			-- Opacity of the background box.
	
--	fill_color: EM_COLOR
--			-- Color of the background box.
--
--	line_color: EM_COLOR
--			-- Color of the background box.

	color: EM_COLOR

	box: EM_RECTANGLE
			-- Box in the background.
	
	font: EM_COLOR_TTF_FONT
			-- Font of the text.
	
	title_font: EM_COLOR_TTF_FONT
			-- Font used for `title'.

	max_line_width: INTEGER
			-- Width of longest line.
	
	text_height: INTEGER
			-- Height of all lines combined.
	
	auto_resize: BOOLEAN
			-- Should the box automatically determine its size according to the inserted lines?

	padding: INTEGER
			-- Padding between two lines.
			
	update_color is
			-- Update color of the background box and its stroke.
		local
			a_color: EM_COLOR
		do
			box.set_fill_color (color)
			create a_color.make_with_rgb (color.red, color.green, color.blue)
			a_color.set_alpha (255)
			box.set_line_color (a_color)
		end

	update_lines is
			-- Update lines according to current `font' and `text'.
		local
			i, line_width, char_count: INTEGER
			words: LIST [STRING]
			tmp_line: STRING
		do
			-- Initialize `lines'.
			if lines /= Void then
				lines.wipe_out				
			end
			
			if text /= Void then
				lines := text.split ('%N')
			
				-- Initialize `max_line_width' and `text_height'.
				if not auto_resize then
					max_line_width := box.width - 2 * Horizontal_margin					
				else
					max_line_width := 0
				end
				text_height := 0

				-- Update lines.
				from
					lines.start
				until
					lines.after
				loop
					text_height := text_height + font.string_height (lines.item)					
					line_width := font.string_width (lines.item)

					-- Re-calculate `max_line_width' if `auto_resize' enabled.
					if auto_resize then
						if line_width > max_line_width then
							max_line_width := line_width
						end
					end
					
					-- Automated word wrapping if `auto_resize' disabled.
					if not auto_resize and then line_width > max_line_width then
						if words /= Void then
							words.wipe_out
						end
						words := lines.item.split (' ')
						line_width := 0
						char_count := 0
						from
							i := 1
							words.start
						until
							line_width  + (i-1) * font.width (' ') > max_line_width or words.after
						loop
							line_width := line_width + font.string_width (words.item)
							char_count := char_count + words.item.count
							words.forth
							i := i + 1
						end
						char_count := char_count - words.i_th (i-1).count + (i - 2)
						if char_count = 0 then char_count := 1 end
						tmp_line := lines.item.substring (char_count + 1, lines.item.count)
						lines.item.remove_substring (char_count, lines.item.count)
						lines.forth
						if not lines.after then
							lines.item.prepend (tmp_line)
						else
							lines.extend (tmp_line)
						end					
					else -- `auto_resize' is enabled.
						lines.forth	
					end	
				end
				text_height := text_height + (lines.count) * padding
				update_box
			end
		end
		
	update_title is
			-- Update title according to current `title_font'.
		do
			title.set_font (title_font)
			update_box_position
		ensure
			font_set: title.font = title_font
		end

	update_box_position is
			-- Set box to the correct position.
		do
			box.set_x_y (0, title.height // 2 + title.height // 18)
		ensure
			box_positioned: box.y = title.height // 2 + title.height // 18 and box.x = 0
		end	
		
	update_box is
			-- Update the background box.
		do
			if auto_resize then
				box.set_size (max_line_width + Horizontal_margin * 2, text_height + Vertical_margin * 2)				
			end
			update_box_position
		end

	draw (a_surface: EM_SURFACE) is
			-- Draw `Current' onto `a_surface'.
		local
			cursor: DS_LINKED_LIST_CURSOR [EM_DRAWABLE]
			translation: EM_VECTOR_2D
			old_clipping_area, clipping_area: EM_ORTHOGONAL_RECTANGLE
		do
			if is_visible then
			-- Translate coordinate system for drawing all contained objects.
			create translation.make (x, y)
			a_surface.translate_coordinates (translation)
			
			-- Change clipping area to clip all objects to container boundaries.
			old_clipping_area := a_surface.coordinate_area
			create clipping_area.make_from_coordinates (0, 0, width, height)
			clipping_area := clipping_area.intersection (old_clipping_area)
			a_surface.clip_coordinates (clipping_area)			
			
			-- Draw all contained objects if visible.
				if is_visible then
				cursor := new_cursor
				from
					cursor.start
				until
					cursor.off
				loop
					a_surface.draw_object (cursor.item)
					cursor.forth				
				end	
				
				-- Draw text.
				if text /= Void and then not text.is_empty then
					draw_text (a_surface)				
				end	
			end
			
			-- Reset coordinate system.
			a_surface.clip_coordinates (old_clipping_area)
			a_surface.translate_coordinates (- translation)
		end
		end
		
		draw_text (a_surface: EM_SURFACE) is
				-- Draw `lines' onto `a_surface'.
				-- `lines' is generated from `text' wich is set by `set_text'.
				-- `text' may constitute multiple lines, separated by "%N".
			local
				i, tmp_x, tmp_y: INTEGER
				line_height, line_width: INTEGER
			do
				if lines /= Void then
					from
						i := 1
						lines.start
					until
						i > lines.count
					loop
						-- Calculate width and height of current line.
						line_width := font.string_width (lines.item)
						line_height := font.string_height (lines.item)	

						-- Calculate y-position of current line.
						if i = 1 then
							tmp_y := box.y + Vertical_margin
						else
							tmp_y := tmp_y + line_height + padding
						end
						
						-- Calculate x-position of current line.
						if alignment = Left then
							tmp_x := box.x + Horizontal_margin
						elseif alignment = Right then
							tmp_x := box.x + max_line_width - line_width + Horizontal_margin
						else -- alignment = Centered.
							tmp_x := box.x + (max_line_width - line_width) // 2 + Horizontal_margin
						end
						
						if lines.item /= Void and then not lines.item.is_empty then
							font.draw_string (lines.item, a_surface, tmp_x, tmp_y)						
						end
						i := i + 1
						lines.forth
					end				
				end
			end
			

invariant
	box_exists: box /= Void
	title_exists: title /= Void
	font_exists: font /= Void
	title_font_exists: title_font /= Void
end
