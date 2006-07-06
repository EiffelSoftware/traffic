indexing
	description: "Tram"
	date: "$Date: 6/6/2006$"
	revision: "$Revision$"

class
	TRAFFIC_TRAM
	
inherit
	TRAFFIC_LINE_VEHICLE

rename
	unit_capacity as engine_capacity 
		-- Capacity of motorized carriage, engine
		
redefine
	capacity end
		-- Inculde the wagons' capacities
	
create
	make_default_with_line, make_with_schedule

feature -- Initialization
	make_default_with_line (a_line: TRAFFIC_LINE) is
			-- Create a tram, set default values for capacity, number of wagons and speed.
			require
				a_line_not_void: a_line /= Void
				valid_line_type: a_line.type.name.is_equal ("tram") or a_line.type.name.is_equal ("rail") or a_line.type.name.is_equal ("bus")
			do
				traffic_type := create {TRAFFIC_TYPE_TRAM}.make
				create polypoints.make (0)
				line := a_line
				set_line_route(line)
				--set_speed(1)
				
				engine_capacity := Default_engine_capacity
				wagon_limitation := Default_wagon_limitation
				wagons := create {ARRAYED_LIST[TRAFFIC_WAGON]}.make(wagon_limitation)
			
				set_coordinates
				set_angle
				virtual_speed := Default_virtual_speed
			end

	make_with_schedule (a_line: TRAFFIC_LINE; a_schedule: TRAFFIC_LINE_SCHEDULE; an_offset: INTEGER) is
			-- Create a line bound vehicle with a schedule.
			require
				line_exists: a_line /= Void
				schedule_exists: a_schedule /= Void
				valid_offset: an_offset >= 0 and an_offset < 60
				valid_line_type: a_line.type.name.is_equal ("tram") or a_line.type.name.is_equal ("rail") or a_line.type.name.is_equal ("bus")
			do
				-- Use the default creation
				make_default_with_line(a_line)
				
				-- Add the schedule.
				schedule := a_schedule
				schedule_offset_minutes := an_offset
				schedule_index := 1
				
				-- Register us in all places we visit
				register_in_place_schedule
				
				-- Set position to first entry in schedule
				set_to_place (schedule.first.line_section.origin)

				-- Never reiterate
				set_reiterate (False)
			ensure
				schedule_set: schedule = a_schedule
				schedule_offset_set: schedule_offset_minutes = an_offset
			end
	
	register_in_place_schedule is
			-- Register the tram in the schedule of every place it visits
			require
				schedule_exists: schedule /= Void
				valid_offset: schedule_offset_minutes >= 0 and schedule_offset_minutes < 60
			local
				time_with_offset: TIME
			do
				from
					schedule.start
				until
					schedule.after
				loop
					-- Use the time from the schedule...
					time_with_offset := schedule.item.start_time.twin
					
					-- ...and add our offset
					time_with_offset.minute_add (schedule_offset_minutes)
					
					-- Register the departure time at the origin place
					schedule.item.line_section.origin.register_in_schedule (Current, time_with_offset, schedule.item.line_section.destination)

					schedule.forth
				end
			end
		

feature -- Access
	wagon_limitation: INTEGER
			--Maximum number of wagons allowed for this engine
	wagons: ARRAYED_LIST[TRAFFIC_WAGON]
			--List of the wagons

feature -- Basic operations
	capacity: INTEGER is
				-- Capacity as the sum of wagons' capacities plus engine_capacity
			local
				cap: INTEGER
			do	
				cap := engine_capacity		
				from
					wagons.start
				until
					wagons.after
				loop
					cap := cap + wagons.item.capacity
					wagons.forth
				end
				wagons.start
				Result := cap
			end
			
	add_wagon is
			-- Attach new wagon.
			require
				wagons_not_full: wagon_limitation >= wagons.count + 1
			local
				wagon: TRAFFIC_WAGON
			do	
				wagon := create {TRAFFIC_WAGON}.make_default
				wagons.force (wagon)
			ensure
				wagon_added: wagons.count = old wagons.count + 1
			end
	
	remove_wagon(i: INTEGER) is
			-- Remove wagon at position i.
			require
				wagons_not_empty: wagons.count > 0
			do	
				wagons.start
				wagons.go_i_th (i)
				wagons.remove
			ensure
				wagon_removed: wagons.count = old wagons.count -1
			end
	
	feature --Constants
		Default_engine_capacity: INTEGER is 200
			-- Default load capacity of the motorized carriage
		Default_wagon_limitation: INTEGER is 2
			-- Default number of wagons attached
		Default_virtual_speed: REAL is 1.0
			-- Default speed
			
invariant
	wagons_not_void: wagons /= void
	wagons_count_allowed: wagon_limitation >= wagons.count
	valid_line_type: line.type.name.is_equal ("tram") or line.type.name.is_equal ("rail") or line.type.name.is_equal ("bus")
	--TODO: change this, use a new objects rail and bus instead
end
