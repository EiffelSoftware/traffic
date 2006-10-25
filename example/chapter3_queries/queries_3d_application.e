indexing
	description	: "Root class for traffic application Queries"
	date: "$Date$"
	revision: "$Revision$"

class QUERIES_3D_APPLICATION

inherit

	TOUCH_3D_APPLICATION

create
	make

feature -- Initialization

	set_first_scene is
			-- Set `scene' to QUERIES_3D_SCENE.
		do
			set_scene (create {QUERIES_3D_SCENE}.make_component_scene)
		end

	set_application_specifics is
			-- Set application specifics.
		do
			set_window_title ("Touch - Queries")
			set_application_id ("Touch_Queries")
		end

end
