indexing
	description: "Objects that ..."
	author: "Fabian Wüest"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_BUILDING_REPRESENTATION

inherit
	EM_CONSTANTS
		 export {NONE} all end
	
	GL_FUNCTIONS
		export {NONE} all end	
		
	GLU_FUNCTIONS
		export {NONE} all end
	
	TRAFFIC_3D_CONSTANTS
		export {NONE} all end
	

creation
	make

feature
	make is
			-- Create a new object
		do
			create centre.make_xyz (0,0,0)
			create building_factory.make(agent representation)
			create buildings.make (1)
			create wall_color.make_xyz (0.5,0.5,0.5)
			create roof_color.make_xyz (1.0,0,0)
			create randomizer.set_seed (42)
		end
		
feature	

	draw is
			-- draw all buildings
		local				
			i:INTEGER
		do
			
			if not (buildings = void and number_of_buildings <= 0) then
				from
					--buildings.start
					i:= 1
				until
					--buildings.after
					i > number_of_buildings
				loop
					buildings.i_th(i).draw
					--buildings.forth
					i:=i+1
				end
			end
		end
		
		
	highlight_building(a_building: TRAFFIC_BUILDING) is
			-- highlight `a_building'
		require
			building_valid: a_building /= void
		local
			temp: EM_3D_OBJECT
		do
			wall_color.set_xyz (1.0,1.0,0)
			roof_color.set_xyz (0,1.0,1.0)
			building_factory.changed
			temp:= building_factory.create_object
			temp.set_origin (a_building.x1,0,a_building.y2)
			temp.set_scale (0.25,0.25,0.25)
			buildings.go_i_th (a_building.id)
			buildings.replace (temp)
			wall_color.set_xyz (0.5,0.5,0.5)
			roof_color.set_xyz (1.0,0,0)
			building_factory.changed
		end
		
		
	un_highlight_building(a_building: TRAFFIC_BUILDING) is
			-- unhighlight `a_building'
		require
			building_valid: a_building /= void
		local
			temp: EM_3D_OBJECT
		do
			temp:= building_factory.create_object
			temp.set_origin (a_building.x1,0,a_building.y2)
			temp.set_scale (0.25,0.25,0.25)
			buildings.go_i_th (a_building.id)
			buildings.replace (temp)
		end
	
	set_map (a_map: TRAFFIC_MAP) is
			-- set map to `a_map'
		require 
			map_exists: a_map /= Void
		do
			map:= a_map
		end
		
		
	representation is
			-- 
		do
			
			gl_begin(Em_gl_polygon)
			
				--Front
				gl_color3dv(wall_color.pointer)
				gl_normal3b(0,0,1)
				gl_vertex3d(0,0,0)
				gl_vertex3d(1,0,0)
				gl_vertex3d(1,1,0)
				gl_vertex3d(0.5,1.25,0)
				gl_vertex3d(0,1,0)
			gl_end
			
				
			gl_begin(Em_gl_polygon)
				--Back
				gl_normal3b(0,0,-1)
				gl_vertex3d(0,0,-1)				
				gl_vertex3d(1,0,-1)
				gl_vertex3d(1,1,-1)
				gl_vertex3d(0.5,1.25,-1)				
				gl_vertex3d(0,1,-1)
			gl_end
				
			gl_begin(Em_gl_quads)	
				--Left
				gl_normal3b(-1,0,0)
				gl_vertex3d(0,0,0)				
				gl_vertex3d(0,1,0)
				gl_vertex3d(0,1,-1)				
				gl_vertex3d(0,0,-1)

				--Right
				gl_normal3b(1,0,0)
				gl_vertex3d(1,0,0)	
				gl_vertex3d(1,0,-1)
				gl_vertex3d(1,1,-1)
				gl_vertex3d(1,1,0)
				
				--Roof
				--Right
				gl_color3dv(roof_color.pointer)
				gl_normal3d(0.5,1,0)
				gl_vertex3d(1,1,0)	
				gl_vertex3d(1,1,-1)
				gl_vertex3d(0.5,1.25,-1)
				gl_vertex3d(0.5,1.25,0)
				
				--Left
				gl_normal3d(-0.5,1,0)
				gl_vertex3d(0,1,0)	
				gl_vertex3d(0.5,1.25,0)
				gl_vertex3d(0.5,1.25,-1)
				gl_vertex3d(0,1,-1)
				
			gl_end

		end
		
		
		


	add (a_number: INTEGER) is
			-- add `a_number' of buildings
		local
			i: INTEGER
			temp: EM_3D_OBJECT
			building: TRAFFIC_BUILDING
		do
			from
				i:= 0
			until
				i = a_number
			loop
				temp:= building_factory.create_object
				temp.set_origin (i-25,0,i-25)
				temp.set_scale (0.25,0.25,0.25)
				buildings.force (temp)
				create building.make(i-25,i-25+0.25,i-25-0.25,i-25,i,"name" + i.out)
				map.add_building (building)
				i:= i + 1
			end
		end
		
	add_randomly (n: INTEGER) is
			-- Randomly add buildings to the list of buildings.
		require
			n_not_negative: n >= 0
		local
			x_coord, z_coord: DOUBLE
			i, j: INTEGER
			building: EM_3D_OBJECT
			traffic_building: TRAFFIC_BUILDING
			poly_points: DS_LINKED_LIST[EM_VECTOR_2D]
			old_number: INTEGER
		do
			old_number := buildings.count
			from
				i := buildings.count + 1
				j := 1
			until
				i > (n + old_number)
			loop
				x_coord := centre.x - (plane_size/2) + randomizer.double_i_th (j)*plane_size -- 1.7
				z_coord := centre.z - (plane_size/2) + randomizer.double_i_th (j+1)*plane_size -- -0.3
				
				-- ACHTUNG: Origin ist links unten! building_width evtl. ändern!
				create poly_points.make
				poly_points.force (create {EM_VECTOR_2D}.make (x_coord, z_coord-0.25), 1)
				poly_points.force (create {EM_VECTOR_2D}.make (x_coord + 0.25, z_coord-0.25), 2)
				poly_points.force (create {EM_VECTOR_2D}.make (x_coord + 0.25, z_coord), 3)
				poly_points.force (create {EM_VECTOR_2D}.make (x_coord, z_coord), 4)
				create collision_poly.make_from_absolute_list (create {EM_VECTOR_2D}.make (x_coord-0.1, z_coord-0.1), poly_points)
				
				if not has_collision (collision_poly) then					
					
					building := building_factory.create_object
					building.set_scale (0.25,0.25,0.25)
					building.set_origin (x_coord, 0, z_coord)
					buildings.force (building)
					create traffic_building.make(x_coord,x_coord+0.25,z_coord-0.25,z_coord,i,"name" + i.out)
					map.add_building (traffic_building)
					i := i + 1
				end
				j := j + 2
			end
			
		end
		
	delete_buildings is
			-- Delete buildings from representation.
		do
			buildings.wipe_out
			number_of_buildings:= 0
		--	map.buildings:= void
		end
		
		
	
	has_collision (poly_a: EM_COLLIDABLE): BOOLEAN is
			-- Is there a collision?
		require
			poly_a /= void
		do
			from
				traffic_lines_polygons.start
				Result := False
			until
				traffic_lines_polygons.after or Result
			loop
				if poly_a.collides_with (traffic_lines_polygons.item) then
					Result := True
				end
				traffic_lines_polygons.forth
			end
		end	
	set_building_number (n: INTEGER) is
			-- Set the number of buildings that are shown.
		require
			n_valid: n >= 0
		do
		if n > buildings.count then
			add_randomly (n - buildings.count)
			number_of_buildings := n
		else
			number_of_buildings := n
		end
		ensure
			number_of_buildings = n
			buildings.count >= number_of_buildings
		end
		
	feature -- Collsion setting		
			
	set_collision_polygons(some_polygons: ARRAYED_LIST[EM_POLYGON_CONVEX_COLLIDABLE]) is
			-- set the collision_polygons
			do
				traffic_lines_polygons := some_polygons
			ensure
				traffic_lines_polygons = some_polygons
			end
	
	traffic_lines_polygons: ARRAYED_LIST[EM_POLYGON_CONVEX_COLLIDABLE]
		
	
feature
	collision_poly: EM_POLYGON_CONVEX_COLLIDABLE
	
	number_of_buildings: INTEGER
	
	randomizer: RANDOM

	buildings: ARRAYED_LIST [EM_3D_OBJECT]
	
	building_factory: TRAFFIC_BUILDING_FACTORY

	wall_color: GL_VECTOR_3D[DOUBLE]
		-- color of the walls
	
	roof_color: GL_VECTOR_3D[DOUBLE]
		-- color of the roof	
		
	centre: GL_VECTOR_3D[DOUBLE]
		-- Centre of the city
	
	map: TRAFFIC_MAP

		
end
