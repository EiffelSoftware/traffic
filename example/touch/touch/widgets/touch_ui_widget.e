indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TOUCH_UI_WIDGET
inherit
		EM_DRAWABLE_CONTAINER [EM_DRAWABLE]
			redefine
				make
			end
				
		EM_SHARED_STANDARD_FONTS
			export
				{NONE} all
			undefine
				copy,
				is_equal,
				default_create
			end
			
		EM_SHARED_COLORS
			export
				{NONE} all
			undefine
				copy,
				is_equal,
				default_create
			end	
			
		HASHABLE
			undefine
				copy,
				is_equal
			redefine
				hash_code
			end
			
		SHARED_ID_GENERATOR
			undefine
				copy,
				is_equal,
				default_create
			end
			
	creation
		make
		
feature -- Initialization
	make is
	do
		Precursor {EM_DRAWABLE_CONTAINER}
		default_create
		hash_code := id_generator.new_id
	end
	
feature {NONE} -- Text Function

	text_max_length (a_text: STRING; a_font: EM_FONT; max_width: INTEGER): INTEGER is
			--calculate the maximal substring, that if printed with 
			--a_font still fits into max_width
		local 
			summed_width: INTEGER
			char_width: INTEGER
			string_pos: INTEGER
		do
			from
				string_pos := 1
				summed_width := 0
			until
				summed_width >= max_width or else string_pos > a_text.count
			loop
				char_width := a_font.width (a_text.item (string_pos))
				summed_width := summed_width + char_width
				string_pos := string_pos + 1
			end
			if summed_width > max_width then
				summed_width := summed_width - char_width
				string_pos := string_pos - 1
			end
			if string_pos > a_text.count then
				string_pos := string_pos - 1
			end
			
			Result := string_pos
		end

feature {NONE} -- Implementation
	hash_code: INTEGER	
end