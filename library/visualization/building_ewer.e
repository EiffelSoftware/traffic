indexing
	description: "Places buildings randomly on a plane"
	date: "$Date: 2005/09/18 18:47:10 $"
	revision: "$Revision: 1.35 $"

class
	BUILDING_EWER

inherit
	
	SHARED_CONSTANTS
		export {NONE} all end
		
	DOUBLE_MATH
		export {NONE} all end
		
	EM_CONSTANTS
		export {NONE} all end

	GL_FUNCTIONS
		export {NONE} all end

	GLU_FUNCTIONS
		export {NONE} all end	

create
	make

feature -- Initialization
	
	make (no_buildings: INTEGER; map: TRAFFIC_MAP) is
			-- Create a new object.
		require
			map_exists: map /= void
			buildings_valid: no_buildings >= 0
		do
			create centre.make_xyz (0, 0,0)
			create_traffic_lines_polygons (map)
			create randomizer.set_seed (42)
			create building_factory.make
			
			-- Could be extended, if desired.
			building_factory.add_building_type (agent create_city_central, "city_centre")
			building_factory.add_building_type (agent create_central_building, "central")
			building_factory.add_building_type (agent create_outlying, "outlying")	
			building_factory.add_gauger (agent decide_building_type, "by_distance")
			
			create buildings.make (1, no_buildings)
			add_buildings (no_buildings)
		end

feature {TRAFFIC_3D_MAP_WIDGET} -- Interface

	set_building_number (n: INTEGER) is
			-- Set the number of buildings that are shown.
		require
			n_valid: n >= 0
		do
			if n > buildings.count then
				add_buildings (n - buildings.count)
				number_of_buildings := n
			else
				number_of_buildings := n
			end
		ensure
			number_of_buildings = n
			buildings.count >= number_of_buildings
		end
		
	draw is
			-- Draw all buildings.
		local
			i: INTEGER
		do
			from i := buildings.lower
			until i > number_of_buildings
			loop
				buildings.item(i).draw	
				i := i + 1
			end
		end
		
feature {NONE} -- Collision detection

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
		
	traffic_lines_polygons: ARRAYED_LIST[EM_POLYGON_CONVEX_COLLIDABLE]
			-- Collision polygons to check for collisions with traffic lines
	
