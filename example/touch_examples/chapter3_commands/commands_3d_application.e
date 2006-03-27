indexing
	description	: "Root class for traffic application Commands"
	date: "$Date$"
	revision: "$Revision$"

class COMMANDS_3D_APPLICATION

inherit

	TOUCH_3D_APPLICATION
	
create
	make

feature -- Initialization

	set_first_scene is
			-- Set `scene' to COMMANDS_3D_SCENE.
		do
			set_scene (create {COMMANDS_3D_SCENE}.make)
		end
		
	set_application_specifics is
			-- Set application specifics.
		do
			set_window_title ("Touch - Commands")
			set_application_id ("Touch_Commands")
		end	

end
