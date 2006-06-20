indexing
	description: "Tram"
	date: "$Date: 6/6/2006$"
	revision: "$Revision$"

class
	TRAFFIC_TRAM
	
inherit
	TRAFFIC_LINE_TRANSPORTATION

rename
	load_capacity as engine_capacity 

redefine
	capacity end
	
create
	make_with_line

	
feature -- Creation

	make_with_line (a_line: TRAFFIC_LINE) is
			-- create a line bound vehicle
			require
				a_line /= Void
			do
				engine_capacity := 30
				line_count := 0
				line := a_line
				waggon_limitation := 3
				waggons := create {ARRAYED_LIST[TRAFFIC_WAGGON]}.make(3)
				traffic_type := create {TRAFFIC_TYPE_TRAM}.make
				speed := 100
				virtual_speed := 0.8
				create polypoints.make (1)
				from 
					line.start
				until
					line.after
				loop
					polypoints.force (line.item.polypoints.first)
					polypoints.force (line.item.polypoints.first)
					polypoints.force (line.item.polypoints.first)
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
			
			end

feature -- Access
	waggon_limitation: INTEGER
			--maximum number of waggons for this engine
	waggons: ARRAYED_LIST[TRAFFIC_WAGGON]
			--List of the waggons

feature -- Basic operations
	capacity: INTEGER is
				-- the capacity is computed as the sum of the waggon's capacities
			local
				cap: INTEGER
			do	
				cap := engine_capacity		
				from
					waggons.start
				until
					waggons.after
				loop
					cap := cap + waggons.capacity
				end
				Result := cap
			end
	
	reroute(newPoints: ARRAYED_LIST [EM_VECTOR_2D]; start: TRAFFIC_PLACE) is
			-- Reroute the tram when the line is interrupted.
			do
				--tram travels back on his line to start.
				--from start uses new points.
				--ensure polypoints lay on other tram lines.
				--tram follows strict other tram lines.
			end
			
	add_waggon is
			-- Attach a new waggon.
			require
				waggon_limitation >= waggons.count + 1
			local
				waggon: TRAFFIC_WAGGON
			do	
				waggon := create {TRAFFIC_WAGGON}.make
				waggons.force (waggon)
			ensure
				waggons.count = old waggons.count + 1
			end
	
	remove_waggon(i: INTEGER) is
			-- Remove the waggon at position i
			require
				waggons.count > 0
			do	
				waggons.go_i_th (i)
				waggons.remove
			ensure
				waggons.count = old waggons.count -1
			end
				
invariant
	waggons /= void
	waggon_limitation >= 0
	engine_capacity <= 200
	speed <= 100
end