feature {NONE} -- Implementation
	
	add_buildings (n: INTEGER) is
			-- Add buildings to the list of buildings.
		require
			n_not_negative: n >= 0
		local
			x_coord, z_coord, max_distance, distance: DOUBLE
			i, j: INTEGER
			building: EM_3D_OBJECT
			collision_poly: EM_POLYGON_CONVEX_COLLIDABLE
			poly_points: DS_LINKED_LIST[EM_VECTOR_2D]
			old_number: INTEGER
		do
			old_number := buildings.count
			max_distance := sqrt((plane_size^2)*2)
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
				poly_points.force (create {EM_VECTOR_2D}.make (x_coord, z_coord), 1)
				poly_points.force (create {EM_VECTOR_2D}.make (x_coord, z_coord - building_width), 2)
				poly_points.force (create {EM_VECTOR_2D}.make (x_coord - building_width, z_coord - building_width), 3)
				poly_points.force (create {EM_VECTOR_2D}.make (x_coord - building_width, z_coord), 4)
				create collision_poly.make_from_absolute_list (create {EM_VECTOR_2D}.make (x_coord-0.1, z_coord-0.1), poly_points)
				
				if not has_collision (collision_poly) then					
					distance := distance_to_centre (create {GL_VECTOR_3D[DOUBLE]}.make_xyz (x_coord, 0, z_coord))
					
					building_factory.take_decision ("by_distance", [max_distance,distance])
					building := building_factory.create_object
					building.set_scale (building_width, calculate_building_height (max_distance, distance), building_width)
					building.set_origin (x_coord, 0, z_coord)
					buildings.force (building, i)
					i := i + 1
				end
				j := j + 2
			end
			number_of_buildings := n
		ensure
			number_of_buildings = n
		end
		
	create_traffic_lines_polygons (map: TRAFFIC_MAP) is
			-- Create a list of collidable pieces.
		require
			map_exists: map /= Void
		local
			lines: ARRAYED_LIST[TRAFFIC_LINE]
			line: TRAFFIC_LINE
			section: TRAFFIC_LINE_SECTION
			collidable: EM_POLYGON_CONVEX_COLLIDABLE
			i, j: INTEGER
			delta_x, delta_y, norm: DOUBLE
			start_point, end_point, a_point, c_point: EM_VECTOR_2D 
			polygon_points: DS_LINKED_LIST [EM_VECTOR_2D]
		do
			lines := map.lines.linear_representation
			create traffic_lines_polygons.make (4)
			
			from lines.start
			until lines.after
			loop
				line := lines.item
				from
					line.start
					j := 1
				until j > line.count//2
				loop
					section := line.i_th (j)
					from i := 1; section.polypoints.start
					until i >= section.polypoints.count
					loop
						create start_point.make (section.polypoints.i_th (i).x, section.polypoints.i_th (i).y) 
						create end_point.make (section.polypoints.i_th (i+1).x, section.polypoints.i_th (i+1).y)
						
						-- Transformation
						start_point := map_to_gl_coords (start_point)
						end_point := map_to_gl_coords (end_point)
						
						delta_x := end_point.x - start_point.x
						delta_y := end_point.y - start_point.y
						
						norm := sqrt (delta_x*delta_x + delta_y*delta_y)
						
						create a_point.make (start_point.x-delta_y*1.5*line_width/norm, start_point.y+delta_x*1.5*line_width/norm)
						create c_point.make (end_point.x+delta_y*1.5*line_width/norm, end_point.y-delta_x*1.5*line_width/norm) 
						
						create polygon_points.make
						polygon_points.force ((a_point),1)
						polygon_points.force (create {EM_VECTOR_2D}.make (start_point.x+delta_y*1.5*line_width/norm, start_point.y-delta_x*1.5*line_width/norm), 2)
						polygon_points.force ((c_point),3)
						polygon_points.force (create {EM_VECTOR_2D}.make (end_point.x-delta_y*1.5*line_width/norm, end_point.y+delta_x*1.5*line_width/norm), 4)
						create collidable.make_from_absolute_list ((a_point + (c_point - a_point)/2), polygon_points)
						traffic_lines_polygons.force (collidable)
						i := i + 1
					end
					j := j + 1
				end
				lines.forth
			end
		end
	
	distance_to_centre (p: GL_VECTOR_3D[DOUBLE]): DOUBLE is
			-- Calculates the distance to the centre.
		require
			p /= Void
			centre /= Void
		do
			Result := (sqrt((p.x-centre.x)^2 + (p.z-centre.z)^2))
		end

feature {NONE} -- Attributes

	buildings: ARRAY[EM_3D_OBJECT]
			-- Array of all buildings
			
	randomizer: RANDOM
			-- Random number generator for the building distribution
			
	building_factory: BUILDING_FACTORY
			-- Factory for the buildings
			
	number_of_buildings: INTEGER
			-- Number of buildings that should be shown
			
	centre: GL_VECTOR_3D[DOUBLE]
			-- Centre of the city
			
feature -- Decision procedures

	decide_building_type (max_distance, distance: DOUBLE): STRING is
			-- Decide which type of builing is chosen.
		do
			if distance < max_distance*0.1 then
				Result := "city_centre"
			elseif distance < max_distance*0.3 then
				Result := "central"
			else
				Result := "outlying"
			end
		end
		
	create_central_building is
			-- Create a central building.
		do
			-- Pyramid
			-- Front
			gl_color3d_external (0.65, 0.65, 0.65)
			gl_begin_external (Em_gl_triangles)
				-- Front
				gl_normal3d_external (-0.5, 1.5, -0.5)
				gl_vertex3d_external (-0.5, 1.5, -0.5)
				gl_normal3d_external (0, 1, 0)
				gl_vertex3d_external (0, 1, 0)
				gl_normal3d_external (0, 1, -1)
				gl_vertex3d_external (0, 1, -1)
				
				-- Right
				gl_normal3d_external (-0.5, 1.5, -0.5)
				gl_vertex3d_external (-0.5, 1.5, -0.5)
				gl_normal3d_external (0, 1, -1)
				gl_vertex3d_external (0, 1, -1)
				gl_normal3d_external (-1, 1, -1)
				gl_vertex3d_external (-1, 1, -1)
				
				-- Back
				gl_normal3d_external (-0.5, 1.5, -0.5)
				gl_vertex3d_external (-0.5, 1.5, -0.5)
				gl_normal3d_external (-1, 1, -1)
				gl_vertex3d_external (-1, 1, -1)
				gl_normal3d_external (-1, 1, 0)
				gl_vertex3d_external (-1, 1, 0)
				
				-- Left
				gl_normal3d_external (-0.5, 1.5, -0.5)
				gl_vertex3d_external (-0.5, 1.5, -0.5)
				gl_normal3d_external (-1, 1, 0)
				gl_vertex3d_external (-1, 1, 0)
				gl_normal3d_external (0, 1, 0)
				gl_vertex3d_external (0, 1, 0)
			gl_end_external
			-- Cube
