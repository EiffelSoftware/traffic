indexing
	description: "The 'main scene' for the preview example of touch"
	date: "$Date: 2006/01/17 00:24:59 $"
	revision: "$Revision: 1.57 $"

class PREVIEW_3D_SCENE
	
inherit
	
	TOUCH_3D_SCENE
		rename 
			make as make_touch_scene
		end
	
create
	make

feature -- Interface
	
	make is
			-- Create all gui elements.
		local
			preview: PREVIEW
		do
			make_touch_scene

			create preview
			preview.run (map_widget, console)			
		end
		
end
