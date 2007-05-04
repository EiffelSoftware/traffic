indexing
	description: "Object that represents traffic buildings"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_3D_BUILDING_REPRESENTATION

inherit
	EM_CONSTANTS
		 export {NONE} all end

	GL_FUNCTIONS
		export {NONE} all end

	GLU_FUNCTIONS
		export {NONE} all end

	TRAFFIC_3D_CONSTANTS
		export {NONE} all end

	MATH_CONST
		export {NONE} all end

	DOUBLE_MATH
		export {NONE} all end

	EM_SHARED_BITMAP_FACTORY
		export {NONE} all end

	TRAFFIC_SHARED_TIME

creation
	make

feature -- Initialization

	make (a_map: TRAFFIC_MAP) is
			-- Initialize and set building factory to be used.
		do
			create building_factory
			building_factory.set_template_names (Building_directory, Building_files)
			create buildings_root.make_as_child((create {TE_3D_SHARED_GLOBALS}).root)
			buildings_root.set_name("buildings")

			a_map.buildings.element_inserted_event.subscribe (agent add_building (?))
			a_map.buildings.element_removed_event.subscribe (agent remove_building (?))
--			create buildings.make
			--create random.make
			--random.start
--			id_counter := 1
		end

feature -- Access

--	collision_polygons: DS_ARRAYED_LIST[EM_POLYGON_CONVEX_COLLIDABLE]
			-- Collision polygons to check for collisions

--	number_of_buildings: INTEGER
			-- Count of buildings in the representation

	buildings_root: TE_3D_NODE
			-- TE_3D_NODE which is parent of all buildings of this representation and child of the scene_root

	building_factory: TRAFFIC_3D_BUILDING_DAYNIGHT_FACTORY
			-- Factory for daylight buildings

--feature	-- Basic operations

--	update is
--			-- loops through all buildings and checks wether the day or the night model is shown
--		require
--			time_exists: time /= Void
--		local
--			current_building: TRAFFIC_BUILDING
--			current_day_model: TE_3D_NODE
--			current_night_model: TE_3D_NODE
--			current_time: DOUBLE
--			evening_time, sleep_time: DOUBLE
--		do
--			current_time := time.actual_time.hour.to_double + time.actual_time.minute.to_double/60.0
--			from
--				buildings.start
--			until
--				buildings.after
--			loop
--				current_day_model ?= buildings.item.item(1)
--				current_night_model ?= buildings.item.item(2)
--				current_building ?= buildings.item.item(3)
--				evening_time ?= current_building.light_time.item(1)
--				sleep_time ?= current_building.light_time.item(2)

--				if (current_time >= evening_time and current_time <= sleep_time) or (current_time + 24.0 >= evening_time and current_time + 24.0 <= sleep_time) then
--					current_night_model.enable_hierarchy_renderable
--					current_day_model.disable_hierarchy_renderable
--				else
--					current_day_model.enable_hierarchy_renderable
--					current_night_model.disable_hierarchy_renderable
--				end

--				buildings.forth
--			end
--		end

feature -- Insertion

	add_building (a_building: TRAFFIC_BUILDING) is
			-- Add `a_building' to representation.
		require
			building_valid: a_building /= Void
		local
			day_building: TE_3D_MEMBER
			night_building: TE_3D_MEMBER
			setting_vector : EM_VECTOR3D
			t: TRAFFIC_3D_RENDERABLE [TRAFFIC_BUILDING]
		do
			t := building_factory.new_random_building (a_building)
			buildings_root.add_child (t)
--			day_building ?= building_day_factory.create_building
--			day_building.transform.rotate (0,1,0,a_building.angle)
--			day_building.transform.set_position (a_building.center.x,0,a_building.center.y)
--			building_night_factory.set_template(building_day_factory.template)
--			night_building ?= building_night_factory.create_building
--			night_building.transform.rotate (0,1,0,a_building.angle)
--			night_building.transform.set_position (a_building.center.x,0,a_building.center.y)
--			night_building.disable_hierarchy_renderable

--			day_building.enable_shadow_casting

--			a_building.set_id (id_counter)
--			id_counter := id_counter + 1
--			buildings_root.add_child (day_building)
--			buildings_root.add_child (night_building)
--			buildings.force ([day_building, night_building, a_building])
--			map.add_building (a_building)
--			number_of_buildings := number_of_buildings + 1
		end

	add_building_with_template (a_building: TRAFFIC_BUILDING; a_template: INTEGER) is
			-- Add `a_building' with template `a_template' to representation.
		require
			building_valid: a_building /= Void
		local
			day_building: TE_3D_MEMBER
			night_building: TE_3D_MEMBER
			setting_vector : EM_VECTOR3D
		do
