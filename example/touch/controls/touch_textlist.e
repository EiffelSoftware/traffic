indexing
	description: "A Textlist Control (Console-Out)"
	author: "Roger Kueng"
	date: "2005/06/20"
	revision: "1.0"

class
	TOUCH_TEXTLIST
	inherit
		ESDL_DRAWABLE_CONTAINER [ESDL_DRAWABLE]
			redefine
				make
			end
		ESDL_SHARED_STANDARD_FONTS
			export
				{NONE} all
			undefine
				copy,
				is_equal
			end
		ESDL_SHARED_COLORS
			export
				{NONE} all
			undefine
				copy,
				is_equal,
				default_create
			end				
	creation
		make,
		make_with_width_and_height
		
feature -- Access
	
	line_height: INTEGER is 
			-- This is an estimate, and works only with fixed size characters
		do 
			Result := standard_fonts.small_font.height ('A') + 3;
		end

	max_length: INTEGER is
		do
			Result := (background.width - 2 * space) // character_width
			
		end
	max_lines: INTEGER is
		do
			Result := (background.height - 2 * space) // line_height			
		end
	
	character_width: INTEGER is
			-- This is an estimate, and works only with fixed length characters
		do 
			Result :=  standard_fonts.small_font.width ('A')
		end

	
feature -- Initialisation
	make is
			-- 
		local
			color_gray: ESDL_COLOR
		do
			Precursor {ESDL_DRAWABLE_CONTAINER}
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
			
		ensure then
			background_not_void: background /= Void
			border_not_void: border /= Void
			line_drawables_not_void: line_drawables /= Void
		end
		
	make_with_width_and_height (a_width: INTEGER; a_height: INTEGER) is
			-- 
		do
			make
			set_width_height (a_width, a_height)
		end
		
feature -- Measurement

feature -- Status report

feature -- Status setting
	set_width_height (a_width: INTEGER; a_height: INTEGER) is
			--
		do
--			if background /= Void and then Current.has (background) then
--				Current.delete (background)
--			end
--			if border /= Void and then Current.has (border) then
--				Current.delete (border)
--			end
			
--			max_lines := (a_height - 2 * border) // line_height
--			max_length := (a_width - 2 * border) // character_width
			background.set_size (a_width, a_height)

			border.set_size (a_width, a_height)

--			Current.extend (border)			
--			Current.extend (background)
		end
		
feature -- Cursor movement

feature -- Element change

feature -- Removal

feature -- Resizing

feature -- Transformation

feature -- Conversion

feature -- Duplication

feature -- Miscellaneous

feature -- Basic operations
	put_line (a_text: STRING) is
			-- write text to a line
		local
			string: ESDL_STRING
			text_substring: STRING
			new_string: ESDL_STRING
			cursor: DS_LINKED_LIST_CURSOR [ESDL_STRING]
		do
			--shift all strings 
			cursor := line_drawables.new_cursor
			from
				cursor.start
			until
				cursor.off
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
		
			--create new esdl-string an insert it in front
			if a_text.count > max_length then	
				text_substring := a_text.substring (1, max_length)
				create new_string.make (text_substring, standard_fonts.small_font)
			else
				create new_string.make (a_text, standard_fonts.small_font)			
			end

			new_string.set_x_y (space, space)
			line_drawables.force_last (new_string)
			
			Current.extend (new_string)
		end
		
		
	put_text ( a_text: STRING) is
			-- Put more than one line
		local
			i, begin: INTEGER
		do
			from
				i := a_text.count
				begin := i - a_text.count \\ max_length				
				if begin = i then
					begin := i - max_length
				end
			until
				i = 0
			loop
				if begin <= 0 then
					begin := 0
				end
				put_line (a_text.substring (begin+1, i))
				i := begin
				begin := i - max_length		
			end
		end
			
feature -- Obsolete

feature -- Inapplicable

feature {NONE} -- Implementation

	background: ESDL_RECTANGLE
	
	border: ESDL_RECTANGLE
	
	line_drawables: DS_LINKED_LIST [ESDL_STRING]
	
	space: INTEGER is once Result := 5; end

invariant
	invariant_clause: True -- Your invariant here

end -- class TOUCH_TEXTLIST
