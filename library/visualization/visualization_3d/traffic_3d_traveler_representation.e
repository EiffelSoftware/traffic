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

	EM_SHARED_BITMAP_FACTORY
		export {NONE} all end


create
	make

feature -- Initialization

	make (a_map: TRAFFIC_MAP) is
			-- Initialize with `a_map' as the map on which the travelers are on.
		require
			map_exists: a_map /= Void
		do
			map := a_map
			create collision_polygons.make (1)
			create traveler_factory.make
			create travelers.make
			traveler_key := 0
			create scheduler.make ("timetable_tram.xml")
			scheduler.load_schedule
		ensure
			travelers_created: travelers /= Void
			map_set: map = a_map
		traveler_factory_set: traveler_factory /= Void
		end

feature -- Basic operations

	update is
			-- Draw all travelers.
		local
			a_traveler: TUPLE[TE_3D_NODE, TRAFFIC_MOVING]
			graphic: TE_3D_NODE
			info: TRAFFIC_MOVING
			rotation: EM_QUATERNION
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
--					if info.is_marked then
--						-- draw marked travelers bigger.
--						graphic.set_scale (0.6, 0.6, 0.6)
--					else
--						graphic.set_scale(0.3, 0.3, 0.3)
--					end
					graphic.transform.reset
					graphic.transform.set_position (info.position.x, traveler_offset, info.position.y)
					graphic.transform.rotate(0.0,1.0,0.0,info.angle_x)
					travelers.forth
				end
			end
		end

	add_traveler (a_traveler: TRAFFIC_MOVING; a_map: TRAFFIC_MAP) is
			-- Add a passenger that walks from origin to destination with 'speed'.
		require
			a_traveler /= Void
			a_map /= Void
		local
			texture_ids: ARRAY[INTEGER]
			traffic_model: TE_3D_NODE
			bitmap: EM_BITMAP
			s: STRING
			fs: KL_FILE_SYSTEM
		do
			a_traveler.set_index (traveler_key)
			traveler_key := traveler_key + 1
				-- set the key for the traveler here
			fs := (create {KL_SHARED_FILE_SYSTEM}).file_system

			if a_traveler.traffic_type.name.is_equal ("walking") then
				if person_toggle = 0 then
					--traveler_factory.set_color (create {GL_VECTOR_3D[REAL]}.make_xyz(0, 0, .7))
					traffic_model := traveler_factory.create_traveler("man")
					person_toggle := 1
				else
					--traveler_factory.set_color (create {GL_VECTOR_3D[REAL]}.make_xyz(0.7, 0, .2))
					traffic_model := traveler_factory.create_traveler("woman")
					person_toggle := 0
				end
			elseif a_traveler.traffic_type.name.is_equal ("tram") then
--				s := fs.pathname ("..", "objects")
--				s := fs.pathname (s, "tram2000.tga")
--				bitmap_factory.create_bitmap_from_image(s)
--				bitmap := bitmap_factory.last_bitmap
--				create texture_ids.make (0,0)
--				texture_ids.force (bitmap.texture.id, 0)
				traffic_model := traveler_factory.create_traveler("tram")
			elseif a_traveler.traffic_type.name.is_equal ("event taxi") then
				--TODO: Change this to color associated with a taxi office. Each taxi office has a
				--different color.
--				traveler_factory.set_color (traveler_factory.default_color)

				traffic_model := traveler_factory.create_traveler("taxi")
			elseif a_traveler.traffic_type.name.is_equal ("dispatcher taxi") then
				--TODO: Change this to color associated with a taxi office. Each taxi office has a
				--different color.
--				traveler_factory.set_color (create {GL_VECTOR_3D [REAL]}.make_xyz (1.0, 0, 0))

				traffic_model := traveler_factory.create_traveler("taxi")
			else
--				traveler_factory.set_color (create {GL_VECTOR_3D[REAL]}.make_xyz(0, 1.0, 0))
				traffic_model := traveler_factory.create_traveler("error")

			end
			traffic_model.make_child_of ((create{TE_3D_SHARED_GLOBALS}).root) --insert it into the hierarchy
			traffic_model.transform.set_position (a_traveler.position.x, traveler_offset, a_traveler.position.y)
			traffic_model.transform.rotate (0.0, 1.0, 0.0, a_traveler.angle_x)
			time.add_callback_tour (agent a_traveler.take_tour)
			travelers.force ([traffic_model, a_traveler])
			a_map.add_traveler (a_traveler)

		end

		remove_traveler is
				-- Remove any passenger.
			require
				travelers_valid: travelers /= Void and then not travelers.is_empty
			local
				has_finished: BOOLEAN
				traveler: TRAFFIC_MOVING
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

		remove_specific_traveler (a_traveler: TRAFFIC_MOVING) is
				-- Remove representation for `a_traveler'.
			require
				a_traveler_exists: a_traveler /= Void
			local
				found: BOOLEAN
				traveler: TRAFFIC_MOVING
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
				-- Add `number' trams per line to the map `a_map'.
			require
				a_map_exists: a_map /= Void
				number_valid: number > 0
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
					if lines.item_for_iteration.type.name.is_equal ("tram") or lines.item_for_iteration.type.name.is_equal ("rail") or lines.item_for_iteration.type.name.is_equal ("bus") then
						create a_tram.make_default_with_line (lines.item_for_iteration)
						from
							i := 1
							create a_tram.make_default_with_line (lines.item_for_iteration)
						until
							i > number or i = a_tram.line_count
						loop
							create a_tram.make_default_with_line (lines.item_for_iteration)
							a_tram.set_to_place (a_tram.place (i))
							add_traveler (a_tram, a_map)
							i := i + 1
						end
					end
					lines.forth
				end
			end

		add_tram_per_line_with_schedule (a_map: TRAFFIC_MAP; number: INTEGER) is
				-- Add `number' of trams per line with an automatically generated schedule.
			require
				a_map_exists: a_map /= Void
				number_valid: number > 0
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
					if lines.item_for_iteration.type.name.is_equal ("tram") or lines.item_for_iteration.type.name.is_equal ("rail") or lines.item_for_iteration.type.name.is_equal ("bus") then
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
					end
					lines.forth
				end
			end


feature -- Access

	travelers: LINKED_LIST [TUPLE[TE_3D_NODE, TRAFFIC_MOVING]]
			-- Container for all traveler.		

	collision_polygons: ARRAYED_LIST[EM_POLYGON_CONVEX_COLLIDABLE]
			-- Collision polygons to check for collisions


feature{NONE} -- Implementation

	traveler_key: INTEGER
			-- Key for travelers

	traveler_factory: TRAFFIC_3D_TRAVELER_FACTORY
			-- factory to create the travelers

	map: TRAFFIC_MAP
			-- Map on which travelers walk around

	traveler_offset: DOUBLE is 0.0
			-- Offset of the traveler objects over map

	person_toggle: INTEGER
			-- Toggle between man and woman (0: man; 1: woman)

	scheduler: TRAFFIC_SCHEDULE_LOADER
			-- Timetable from xml file

invariant

	collosion_polygons_valid: collision_polygons /= Void
	travelers_valid: travelers /= Void

end
