indexing
	description: "A Textlist Widget with Console style"
	date: "2005/08/31"
	revision: "1.0"

class
	TOUCH_TEXTLIST
	inherit
		EM_DRAWABLE_CONTAINER [EM_DRAWABLE]
		
		EM_SHARED_STANDARD_FONTS
			export
				{NONE} all
			undefine
				copy,
				is_equal
			end
		EM_SHARED_COLORS
			export
				{NONE} all
			undefine
				copy,
				is_equal,
				default_create
			end			
		TOUCH_CONSOLE
			undefine
				copy,
				is_equal,
				default_create
			end
		
	creation
		make_with_width_and_height
		
feature -- Access
	line_height: INTEGER is 
			-- This is an estimate, and works only with fixed size characters
		do 

			Result := font.height ('A') + 3;
		end

	max_length: INTEGER is
			-- How many character fit in one line
		do
			Result := (background.width - 2 * space) // character_width
			
		end
	max_lines: INTEGER is
			-- How many lines can we display
		do
			Result := (background.height - 2 * space) // line_height			
		end
	
	character_width: INTEGER is
			-- This is an estimate, and works only with fixed length characters
		do 
			Result := font.width ('A');

		end

	
feature -- Initialisation
	make_with_width_and_height (a_width: INTEGER; a_height: INTEGER) is
			-- Create the textlist
		local
			color_gray: EM_COLOR
		do
			make	
			
			create line_drawables.make
			--Build Background
			create background.make_from_position_and_size (0, 0, 0, 0)
			create color_gray.make_with_rgb (180, 180, 180)
			background.set_fill_color (color_gray) 			
			
			--Build border
			create border.make_from_position_and_size (0, 0, 0, 0)
			border.set_line_color (white)
			border.set_line_width (3)
			border.set_filled (false)
			
			Current.extend (background)
			Current.extend (border)
			
			set_width_height (a_width, a_height)
		ensure
			background_not_void: background /= Void
			border_not_void: border /= Void
			line_drawables_not_void: line_drawables /= Void			
		end

feature -- Status setting
	set_width_height (a_width: INTEGER; a_height: INTEGER) is
			-- Set the width and height
		do
			background.set_size (a_width, a_height)
			border.set_size (a_width, a_height)
		end

feature -- Basic operations
	put_line (a_text: STRING) is
			-- write text to a line
		local
			string: EM_STRING
			text_substring: STRING
			new_string: EM_STRING
			cursor: DS_LINKED_LIST_CURSOR [EM_STRING]
		do
			--shift all strings 
			cursor := line_drawables.new_cursor
			from
				cursor.start
			until
				cursor.after
			loop
				string := cursor.item
				string.set_x_y (space, string.y + line_height)
				cursor.forth
			end

			--remove oldest string if full
			if line_drawables.count >= max_lines then
				Current.delete (line_drawables.first)
				line_drawables.remove_first
			end		
		
			--create new em_string and insert it in front
			if a_text.count > max_length then
				text_substring := a_text.substring (1, max_length)
				create new_string.make (text_substring, font)
			else
				create new_string.make (a_text, font)
			end

			new_string.set_x_y (space, space)
			line_drawables.force_last (new_string)
			
			Current.extend (new_string)
		end
			
	put_text (a_text: STRING) is
			-- Put more than one line
		local
			i, j: INTEGER
			look_back: INTEGER
			list: DS_LINKED_LIST [INTEGER]
		do
			look_back := max_length // 2
			
			create list.make_default
			from
				i :=  0
			until
				i >= a_text.count
			loop
				list.force_last(i)
				i := i + max_length
				-- look for a ' ' to make a nice line-break
				if a_text.count > i then
					if a_text.item (i+1) /= ' ' then
						from
							j := 0
						until
							j >= look_back or else a_text.item (i-j) = ' '
						loop
							j := j + 1
						end
						if a_text.item (i-j) = ' ' then
							i := i - j
						end
					end	
				end
			end

			-- Insert the new lines
			
			-- Insert the Last Line
			if list.count > 0 and then list.last+1 <= a_text.count then
				put_line (a_text.substring (list.last+1, a_text.count))			
			end
			-- Insert the other Lines
			from
				list.finish
			until
				list.off
			loop
				i := list.item_for_iteration
				list.back
				if not list.off then			
					j := list.item_for_iteration
					put_line (a_text.substring (j+1, i))
				end
			end
		end
			
	show (an_object: ANY) is
			-- Print an Object using its 'out' feature
		do
			put_text (an_object.out)
		end
		
	wipe_out_text is
			-- wipe out all the text
		do
			line_drawables.wipe_out
			wipe_out
			extend (background)
			extend (border)
		end

feature {NONE} -- Implementation
	font: EM_TTF_FONT is
			--
		local
			directory: STRING
			color_font: EM_COLOR_TTF_FONT
		once
			-- save default directory
			directory := standard_ttf_fonts.font_dirname
			-- set new directory
			standard_ttf_fonts.set_font_dirname ("font")
			--load custom font
			standard_ttf_fonts.load_custom_font ("lucon.ttf", 16, "console")
			-- set old default directory
			standard_ttf_fonts.set_font_dirname(directory)
			-- set Result
			create color_font.make_from_ttf_font (standard_ttf_fonts.custom_font ("console"))
			color_font.set_color (black)
			Result := color_font
		end
		
	background: EM_RECTANGLE
	
	border: EM_RECTANGLE
	
	line_drawables: DS_LINKED_LIST [EM_STRING]
	
	space: INTEGER is once Result := 5 end

end -- class TOUCH_TEXTLIST
