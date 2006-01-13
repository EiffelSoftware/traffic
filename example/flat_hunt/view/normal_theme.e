indexing
	description: "Normal theme as used in initial version of flathunt with EM."
	date: "$Date$"
	revision: "$Revision$"

class
	NORMAL_THEME

inherit
	
	THEME

feature -- Colors

	Player_status_color : EM_COLOR is
			do
				create Result.make_with_rgb (light_gray.red, light_gray.green, light_gray.blue)
			end	

	Background_color : EM_COLOR is
		do
			Result := black
		end		

	Credits_color : EM_COLOR is
		do
			Result := light_violet
		end		

	Menu_color: EM_COLOR is
		do
			Result := dark_red
		end
		
	Menu_box_color: EM_COLOR is
		do
			Result := dark_red
		end
		
	Menu_selected_color: EM_COLOR is
		do
			Result := orange
		end		
	
	Game_widget_line_color: EM_COLOR is
		do
			create Result.make_with_rgb (light_blue.red, light_blue.green, light_blue.blue)
			Result.set_alpha (70)
		end

	Game_widget_fill_color: EM_COLOR is
		do
			create Result.make_with_rgb (light_blue.red, light_blue.green, light_blue.blue)
			Result.set_alpha (70)
		end

	Game_widget_font_color: EM_COLOR is
		do
			create Result.make_with_rgb (light_blue.red, light_blue.green, light_blue.blue)
		end
		
	Status_font_color: EM_COLOR is
		do
			Result := white
		end
		
	Status_color : EM_COLOR is
			-- Color of the status boxes.
		do
			create Result.make_with_rgb (light_blue.red, light_blue.green, light_blue.blue)
		end

	Navigation_color : EM_COLOR is
		once
			Result := green
		end

	Highlighted_navigation_color : EM_COLOR is
		once
			Result := red
		end

	Default_place_color : EM_COLOR is
			-- Color of the places.
		once
			Result := Blue
		end

	Highlight_place_color : EM_COLOR is
			-- Color of the places.
		once
			Result := Yellow
		end

	Selected_place_color : EM_COLOR is
			-- Color of the places.
		once
			Result := Red
		end

	Rail_color: EM_COLOR is
			-- Color used for rail lines.
		once
			create Result.make_with_rgb (255, 160, 0)
		end	

	Tram_color: EM_COLOR is
			-- Color used for rail lines.
		once
			Result := Light_gray
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
			Result := create_font (Default_font_name, 30, white)
		end
		
   	Medium_default_font: EM_COLOR_TTF_FONT is
			-- Standard default font.
		once
			Result := create_font (Default_font_name, 50, white)
		end
		
   	Big_default_font: EM_COLOR_TTF_FONT is
			-- Standard default font.
		once
			Result := create_font (Default_font_name, 72, white)
		end
		
   	Menu_font: EM_COLOR_TTF_FONT is
			-- Standard font for menu.
		once
			Result := create_font (Menu_font_name, 40, Menu_color)
		end

   	Small_menu_font: EM_COLOR_TTF_FONT is
			-- Standard font for menu.
		once
			Result := create_font (Menu_font_name, 30, Menu_color)
		end

	Menu_selected_font: EM_COLOR_TTF_FONT is
			-- Standard font for menu.
		once
			Result := create_font (Menu_font_name, 40, Menu_selected_color)
		end		

	Small_menu_selected_font: EM_COLOR_TTF_FONT is
			-- Standard font for menu.
		once
			Result := create_font (Menu_font_name, 30, Menu_selected_color)
		end	

   	Big_credits_font: EM_COLOR_TTF_FONT is
			-- Standard font for credits.
		once
			Result := create_font (Credits_font_name, 40, Credits_color)
		end

   	Small_credits_font: EM_COLOR_TTF_FONT is
			-- Standard font for credits.
		once
			Result := create_font (Credits_font_name, 30, Credits_color)
		end
		
	Big_game_widget_font: EM_COLOR_TTF_FONT is
			-- Standard font for use in game widgets.
		once
			Result := create_font (Default_font_name, 40, Game_widget_font_color)
		end	
		
	Medium_game_widget_font: EM_COLOR_TTF_FONT is
			-- Standard font for use in game widgets.
		once
			Result := create_font (Default_font_name, 30, Game_widget_font_color)
		end 

	Small_game_widget_font: EM_COLOR_TTF_FONT is
			-- Standard font for use in game widgets.
		once
			Result := create_font (Default_font_name, 24, Game_widget_font_color)
		end 
	
	Status_font: EM_COLOR_TTF_FONT is
			-- Standard font for use in status boxes for players.
		once
			Result := create_font (Status_font_name, 12, Status_font_color)
		end
		
	Black_status_font: EM_COLOR_TTF_FONT is
			-- Standard font for use in light-colored status boxes.
		once
			Result := create_font (Status_font_name, 12, black)
		end

   	Big_status_font: EM_COLOR_TTF_FONT is
			-- Standard font for status box titles.
		once
			Result := create_font (Default_font_name, 40, Status_color)
		end

   	Big_player_status_font: EM_COLOR_TTF_FONT is
			-- Standard font for status box titles.
		once
			Result := create_font (Default_font_name, 40, Player_status_color)
		end
	
	Place_label_font: EM_COLOR_TTF_FONT is
			-- Standard font used for labeling places on the map.
		once
			Result := create_font (Status_font_name, 14, white)
		end

