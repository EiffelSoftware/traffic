indexing
	description: "Objects that represent the travelers on the map"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_3D_TRAVELER_REPRESENTATION
inherit
	
	TRAFFIC_3D_CONSTANTS
		export {NONE} all end

	DOUBLE_MATH
		export {NONE} all end
		
	EM_CONSTANTS
		export {NONE} all end

	GL_FUNCTIONS
		export {NONE} all end

	GLU_FUNCTIONS
		export {NONE} all end

	TRAFFIC_SHARED_TIME
		
create
	make

feature -- Initialization
	
	make (a_map: TRAFFIC_MAP) is
			-- Create a new object.
		require
			map_exists: a_map /= Void
		do
			map := a_map
			create centre.make_xyz (0, 0, 0)
				
			create collision_polygons.make (1)		
			
			create traveler_factory.make_with_color (0, 0, 0)
			
			create travelers.make
			traveler_key := 0
			
			create scheduler.make ("timetable_tram.xml")
			scheduler.load_schedule
		ensure
			travelers_created: travelers /= Void
			map /= Void
		end
		
feature{TRAFFIC_3D_MAP_WIDGET} -- Interface
	
	draw is
			-- draw all travelers.
		local
			a_traveler: TUPLE[EM_3D_OBJECT, TRAFFIC_TRAVELER]
			graphic: EM_3D_OBJECT
			info: TRAFFIC_TRAVELER
		do
			
			from
				travelers.start
			until
				travelers.after
			loop
				-- set up the local variables
				a_traveler := travelers.item
				graphic ?= a_traveler @ 1
				info ?= a_traveler @ 2
				
				if (graphic /= Void) and (info /= Void) then
					-- we have to check so that no errors happen
					if info.is_marked then
						-- draw marked travelers bigger.
						graphic.set_scale (0.6, 0.6, 0.6)
					else
						graphic.set_scale(0.3, 0.3, 0.3)
					end
					graphic.set_origin (info.position.x, traveler_offset, info.position.y)
					graphic.set_rotation (0, info.angle_x, 0)
					graphic.draw
					if not travelers.after then
					travelers.forth
					end
				end
			end
		end
			
feature -- Collision detection

	collision_polygons: ARRAYED_LIST[EM_POLYGON_CONVEX_COLLIDABLE]
		-- Collision polygons to check for collisions with traffic lines.
	
