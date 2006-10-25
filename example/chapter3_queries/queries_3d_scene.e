indexing
	description: "The 'main scene' for the queries example of touch"
	date: "$Date$"
	revision: "$Revision$"

class QUERIES_3D_SCENE

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
			queries: QUERIES
		do
			Precursor
			create queries
			queries.run (map_widget, console)
		end

end
