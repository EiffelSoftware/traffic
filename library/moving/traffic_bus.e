indexing
	description: "Vehicles of type bus"
	date: "$Date: 6/6/2006$"
	revision: "$Revision$"

class
	TRAFFIC_BUS inherit
		TRAFFIC_LINE_VEHICLE
create
	make_default_with_line

feature -- Initialization	

	make_default_with_line (a_line: TRAFFIC_LINE) is
			-- Create a bus following 'a_line'.
			-- Set unit_capacity and speed to default values.
		require
			a_line_exists: a_line /= Void
		do
			traffic_type := create {TRAFFIC_TYPE_BUS}.make

			create polypoints.make (0)
			create poly_cursor.make (polypoints)
			poly_cursor.start
			line := a_line
			--TODO? commented because it won't compile set_line_route(line)
			update_coordinates
			update_angle
			speed := Default_virtual_speed
			unit_capacity := Default_capacity
		end

feature -- Basic operations

	replace(a_line: TRAFFIC_LINE) is
			-- Serve as replacement bus for 'a_line'.
		require
			a_line_not_void: a_line /= void
		do
			line := a_line
			polypoints.wipe_out
			-- won't compile: set_line_route(line)
		ensure
			new_line_set:  line = a_line
		end

feature-- Constants

	Default_capacity: INTEGER is 180
		-- Default capacity of a bus

	Default_virtual_speed: REAL is 20.0
		-- Default speed of a bus

end
