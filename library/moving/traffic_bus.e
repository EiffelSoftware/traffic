indexing
	description: "Vehicles of type bus"
	date: "$Date: 6/6/2006$"
	revision: "$Revision$"

class
	TRAFFIC_BUS inherit
		TRAFFIC_LINE_VEHICLE
create
	make_with_line

feature -- Initialization	

	make_with_line (a_line: TRAFFIC_LINE) is
			-- Create a bus following `a_line'.
			-- Set unit_capacity and speed to default values.
		require
			a_line_exists: a_line /= Void
			valid_line: is_valid_line (a_line)
		do
			set_line (a_line)
			speed := Default_virtual_speed
			unit_capacity := Default_capacity
		end

feature -- Basic operations

	replace (a_line: TRAFFIC_LINE) is
			-- Serve as replacement bus for `a_line'.
		require
			a_line_not_void: a_line /= void
		do
			set_line (a_line)
		ensure
			new_line_set:  line = a_line
		end

feature-- Constants

	Default_capacity: INTEGER is 180
		-- Default capacity of a bus

	Default_virtual_speed: REAL is 8.0
		-- Default speed of a bus

feature -- Status report

	is_valid_line (a_line: TRAFFIC_LINE): BOOLEAN is
			-- Is `a_line' valid for a tram to move on?
		do
			if a_line.type.is_equal (create {TRAFFIC_TYPE_TRAM}.make) or a_line.type.is_equal (create {TRAFFIC_TYPE_BUS}.make) then
				Result := True
			end
		end


end
