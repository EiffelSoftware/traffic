indexing
	description: "Objects that ..." --TODO
	author: ""
	date: "$Date: 6/6/2006$"
	revision: "$Revision$"

class
	TRAFFIC_BUS

inherit
	TRAFFIC_LINE_TRANSPORTATION
create
	make_with_line
	
feature -- Creation
		
	make_with_line (a_line: TRAFFIC_LINE) is
			-- create a line bound vehicle
			require
				a_line /= Void
			do
				--TODO: code reordering
				traffic_type := create {TRAFFIC_TYPE_BUS}.make				
				line_count := 0
				line := a_line
				create polypoints.make (1)
				--TODO: this next loop could maybe be defined in the father? duplicate code warning!
				from 
					line.start
				until
					line.after
				loop
					polypoints.force (line.item.polypoints.first)
					polypoints.force (line.item.polypoints.first)
					polypoints.force (line.item.polypoints.first)
					polypoints.force (line.item.polypoints.first)
					polypoints.force (line.item.polypoints.first)
					polypoints.force (line.item.polypoints.first)
					-- TODO add stations to a stations array
					-- TODO: change this
					-- this is that a tram stops for a short time at each place
					polypoints.append (line.item.polypoints)
					line_count := line_count + 1
					line.forth
				end
				line_count := line_count + 1
				polypoints.force (polypoints.last)
				polypoints.force (polypoints.last)
				polypoints.force (polypoints.last)
				-- same as in the loop
				
				polypoints.start
				polypoints.forth
				polypoints.forth
				polypoints.forth
				set_coordinates
				set_angle
				-- future implementations should tae care of this
				-- traffic_type := line.type
				virtual_speed := 0.8
			end

feature -- Implementation
	
feature -- Basic operations
	
		
	reroute(newPoints: ARRAYED_LIST [EM_VECTOR_2D]; start: TRAFFIC_PLACE) is
			-- Reroute the tram when the line is interrupted.
			do
				--bus travels to start, can use all streets.
				--from start uses new points.
				--polypoints do not have to lay on a line
			end
	
	replace(a_line: TRAFFIC_LINE) is
			-- serve as replacement bus for an other traffic line.
			do
				-- TODO: guess what...
			end


invariant
	--TODO: condition names
	--TODO: maybe constants for 180 and 120
	capacity <= 180
	speed <= 120
end
