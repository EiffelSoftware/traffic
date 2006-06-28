indexing
	description: "Bus"
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
				a_line /= Void
			do
				traffic_type := create {TRAFFIC_TYPE_BUS}.make
							
				create polypoints.make (0)
				line := a_line
				set_line_route(line)
				set_coordinates
				set_angle
				virtual_speed := Default_virtual_speed
				
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
				set_line_route(line)
			ensure
				new_line_set:  line = a_line
			end
			
feature-- Constants
	Default_capacity: INTEGER is 180
		-- Default capacity of a bus.
	Default_virtual_speed: REAL is 1.1
		-- Default speed of a bus.

end
