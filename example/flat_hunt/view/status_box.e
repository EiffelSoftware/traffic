indexing
	description: "Status box for displaying player information"
	author: "Ursina Caluori, ucaluori@student.ethz.ch"
	date: "$Date$"
	revision: "$Revision$"


-- TODO: 
-- Bug: if status box is placed at certain area & a line is not long enough, the line gets displayed at
-- a weird position outside the status box

-- TODO: move drawable_container instead of "ingredients"!! -> perhaps bug will fix itself? :)

class
	STATUS_BOX

inherit
	ESDL_DRAWABLE_CONTAINER [ESDL_DRAWABLE]
		redefine
			make
		end
		
	THEME
		undefine
			default_create, copy, is_equal
		end

create
	make,
	make_at_position,
	make_from_coordinates,
	make_from_position_and_size

feature -- Initialization

	make is
			-- Create status box with default values
		do
			Precursor
			create box.make_from_coordinates (0, 0, 0, 0)
			box.set_rounded_corner_radius (10)
			box.set_line_width (1)
			opacity := 100
		ensure then
			box_not_void: box /= Void
		end
	
	make_at_position (an_x: INTEGER; a_y: INTEGER; a_title: STRING) is
			-- Create status box with default values at position (x,y)
		require
			a_title_not_void: a_title /= Void
		do
			make
			box.set_x_y (an_x, a_y)
			initialize_with_title (a_title)
		ensure
			box_positioned: box.x = an_x and box.y = a_y
		end

	make_from_coordinates (x1: INTEGER; y1: INTEGER; x2: INTEGER; y2: INTEGER; a_title: STRING) is
			-- Create status box from coordinates (x1, y1) to (x2, y2)
		require
			a_title_not_void: a_title /= Void
		do
			make
			box.set_x_y (x1, y1)
			box.set_size (x2 - x1, y2 - y1)
			initialize_with_title (a_title)
		ensure
			box_positioned: box.x = x1 and box.y = y1
--	TODO: postcondition violation, why?		box_resized: box.width = x2 - x1 and box.height = y2 - y1
		end
		
	make_from_position_and_size (x1: INTEGER; y1: INTEGER; a_width: INTEGER; a_height: INTEGER; a_title: STRING) is
			-- Create status box from position (x1, y1) and size (a_width, a_height)
		require
			a_title_not_void: a_title /= Void
		do
			make
			box.set_x_y (x1, y1)
			box.set_size (a_width, a_height)
			initialize_with_title (a_title)
		ensure
			box_positioned: box.x = x1 and box.y = y1
			box_resized: box.width = a_width and box.height = a_height
		end

	initialize_with_title (a_title: STRING) is
			-- Initialize color of the status box and its contour
		require
			a_title_not_void: a_title /= Void
		do
			color := status_background_color
			font := small_default_font
			alignment := Left
			title_font := big_default_font
			max_line_width := 0
			text_height := 0
			box_auto_resize := false

			box.set_line_color (color)
			box.line_color.set_alpha (255)
			box.set_fill_color (color)
			box.fill_color.set_alpha (opacity)
			
			extend (box)
			
			create title.make (a_title, title_font)
			set_title_position
--			if title.width > max_line_width then
--				max_line_width := title.width
--			end
			extend (title)
			
			create lines.make
		
		ensure
			color_not_void: color /= Void
			font_not_void: font /= Void
			title_font_not_void: title_font /= Void
			title_not_void: title /= Void
			lines_not_void: lines /= Void
			
		-- TODO: postcondition for every box-attribute that is set ?? 
			box_displayed: has (box)
			title_displayed: has (title)
		end
		
