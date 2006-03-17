indexing
	description	: "System's root class"
	note		: "Initial version automatically generated"

class
		QUERIES_3D_APPLICATION

inherit

	TOUCH_3D_APPLICATION
	
create
	make

feature -- Initialization

	set_first_scene is
			-- Set `scene' to QUERIES_3D_SCENE.
		do
			set_scene (create {QUERIES_3D_SCENE}.make)
		end
		
	set_application_specifics is
			-- Set application specifics.
		do
			set_window_title ("Touch - Queries")
			set_application_id ("Touch_Queries")
		end	

end -- class PREVIEW_3D_APPLICATION
