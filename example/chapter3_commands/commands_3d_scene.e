indexing
	description: "Scene for the 'commands' example of touch"
	date: "$Date$"
	revision: "$Revision$"

class COMMANDS_3D_SCENE

inherit

	TOUCH_3D_SCENE
		redefine
			initialize_scene
		end

creation
	make_component_scene

feature -- Interface

	initialize_scene is
			-- Creation procedure
		local
			commands: COMMANDS
		do
			Precursor
			create commands
			commands.run (map_widget, console)
			click_here_button.clicked_event.subscribe (agent commands.explore_on_button_click)
		end

end
