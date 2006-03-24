indexing
	description	: "Root class for traffic application Preview"
	date: "$Date: 2006/03/02 18:57:05 $"
	revision: "$Revision: 1.26 $"

class PREVIEW_3D_APPLICATION

inherit

	TOUCH_3D_APPLICATION
	
create
	make

feature -- Initialization

	set_first_scene is
			-- Set `scene' to PREVIEW_3D_SCENE.
		do
			set_scene (create {PREVIEW_3D_SCENE}.make)
		end
		
	set_application_specifics is
			-- Set application specifics.
		do
			set_window_title ("Touch - Preview")
			set_application_id ("Touch_Preview")
		end	

end
