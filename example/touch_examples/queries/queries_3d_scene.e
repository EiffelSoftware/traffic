indexing
	description: "The 'main scene' for the queries example of touch"
	date: "$Date$"
	revision: "$Revision$"

class
	QUERIES_3D_SCENE
	
inherit
	
	TOUCH_3D_SCENE
		rename make as make_touch_scene
		end
	
creation
	make

feature -- Interface
	
	make is
			-- Creation procedure
		local
			queries: QUERIES
		do
			make_touch_scene

			create queries
			queries.run (map, console)			
		end
		
end 
