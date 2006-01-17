indexing
	description: "Objects that ..."
	author: "Fabian Wüest"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_BUILDING

inherit
	SHARED_CONSTANTS	

create
	make

feature
	make (a_x1,a_x2,a_y1,a_y2: DOUBLE; a_name: STRING) is
			-- Initialize
		do
			x1:=a_x1
			x2:=a_x2
			y1:=a_y1
			y2:=a_y2
			name:= a_name
		end
		
	contains_point(a_x: DOUBLE; a_y: DOUBLE): BOOLEAN is
			-- is point (`a_x', `a_y') inside building?
		do
			Result:= (a_x >= x1-0.05) and (a_x <= x2+0.05) and (a_y >= y1-0.05) and (a_y <= y2+0.05) 
		end
		
		

	
feature

	name: STRING
			-- Name of place.
		
	position: EM_VECTOR_2D
	
	x1: DOUBLE
	x2: DOUBLE
	y1: DOUBLE
	y2: DOUBLE
	height: DOUBLE	
			
	information: TRAFFIC_BUILDING_INFORMATION
			-- Additional information.

end