--			gl_enable_external (Em_gl_texture_2d)
			gl_begin_external (em_gl_quads)
				-- Front
--				gl_bind_texture (Em_gl_texture_2d, texture)
				gl_color3d_external (0, 0.15, 0.8) -- Blue
				gl_normal3d_external (1, 0, 0)
				gl_tex_coord2f_external (0, 0)
				gl_vertex3d_external (0.0, 1.0, 0.0)
				gl_normal3d_external (1, 0, 0)
				gl_tex_coord2f_external (0, 1)
				gl_vertex3d_external (0.0, 0.0, 0.0)
				gl_normal3d_external (1, 0, 0)
				gl_tex_coord2f_external (1, 1)
				gl_vertex3d_external (0.0, 0.0, -1.0)
				gl_normal3d_external (1, 0, 0)
				gl_tex_coord2f_external (1, 0)
				gl_vertex3d_external (0.0, 1.0, -1.0)

				-- Back
				gl_color3f(1, 0, 0) -- Red
				gl_normal3d_external (-1, 0, 0)
				gl_tex_coord2f_external (0, 0)
				gl_vertex3d_external (-1.0, 0.0, -1.0)
				gl_normal3d_external (-1, 0, 0)
				gl_tex_coord2f_external (0, 1)
				gl_vertex3d_external (-1.0, 1.0, -1.0)
				gl_normal3d_external (-1, 0, 0)
				gl_tex_coord2f_external (1, 1)
				gl_vertex3d_external (-1.0, 1.0, 0.0)
				gl_normal3d_external (-1, 0, 0)
				gl_tex_coord2f_external (1, 0)
				gl_vertex3d_external (-1.0, 0.0, 0.0)

				-- Left
				gl_color3d_external (0, 1, 0) -- Green
				gl_normal3d_external (0, 0, 1)
				gl_tex_coord2f_external (0, 0)
				gl_vertex3d_external (-1.0, 1.0, 0.0)
				gl_normal3d_external (0, 0, 1)
				gl_tex_coord2f_external (0, 1)
				gl_vertex3d_external (-1.0, 0.0, 0.0)
				gl_normal3d_external (0, 0, 1)
				gl_tex_coord2f_external (1, 1)
				gl_vertex3d_external (0.0, 0.0, 0.0)
				gl_normal3d_external (0, 0, 1)
				gl_tex_coord2f_external (1, 0)
				gl_vertex3d_external (0.0, 1.0, 0.0)

				-- Right
				gl_color3d_external (1, 1, 0) -- Yellow
				gl_normal3d_external (0, 0, -1)
				gl_tex_coord2f_external (0, 0)
				gl_vertex3d_external (0.0, 1.0, -1.0)
				gl_normal3d_external (0, 0, -1)
				gl_tex_coord2f_external (0, 1)
				gl_vertex3d_external (0.0, 0.0, -1.0)
				gl_normal3d_external (0, 0, -1)
				gl_tex_coord2f_external (1, 1)
				gl_vertex3d_external (-1.0, 0.0, -1.0)
				gl_normal3d_external (0, 0, -1)
				gl_tex_coord2f_external (1, 0)
				gl_vertex3d_external (-1.0, 1.0, -1.0)
			gl_end_external
		end
		
	create_city_central is 
			-- Create a building in the city centre.
		do
			gl_matrix_mode_external (em_gl_modelview)