feature --{TRAFFIC_3D_MAP_WIDGET} -- Implemenation
		
		add_traveler (a_traveler: TRAFFIC_TRAVELER; a_map: TRAFFIC_MAP) is
				-- a passenger walks from origin to destination with 'speed'.
				require
					a_traveler /= Void
					a_map /= Void
				local
					traveler: EM_3D_OBJECT
				do
	
					a_traveler.set_index (traveler_key)
					traveler_key := traveler_key + 1
						-- set the key for the traveler here
						
					if a_traveler.traffic_type.name.is_equal ("walking") then
						if person_toggle = 0 then
							traveler_factory.set_em_color (255, 0, 0)						
							traveler_factory.load_file ("objects/man.obj")
							person_toggle := 1
						else	
							traveler_factory.set_em_color (200, 0, 100)					
							traveler_factory.load_file ("objects/woman.obj")
							person_toggle := 0
						end
						traveler := traveler_factory.create_object							
						traveler.set_scale (0.3, 0.3, 0.3)
					elseif a_traveler.traffic_type.name.is_equal ("tram") then
						traveler_factory.set_em_color (0, 0, 255)
						traveler_factory.load_file ("objects/tram.obj")
						traveler := traveler_factory.create_object
						traveler.set_scale (0.3, 0.3, 0.3)
					--TODO: change this to color associated with a taxi office. each taxi office has a 
					--different color.
					--Current situation: only different colors for different types of taxi.
					elseif a_traveler.traffic_type.name.is_equal("event taxi") then
						traveler_factory.set_em_color (255, 255, 0)
						traveler_factory.load_file ("objects/woman.obj")
						traveler := traveler_factory.create_object
						traveler.set_scale (0.3, 0.3, 0.3)
					elseif a_traveler.traffic_type.name.is_equal("dispatcher taxi") then
						traveler_factory.set_em_color (0, 255 , 255)
						traveler_factory.load_file ("objects/woman.obj")
						traveler := traveler_factory.create_object
						traveler.set_scale (0.3, 0.3, 0.3)
					end	
					traveler.set_origin (a_traveler.position.x, traveler_offset, a_traveler.position.y)
					traveler.set_rotation (0, a_traveler.angle_x, 0)					
					time.add_callback_tour (agent a_traveler.take_tour)
					travelers.force ([traveler, a_traveler])
					a_map.add_traveler (a_traveler)	
					
				end
			
		remove_traveler is	
				-- remove a passenger.
				require
					not travelers.is_empty
				local
					has_finished: BOOLEAN
					traveler: TRAFFIC_TRAVELER
				do
					from
						travelers.start
					until
						travelers.after or has_finished
					loop
						traveler ?= travelers.item @ 2
						if traveler.traffic_type.name.is_equal ("walking") then
							travelers.remove
							has_finished := True
						else
							travelers.forth
						end
					end
				end
				
		remove_specific_traveler (a_traveler: TRAFFIC_TRAVELER) is
				-- remove a traveler
				require
					a_traveler /= Void
				local
					found: BOOLEAN
					traveler: TRAFFIC_TRAVELER
				do
					from
						travelers.start
					until
						found = True or travelers.after
					loop
						traveler ?= travelers.item @ 2
						if traveler = a_traveler then
							travelers.remove
							map.remove_traveler (a_traveler.index)
							found := True
						else
							travelers.forth
						end
					end
				end
			
		
		
		add_tram_per_line (a_map: TRAFFIC_MAP; number: INTEGER) is	
				-- add 'number' or max trams to the lines.
				require
					a_map /= Void
					number > 0
				local
					lines: HASH_TABLE[TRAFFIC_LINE, STRING]
					a_tram: TRAFFIC_TRAM
					traveling_points: LINKED_LIST [EM_VECTOR_2D]
					i: INTEGER
				do
					lines := a_map.lines
					create traveling_points.make
					from
						lines.start
					until
						lines.after
					loop	
						create a_tram.make_default_with_line (lines.item_for_iteration)
						from
							i := 1
							create a_tram.make_default_with_line (lines.item_for_iteration)
						until
							i > number or i = a_tram.line_count
						loop
							create a_tram.make_default_with_line (lines.item_for_iteration)
							a_tram.set_to_place (a_tram.get_place (i))
							add_traveler (a_tram, a_map)
							i := i + 1
						end
						
						lines.forth
						
					end
				end
	
		add_tram_per_line_with_schedule (a_map: TRAFFIC_MAP; number: INTEGER) is	
				-- add 'number' or max trams to the lines with an automatic generated schedule
				require
					a_map /= Void
					number > 0
				local
					lines: HASH_TABLE[TRAFFIC_LINE, STRING]
					a_tram: TRAFFIC_TRAM
					i: INTEGER
					schedule: TRAFFIC_LINE_SCHEDULE
					offset_step: INTEGER
				do										
					-- every tram has an offset which describes how many minutes it travels behind the schedule
					offset_step := (60 / number).rounded
					
					lines := a_map.lines
					from
						lines.start
					until
						lines.after
					loop	
						-- create a schedule for the line
						create schedule.make_for_line (lines.item_for_iteration,scheduler)
						
						-- create the number of trams
						from
							i := 1
						until
							i > number
						loop
							create a_tram.make_with_schedule (lines.item_for_iteration, schedule, offset_step * (i - 1))
							add_traveler (a_tram, a_map)
							i := i + 1
						end
					
						lines.forth
					end
				end

	
feature --{TRAFFIC_3D_MAP_WIDGET}

	travelers: LINKED_LIST [TUPLE[EM_3D_OBJECT, TRAFFIC_TRAVELER]]		
		-- Container for all traveler.		
		
feature{NONE} -- Attributes

	traveler_key: INTEGER
		-- key for travelers.

	traveler_factory: TRAFFIC_3D_OBJECT_LOADER
		-- factory for travelers.

	color: GL_VECTOR_3D[DOUBLE]
		-- color of the place.
		
	centre: GL_VECTOR_3D[DOUBLE]
		-- Centre of the city.
		
	map: TRAFFIC_MAP
		-- city map.

	traveler_offset: DOUBLE is 0.0
		-- offset of the traveler objects over map.
		
	person_toggle: INTEGER
		-- if 0 then man otherwise woman
	
	scheduler: TRAFFIC_SCHEDULE_LOADER
		-- timetable from xml file

invariant
	TR_TR_REP_centre_set: centre /= Void
	TR_TR_REP_collosion_polygons_valid: collision_polygons /= Void
	TR_TR_REP_travelers_valid: travelers /= Void
	

end	
