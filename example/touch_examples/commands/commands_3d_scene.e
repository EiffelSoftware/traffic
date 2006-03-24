indexing
	description: "Scene for the 'commands' example of touch"
	date: "$Date$"
	revision: "$Revision$"

class COMMANDS_3D_SCENE
	
inherit
	
	TOUCH_3D_SCENE
		rename 
			make as make_touch_scene
		end
	
creation
	make

feature -- Interface
	
	make is
			-- Creation procedure
		local
			commands: COMMANDS
		do
			make_touch_scene

			create commands
			commands.run (map_widget, console)	
			click_here_button.clicked_event.subscribe (agent commands.explore_on_button_click)		
		end
		
end 
