indexing
	description	: "Root class for traffic application Road Creation"
	date: "$Date$"
	revision: "$Revision$"

class ROAD_CREATION_3D_APPLICATION

inherit

	TOUCH_3D_APPLICATION

create
	make

feature -- Initialization

	set_first_scene is
			-- Set `scene' to ROAD_CREATION_3D_SCENE.
		do
			set_scene (create {ROAD_CREATION_3D_SCENE}.make_component_scene)
		end

	set_application_specifics is
			-- Set application specifics.
		do
			set_window_title ("Touch - Road Creation")
			set_application_id ("Touch_Road_Creation")
		end

end
