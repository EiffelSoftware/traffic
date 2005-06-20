indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TOUCH_TEXTLIST
	inherit
		ESDL_SHARED_STANDARD_FONTS
			export
				{NONE} all
--			undefine
--				default_create
			end
	creation
		make
		
feature -- Access

	main_container: ESDL_DRAWABLE_CONTAINER [ESDL_DRAWABLE]

	background: ESDL_RECTANGLE
	
	line_drawables: DS_LINKED_LIST [ESDL_STRING]
	
	line_height: INTEGER is 
		do 
			Result := standard_fonts.small_font.height ('A') + 3;
		end

	max_length: INTEGER
	
	max_lines: INTEGER

	
	character_width: INTEGER is
			-- This is an estimate
		do 
			Result :=  standard_fonts.small_font.width ('A')
		end

	border: INTEGER is do Result := 5; end
	
feature -- Creation
	make is
			-- 
		do
			create main_container.make
			create line_drawables.make
			create background.make_from_position_and_size (0, 0, 0, 0)

			main_container.extend (background)
		ensure
			background_not_void: background /= Void
			main_container_not_void: main_container /= Void
			line_drawables_not_void: line_drawables /= Void
		end
		
feature -- Measurement

feature -- Status report

feature -- Status setting
	set_width_height ( a_width: INTEGER; a_height: INTEGER) is
			--
		do
			--width := a_width
			--height := a_height
			
			main_container.delete (background)
			
			max_lines := (a_height - 2 * border) // line_height
			max_length := (a_width - 2 * border) // character_width
			
			background.set_size (a_width, a_height)
			
			main_container.extend (background)
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
				string.set_x_y (border, string.y + line_height)
				cursor.forth
			end

			--remove oldest string if full
			if line_drawables.count >= max_lines then
				main_container.delete (line_drawables.first)
				line_drawables.remove_first
			end		
		
			--create new esdl-string an insert it in front
			if a_text.count > max_length then	
				text_substring := a_text.substring (1, max_length)
				create new_string.make (text_substring, standard_fonts.small_font)
			else
				create new_string.make (a_text, standard_fonts.small_font)			
			end

			new_string.set_x_y (border, border)
			line_drawables.force_last (new_string)
			
			main_container.extend (new_string)
		end
		
feature -- Obsolete

feature -- Inapplicable

feature {NONE} -- Implementation

invariant
	invariant_clause: True -- Your invariant here

end -- class TOUCH_TEXTLIST
