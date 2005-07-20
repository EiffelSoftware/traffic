indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

-- TODO: At the moment everything for a theme is specified within this class,
-- but it would be nicer if these things were specified in a text file
-- and then read in to display the theme

deferred class
	THEME
	
inherit
	
	DISPLAY_CONSTANTS
	
	ESDL_SHARED_BITMAP_FACTORY	
		undefine
			default_create
		end
	
	ESDL_SHARED_STANDARD_FONTS
		undefine
			default_create
		end

	ESDL_KEY_CONSTANTS
		undefine
			default_create
		end
		
feature -- Colors

	status_background_color : ESDL_COLOR is
			-- The background color of the status bar
		once
			Result := light_violet
		ensure
			color_not_void: Result /= Void
		end

	credits_color : ESDL_COLOR is
		once
			Result := light_violet
		ensure
			color_not_void: Result /= Void
		end		

	menu_color: ESDL_COLOR is
		once
			Result := dark_red
		ensure
			color_not_void: Result /= Void
		end
		
	menu_selected_color: ESDL_COLOR is
		once
			Result := orange
		ensure
			color_not_void: Result /= Void
		end		
	
	game_widget_color: ESDL_COLOR is
		once
			Result := dark_blue
		ensure
			color_not_void: Result /= Void
		end
		

feature -- Fonts

	menu_font_name: STRING is "herbert"
			-- Name of font that will be used for menu
	
	credits_font_name: STRING is "herbert"
			-- Name of font that will be used for displaying credits
	
	default_font_name: STRING is "herbert"
			-- Name of default font

   	small_default_font: ESDL_TTF_FONT is
			-- Standard default font
		once
			Result := create_font (default_font_name, 30, white)
		ensure
			font_not_void: Result /= Void
		end
		
   	medium_default_font: ESDL_TTF_FONT is
			-- Standard default font
		once
			Result := create_font (default_font_name, 50, white)
		ensure
			font_not_void: Result /= Void
		end

   	big_default_font: ESDL_TTF_FONT is
			-- Standard default font
		once
			Result := create_font (default_font_name, 72, white)
		ensure
			font_not_void: Result /= Void
		end
		
   	menu_font: ESDL_TTF_FONT is
			-- Standard font for menu
		once
			Result := create_font (menu_font_name, 72, menu_color)
		ensure
			font_not_void: Result /= Void
		end

   	small_menu_font: ESDL_TTF_FONT is
			-- Standard font for menu
		once
			Result := create_font (menu_font_name, 50, menu_color)
		ensure
			font_not_void: Result /= Void
		end

	menu_selected_font: ESDL_TTF_FONT is
			-- Standard font for menu
		once
			Result := create_font (menu_font_name, 72, menu_selected_color)
		ensure
			font_not_void: Result /= Void
		end		

	small_menu_selected_font: ESDL_TTF_FONT is
			-- Standard font for menu
		once
			Result := create_font (menu_font_name, 50, menu_selected_color)
		ensure
			font_not_void: Result /= Void
		end	

   	big_credits_font: ESDL_TTF_FONT is
			-- Standard font for credits
		once
			Result := create_font (credits_font_name, 40, credits_color)
		ensure
			font_not_void: Result /= Void
		end

   	small_credits_font: ESDL_TTF_FONT is
			-- Standard font for credits
		once
			Result := create_font (credits_font_name, 30, credits_color)
		ensure
			font_not_void: Result /= Void
		end
		
	big_game_widget_font: ESDL_TTF_FONT is
			-- Standard font for use in game widgets
		once
			Result := create_font (default_font_name, 50, game_widget_color)
		ensure
			font_not_void: Result /= Void
		end	
		
	medium_game_widget_font: ESDL_TTF_FONT is
			-- Standard font for use in game widgets
		once
			Result := create_font (default_font_name, 40, game_widget_color)
		ensure
			font_not_void: Result /= Void
		end 

	small_game_widget_font: ESDL_TTF_FONT is
			-- Standard font for use in game widgets
		once
			Result := create_font (default_font_name, 30, game_widget_color)
		ensure
			font_not_void: Result /= Void
		end 
		
