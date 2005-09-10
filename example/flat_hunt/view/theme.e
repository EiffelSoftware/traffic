indexing
	description: "Everything that is themable in the game is specified here."
	date: "$Date$"
	revision: "$Revision$"

-- TODO: At the moment everything for a theme is specified within this class,
-- but it would be nicer if these things were specified in a text file
-- and then read in to display the theme

deferred class
	THEME
	
inherit
	
	DISPLAY_CONSTANTS
	
	EM_SHARED_BITMAP_FACTORY	
		undefine
			default_create
		end
	
	EM_SHARED_STANDARD_FONTS
		undefine
			default_create
		end

	EM_KEY_CONSTANTS
		undefine
			default_create
		end
		
feature -- Colors

	Credits_color : EM_COLOR is
		once
			Result := light_violet
		ensure
			color_exists: Result /= Void
		end		

	Menu_color: EM_COLOR is
		once
			Result := dark_red
		ensure
			color_exists: Result /= Void
		end
		
	Menu_selected_color: EM_COLOR is
		once
			Result := orange
		ensure
			color_exists: Result /= Void
		end		
	
	Game_widget_color: EM_COLOR is
		once
			Result := dark_blue
		ensure
			color_exists: Result /= Void
		end
		
	Status_font_color: EM_COLOR is
		once
			Result := white
		ensure
			color_exists: Result /= Void
		end
		
	Status_color : EM_COLOR is
			-- Color of the status boxes.
		once
			Result := light_violet
		ensure
			color_exists: Result /= Void
		end
		
feature -- Fonts

	Menu_font_name: STRING is "herbert"
			-- Name of font that will be used for menus.
	
	Credits_font_name: STRING is "herbert"
			-- Name of font that will be used for displaying credits.
	
	Default_font_name: STRING is "herbert"
			-- Name of default font.
			
	Status_font_name: STRING is "arial"
			-- Name of status font.

   	Small_default_font: EM_COLOR_TTF_FONT is
			-- Standard default font.
		once
			Result := create_font (default_font_name, 30, white)
		ensure
			font_exists: Result /= Void
		end
		
   	Medium_default_font: EM_COLOR_TTF_FONT is
			-- Standard default font.
		once
			Result := create_font (default_font_name, 50, white)
		ensure
			font_exists: Result /= Void
		end
		
   	Big_default_font: EM_COLOR_TTF_FONT is
			-- Standard default font.
		once
			Result := create_font (default_font_name, 72, white)
		ensure
			font_exists: Result /= Void
		end
		
   	Menu_font: EM_COLOR_TTF_FONT is
			-- Standard font for menu.
		once
			Result := create_font (menu_font_name, 72, menu_color)
		ensure
			font_exists: Result /= Void
		end

   	Small_menu_font: EM_COLOR_TTF_FONT is
			-- Standard font for menu.
		once
			Result := create_font (menu_font_name, 50, menu_color)
		ensure
			font_exists: Result /= Void
		end

	Menu_selected_font: EM_COLOR_TTF_FONT is
			-- Standard font for menu.
		once
			Result := create_font (menu_font_name, 72, menu_selected_color)
		ensure
			font_exists: Result /= Void
		end		

	Small_menu_selected_font: EM_COLOR_TTF_FONT is
			-- Standard font for menu.
		once
			Result := create_font (menu_font_name, 50, menu_selected_color)
		ensure
			font_exists: Result /= Void
		end	

   	Big_credits_font: EM_COLOR_TTF_FONT is
			-- Standard font for credits.
		once
			Result := create_font (credits_font_name, 40, credits_color)
		ensure
			font_exists: Result /= Void
		end

   	Small_credits_font: EM_COLOR_TTF_FONT is
			-- Standard font for credits.
		once
			Result := create_font (credits_font_name, 30, credits_color)
		ensure
			font_exists: Result /= Void
		end
		
	Big_game_widget_font: EM_COLOR_TTF_FONT is
			-- Standard font for use in game widgets.
		once
			Result := create_font (default_font_name, 50, game_widget_color)
		ensure
			font_exists: Result /= Void
		end	
		
	Medium_game_widget_font: EM_COLOR_TTF_FONT is
			-- Standard font for use in game widgets.
		once
			Result := create_font (default_font_name, 40, game_widget_color)
		ensure
			font_exists: Result /= Void
		end 

	Small_game_widget_font: EM_COLOR_TTF_FONT is
			-- Standard font for use in game widgets.
		once
			Result := create_font (default_font_name, 30, game_widget_color)
		ensure
			font_exists: Result /= Void
		end 
	
	Status_font: EM_COLOR_TTF_FONT is
			-- Standard font for use in status boxes for players.
		once
			Result := create_font (status_font_name, 12, status_font_color)
		ensure
			font_exists: Result /= Void
		end
		
	Black_status_font: EM_COLOR_TTF_FONT is
			-- Standard font for use in light-colored status boxes.
		once
			Result := create_font (status_font_name, 12, black)
		ensure
			font_exists: Result/= Void
		end
	
