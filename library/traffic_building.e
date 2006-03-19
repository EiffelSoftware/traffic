indexing
	description: "Buildings for the traffic library"
	author: "Fabian W�est"
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

feature --Initialization
	make (a_p1, a_p2, a_p3, a_p4: EM_VECTOR_2D; a_name: STRING) is
			-- Sets the corner to `a_p1', `a_p2', `a_p3', `a_p4' and the name to `a_name'.
			-- Calculates the breadth, width and center.
		require
			points_valid: a_p1 /= void and a_p2 /= void and a_p3 /= void and a_p4 /= void
			name_valid: a_name /= void
		do
			p1 := a_p1
			p2 := a_p2
			p3 := a_p3
			p4 := a_p4
			name := a_name
			angle := 0
			breadth := sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y))
			width := sqrt((p1.x-p4.x)*(p1.x-p4.x)+(p1.y-p4.y)*(p1.y-p4.y))
			create center.make((p2.x+p4.x)/2,(p1.y+p3.y)/2)
		ensure
			points_set: p1 = a_p1 and p2 = a_p2 and p3 = a_p3 and p4 = a_p4
			name_set: name = a_name	
		end

feature -- Status report
		
	contains_point(a_x: DOUBLE; a_y: DOUBLE): BOOLEAN is
			-- Is point (`a_x', `a_y') inside building?
		local 
			delta_x1: DOUBLE
			delta_x2: DOUBLE
		do
			
			Result := false
			
			if angle/=0 and angle/=90 then
				delta_x1 := dabs((a_y-p2.y)/tangent(pi/2+angle*pi/180))
				delta_x2 := dabs((p4.y-a_y)/tangent(pi/2+angle*pi/180))
			else
				delta_x1 := 0
				delta_x2 := 0
			end
			
			if (a_y >= p3.y - 0.1) and (a_y <= p1.y + 0.1) then
				if (a_x <= p2.x-delta_x1+0.1) and (a_x >= p4.x+delta_x2 - 0.1) then
					Result := true
				end
			end
			
		end
		
feature -- Options
		
	set_id(an_id: INTEGER) is
			-- set id to `an_id'.
		require
			valid_id: an_id > 0
		do
			id := an_id
		ensure
			id_set: id = an_id
		end
		
	set_height(a_height: DOUBLE) is
			-- set height to `a_height'.
		require
			valid_height: a_height > 0
		do
			height := a_height
		ensure
			height_set: height = a_height
		end
		
	set_angle(an_angle: DOUBLE) is
			-- set angle to `a_angle'.
		require
			angle_valid: an_angle >= -70 and an_angle <=70
		local
			temp: EM_VECTOR_2D
		do
			angle := an_angle
			
			-- check if points have to be switch, so that p1 is always on top
			if angle > 0 then
				temp := p4
				p4 := p3
				p3 := p2
				p2 := p1
				p1 := temp
			end
		ensure
			angle_set: angle = an_angle
		end
		
	 set_information(a_information: TRAFFIC_BUILDING_INFORMATION) is
	 		-- set information to `a_information'
	 	require
	 		information_valid: a_information /= void
	 	do
	 		information := a_information
	 	ensure
	 		information_set: information = a_information
	 	end
		
	
feature -- Attributes

	id: INTEGER
			-- Absolut number of the building, starting at 1
	
	name: STRING
			-- Name of the building
		
	center: EM_VECTOR_2D
			-- Center of the building
	
	p1: EM_VECTOR_2D
			-- Left upper corner
			
	p2: EM_VECTOR_2D
			-- Left lower corner
			
	p3: EM_VECTOR_2D
			-- Right lower corner
			
	p4: EM_VECTOR_2D
			-- Right upper corner
			
	angle: DOUBLE
			-- Angle in degrees
	
	height: DOUBLE
			-- Height of the building
	
	breadth: DOUBLE
			-- Breath of the building
	
	width: DOUBLE
			-- Width of the buiding
			
	information: TRAFFIC_BUILDING_INFORMATION
			-- Additional information.

invariant
	angle_valid: angle > -70 and angle < 70

end
