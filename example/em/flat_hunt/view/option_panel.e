indexing
	description: "Options panel where all the options can be added"
	date: "$Date$"
	revision: "$Revision$"

class
	OPTION_PANEL
	
inherit 

	EM_DRAWABLE_CONTAINER [EM_DRAWABLE]
		redefine draw end
	
	SHARED_THEME
		undefine copy, is_equal end

	DISPLAY_CONSTANTS
		undefine copy, is_equal end

create
	make_at_position

feature -- Initialization

	make_at_position (a_width, a_height: INTEGER; a_title: STRING; a_subnote: STRING) is
			-- Build up the settings menu.
		require
			a_width_positive: a_width > 0
			a_height_positive: a_height > 0
			a_title_valid: a_title /= Void
			a_subnote_valid: a_subnote /= Void
		do
			make
			
			-- Build background_box
			create background_box.make_from_coordinates (0, 0, a_width, a_height, a_title)
			background_box.set_color (theme.Menu_box_color)
			background_box.set_title_font (theme.Menu_font)
			background_box.set_font (theme.Small_menu_font)
			background_box.set_auto_resize (False)
			extend (background_box)
			
			-- Set options_position to the according margins
			options_position_x := Left_margin
			options_position_y := Top_margin

			create option_menus.make (0)
			
			-- Set the subnote
			extend (create {EM_STRING}.make ("use tab to toggle between main menu and option settings", theme.small_credits_font))
			last.set_x_y (Margin, background_box.height)
			
		end

feature -- Basic operations

	add_option_menu (a_list: ARRAY [STRING]; a_title: STRING) is
			-- Add an option menu to the scene.
		require
			a_list_valid: a_list /= Void and then a_list.count >= 2
			a_title_valid: a_title /= Void and then not a_title.is_empty
		local
			i: INTEGER
		do
			background_box.extend (create {EM_STRING}.make (a_title, theme.Small_menu_font))
			background_box.last.set_x_y (options_position_x, options_position_y)

			option_menus.extend (create {OPTION_MENU}.make_with_default_fonts)
			option_menus.i_th (option_menus.count).set_title (a_title)
			option_menus.i_th (option_menus.count).set_alignment (left)
			from
				i := 1
			until
				i > a_list.count
			loop
				option_menus.i_th (option_menus.count).add_entry (a_list.item (i), Void, False)
				i := i + 1
			end
			option_menus.i_th (option_menus.count).set_x_y (options_position_x + Offset, options_position_y )
			option_menus.i_th (option_menus.count).deactivate
			extend (option_menus.i_th (option_menus.count))
			add_arrow_pics (option_menus.count)
			
			options_position_y := options_position_y + option_menus.i_th (option_menus.count).height - background_box.y
		ensure
			option_menu_added: option_menus.count = old option_menus.count + 1
		end	

	show is
			-- Make visible on the screen.
		do
			is_hidden := False
		ensure 
			not_hidden: not is_hidden
		end
		
	hide is
			-- Make invisible on the screen.
		do
			is_hidden := True
		ensure
			hidden: is_hidden
		end

feature -- Access

	background_box: TEXT_BOX
			-- Transparent text box
	
	option_menus: ARRAYED_LIST [OPTION_MENU]
			-- Hash table with all option menus

	is_hidden: BOOLEAN
			-- Is the options panel visible?
	
feature {NONE} -- Implementation

	add_arrow_pics (i: INTEGER) is
			-- Create arrow pics for option menu `i'.
		local
			left_arrow_pic: EM_DRAWABLE
			right_arrow_pic: EM_DRAWABLE
			left_x, right_x, left_y, right_y: INTEGER
		do
			-- Create arrow pics.
			bitmap_factory.create_bitmap_from_image (theme.Left_arrow)
			left_arrow_pic := bitmap_factory.last_bitmap
			bitmap_factory.create_bitmap_from_image (theme.Right_arrow)
			right_arrow_pic := bitmap_factory.last_bitmap				
			
			-- Calculate positions for arrow pics.
			left_x := option_menus.i_th (i).x - 2 * left_arrow_pic.width
			right_x := option_menus.i_th (i).x + 80--option_menus.i_th (i).max_entry_width + right_arrow_pic.width
			left_y := option_menus.i_th (i).y + (option_menus.i_th (i).height - left_arrow_pic.height) // 2
			right_y := option_menus.i_th (i).y + (option_menus.i_th (i).height - right_arrow_pic.height) // 2
			
			-- Set positions of arrow pics.
			left_arrow_pic.set_x_y (left_x, left_y)
			right_arrow_pic.set_x_y (right_x, right_y)
			
			-- Display arrow pics.
			extend (left_arrow_pic)
			extend (right_arrow_pic)
		end
		
	draw (a_surface: EM_SURFACE) IS
			-- Draw all the contained drawables on `a_surface'.
		do
			if is_hidden then
				-- Do nothing.
			else
				Precursor (a_surface)
			end
		end

	options_position_x: INTEGER
			-- x-value of position of where a new menu would be added
	
	options_position_y:	INTEGER
			-- y-value of position of where a new menu would be added
	
feature {NONE} -- Constants
	
	Left_margin: INTEGER is 120
			-- Margin on left of `background_box'
	
	Top_margin: INTEGER is 50
			-- Margin on top of `background_box'
	
	Offset: INTEGER is 400
			-- Offset between title of a menu and the options
			
invariant
	option_menus_exist: option_menus /= Void
end
