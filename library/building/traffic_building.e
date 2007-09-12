indexing
	description: "Buildings for the traffic library"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	TRAFFIC_BUILDING

inherit

	ANY

	DOUBLE_MATH
		export {NONE} all end

	MATH_CONST
		export {NONE} all end

	TRAFFIC_MAP_ITEM

feature {NONE} -- Initialization

	make_new (a_width, a_depth, a_height: DOUBLE; a_center: TRAFFIC_COORDINATE) is
			-- Initialize `Current' with size and `a_center'.
		require
			size_valid: a_width > 0.0 and a_height > 0.0 and a_depth > 0.0
			center_valid: a_center /= Void
		do
			width := a_width
			height := a_height
			depth := a_depth
			center := a_center
			create changed_event
		ensure
			size_set: width = a_width and height = a_height and depth = a_depth
			center_set: center = a_center
		end

feature -- Status report

	is_villa: BOOLEAN
			-- Is the building a villa?

	is_apartment_building: BOOLEAN
			-- Is the building an apartment house?

	is_skyscraper: BOOLEAN
			-- Is the building a skyscraper?

	is_insertable (a_map: TRAFFIC_MAP): BOOLEAN is
			-- Is `Current' insertable into `a_map'?
			-- (All nodes need to be insertable. See `TRAFFIC_NODE is_insertable' for requirements.)
		do
			Result := True
		end

feature -- Access

	center: TRAFFIC_COORDINATE
			-- Center of the building

	angle: DOUBLE
			-- Angle in degrees

	height: DOUBLE
			-- Height of the building

	depth: DOUBLE
			-- Breath of the building

	width: DOUBLE
			-- Width of the buiding

	description: STRING
			-- Description

	corner_1: TRAFFIC_COORDINATE is
			-- Lower left corner of the building
		do
			create Result.make (center.x - width/2, center.y - depth/2)
			Result := Result.rotation (center, angle)
		ensure
			Result_exists: Result /= Void
		end

	corner_2: TRAFFIC_COORDINATE is
			-- Lower right corner of the building
		do
			create Result.make (center.x + width/2, center.y - depth/2)
			Result := Result.rotation (center, angle)
		ensure
			Result_exists: Result /= Void
		end

	corner_3: TRAFFIC_COORDINATE is
			-- Upper right corner of the building
		do
			create Result.make (center.x + width/2, center.y + depth/2)
			Result := Result.rotation (center, angle)
		ensure
			Result_exists: Result /= Void
		end

	corner_4: TRAFFIC_COORDINATE is
			-- Upper left corner of the building
		do
			create Result.make (center.x - width/2, center.y + depth/2)
			Result := Result.rotation (center, angle)
		ensure
			Result_exists: Result /= Void
		end

--	make (a_p1, a_p2, a_p3, a_p4: EM_VECTOR_2D; an_height: DOUBLE; a_name: STRING) is
--			-- Sets the corner to `a_p1', `a_p2', `a_p3', `a_p4' and the name to `a_name'.
--			-- Calculates the breadth, width and center.
--		require
--			points_valid: a_p1 /= void and a_p2 /= void and a_p3 /= void and a_p4 /= void
--			name_valid: a_name /= void
--			height_valdi: an_height > 0
--		local
--			random: RANDOM
--			evening_time, sleep_time: DOUBLE
--		do
--			corner1 := a_p1
--			corner2 := a_p2
--			corner3 := a_p3
--			corner4 := a_p4
--			name := a_name
--			angle := 0
--			depth := sqrt((corner1.x-corner2.x)*(corner1.x-corner2.x)+(corner1.y-corner2.y)*(corner1.y-corner2.y))
--			width := sqrt((corner1.x-corner4.x)*(corner1.x-corner4.x)+(corner1.y-corner4.y)*(corner1.y-corner4.y))
--			height := an_height
--			create center.make((corner2.x+corner4.x)/2,(corner1.y+corner3.y)/2)

--			--calculate light times
--			create random.make
--			random.set_seed (out.hash_code)
--			evening_time := 16.0 +(random.double_item*(2).to_double) --18 + interval[0,2]
--			random.forth
--			sleep_time := 21.0 + (random.double_item*(6).to_double) --21 + interval[0,6]
--			light_time := [evening_time, sleep_time]
--		ensure
--			points_set: corner1 = a_p1 and corner2 = a_p2 and corner3 = a_p3 and corner4 = a_p4
--			name_set: name = a_name
--			height_set: height = an_height
--		end

feature -- Status report

	contains_point(a_x: DOUBLE; a_y: DOUBLE): BOOLEAN is
			-- Is point (`a_x', `a_y') inside building?
		local
			delta_x1: DOUBLE
			delta_x2: DOUBLE
		do

			Result := false

			if angle/=0 and angle/=90 then
				delta_x1 := dabs((a_y-corner_2.y)/tangent(pi/2+angle*pi/180))
				delta_x2 := dabs((corner_4.y-a_y)/tangent(pi/2+angle*pi/180))
			else
				delta_x1 := 0
				delta_x2 := 0
			end

			if (a_y >= corner_3.y - 0.1) and (a_y <= corner_1.y + 0.1) then
				if (a_x <= corner_2.x-delta_x1+0.1) and (a_x >= corner_4.x+delta_x2 - 0.1) then
					Result := true
				end
			end

		end

feature -- Element change

	set_description (a_description: STRING) is
			-- Set description to `a_description'.
		require
			a_description_valid: a_description /= void
		do
			description := a_description
			changed_event.publish ([])
		ensure
			description_set: description = a_description
		end

	set_angle (an_angle: DOUBLE) is
			-- Set angle to `a_angle'.
		require
			angle_valid: an_angle >= -70 and an_angle <=70
		do
			angle := an_angle
			changed_event.publish ([])
		ensure
			angle_set: angle = an_angle
		end

	 set_center (a_center: TRAFFIC_COORDINATE) is
	 		-- Set `center' to `a_center'.
	 	require
	 		a_center_valid: a_center /= Void
	 	do
	 		center := a_center
			changed_event.publish ([])
		ensure
			center_set: center = a_center
	 	end

invariant

	angle_valid: angle >= -70 and angle <= 70
	breadth_valid: depth > 0
	width_valid: width > 0
	heigth_valid: height > 0
	is_one_type: is_villa xor is_apartment_building xor is_skyscraper

end
