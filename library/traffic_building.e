indexing
	description: "Buildings for the traffic library"
	date: "$Date$"
	revision: "$Revision$"

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

feature -- Initialization

	make (a_p1, a_p2, a_p3, a_p4: EM_VECTOR_2D; an_height: DOUBLE; a_name: STRING) is
			-- Sets the corner to `a_p1', `a_p2', `a_p3', `a_p4' and the name to `a_name'.
			-- Calculates the breadth, width and center.
		require
			points_valid: a_p1 /= void and a_p2 /= void and a_p3 /= void and a_p4 /= void
			name_valid: a_name /= void
			height_valdi: an_height > 0
		do
			corner1 := a_p1
			corner2 := a_p2
			corner3 := a_p3
			corner4 := a_p4
			name := a_name
			angle := 0
			breadth := sqrt((corner1.x-corner2.x)*(corner1.x-corner2.x)+(corner1.y-corner2.y)*(corner1.y-corner2.y))
			width := sqrt((corner1.x-corner4.x)*(corner1.x-corner4.x)+(corner1.y-corner4.y)*(corner1.y-corner4.y))
			height := an_height
			create center.make((corner2.x+corner4.x)/2,(corner1.y+corner3.y)/2)
		ensure
			points_set: corner1 = a_p1 and corner2 = a_p2 and corner3 = a_p3 and corner4 = a_p4
			name_set: name = a_name
			height_set: height = an_height
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
				delta_x1 := dabs((a_y-corner2.y)/tangent(pi/2+angle*pi/180))
				delta_x2 := dabs((corner4.y-a_y)/tangent(pi/2+angle*pi/180))
			else
				delta_x1 := 0
				delta_x2 := 0
			end

			if (a_y >= corner3.y - 0.1) and (a_y <= corner1.y + 0.1) then
				if (a_x <= corner2.x-delta_x1+0.1) and (a_x >= corner4.x+delta_x2 - 0.1) then
					Result := true
				end
			end

		end

feature -- Element change

	set_id (an_id: INTEGER) is
			-- Set id to `an_id'.
		require
			valid_id: an_id > 0
		do
			id := an_id
		ensure
			id_set: id = an_id
		end

	set_angle (an_angle: DOUBLE) is
			-- Set angle to `a_angle'.
		require
			angle_valid: an_angle >= -70 and an_angle <=70
		local
			temp: EM_VECTOR_2D
		do
			angle := an_angle

			-- check if points have to be switch, so that corner1 is always on top
			if angle > 0 then
				temp := corner4
				corner4 := corner3
				corner3 := corner2
				corner2 := corner1
				corner1 := temp
			end
		ensure
			angle_set: angle = an_angle
		end

	 set_information (a_information: TRAFFIC_BUILDING_INFORMATION) is
	 		-- Set information to `a_information'.
	 	require
	 		information_valid: a_information /= void
	 	do
	 		information := a_information
	 	ensure
	 		information_set: information = a_information
	 	end

	 set_center (a_center: EM_VECTOR_2D) is
	 		-- Set `center' to `a_center' (move by (a_center.x-center.x, a_center.y-center.y).
	 	require
	 		a_center_valid: a_center /= Void
	 	local
	 		old_center: EM_VECTOR_2D
	 	do
	 		old_center := center
	 		center := a_center.twin
	 		corner1.move_by (center - old_center)
	 		corner2.move_by (center - old_center)
	 		corner3.move_by (center - old_center)
	 		corner4.move_by (center - old_center)
	 	end

feature -- Attributes

	id: INTEGER
			-- Absolut number of the building, starting at 1

	name: STRING
			-- Name of the building

	center: EM_VECTOR_2D
			-- Center of the building

	corner1: EM_VECTOR_2D
			-- Left upper corner

	corner2: EM_VECTOR_2D
			-- Left lower corner

	corner3: EM_VECTOR_2D
			-- Right lower corner

	corner4: EM_VECTOR_2D
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

	angle_valid: angle >= -70 and angle <= 70
	breadth_valid: breadth > 0
	width_valid: width > 0
	heigth_valid: height > 0

end