feature -- Images

	Image_directory: STRING is "./resources/pic/"
			-- Path to the image directory.
		
	Flathunt_logo: EM_DRAWABLE is
			-- Creates the logo which is to be displayed on several scenes.
		once
			bitmap_factory.create_bitmap_from_image (Image_directory + "flat_hunt_logo.png")
			Result := bitmap_factory.last_bitmap
			Result.set_x_y ((Window_width - Result.width) //2, 0)
		ensure
			pic_exists: Result /= Void
			pic_positioned: Result.x = (Window_width - Result.width) // 2 and Result.y = 0
		end	
	
	Background_picture: EM_DRAWABLE is
			-- Creates the background which is to be displayed on several scenes.
		once
			bitmap_factory.create_bitmap_from_image (Image_directory + "background.png")
			Result := bitmap_factory.last_bitmap
			Result.set_x_y (0, 0)		
		ensure
			pic_exists: Result /= Void
			pic_positioned: Result.x = 0 and Result.y = 0
		end		
		
	Left_arrow: STRING is 
			-- Left arrow for option menus.
		once
			Result := Image_directory + "left_arrow.png"
		ensure
			string_exists: Result /= Void
		end

	Right_arrow: STRING is 
			-- Right arrow for option menus.
		once
			Result := Image_directory + "right_arrow.png"
		ensure
			string_exists: Result /= Void
		end

feature -- Player Images

	Player_pic_directory: STRING is
			-- Default directory where to find the player pictures.
			-- If player-set changed in the game settings, this directory
			-- should also be changed.
		once
			Result := Image_directory + "player/glass/"
		ensure
			string_exists: Result /= Void
		end
 
 	Estate_agent_button_pic: EM_DRAWABLE is
			-- Creates picture for estate agent button.
		once
			bitmap_factory.create_bitmap_from_image (Player_pic_directory + "agent_medium.png")
			Result := bitmap_factory.last_bitmap		
		ensure
			pic_exists: Result /= Void
		end
    
	Estate_agent_pic: EM_DRAWABLE is
			-- Creates picture for the estate agent.
		once
			bitmap_factory.create_bitmap_from_image (Player_pic_directory + "agent_small.png")
			Result := bitmap_factory.last_bitmap		
		ensure
			pic_exists: Result /= Void
		end

	Flat_hunter_button_pics: HASH_TABLE [EM_DRAWABLE, INTEGER] is
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
			pics_exist: Result /= Void
		end	

	Flat_hunter_pics: HASH_TABLE [EM_DRAWABLE, INTEGER] is
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
			pics_exist: Result /= Void
		end	
	
feature -- Sound

	Sound_directory: STRING is "./resources/sound"
			-- Path to the sound directory.

	Background_music: STRING is 
			-- Default background music.
		once
			Result := "far_away.ogg"
		end
		
feature -- Misc (Strings)

	My_application_name: STRING is "Flat Hunt v2"
			-- Name of the application.
	
	Application_icon: STRING is "flat_hunt_icon.png"
			-- Name of the application icon.
		
end
