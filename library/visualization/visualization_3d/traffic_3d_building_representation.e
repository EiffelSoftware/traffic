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

creation
	make

feature -- Initialization

	make is
			-- Initialize and set building factory to be used.
		do
			create {TRAFFIC_3D_BUILDING_FANCY_FACTORY} building_factory
			create {TRAFFIC_3D_BUILDING_FANCY_FACTORY} highlighting_factory.make_with_color (create {EM_COLOR}.make_with_rgb (255, 0, 0))
			create buildings.make (1)
			create random.make
			random.start
			id_counter := 1
			create collision_polygons.make (1)
		end

feature -- Access

	collision_polygons: DS_ARRAYED_LIST[EM_POLYGON_CONVEX_COLLIDABLE]
			-- Collision polygons to check for collisions

	number_of_buildings: INTEGER
			-- Count of buildings in the representation

feature	-- Basic operations

	draw is
			-- Draw all buildings.
		local
			i:INTEGER
		do
			if not (buildings = void and number_of_buildings <= 0) then
				from
					i := 1
				until
					i > number_of_buildings
				loop
					buildings.i_th(i).draw
					i := i+1
				end
			end
		end

	highlight_building(a_building: TRAFFIC_BUILDING) is
			-- Highlight `a_building'.
		require
			building_valid: a_building /= void
		local
			temp: EM_3D_OBJECT
		do
			temp := highlighting_factory.create_object
			temp.set_rotation (0, a_building.angle, 0)
			temp.set_origin (a_building.center.x, 0, a_building.center.y)
			buildings.go_i_th (a_building.id)
			buildings.replace (temp)
		end

	unhighlight_building(a_building: TRAFFIC_BUILDING) is
			-- Unhighlight `a_building'.
		require
			building_valid: a_building /= void
		local
			temp: EM_3D_OBJECT
		do
			temp := building_factory.create_object
			temp.set_rotation (0, a_building.angle, 0)
			temp.set_origin (a_building.center.x, 0, a_building.center.y)
			buildings.go_i_th (a_building.id)
			buildings.replace (temp)
		end

	add_building (a_building: TRAFFIC_BUILDING) is
			-- Add `a_building' to representation.
		require
			building_valid: a_building /= Void
		local
			building: EM_3D_OBJECT
		do
			random.forth
			building_factory.set_template ((random.double_item*(building_factory.template_count-1).to_double).rounded +1)
			building := building_factory.create_object
			building.set_rotation (0, a_building.angle, 0)
			building.set_origin (a_building.center.x, 0, a_building.center.y)
			a_building.set_id (id_counter)
			id_counter := id_counter + 1
			buildings.force (building)
			map.add_building (a_building)
			number_of_buildings := number_of_buildings + 1
		end

	delete_buildings is
			-- Delete buildings from representation.
		do
			buildings.wipe_out
			number_of_buildings:= 0
			id_counter:=1
			if map /= void then
				map.delete_buildings
			end
		end

	delete_one_building(a_building: TRAFFIC_BUILDING) is
			-- Delete the building 'a_building' from the building list.
		local
			a_building_origin: EM_3D_VECT
		do
			a_building_origin.set (a_building.center.x, 0, a_building.center.y)

			from
				buildings.start
			until
				buildings.after
			loop
				if
					a_building_origin = buildings.item.origin
				then
					buildings.remove
					buildings.back
				end
				buildings.forth
			end

			map.remove_one_building (a_building)
			number_of_buildings := number_of_buildings - 1
		end

	set_building_number (n: INTEGER) is
			-- Set the number of buildings that are shown.
		require
			n_valid: n >= 0
		do
			number_of_buildings:= n
		ensure
			number_of_buildings = n
			buildings.count >= number_of_buildings
		end

	set_map (a_map: TRAFFIC_MAP) is
			-- set map to `a_map'

		require
			map_exists: a_map /= Void
		do
			map := a_map
		ensure
			map_set: map = a_map
		end

feature {NONE} -- Implementation

	buildings: ARRAYED_LIST [EM_3D_OBJECT]
			-- Buildings in the representation

	building_factory: TRAFFIC_3D_BUILDING_FACTORY
			-- Factory for buildings

	highlighting_factory: TRAFFIC_3D_BUILDING_FACTORY
			-- Factory used to generate representations for highlighted buildings

	map: TRAFFIC_MAP
			-- Map to which the representation belongs

	id_counter: INTEGER
			-- Counter for the ids

	random: RANDOM
			-- randomizer

end
