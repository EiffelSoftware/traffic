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

feature -- Colors

	Player_status_color : EM_COLOR is
		deferred
		ensure
			color_exists: Result /= Void
		end

	Background_color : EM_COLOR is
		deferred
		ensure
			color_exists: Result /= Void
		end
		
	Credits_color : EM_COLOR is
		deferred
		ensure
			color_exists: Result /= Void
		end		

	Menu_color: EM_COLOR is
		deferred
		ensure
			color_exists: Result /= Void
		end
		
	Menu_box_color: EM_COLOR is
		deferred
		ensure
			color_exists: Result /= Void
		end
		
		
	Menu_selected_color: EM_COLOR is
		deferred
		ensure
			color_exists: Result /= Void
		end		
	
	Game_widget_line_color: EM_COLOR is
		deferred
		ensure
			color_exists: Result /= Void
		end

	Game_widget_fill_color: EM_COLOR is
		deferred
		ensure
			color_exists: Result /= Void
		end
		
	Game_widget_font_color: EM_COLOR is
		deferred
		ensure
			color_exists: Result /= Void
		end

		
	Status_font_color: EM_COLOR is
		deferred
		ensure
			color_exists: Result /= Void
		end
		
	Status_color : EM_COLOR is
		deferred
		ensure
			color_exists: Result /= Void
		end
		
	Navigation_color : EM_COLOR is
		deferred
		ensure
			color_exists: Result /= Void
		end

	Highlighted_navigation_color : EM_COLOR is
		deferred
		ensure
			color_exists: Result /= Void
		end
		
	Default_place_color : EM_COLOR is
		deferred
		ensure
			color_exists: Result /= Void
		end

	Highlight_place_color : EM_COLOR is
		deferred
		ensure
			color_exists: Result /= Void
		end

	Selected_place_color : EM_COLOR is
		deferred
		ensure
			color_exists: Result /= Void
		end

	Rail_color: EM_COLOR is
		deferred
		ensure
			color_exists: Result /= Void
		end

	Tram_color: EM_COLOR is
		deferred
		ensure
			color_exists: Result /= Void
		end
		
feature -- Fonts

	Menu_font_name: STRING is 
		deferred
		ensure
			font_exists: Result /= Void
		end
	
	Credits_font_name: STRING is
		deferred
		ensure
			font_exists: Result /= Void
		end
	
	Default_font_name: STRING is 
		deferred
		ensure
			font_exists: Result /= Void
		end
			
	Status_font_name: STRING is
		deferred
		ensure
			font_exists: Result /= Void
		end

   	Small_default_font: EM_COLOR_TTF_FONT is
		deferred
		ensure
			font_exists: Result /= Void
		end
		
   	Medium_default_font: EM_COLOR_TTF_FONT is
			-- Standard default font.
		deferred
		ensure
			font_exists: Result /= Void
		end
		
   	Big_default_font: EM_COLOR_TTF_FONT is
			-- Standard default font.
		deferred
		ensure
			font_exists: Result /= Void
		end
		
   	Menu_font: EM_COLOR_TTF_FONT is
			-- Standard font for menu.
		deferred
		ensure
			font_exists: Result /= Void
		end

   	Small_menu_font: EM_COLOR_TTF_FONT is
			-- Standard font for menu.
		deferred
		ensure
			font_exists: Result /= Void
		end

	Menu_selected_font: EM_COLOR_TTF_FONT is
			-- Standard font for menu.
		deferred
		ensure
			font_exists: Result /= Void
		end

	Small_menu_selected_font: EM_COLOR_TTF_FONT is
			-- Standard font for menu.
		deferred
		ensure
			font_exists: Result /= Void
		end

   	Big_credits_font: EM_COLOR_TTF_FONT is
			-- Standard font for credits.
		deferred
		ensure
			font_exists: Result /= Void
		end

   	Small_credits_font: EM_COLOR_TTF_FONT is
			-- Standard font for credits.
		deferred
		ensure
			font_exists: Result /= Void
		end
		
	Big_game_widget_font: EM_COLOR_TTF_FONT is
			-- Standard font for use in game widgets.
		deferred
		ensure
			font_exists: Result /= Void
		end
		
	Medium_game_widget_font: EM_COLOR_TTF_FONT is
			-- Standard font for use in game widgets.
		deferred
		ensure
			font_exists: Result /= Void
		end

	Small_game_widget_font: EM_COLOR_TTF_FONT is
			-- Standard font for use in game widgets.
		deferred
		ensure
			font_exists: Result /= Void
		end
	
	Status_font: EM_COLOR_TTF_FONT is
			-- Standard font for use in status boxes for players.
		deferred
		ensure
			font_exists: Result /= Void
		end
		
	Black_status_font: EM_COLOR_TTF_FONT is
			-- Standard font for use in light-colored status boxes.
		deferred
		ensure
			font_exists: Result /= Void
		end

   	Big_status_font: EM_COLOR_TTF_FONT is
			-- Standard font for status box titles.
		deferred
		ensure
			font_exists: Result /= Void
		end

   	Big_player_status_font: EM_COLOR_TTF_FONT is
			-- Standard font for status box titles.
		deferred
		ensure
			font_exists: Result /= Void
		end
	
	Place_label_font: EM_COLOR_TTF_FONT is
			-- Standard font used for labeling places on the map.
		deferred
		ensure
			font_exists: Result /= Void
		end

feature -- Images

	Image_directory: STRING is 
			-- Path to the image directory.
		deferred
		end

		
	Flathunt_logo: EM_DRAWABLE is
			-- Creates the logo which is to be displayed on several scenes.
		deferred
		ensure
			pic_exists: Result /= Void
			pic_positioned: Result.x = (Window_width - Result.width) // 2 and Result.y = 0
		end
	
	Background_picture: EM_DRAWABLE is
			-- Creates the background which is to be displayed on several scenes.
		deferred
		ensure
			pic_exists: Result /= Void
			pic_positioned: Result.x = 0 and Result.y = 0
		end
		
	Left_arrow: STRING is 
			-- Left arrow for option menus.
		deferred
		ensure
			string_exists: Result /= Void
		end

	Right_arrow: STRING is 
			-- Right arrow for option menus.
		deferred
		ensure
			string_exists: Result /= Void
		end

feature -- Player Images

	Player_pic_directory: STRING is
			-- Default directory where to find the player pictures.
			-- If player-set changed in the game settings, this directory
			-- should also be changed.
		deferred
		ensure
			string_exists: Result /= Void
		end
 
 	Estate_agent_button_pic: EM_DRAWABLE is
			-- Creates picture for estate agent button.
		deferred
		ensure
			pic_exists: Result /= Void
		end
    
	Estate_agent_pic: EM_DRAWABLE is
			-- Creates picture for the estate agent.
		deferred
		ensure
			pic_exists: Result /= Void
		end

	Estate_agent_lvl_pic: EM_DRAWABLE is
			-- Creates picture for the estate agent at last visible location.
		deferred
		ensure
			pic_exists: Result /= Void
		end

	Flat_hunter_button_pics: HASH_TABLE [EM_DRAWABLE, INTEGER] is
			-- Creates pictures for flat hunter buttons.
		deferred
		ensure
			pic_exists: Result /= Void
		end

	Flat_hunter_pics: HASH_TABLE [EM_DRAWABLE, INTEGER] is
			-- Creates pictures for the flat hunters.
		deferred
		ensure
			pic_exists: Result /= Void
		end
	
feature -- Sound

	Sound_directory: STRING is
			-- Path to the sound directory.
		deferred
		end

	Background_music: STRING is 
			-- Default background music.
		deferred
		end

end
