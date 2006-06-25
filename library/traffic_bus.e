indexing
	description: "Bus"
	author: "Sarah Hauser"
	date: "$Date: 6/6/2006$"
	revision: "$Revision$"

class
	TRAFFIC_BUS

inherit
	TRAFFIC_LINE_TRANSPORTATION
create
	make_default_with_line
	
feature -- Creation
		
	make_default_with_line (a_line: TRAFFIC_LINE) is
			-- creates a line bound bus, following the line a_line
			-- sets default maximum values for load_capacity etc.
			require
				a_line /= Void
			do
				traffic_type := create {TRAFFIC_TYPE_BUS}.make			
				create polypoints.make (0)
				line := a_line
				set_line_route(line)
			
				load_capacity := maximum_capacity
				set_coordinates
				set_angle
				virtual_speed := maximum_virtual_speed
			end
	
feature -- Basic operations
	
	replace(a_line: TRAFFIC_LINE) is
			-- serve as replacement bus for an other traffic line.
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
	maximum_capacity: INTEGER is 180
		-- the maximum load allowed for a bus
	maximum_virtual_speed: REAL is 1.2
		-- the maximum speed allowed for a bus

invariant
	capacity_limitaion: capacity <= maximum_capacity
	speed_limitation: virtual_speed <= maximum_virtual_speed
end
