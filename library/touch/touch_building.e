indexing
	description: "Object that puts a building at a place."
	date: "$Date$"
	revision: "$Revision$"

class
	TOUCH_BUILDING

inherit

	ANY
		redefine
			out
		end

	EM_TIME_SINGLETON
		undefine
			out
		end

	EM_SHARED_SCENE

	TOUCH_TIMING

	TOUCH_3D_CONSTANTS


create make_at_place

feature --Initialization

	make_at_place(a_place: TRAFFIC_PLACE; a_map_widget: TOUCH_3D_MAP_WIDGET) is
			-- Create a building at the location of 'a_place'. 
		require
			a_place /= Void
			a_map_widget /= Void
		local
			p1, p2, p3, p4: EM_VECTOR_2D
			internal_building_height: DOUBLE
			collision_poly: EM_POLYGON_CONVEX_COLLIDABLE
			poly_points: DS_LINKED_LIST[EM_VECTOR_2D]
		do
			internal_place := a_place
			internal_map_widget := a_map_widget
			internal_map := a_map_widget.map
			internal_building_rep := a_map_widget.buildings_representation

			-- make a building at top of position of the place.		
			internal_building_height := 1.0
			create p1.make (map_to_gl_coords(a_place.position).x+0.5, map_to_gl_coords(a_place.position).y+1.5)
			create p2.make (map_to_gl_coords(a_place.position).x+0.5, map_to_gl_coords(a_place.position).y+0.5)
			create p3.make (map_to_gl_coords(a_place.position).x-0.5, map_to_gl_coords(a_place.position).y+0.5)
			create p4.make (map_to_gl_coords(a_place.position).x-0.5, map_to_gl_coords(a_place.position).y+1.5)
			create internal_building.make (p1, p2, p3, p4, internal_building_height, a_place.name)
			internal_building.set_angle (45)

			create poly_points.make
			poly_points.force (p1, 1)
			poly_points.force (p2, 2)
			poly_points.force (p3, 3)
			poly_points.force (p4, 4)
			create collision_poly.make_from_absolute_list (internal_building.center, poly_points)
		--	if not has_collision (collision_poly) then
		--		internal_map_widget.add_building (internal_building)
		--		buildings_polygons.extend(collision_poly)
		--	end
		--	internal_building_rep.draw			
		ensure
			internal_place /= Void
			internal_map_widget /= Void
		end

feature -- Status report

	contains_point(a_x: DOUBLE; a_y: DOUBLE): BOOLEAN is
			-- Is point (`a_x', `a_y') inside building?
		do
			Result := internal_building.contains_point (a_x, a_y)
		end

feature -- Options

	set_id(an_id: INTEGER) is
			-- Set id to `an_id'.		
		do
			internal_building.set_id (an_id)
		end

	set_angle(an_angle: DOUBLE) is
			-- Set angle to `a_angle'.
		do
			internal_building.set_angle (an_angle)
		end

	 set_information(a_information: TRAFFIC_BUILDING_INFORMATION) is
	 		-- Set information to `a_information'.
	 	do
	 		internal_building.set_information (a_information)
	 	end

feature -- Element change

	spotlight is
			-- Spotlight the building.
		do
			internal_map_widget.enable_buildings_shown
			internal_map_widget.buildings_representation.add_building (internal_building)
		end

	spotlight_for_5_seconds is
			-- Spotlight the building and undo the spotlighting after 5 seconds.
		do
			internal_map_widget.enable_buildings_shown
			internal_map_widget.buildings_representation.add_building (internal_building)
			wait(5000)
			undo_spotlight
		end

	undo_spotlight is
			-- Take the spotlighted building out of the building list.
		do
			internal_map_widget.buildings_representation.delete_one_building (internal_building)
		end


feature -- Access

	name: STRING is
			do
				Result := internal_place.name
			end
	position: EM_VECTOR_2D is
			-- Position of touch_building
			do
				Result := internal_place.position
			end

feature -- Implementation

	internal_building: TRAFFIC_BUILDING
			-- Traffic line that gets all the calls

	internal_place: TRAFFIC_PLACE
			-- The place where the building stands at

	internal_map_widget: TOUCH_3D_MAP_WIDGET
			-- Visualization of the map	

	internal_building_rep: TRAFFIC_3D_BUILDING_REPRESENTATION
			-- The building	

	internal_map: TRAFFIC_MAP
			-- The map

end