feature -- Images

	Image_directory: STRING is "./resources/themes/normal/"
			-- Path to the image directory.
		
	Flathunt_logo: EM_DRAWABLE is
			-- Creates the logo which is to be displayed on several scenes.
		once
			bitmap_factory.create_bitmap_from_image (Image_directory + "flat_hunt_logo.png")
			Result := bitmap_factory.last_bitmap
			Result.set_x_y ((Window_width - Result.width) //2, 0)
		end	
	
	Background_picture: EM_DRAWABLE is
			-- Creates the background which is to be displayed on several scenes.
		once
			bitmap_factory.create_bitmap_from_image (Image_directory + "background.png")
			Result := bitmap_factory.last_bitmap
			Result.set_x_y (0, 0)		
		end		
		
	Left_arrow: STRING is 
			-- Left arrow for option menus.
		once
			Result := Image_directory + "left_arrow.png"
		end

	Right_arrow: STRING is 
			-- Right arrow for option menus.
		once
			Result := Image_directory + "right_arrow.png"
		end

feature -- Player Images

	Player_pic_directory: STRING is
			-- Default directory where to find the player pictures.
			-- If player-set changed in the game settings, this directory
			-- should also be changed.
		once
			Result := Image_directory + "player/glass/"
		end
 
 	Estate_agent_button_pic: EM_DRAWABLE is
			-- Creates picture for estate agent button.
		do
			bitmap_factory.create_bitmap_from_image (Player_pic_directory + "agent_small.png")
			Result := bitmap_factory.last_bitmap		
		end
    
	Estate_agent_pic: EM_DRAWABLE is
			-- Creates picture for the estate agent.
		do
			bitmap_factory.create_bitmap_from_image (Player_pic_directory + "agent_small.png")
			Result := bitmap_factory.last_bitmap		
		end

	Estate_agent_lvl_pic: EM_DRAWABLE is
			-- Creates picture for the estate agent at last visible location.
		do
			bitmap_factory.create_bitmap_from_image (Player_pic_directory + "agent_lvl.png")
			Result := bitmap_factory.last_bitmap		
		end		

	Flat_hunter_button_pics: HASH_TABLE [EM_DRAWABLE, INTEGER] is
			-- Creates pictures for flat hunter buttons.
		local
			i: INTEGER
			size: STRING
		do
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
		end	

	Flat_hunter_pics: HASH_TABLE [EM_DRAWABLE, INTEGER] is
			-- Creates pictures for the flat hunters.
		local
			i: INTEGER
			size: STRING
		do
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
		end	
	
feature -- Sound

	Sound_directory: STRING is "./resources/sound"
			-- Path to the sound directory.

	Background_music: STRING is 
			-- Default background music.
		once
			Result := "far_away.ogg"
		end

end
