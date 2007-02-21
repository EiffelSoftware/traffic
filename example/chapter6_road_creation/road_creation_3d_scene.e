indexing
	description: "Scene for the 'Road Creation' example of touch"
	date: "$Date$"
	revision: "$Revision$"

class ROAD_CREATION_3D_SCENE

inherit

	TOUCH_3D_SCENE
		redefine
			initialize_scene
		end

create
	make_component_scene

feature -- Interface

	initialize_scene is
			-- Creation procedure
		do
			Precursor

			create road_creation
			road_creation.run (console)
			click_here_button.clicked_event.subscribe (agent button_click)
		end

	button_click is
			-- Disable the button for the execution of preview.explore.
		do
			click_here_button.disable
			road_creation.explore_on_click
			click_here_button.enable
		end

	road_creation: ROAD_CREATION

end
