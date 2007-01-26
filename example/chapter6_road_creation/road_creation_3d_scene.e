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
		local
			road_creation: ROAD_CREATION
		do
			Precursor
			
			create road_creation
			road_creation.run (console)
			click_here_button.clicked_event.subscribe (agent road_creation.explore_on_click)
		end

end