feature -- Access

	add_line (a_line: STRING) is
			-- Add a credit line
		require
			lines_not_void: lines /= Void
		do
			lines.extend (create {ESDL_STRING}.make (a_line, font))
			if lines.last.width > max_line_width then
				max_line_width := lines.last.width
			end
			text_height := text_height + lines.last.height // 2 + padding
			set_line_position (lines.count)	
			extend (lines.item (lines.count))
		ensure
			text_height_set: text_height = old text_height + lines.last.height // 2 + padding
			max_line_width_set: max_line_width >= lines.last.width
		end	
		
	set_opacity (an_opacity: INTEGER) is
			-- Set opacity of status box
		require
			an_opacity_not_void: an_opacity /= Void
		do
			opacity := an_opacity
			update_color
		ensure
			opacity_set: opacity = an_opacity
		end
		
	set_color (a_color: ESDL_COLOR) is
			-- Set color of status box¨
		require
			a_color_not_void: a_color /= Void
		do
			color := a_color
			update_color
		ensure
			color_set: color = a_color
		end
		
	set_alignment (an_alignment: INTEGER) is
			-- Set alignment of the lines
		require
			an_alignment_valid: an_alignment >= 0 and an_alignment < 4
		do
			alignment := an_alignment
			update_lines
		ensure
			alignment_set: alignment = an_alignment
		end
		
	set_font (a_font: ESDL_TTF_FONT) is
			-- Set font to be used for the text in this status box
		require
			a_font_not_void: a_font /= Void
		do
			font := a_font
			update_lines
		ensure
			font_set: font = a_font
		end

	set_title_font (a_font: ESDL_TTF_FONT) is
			-- Set font to be used for the text in this status box
		require
			a_font_not_void: a_font /= Void
		do
			title_font := a_font
			update_title
		ensure
			title_font_set: title_font = a_font
		end	
	
	set_title (a_title: STRING) is
			-- Set title to `a_title'
		require
			a_title_not_void: a_title /= Void
		do
			title.set_value (a_title)
--			if title.width > max_line_width then
--				max_line_width := title.width
--			end
		ensure
			title_set: title.value = a_title
--			max_line_width_set: max_line_width >= title.width			
		end
	
	set_auto_resize (b: BOOLEAN) is
			-- Should the box automatically resize?
		do
			box_auto_resize := b
		end
		
		

feature -- Attributes		

	alignment: INTEGER
		-- Alignment of the lines

	opacity: INTEGER
		-- Opacity of the status box
	
	color: ESDL_COLOR
		-- Color of the status box

	lines: ESDL_DRAWABLE_CONTAINER [ESDL_STRING]
		-- Text to be displayed in status box
		
	box: ESDL_RECTANGLE
		-- Box in the background
	
	vertical_margin: INTEGER is 15
		-- Distance between top border <-> text, bottom border <-> text
	
	horizontal_margin: INTEGER is 18
		-- Distance between left border <-> text, right border <-> text	
		
	padding: INTEGER is 5
		-- Padding between two lines
	
	font: ESDL_TTF_FONT
		-- Font of the text within this status box
	
	title: ESDL_STRING
		-- Title of the status box, displayed on top
	
	title_font: ESDL_TTF_FONT
		-- Font used for `title'

	max_line_width: INTEGER
		-- Width of longest line
	
	text_height: INTEGER
		-- Height of all lines combined
	
	box_auto_resize: BOOLEAN
		-- Should the box automatically determine its size according to the inserted lines?

feature {NONE} -- Implementation		

	update_color is
			-- Update color of the status box and its stroke
		do
			box.fill_color.set_alpha (opacity)
			box.set_fill_color (color)
			box.set_line_color (color)
		ensure
-- TODO: violation, why?			alpha_set: box.fill_color.alpha = opacity
			colors_set: box.fill_color = color and box.line_color = color
		end
		
	set_line_position (i: INTEGER) is
			-- Set position of line at index `i'
		require
			valid_index: i > 0 and i <= lines.count
		local
			next_y: INTEGER
		do
			if i = 1 then
				next_y := box.y + vertical_margin
			else 
				next_y := lines.item (i - 1).y + lines.item (i).height // 2 + padding
			end
			
			if next_y + lines.item (i).height <= width then						
				if alignment = Left then
					lines.item (i).set_x_y (box.x + horizontal_margin, next_y)
				elseif alignment = Right then
					if box_auto_resize then
						lines.item (i).set_x_y (box.x + max_line_width - lines.item (i).width - horizontal_margin, next_y)							
					else
						lines.item (i).set_x_y (box.x + box.width - lines.item (i).width - horizontal_margin, next_y)
					end
				else -- alignment = Centered
					if box_auto_resize then
						lines.item (i).set_x_y (box.x + (max_line_width + 2 * horizontal_margin - lines.item (i).width) // 2, next_y)
					else
						lines.item (i).set_x_y (box.x + (box.width - lines.item (i).width) // 2, next_y)
					end
				end		
			end
		ensure
		-- TODO: line_positioned: how ??	
		end
		
	update_lines is
			-- Update positions of all entries according to current alignment and font
		require
			lines_not_void: lines /= Void
			font_not_void: font /= Void
		local
			i: INTEGER
		do
			i := 1
			from
				lines.start
			until
				lines.after
			loop
				lines.item (i).set_font (font)
				if lines.item (i).width > max_line_width then
					max_line_width := lines.item (i).width
				end
				set_line_position (i)
				lines.forth
				i := i + 1
			end
			update_box
		ensure
		-- TODO: postcondition for every item in lines ??
		end
		
	set_title_position is
			-- Set position of title
		do
			title.set_x_y (box.x + 15, box.y - title.height // 2 - title.height // 18)
		ensure
			title_positioned: title.x = box.x + 15 and title.y = box.y - title.height // 2 - title.height // 18
		end
		
	update_title is
			-- Update title according to current `title_font'
		require
			title_not_void: title /= Void
			title_font_not_void: title_font /= Void
		do
			title.set_font (title_font)
			set_title_position
		ensure
			font_set: title.font = title_font
		end
		
	update_box is
			-- Update the background box
		do
			if box_auto_resize then
				box.set_size (max_line_width + horizontal_margin * 2, text_height + vertical_margin * 2)				
			end
		ensure
		-- TODO: conditional invariant box_resized: ... ??
		end

invariant
	box_not_void: box /= Void
	
	-- TODO: can also postconditions from initialize_scene be 
	-- taken as invariants? I don't think so, but I'm not sure ..
	
end
