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
	
	DOUBLE_MATH
		export {NONE} all end
		
	MATH_CONST
		export {NONE} all end

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
			angle:= 0
		end
		
	contains_point(a_x: DOUBLE; a_y: DOUBLE): BOOLEAN is
			-- is point (`a_x', `a_y') inside building?
		local 
			delta_x: DOUBLE
		do
			delta_x:= tangent(angle*pi/180)*(y2-y1)
			if (a_y >= y1-0.1) and (a_y <= y1+0.1) then
				if (a_x >= x1-delta_x-0.1) and (a_x <= x2-delta_x + 0.1) then
					Result:= true
				end
			else
				Result:= false
			end
			
--			Result:= (a_x >= x1-0.1) and (a_x <= x2+0.1) and (a_y >= y1-0.1) and (a_y <= y2+0.1) 
		end
		
	set_id(an_id: INTEGER) is
			-- set id to `an_id'.
		require
			valid_id: an_id > 0
		do
			id := an_id
		end
		
	set_height(a_height: DOUBLE) is
			-- set height to `a_height'.
		require
			valid_height: a_height > 0
		do
			height := a_height
		end
		
	set_angle(an_angle: INTEGER) is
			-- set angle to `a_angle'.
		require
			angle_valid: an_angle >= 0 and an_angle <=360
		do
			angle := an_angle
		end
		
	
feature

	id: INTEGER
			-- The absolut number of the building, starting from 1
	
	name: STRING
			-- Name of place.
		
	position: EM_VECTOR_2D
	
	x1: DOUBLE
	x2: DOUBLE
	x3: DOUBLE
	x4: DOUBLE
	y1: DOUBLE
	y2: DOUBLE
	y3: DOUBLE
	y4: DOUBLE
	
	angle: DOUBLE
	
	height: DOUBLE	
			
	information: TRAFFIC_BUILDING_INFORMATION
			-- Additional information.

end