feature -- Images

	Image_directory: STRING is "./resources/pic/"
			-- Path to the image directory
		
	Flathunt_logo: ESDL_DRAWABLE is
			-- Creates the logo which is to be displayed on every scene
		once
			bitmap_factory.create_bitmap_from_image (Image_directory + "flat_hunt_logo.png")
			Result := bitmap_factory.last_bitmap
			Result.set_x_y ((Window_width - Result.width) //2, 0)
		ensure
			pic_not_void: Result /= Void
			pic_positioned: Result.x = (Window_width - Result.width) // 2 and Result.y = 0
		end	
	
	Background_picture: ESDL_DRAWABLE is
			-- Creates the background which is to be displayed on every menu scene
		once
			bitmap_factory.create_bitmap_from_image (Image_directory + "background.png")
			Result := bitmap_factory.last_bitmap
			Result.set_x_y (0, 0)		
		ensure
			pic_not_void: Result /= Void
			pic_positioned: Result.x = 0 and Result.y = 0
		end		
		
	Left_arrow: STRING is 
			-- Left arrow for option menus
		once
			Result := Image_directory + "left_arrow.png"
		ensure
			string_not_void: Result /= Void
		end

	Right_arrow: STRING is 
			-- Right arrow for option menus
		once
			Result := Image_directory + "right_arrow.png"
		ensure
			string_not_void: Result /= Void
		end
		

feature -- Player Images

	Player_pic_directory: STRING is
			-- Default directory where to find the player pictures.
			-- If player-set changed in the game settings, this directory
			-- should also be changed.
		once
			Result := Image_directory + "player/glass/"
		ensure
			string_not_void: Result /= Void
		end
 
 	Estate_agent_button_pic: ESDL_DRAWABLE is
			-- Creates picture for estate agent button.
		once
			bitmap_factory.create_bitmap_from_image (Player_pic_directory + "agent_medium.png")
			Result := bitmap_factory.last_bitmap		
		ensure
			pic_not_void: Result /= Void
		end
    
	Estate_agent_pic: ESDL_DRAWABLE is
			-- Creates picture for the estate agent.
		once
			bitmap_factory.create_bitmap_from_image (Player_pic_directory + "agent_small.png")
			Result := bitmap_factory.last_bitmap		
		ensure
			pic_not_void: Result /= Void
		end

	Flat_hunter_button_pics: HASH_TABLE [ESDL_DRAWABLE, INTEGER] is
			-- Creates pictures for flat hunter buttons.
		local
			i: INTEGER
			size: STRING
		once
			create Result.make (8)
			size := "medium"
			from
				i := 1
			until
				i > 8
			loop
				bitmap_factory.create_bitmap_from_image (Player_pic_directory + "hunter" + i.out + "_" + size + ".png")
				Result.put (bitmap_factory.last_bitmap, i)	
				i := i + 1
			end
		ensure
			pics_not_void: Result /= Void
		end	

	Flat_hunter_pics: HASH_TABLE [ESDL_DRAWABLE, INTEGER] is
			-- Creates pictures for the flat hunters.
		local
			i: INTEGER
			size: STRING
		once
			create Result.make (8)
			size := "small"
			from
				i := 1
			until
				i > 8
			loop
				bitmap_factory.create_bitmap_from_image (Player_pic_directory + "hunter" + i.out + "_" + size + ".png")
				Result.put (bitmap_factory.last_bitmap, i)
				i := i + 1
			end
		ensure
			pics_not_void: Result /= Void
		end	
     	
		
feature -- Sound

	Sound_directory: STRING is "./resources/sound/"
			-- Path to the sound directory

	background_music: STRING is 
			-- Default background music
		once
			Result := Sound_directory + "far_away.ogg"
		end
		
feature -- Misc (Strings)

	My_application_name: STRING is "Flat Hunt v2"
			-- Name of the application
	
	Application_icon: STRING is "flat_hunt_icon.png"
			-- Name of the application icon

		
end