indexing
	description: "The 'main scene' for the preview example of touch"
	date: "$Date: 2006/01/17 00:24:59 $"
	revision: "$Revision: 1.57 $"

class PREVIEW_3D_SCENE

inherit

	TOUCH_3D_SCENE
		redefine
			initialize_scene
		end

create
	make_component_scene

feature -- Interface

	initialize_scene is
			-- Initialize scene.
		do
			Precursor
			create preview
			preview.run (console)
			click_here_button.clicked_event.subscribe (agent button_click)
		end

	button_click is
			-- Disable the button for the execution of preview.explore.
		do
			click_here_button.disable
			preview.explore_on_click
			click_here_button.enable
		end

	preview: PREVIEW

end