--			gl_push_matrix_external
			gl_translated_external (-0.5, 0, -0.5)
			
			gl_color3d_external (0.65, 0.65, 0.65) -- White
			gl_matrix_mode_external (Em_gl_modelview)
			gl_push_matrix_external
			gl_translated_external (0, 1, 0)
			glu_sphere_external (glu_new_quadric, 0.5, 8, 8)
			gl_pop_matrix_external
			
			gl_push_matrix_external
			gl_translated_external (0,1,0)
			gl_rotated_external (90, 1, 0,0)
			glu_cylinder_external (glu_new_quadric, 0.5, 0.5, 1, 8, 8)
			gl_end_external
			gl_pop_matrix_external
			gl_pop_matrix_external
			gl_flush_external
		end
		
	create_outlying is
			-- Create a outlying building.
		do
			gl_disable_external (Em_gl_texture_2d)
			-- Front
--			gl_enable_external (Em_gl_texture_2d)
			gl_begin_external (em_gl_quads)
--				gl_bind_texture (Em_gl_texture_2d, texture)
				gl_color3d_external (0, 0.15, 0.8) -- Blue
				gl_normal3d_external (1, 0, 0)
				gl_tex_coord2f_external (0, 0)
				gl_vertex3d_external (0.0, 1.5, 0.0)
				gl_normal3d_external (1, 0, 0)
				gl_tex_coord2f_external (1, 1)
				gl_vertex3d_external (0.0, 0.0, 0.0)
				gl_normal3d_external (1, 0, 0)
				gl_tex_coord2f_external (0, 1)
				gl_vertex3d_external (0.0, 0.0, -1.0)
				gl_normal3d_external (1, 0, 0)
				gl_tex_coord2f_external (1, 0)
				gl_vertex3d_external (0.0, 1.5, -1.0)
			gl_end_external
			gl_disable_external (Em_gl_texture_2d)
			
			gl_begin_external(em_gl_quads)
				-- Back
				gl_color3d_external (1, 0, 0) -- Red
				gl_normal3d_external (-1, 0, 0)
				gl_vertex3d_external (-1.0, 0.0, -1.0)
				gl_normal3d_external (-1, 0, 0)
				gl_vertex3d_external (-1.0, 1.5, -1.0)
				gl_normal3d_external (-1, 0, 0)
				gl_vertex3d_external (-1.0, 1.5, 0.0)
				gl_normal3d_external (-1, 0, 0)
				gl_vertex3d_external (-1.0, 0.0, 0.0)
				
				-- Left
				gl_color3d_external (0, 1, 0) -- Green
				gl_normal3d_external (0, 0, 1)
				gl_vertex3d_external (-1.0, 1.5, 0.0)
				gl_normal3d_external (0, 0, 1)
				gl_vertex3d_external (-1.0, 0.0, 0.0)
				gl_normal3d_external (0, 0, 1)
				gl_vertex3d_external (0.0, 0.0, 0.0)
				gl_normal3d_external (0, 0, 1)
				gl_vertex3d_external (0.0, 1.5, 0.0)
				
				-- Right
				gl_color3d_external (1, 1, 0) -- Yellow
				gl_normal3d_external (0, 0, -1)
				gl_vertex3d_external (0.0, 1.5, -1.0)
				gl_normal3d_external (0, 0, -1)
				gl_vertex3d_external (0.0, 0.0, -1.0)
				gl_normal3d_external (0, 0, -1)
				gl_vertex3d_external (-1.0, 0.0, -1.0)
				gl_normal3d_external (0, 0, -1)
				gl_vertex3d_external (-1.0, 1.5, -1.0)
				
				-- Top
				gl_color3d_external (1,1,1) -- White
				gl_normal3d_external (0, 1, 0)
				gl_vertex3d_external (-1.0, 1.5, -1.0)
				gl_normal3d_external (0, 1, 0)
				gl_vertex3d_external (-1.0, 1.5, 0.0)
				gl_normal3d_external (0, 1, 0)
				gl_vertex3d_external (0.0, 1.5, 0.0)
				gl_normal3d_external (0, 1, 0)
				gl_vertex3d_external (0.0, 1.5, -1.0)
			gl_end_external	
		end
		
end -- class BUILDING_EWER
