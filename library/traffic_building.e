indexing
	description: "Buildings for the traffic library"
	author: "Fabian Wüest"
	date: "22.01.2006"
	revision: "0.1"

class
	TRAFFIC_BUILDING

inherit
	TRAFFIC_3D_CONSTANTS
		export {NONE} all end	

create
	make

feature
	make (a_x1,a_x2,a_y1,a_y2: DOUBLE;a_id: INTEGER; a_name: STRING) is
			-- Initialize
		do
			x1:=a_x1
			x2:=a_x2
			y1:=a_y1
			y2:=a_y2
			name:= a_name
			id:= a_id
		end
		
	contains_point(a_x: DOUBLE; a_y: DOUBLE): BOOLEAN is
			-- is point (`a_x', `a_y') inside building?
		do
			Result:= (a_x >= x1-0.05) and (a_x <= x2+0.05) and (a_y >= y1-0.05) and (a_y <= y2+0.05) 
		end
		
		

	
feature

	id: INTEGER
			-- The absolut number of the building, starting from 1
	
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
