indexing
	description: "Objects that can move around the city freely (do not need to travel on streets)"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_FREE_MOVING

inherit

	TRAFFIC_MOVING

create
	make_with_points

feature -- Initialization

	make_with_points (a_list: DS_ARRAYED_LIST [TRAFFIC_COORDINATE]; a_speed: DOUBLE) is
			-- Set passengers route as `a_list' and speed to `a_speed' (in m/s).
			-- `a_list' is the list of the points where the passenger will go through.
		require
			a_list_not_void: a_list /= Void
			a_speed_not_negative: a_speed >= 0
		do
			create poly_cursor.make (a_list)
			poly_cursor.start
			position := poly_cursor.item
			update_coordinates
			update_angle
			speed := a_speed
		end

end
