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
		-- load_capacity defines the capacity of a transportation, 
		-- therefore in case of a tram it determines the capacity of the engine, the first waggon of a tram.
		
redefine
	capacity end
		-- the whole capacity of a tram is computed by the redefined 
		-- capacity function inculding the capacities of the waggons.
	
create
	make_default_with_line, make_with_schedule

feature -- Creation
	make_default_with_line (a_line: TRAFFIC_LINE) is
			-- create a line bound vehicle, sets default maximum values for engine_capacity etc.
			require
				a_line_not_void: a_line /= Void
			do
				traffic_type := create {TRAFFIC_TYPE_TRAM}.make
				create polypoints.make (0)
				line := a_line
				set_line_route(line)
				
				engine_capacity := maximum_engine_capacity
				waggon_limitation := maximum_waggon_limitation
				waggons := create {ARRAYED_LIST[TRAFFIC_WAGGON]}.make(waggon_limitation)
			
				set_coordinates
				set_angle
				virtual_speed := maximum_virtual_speed
			end

	make_with_schedule (a_line: TRAFFIC_LINE; a_schedule: TRAFFIC_LINE_SCHEDULE; an_offset: INTEGER) is
			-- create a line bound vehicle for a schedule
			require
				line_exists: a_line /= Void
				schedule_exists: a_schedule /= Void
				valid_offset: an_offset >= 0 and an_offset < 60
			do
				make_default_with_line(a_line)
				
				schedule := a_schedule
				schedule_offset_minutes := an_offset
				
				--tram waits at the first station of the schedule
				set_to_place (schedule.first.line_section.origin)
			ensure
				schedule_set: schedule = a_schedule
				schedule_offset_set: schedule_offset_minutes = an_offset
			end

feature -- Access
	waggon_limitation: INTEGER
			--maximum number of waggons for this engine
	waggons: ARRAYED_LIST[TRAFFIC_WAGGON]
			--List of the waggons

feature -- Basic operations
	capacity: INTEGER is
				-- the capacity is computed as the sum of the waggon's capacities plus the engine_capacity
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
			
	add_waggon is
			-- Attach a new waggon.
			require
				waggons_not_full: waggon_limitation >= waggons.count + 1
			local
				waggon: TRAFFIC_WAGGON
			do	
				waggon := create {TRAFFIC_WAGGON}.make
				waggons.force (waggon)
			ensure
				waggon_added: waggons.count = old waggons.count + 1
			end
	
	remove_waggon(i: INTEGER) is
			-- Remove the waggon at position i
			require
				waggons_not_empty: waggons.count > 0
			do	
				waggons.go_i_th (i)
				waggons.remove
			ensure
				waggon_removed: waggons.count = old waggons.count -1
			end
	
	feature --Constants
		maximum_engine_capacity: INTEGER is 200
			-- the maximum load allowed for engine waggon of a tram.
		maximum_waggon_limitation: INTEGER is 4
			-- the maximum number of waggons allowed to attach at a tram.
		maximum_virtual_speed: INTEGER is 1
			-- the maximum speed allowed for a tram
		
invariant
	waggons_not_void: waggons /= void
	waggon_limitation: waggon_limitation >= maximum_waggon_limitation
	capacity_limitation: engine_capacity <= maximum_engine_capacity
	speed_limitation: virtual_speed <= maximum_virtual_speed
end
