indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_ROAD

inherit
	TRAFFIC_CONNECTION
	DOUBLE_MATH

create
	make

feature -- Utility

	get_next_road(place_name: STRING; direction: boolean):TRAFFIC_ROAD is
			-- get the road next to the current that end in a_place

		require
			name_not_void: place_name/=Void

		local
			a_road: TRAFFIC_ROAD
			found: boolean
		do
			from
				roads.start
				found:=false
			until
				roads.after and (not found)
			loop
				a_road:=roads.item
				 if (a_road.origin.name=place_name or a_road.destination.name=place_name) then
					Result:=a_road
					found:=true
				end
			end
		ensure
			result_not_void: Result/=Void
		end

	get_random_road(direction: boolean) is
			-- get one random road next to the current
			do

			end

feature{NONE} -- Implementation

	add_road(a_road: TRAFFIC_ROAD) is
			-- add a road to the set of roads next to the current
			require
				not_void: a_road/=Void
			do
				roads.extend (a_road)
			ensure
				has_been_added: roads.last=a_road
			end

	remove_road(a_road: TRAFFIC_ROAD) is
			-- remove a_road from roads
			require
				road_not_void: a_road/=Void
				has_road: roads.has (a_road)

			do
				from
					roads.start
				until
					roads.after
				loop
					if roads.item=a_road then
						roads.remove
					end
					roads.forth
				end

			ensure
				has_been_removed: not roads.has (a_road)
			end

feature{NONE} -- Creation

	make (a_origin, a_destination: TRAFFIC_STOP; a_type: TRAFFIC_TYPE; an_id: INTEGER; a_direction:STRING) is
			-- Initialize `Current'.
			-- If `a_list' is Void, a list of polypoints with the coordinate of `a_origin' and
			-- `a_destination' are generated.
		require
			a_origin_exists: a_origin /= Void
			a_destination_exists: a_destination /= Void
			a_type_exists: a_type /= Void
			an_id_is_valid: an_id>=0
			a_direction_exists: a_direction/=Void
		do
			origin := a_origin
			destination := a_destination
			id:=an_id
			type := a_type
			if a_direction.is_equal("directed") then
				is_directed:=true
			else
				is_directed:=false
			end
			create polypoints.make (2)
			polypoints.extend (a_origin.position)
			polypoints.extend (a_destination.position)
		ensure
			origin_set: origin = a_origin
			destination_set: destination = a_destination
			type_set: type = a_type
			polypoints_exists: polypoints /= Void
		end
	
	
		angle:DOUBLE is	
			-- Returns the angles to the x-axiS.
			local 
				x_difference, y_difference, hypo, quad: DOUBLE
				angle_x: DOUBLE
				origin_point,destination_point: EM_VECTOR_2D
			do
				-- as the x-axis is turned by 180° we have to take this into account
				-- we need the x- and the y difference to calculate the norm
				origin_point:=polypoints.first
				destination_point:=polypoints.last
				x_difference := origin_point.x - destination_point.x
				y_difference := origin_point.y - destination_point.y
				hypo := sqrt ((x_difference * x_difference) + (y_difference * y_difference))
				
				if hypo /= 0 then
					-- arc_sine in radian
					quad := 0
					if  (x_difference >= 0) and (y_difference >= 0) then
						angle_x := arc_sine (x_difference/hypo)
							-- the same in degree
						angle_x := angle_x * 180 / pi
						angle_x := 180 + angle_x	
					elseif (x_difference < 0) and (y_difference >= 0) then
						x_difference := x_difference.abs
						y_difference := y_difference.abs
						angle_x := arc_sine (x_difference/hypo)
							-- the same in degree
						angle_x := angle_x * 180 / pi
						angle_x := 180 - angle_x
					elseif (x_difference < 0) and (y_difference < 0) then
						x_difference := x_difference.abs
						y_difference := y_difference.abs
						angle_x := arc_sine (x_difference/hypo)
							-- the same in degree
						angle_x := angle_x * 180 / pi
					elseif (x_difference >= 0) and (y_difference < 0) then
						x_difference := x_difference.abs
						y_difference := y_difference.abs
						angle_x := arc_sine (x_difference/hypo)
							-- the same in degree
						angle_x := angle_x * 180 / pi
						angle_x := 360 - angle_x
					end
					
					if angle_x < 0 then
						angle_x := 360 + angle_x
					elseif angle_x > 360 then
						angle_x := angle_x - 360
					end
					if angle_x>180 then
						angle_x:=angle_x-180
					end
					Result:=angle_x
				end
				
			end
			




feature -- Basic operation


	hash_code: INTEGER is
			-- Hash code value
		local

		do
		end

feature -- Access

	road_type: TRAFFIC_TYPE

	roads: ARRAYED_LIST[TRAFFIC_ROAD]

	id: INTEGER

	is_directed: BOOLEAN


end
