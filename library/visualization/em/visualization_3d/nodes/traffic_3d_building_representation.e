indexing
	description: "Object that represents traffic buildings"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_3D_BUILDING_REPRESENTATION

create
	make

feature {NONE} -- Initialization

	make (a_map: TRAFFIC_MAP) is
			-- Initialize and set building factory to be used.
		do
			create building_factory
			create buildings_root.make_as_child((create {TE_3D_SHARED_GLOBALS}).root)
			buildings_root.set_name("buildings")

			a_map.buildings.element_inserted_event.subscribe (agent add_building (?))
			a_map.buildings.element_removed_event.subscribe (agent remove_building (?))
		end

feature -- Access

	buildings_root: TRAFFIC_3D_RENDERABLE_CONTAINER [TRAFFIC_BUILDING]
			-- TE_3D_NODE which is parent of all buildings of this representation and child of the scene_root

	building_factory: TRAFFIC_3D_BUILDING_FACTORY
			-- Factory for daylight buildings

feature -- Insertion

	add_building (a_building: TRAFFIC_BUILDING) is
			-- Add `a_building' to representation.
		require
			building_valid: a_building /= Void
		local
			day_building: TE_3D_MEMBER
			night_building: TE_3D_MEMBER
			setting_vector : EM_VECTOR3D
			t: TRAFFIC_3D_DAYNIGHT_RENDERABLE [TRAFFIC_BUILDING]
			bb: ARRAYED_LIST[EM_VECTOR3D]
			w, d, h: DOUBLE
		do
			if a_building.is_villa then
				t := building_factory.new_villa_member (a_building)
			elseif a_building.is_skyscraper then
				t := building_factory.new_skyscraper_member (a_building)
			else
				t := building_factory.new_apartment_building_member (a_building)
			end

			buildings_root.add_child (t)
		end

feature -- Deletion

	remove_building (a_building: TRAFFIC_BUILDING) is
			-- Delete the building `a_building' from the building list.
		require
			a_building_exists: a_building /= Void
		local
			node: TE_3D_NODE
		do
			if buildings_root.has_child (a_building) then
				node := buildings_root.child_for_item (a_building)
			end
			if node /= Void then
				buildings_root.remove_child (node)
			end
		end

end
