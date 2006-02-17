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
	make (a_p1, a_p2, a_p3, a_p4: EM_VECTOR_2D; a_name: STRING) is
			-- Initialize
		require
			points_valid: a_p1 /= void and a_p2 /= void and a_p3 /= void and a_p4 /= void
		do
			p1:= a_p1
			p2:= a_p2
			p3:= a_p3
			p4:= a_p4
			name:= a_name
			angle:= 0
			breadth:= sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y))
			width:= sqrt((p1.x-p4.x)*(p1.x-p4.x)+(p1.y-p4.y)*(p1.y-p4.y))
			create center.make((p1.x+p4.x)/2,(p1.y+p2.y)/2)
		end
		
	contains_point(a_x: DOUBLE; a_y: DOUBLE): BOOLEAN is
			-- is point (`a_x', `a_y') inside building?
		local 
			delta_x1: DOUBLE
			delta_x2: DOUBLE
		do
			
			delta_x1:= dabs(tangent(angle*pi/180)*(p2.y-a_y))
			delta_x2:= dabs(tangent(angle*pi/180)*(p4.y-a_y))
			if (a_y >= p3.y - 0.2) and (a_y <= p1.y + 0.2) then
				if (a_x >= p2.x+delta_x1-0.2) and (a_x <= p4.x-delta_x2 + 0.2) then
					Result:= true
				end
			else
				Result:= false
			end
			
--			if (a_y >= p2.y - 0.2) and (a_y <= p4.y + 0.2) then
--				if (a_x >= p1.x-delta_x + 0.2) and (a_x <= p3.x-delta_x - 0.2) then
--					Result:= true
--				end
--			else
--				Result:= false
--			end
--			
--			delta_x:= tangent(angle*pi/180)*(y2-y1)
--			if (a_y >= y1-0.1) and (a_y <= y1+0.1) then
--				if (a_x >= x1-delta_x-0.1) and (a_x <= x2-delta_x + 0.1) then
--					Result:= true
--				end
--			else
--				Result:= false
--			end
			
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
		
	set_angle(an_angle: DOUBLE) is
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
		
	center: EM_VECTOR_2D
			-- Center of the building
	
	p1: EM_VECTOR_2D
			-- left upper corner
			
	p2: EM_VECTOR_2D
			-- left lower corner
			
	p3: EM_VECTOR_2D
			-- right lower corner
			
	p4: EM_VECTOR_2D
			-- right upper corner
			
	angle: DOUBLE
			-- angle in degrees
	
	height: DOUBLE
	
	breadth: DOUBLE
	
	width: DOUBLE	
			
	information: TRAFFIC_BUILDING_INFORMATION
			-- Additional information.

end