--			building_day_factory.set_template (a_template)
--			day_building ?= building_day_factory.create_building
--			day_building.transform.rotate (0,1,0,a_building.angle)
--			day_building.transform.set_position (a_building.center.x,0,a_building.center.y)
--			building_night_factory.set_template(a_template)
--			night_building ?= building_night_factory.create_building
--			night_building.transform.rotate (0,1,0,a_building.angle)
--			night_building.transform.set_position (a_building.center.x,0,a_building.center.y)
--			night_building.disable_hierarchy_renderable

--			day_building.enable_shadow_casting

--			a_building.set_id (id_counter)
--			id_counter := id_counter + 1
--			buildings_root.add_child (day_building)
--			buildings_root.add_child (night_building)
--			buildings.force ([day_building, night_building, a_building])
--			map.add_building (a_building)
--			number_of_buildings := number_of_buildings + 1
		end

feature -- Deletion

	remove_building (a_building: TRAFFIC_BUILDING) is
			-- Delete the building 'a_building' from the building list.
		local
			current_building: TRAFFIC_BUILDING
			current_day_building: TE_3D_NODE
			current_night_building: TE_3D_NODE
		do

--			from
--				buildings.start
--			until
--				buildings.after
--			loop
--				current_building ?= buildings.item.item(3)
--				if
--					current_building = a_building
--				then
--					current_day_building ?= buildings.item.item(1)
--					current_night_building ?= buildings.item.item(2)
--					buildings_root.children.start
--					buildings_root.children.prune(current_day_building)
--					buildings_root.children.start
--					buildings_root.children.prune(current_night_building)
--					buildings.remove
--				else
--					buildings.forth
--				end
--			end

--			map.remove_one_building (a_building)
--			number_of_buildings := number_of_buildings - 1
		end

feature -- Status report

	width_of_template (a_template: INTEGER): DOUBLE is
		-- width of all buildings of type `a_template'
		require
			valid_template: a_template > 0 and a_template <= building_factory.count
		local
			p1,p2: EM_VECTOR3D
		do
--			p1:=building_day_factory.building_templates.i_th (a_template).hierarchy_bounding_box.i_th (2)
--			p2:=building_day_factory.building_templates.i_th (a_template).hierarchy_bounding_box.i_th (3)
--			Result:= (p1-p2).length
		end

	breadth_of_template (a_template: INTEGER): DOUBLE is
		-- breadth of all buildings of type `a_template'
		require
			valid_template: a_template > 0 and a_template <= building_factory.count
		local
			p2,p3: EM_VECTOR3D
		do
--			p2:=building_day_factory.building_templates.i_th (a_template).hierarchy_bounding_box.i_th (1)
--			p3:=building_day_factory.building_templates.i_th (a_template).hierarchy_bounding_box.i_th (2)
--			Result:= (p2-p3).length
		end

--	templates_count: INTEGER is
--			-- get number of building templates
--		do
----			Result := building_day_factory.template_count
--		end

--	delete_buildings is
--			-- Delete buildings from representation.
--		do
----			buildings_root.children.wipe_out
----			buildings.wipe_out
----			number_of_buildings:= 0
----			id_counter:=1
----			if map /= void then
----				map.delete_buildings
----			end
--		end


--	set_building_number (n: INTEGER) is
--			-- Set the number of buildings that are shown.
--		require
--			n_valid: n >= 0
--		do
--			number_of_buildings:= n
--		ensure
--			number_of_buildings = n
--			buildings.count >= number_of_buildings
--		end

--	set_map (a_map: TRAFFIC_MAP) is
--			-- set map to `a_map'

--		require
--			map_exists: a_map /= Void
--		do
--			map := a_map
--		ensure
--			map_set: map = a_map
--		end

--feature {NONE} -- Implementation

	--buildings: ARRAYED_LIST [EM_3D_OBJECT]
			-- Buildings in the representation


--	buildings: LINKED_LIST [TUPLE[TE_3D_NODE, TE_3D_NODE, TRAFFIC_BUILDING]]
			-- Container for all traveler.	


--	building_night_factory: TRAFFIC_3D_BUILDING_FACTORY_NEW
			-- Factory for nightlight buildings

	--highlighting_factory: TRAFFIC_3D_BUILDING_FACTORY
			-- Factory used to generate representations for highlighted buildings

--	map: TRAFFIC_MAP
--			-- Map to which the representation belongs

--	id_counter: INTEGER
--			-- Counter for the ids

	--random: RANDOM
			-- randomizer

end
