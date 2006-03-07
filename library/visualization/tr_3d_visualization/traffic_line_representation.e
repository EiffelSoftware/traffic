indexing
	description: "Representation for the lines, all lines are stored here and representated"
	author: "Florian Geldmacher"
	date: "$Date$"
	revision: "0.1"

class
	TRAFFIC_LINE_REPRESENTATION
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
		
create
	make

feature -- Initialization
	
	make (map: TRAFFIC_MAP) is
			-- Create a new object.
		require
			map_exists: map /= void
		do
			create centre.make_xyz (0,0,0)
				
			create line_factory.make
	
				-- Could be extended, if desired.
			line_factory.add_line_type (agent create_tram_line, tram_type)
			line_factory.add_gauger(agent decide_line_type, decision_type)
			
			create lines.make(1)
			create shortest_line.make (1)
			create line_objects.make(1)
			add_lines(map)	
			create_collision_polygons(map)
		ensure	
			line_factory_created: line_factory /= Void
			lines_created: lines /= Void
			shortest_line_created: shortest_line /= Void
			line_objects_created: line_objects /= Void
		end
		
feature{TRAFFIC_3D_MAP_WIDGET} -- Interface

	draw is
			-- draw all lines
			local
				i, j: INTEGER
				actual_line_objects: ARRAY[EM_3D_OBJECT]
			do
				create actual_line_objects.make(1,1)

				-- draw all the lines in the hashtable.  					
				from 
					i := 0
					line_objects.start
				until
					line_objects.after
				loop
					j := 0
					actual_line_objects := line_objects.item_for_iteration
					from
						j := actual_line_objects.lower
					until
						j > actual_line_objects.upper
					loop
						actual_line_objects.item (j).draw
						j := j+1
					end
					i := i+1
					line_objects.forth
				end
			end

		
		
	draw_shortest_path is
			-- draw the shortest line if it exists
			do
				from
					shortest_line.start
				until
					shortest_line.after
				loop
					shortest_line.item.draw
					shortest_line.forth
				end
			end
			
	remove_shortest_path is
			-- remove the shortest path from the map
			do
				shortest_line.wipe_out
			ensure
				shortest_line_empty: shortest_line.is_empty
			end
		

feature {NONE} -- Drawing		

	draw_circle (p, rgb: GL_VECTOR_3D[DOUBLE]; r, h: DOUBLE) is
			-- Draw a circle between two traffic line segments.
		require
			p /= Void
			rgb /= Void
			r > 0
		do
			if is_highlighted then
				gl_matrix_mode_external (Em_gl_modelview)
				gl_push_matrix_external
				gl_color3dv_external(rgb.pointer)
				-- a little bit higher than the line
				gl_translated_external (p.x, h, p.z)
				gl_rotated_external (90, 1, 0, 0)
				gl_disable_external (em_gl_lighting)
				glu_disk_external (glu_new_quadric, 0, r, 8, 1)
				gl_pop_matrix_external
				gl_flush_external

				gl_matrix_mode_external (Em_gl_modelview)
				gl_push_matrix_external
				gl_color3dv_external(rgb.pointer)
				-- a little bit higher than the line
				gl_translated_external (p.x, h, p.z)
				gl_rotated_external (90, 1, 0, 0)
				gl_disable_external (em_gl_lighting)
				glu_cylinder_external (glu_new_quadric_external, r, r, line_depth, 8, 8)
				gl_pop_matrix_external
				gl_flush_external

				gl_matrix_mode_external (Em_gl_modelview)
				gl_push_matrix_external
				gl_color3dv_external(rgb.pointer)
				-- a little bit higher than the line
				gl_translated_external (p.x, h - line_depth, p.z)
				gl_rotated_external (90, 1, 0, 0)
				gl_disable_external (em_gl_lighting)
				glu_disk_external (glu_new_quadric, 0, r, 8, 1)
				gl_pop_matrix_external
				gl_flush_external
			else
				gl_matrix_mode_external (Em_gl_modelview)
				gl_push_matrix_external
				gl_color3dv_external(rgb.pointer)
				-- a little bit higher than the line
				gl_translated_external (p.x, h, p.z)
				gl_rotated_external (90, 1, 0, 0)
				gl_disable_external (em_gl_lighting)
				glu_disk_external (glu_new_quadric, 0, r, 72, 1)
				gl_pop_matrix_external
				gl_flush_external
			end
		end
		
	draw_line (p, q: GL_VECTOR_3D[DOUBLE]) is
			-- Draw a line from `p' to `q'.
		require
			p /= Void
			q /= Void
		local
			delta_x, delta_z: DOUBLE
			norm: DOUBLE
		do
			delta_x := q.x - p.x
			delta_z := q.z - p.z
			
			norm := sqrt (delta_x*delta_x + delta_z*delta_z)
			
			draw_plane (create {GL_VECTOR_3D[DOUBLE]}.make_xyz (p.x-delta_z*line_width/norm, p.y, p.z+delta_x*line_width/norm), create {GL_VECTOR_3D[DOUBLE]}.make_xyz (p.x+delta_z*line_width/norm, p.y, p.z-delta_x*line_width/norm), create {GL_VECTOR_3D[DOUBLE]}.make_xyz (q.x+delta_z*line_width/norm, q.y, q.z-delta_x*line_width/norm) ,create {GL_VECTOR_3D[DOUBLE]}.make_xyz (q.x-delta_z*line_width/norm, q.y, q.z+delta_x*line_width/norm))
			gl_flush_external
		end
		
	draw_plane (p1, p2, p3, p4: GL_VECTOR_3D[DOUBLE]) is
			-- Draw a plane with vertices `p1', `p2', `p3' and `p4'.
		require
			p1 /= Void
			p2 /= Void
			p3 /= Void
			p4 /= Void
		do
			if is_highlighted then
				gl_begin_external (em_gl_quads)
					gl_color3dv_external (line_color.pointer)
					
					-- Front
					gl_normal3d_external (1, 0, 0)
					gl_vertex3d_external (p1.x, p1.y, p1.z)
					
					gl_normal3d_external (1, 0, 0)
					gl_vertex3d_external (p1.x, p1.y - line_depth, p1.z)
					
					gl_normal3d_external (1, 0, 0)
					gl_vertex3d_external (p2.x, p2.y - line_depth, p2.z)
	
					gl_normal3d_external (1, 0, 0)
					gl_vertex3d_external (p2.x, p2.y, p2.z)
				
					-- Back
					gl_normal3d_external (-1, 0, 0)
					gl_vertex3d_external (p3.x, p3.y, p3.z)
					
					gl_normal3d_external (-1, 0, 0)
					gl_vertex3d_external (p3.x, p3.y - line_depth, p3.z)
					
					gl_normal3d_external (-1, 0, 0)
					gl_vertex3d_external (p4.x, p4.y - line_depth, p4.z)
					
					gl_normal3d_external (-1, 0, 0)
					gl_vertex3d_external (p4.x, p4.y, p4.z)
					
					-- Left
					gl_normal3d_external (0, 0, 1)
					gl_vertex3d_external (p3.x, p3.y, p3.z)
					
					gl_normal3d_external (0, 0, 1)
					gl_vertex3d_external (p3.x, p3.y - line_depth, p3.z)
					
					gl_normal3d_external (0, 0, 1)
					gl_vertex3d_external (p1.x, p1.y - line_depth, p1.z)
					
					gl_normal3d_external (0, 0, 1)
					gl_vertex3d_external (p1.x, p1.y, p1.z)
					
					-- Right
					gl_normal3d_external (0, 0, -1)
					gl_vertex3d_external (p2.x, p2.y, p2.z)
					
					gl_normal3d_external (0, 0, -1)
					gl_vertex3d_external (p2.x, p2.y - line_depth, p2.z)
					
					gl_normal3d_external (0, 0, -1)
					gl_vertex3d_external (p4.x, p4.y - line_width, p4.z)
					
					gl_normal3d_external (0, 0, -1)
					gl_vertex3d_external (p4.x, p4.y, p4.z)
					
					-- Top
					gl_normal3d_external (0, 1, 0)
					gl_vertex3dv_external (p1.pointer)
					
					gl_normal3d_external (0, 1, 0)
					gl_vertex3dv_external (p2.pointer)
					
					gl_normal3d_external (0, 1, 0)
					gl_vertex3dv_external (p3.pointer)
					
					gl_normal3d_external (0, 1, 0)
					gl_vertex3dv_external (p4.pointer)
					
					-- Bottom
					gl_normal3d_external (0, 1, 0)
					gl_vertex3d_external (p1.x, p1.y - line_depth, p1.z)
					
					gl_normal3d_external (0, 1, 0)
					gl_vertex3d_external (p2.x, p2.y - line_depth, p2.z)
					
					gl_normal3d_external (0, 1, 0)
					gl_vertex3d_external (p3.x, p3.y - line_depth, p3.z)
					
					gl_normal3d_external (0, 1, 0)
					gl_vertex3d_external (p4.x, p4.y - line_depth, p4.z)
				gl_end_external
			else
				-- Normals all parallel to y axis
				gl_begin_external (em_gl_quads)
					gl_color3dv_external (line_color.pointer)
					gl_normal3d_external (0,1,0)
					gl_vertex3d_external (p1.x, p1.y, p1.z)
					gl_normal3d_external (0,1,0)
					gl_vertex3d_external (p2.x, p2.y, p2.z)
					gl_normal3d_external (0,1,0)
					gl_vertex3d_external (p3.x, p3.y, p3.z)
					gl_normal3d_external (0,1,0)
					gl_vertex3d_external (p4.x, p4.y, p4.z)
				gl_end
			end
		end
		
	draw_line_section (section: TRAFFIC_LINE_SECTION) is
			-- Draw a traffic line section on the map.
		require
			section /= Void
		local
			i: INTEGER
			org, dst: GL_VECTOR_3D[DOUBLE]

			color: GL_VECTOR_3D[DOUBLE]
		do
			-- draw circles at the origin and destination
			create color.make_xyz (0, 0, 0)	-- Black
			create org.make_xyz (map_to_gl_coords (section.polypoints.first).x, line_height, map_to_gl_coords (section.polypoints.first).y)
			create dst.make_xyz (map_to_gl_coords (section.polypoints.last).x, line_height, map_to_gl_coords (section.polypoints.last).y)
			
			
			
			-- draw a circle a little bit higher than the line
			draw_circle (org, color, 2*line_width, line_height+0.01)
			draw_circle (dst, color, 2*line_width, line_height+0.01)

			-- draw a connecting line
			from
				i := 1
			until
				i >= section.polypoints.count
			loop
				org := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (map_to_gl_coords (section.polypoints.i_th (i)).x, line_height, map_to_gl_coords (section.polypoints.i_th (i)).y)
				dst := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (map_to_gl_coords (section.polypoints.i_th (i+1)).x, line_height, map_to_gl_coords (section.polypoints.i_th (i+1)).y)
				draw_line (org, dst)
				draw_circle (org, line_color, line_width, line_height)
				i := i + 1
			end
			draw_circle (dst, line_color, line_width, line_height)
		end

feature{TRAFFIC_3D_MAP_WIDGET} -- Collision detection

		create_collision_polygons(map: TRAFFIC_MAP) is
			-- Create a list of collidable pieces.
		require
			map_not_void : map /= Void
		local
			all_lines_polygon: ARRAYED_LIST[TRAFFIC_LINE]
			line: TRAFFIC_LINE
			section: TRAFFIC_LINE_SECTION
			collidable: EM_POLYGON_CONVEX_COLLIDABLE
			i, j: INTEGER
			delta_x, delta_y, norm: DOUBLE
			start_point, end_point, a_point, c_point: EM_VECTOR_2D 
			polygon_points: DS_LINKED_LIST [EM_VECTOR_2D]
		do
			all_lines_polygon := map.lines.linear_representation
			create collision_polygons.make (4)
			
			from all_lines_polygon.start
			until all_lines_polygon.after
			loop
				line := all_lines_polygon.item
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
						collision_polygons.force (collidable)
						i := i + 1
					end
					j := j + 1
				end
				all_lines_polygon.forth
			end
		end
		
		collision_polygons: ARRAYED_LIST[EM_POLYGON_CONVEX_COLLIDABLE]
			-- Collision polygons to check for collisions with traffic lines
			
feature{TRAFFIC_3D_MAP_WIDGET} -- Interface

	add_lines(map: TRAFFIC_MAP) is
			-- add all lines from the map to the lines array
			require
				map_valid: map /= Void
			local
				x_coord, z_coord: DOUBLE
				i, j: INTEGER
	--			all_lines: HASH_TABLE [TRAFFIC_LINE, STRING]
				all_sections_of_one_line: TRAFFIC_LINE -- lines are at beginning and end of linesections
				a_line: EM_3D_OBJECT
				collision_poly: EM_POLYGON_CONVEX_COLLIDABLE
				poly_points: DS_LINKED_LIST[EM_VECTOR_2D]				
				actual_line: ARRAY[EM_3D_OBJECT]
			do
				all_lines := map.lines
				from
					i := 0		-- for the different lines
					all_lines.start
				until
					all_lines.after
				loop
					-- iterate over all lines
					j :=0		-- for the individual line segments
					create actual_line.make(1,1)
					all_sections_of_one_line := all_lines.item_for_iteration --###die linie 9... alle Segmente davon
					line_color := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (all_lines.item_for_iteration.color.red/255, all_lines.item_for_iteration.color.green/255, all_lines.item_for_iteration.color.blue/255)
					from
						all_sections_of_one_line.start
					until
						all_sections_of_one_line.after
					loop
						-- iterate over all sections of one line
							
						line_section := all_sections_of_one_line.item

						x_coord := map_to_gl_coords(all_sections_of_one_line.item.polypoints.first).x
						z_coord := map_to_gl_coords(all_sections_of_one_line.item.polypoints.first).y
						
						-- polypoints for the line
						create poly_points.make
						poly_points.force (create {EM_VECTOR_2D}.make (x_coord, z_coord), 1)	-- left bottom corner
						poly_points.force (create {EM_VECTOR_2D}.make (x_coord, z_coord-line_width), 2) -- left upper corner
						poly_points.force (create {EM_VECTOR_2D}.make (x_coord-line_width, z_coord-line_width), 3) -- right upper corner
						poly_points.force (create {EM_VECTOR_2D}.make (x_coord-line_width, z_coord), 4) -- right bottom corner
					
						create collision_poly.make_from_absolute_list (create {EM_VECTOR_2D}.make (x_coord-0.1,z_coord-0.1), poly_points)
						
						-- line creation
						line_factory.take_decision (decision_type)
						a_line := line_factory.create_object
						
						actual_line.force(a_line, j)
						j := j+1
						all_sections_of_one_line.forth
					end
					
					line_objects.put(actual_line, all_sections_of_one_line)					
					i := i+1
					all_lines.forth
				end
			end
			
	make_highlighted_line(line_to_highlight: TRAFFIC_LINE; height: INTEGER):ARRAY[EM_3D_OBJECT] is
			-- to build  the bold highlighted line objects.
		require
			line_to_highlight_valid: line_to_highlight /= Void
		local
			x_coord, z_coord: DOUBLE
			j: INTEGER
			all_sections_of_one_line: TRAFFIC_LINE -- lines are at beginning and end of linesections
			a_line: EM_3D_OBJECT
			collision_poly: EM_POLYGON_CONVEX_COLLIDABLE
			poly_points: DS_LINKED_LIST[EM_VECTOR_2D]				
			actual_line: ARRAY[EM_3D_OBJECT]
		do
			line_color := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (line_to_highlight.color.red/255, line_to_highlight.color.green/255, line_to_highlight.color.blue/255)
			is_highlighted := true
			j :=0		-- for the individual line segments
	
			all_sections_of_one_line := all_lines.item (line_to_highlight.name)
			create actual_line.make(1,1)
			from
				all_sections_of_one_line.start
			until
				all_sections_of_one_line.after
			loop
				-- iterate over all sections of the to highlighted line	
				line_section := all_sections_of_one_line.item
				x_coord := map_to_gl_coords(all_sections_of_one_line.item.polypoints.first).x
				z_coord := map_to_gl_coords(all_sections_of_one_line.item.polypoints.first).y
				-- polypoints for the line
				create poly_points.make
				poly_points.force (create {EM_VECTOR_2D}.make (x_coord, z_coord), 1)	-- left bottom corner
				poly_points.force (create {EM_VECTOR_2D}.make (x_coord, z_coord-line_width), 2) -- left upper corner
				poly_points.force (create {EM_VECTOR_2D}.make (x_coord-line_width, z_coord-line_width), 3) -- right upper corner
				poly_points.force (create {EM_VECTOR_2D}.make (x_coord-line_width, z_coord), 4) -- right bottom corner
			
				create collision_poly.make_from_absolute_list (create {EM_VECTOR_2D}.make (x_coord-0.1,z_coord-0.1), poly_points)
				
				-- line creation
				is_highlighted := true
				line_factory.take_decision (decision_type)
				a_line := line_factory.create_object
				a_line.set_origin (0, line_height + 0.4*height + highlighting_delta, 0)
				actual_line.force(a_line, j)
				j := j+1
				all_sections_of_one_line.forth
			
				line_objects.put(actual_line, all_sections_of_one_line)					
			end		
			Result := actual_line	
		end
		
	make_normal_line(line_to_un_highlight: TRAFFIC_LINE):ARRAY[EM_3D_OBJECT] is
			-- to build  the normal (un-highlighted) line objects.
		require
			line_to_un_highlight_valid: line_to_un_highlight /= Void
		local
			x_coord, z_coord: DOUBLE
			j: INTEGER
			all_sections_of_one_line: TRAFFIC_LINE -- lines are at beginning and end of linesections
			a_line: EM_3D_OBJECT
			collision_poly: EM_POLYGON_CONVEX_COLLIDABLE
			poly_points: DS_LINKED_LIST[EM_VECTOR_2D]				
			actual_line: ARRAY[EM_3D_OBJECT]
		do
			line_color := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (line_to_un_highlight.color.red/255, line_to_un_highlight.color.green/255, line_to_un_highlight.color.blue/255)
			is_highlighted := false
			j :=0		-- for the individual line segments
	
			all_sections_of_one_line := all_lines.item (line_to_un_highlight.name)
			create actual_line.make(1,1)
			from
				all_sections_of_one_line.start
			until
				all_sections_of_one_line.after
			loop
				-- iterate over all sections of the to highlighted line	
				line_section := all_sections_of_one_line.item

				x_coord := map_to_gl_coords(all_sections_of_one_line.item.polypoints.first).x
				z_coord := map_to_gl_coords(all_sections_of_one_line.item.polypoints.first).y
				
				-- polypoints for the line
				create poly_points.make
				poly_points.force (create {EM_VECTOR_2D}.make (x_coord, z_coord), 1)	-- left bottom corner
				poly_points.force (create {EM_VECTOR_2D}.make (x_coord, z_coord-line_width), 2) -- left upper corner
				poly_points.force (create {EM_VECTOR_2D}.make (x_coord-line_width, z_coord-line_width), 3) -- right upper corner
				poly_points.force (create {EM_VECTOR_2D}.make (x_coord-line_width, z_coord), 4) -- right bottom corner
			
				create collision_poly.make_from_absolute_list (create {EM_VECTOR_2D}.make (x_coord-0.1,z_coord-0.1), poly_points)
				
				-- line creation
				line_factory.take_decision (decision_type)
				a_line := line_factory.create_object
				a_line.set_origin (0, line_height + 0.1, 0)
				
				actual_line.force(a_line, j)
				j := j+1
				all_sections_of_one_line.forth
			
				line_objects.put(actual_line, all_sections_of_one_line)					
			end		
			Result := actual_line	
		end
		
		-----------
			

	add_shortest_line(a_line: TRAFFIC_LINE) is
		-- add one line to the map, e.g. the shortest path line
		require
			a_line_valid: a_line /= Void
		local
			i: INTEGER
			a_line_section: EM_3D_OBJECT
		do
			shortest_line.wipe_out
			line_color := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (1,1,1)
			set_highlighted (true)		
					from
						a_line.start
						i := 0
					until
						a_line.after
					loop
						line_section := a_line.item
						-- line creation
						
						line_factory.take_decision (decision_type)
						a_line_section := line_factory.create_object
						a_line_section.set_origin (0, line_height + 0.01, 0)
						shortest_line.force(a_line_section)
						i := i+1
						a_line.forth
					end
			set_highlighted (false)
		end

feature{NONE} -- Decision procedures
	
	decide_line_type: STRING is
			-- decide which type of line is chosen.
		do
			Result := tram_type
		end

	create_tram_line is
			-- create a tram line
		do
			draw_line_section (line_section)
		end
		
feature{NONE} -- Decision attributes
	
	tram_type: STRING is "tram_line"
	 
	decision_type: STRING is "not_highlighted"
	
	
feature -- Attributes Setting

	highlight_single_line(a_line: TRAFFIC_LINE) is	
		-- Has the line as a key and the corresponding line segmants as em_3d_object 
		require
			a_line_valid: a_line /= Void
		local 
			actual_line_objects: ARRAY[EM_3D_OBJECT]
			i: INTEGER
		do 
				highlighting_delta := 2
				is_highlighted := true
				i := 1
				create actual_line_objects.make(1,1)
				actual_line_objects := make_highlighted_line(a_line, i)	
				line_objects.force (actual_line_objects, a_line)
				draw	
		end				
	
	un_highlight_single_line(a_line:TRAFFIC_LINE) is
			-- a_line is unhighlighted. 
		require 
				a_line_valid: a_line /= Void
		local 
			actual_line_objects: ARRAY[EM_3D_OBJECT]
		do 
			--	highlighting_delta := 0
				is_highlighted := false
				
				create actual_line_objects.make(1,1)
				actual_line_objects := make_normal_line(a_line)
				line_objects.force (actual_line_objects, a_line)
				draw
		end		
		
	
	highlight_single_line_for_5sec(a_line: TRAFFIC_LINE) is	
		-- Highlights 'a_line' for 5 seconds and resets it. 
		do 
			
			highlight_single_line(a_line)
			
			draw
	--		create delay_time.make
--			wait_time := 5000
--			--delay_time.make
			create delay_time_2.make_wait
			delay_time_2.delay_and_process (5000)
			
			
			--		delay_time.delay(5000)


			un_highlight_single_line(a_line)
		end	
		
		
	highlight_all_lines(b: BOOLEAN) is 
			-- highlight all the lines/set the is_highlighted variable
		local 
			actual_line: TRAFFIC_LINE 
			i: INTEGER
		do 
			is_highlighted := b
			if b then
				-- highlight all lines
				highlighting_delta := 2

				from 
					i := 0
					line_objects.start
				until
					line_objects.after
				loop
					actual_line := line_objects.key_for_iteration	
					line_objects.force (make_highlighted_line(actual_line, i), actual_line)
					i := i+1
					line_objects.forth
				end				
				
			else	
				-- unhighlight all lines				
				highlighting_delta := 0	
				from 
					line_objects.start
				until
					line_objects.after
				loop
					actual_line := line_objects.key_for_iteration	
					line_objects.force (make_normal_line(actual_line), actual_line)
					line_objects.forth
				end	
			end
		ensure
			is_highlighted = b
			b implies highlighting_delta = 2
			not b implies highlighting_delta = 0
		 end		
	
	
	set_highlighted(b: BOOLEAN) is
			-- set the is_highlighted variable
		do
			is_highlighted := b
			if b then
				highlighting_delta := 2
			else
				highlighting_delta := 0
			end
		ensure
			is_highlighted = b
			b implies highlighting_delta = 2
			not b implies highlighting_delta = 0
		end
		
	
		
feature{NONE} -- Attributes - Implementation

	all_lines: HASH_TABLE [TRAFFIC_LINE, STRING]		-- WAS LOCAL SK
	
	line_section: TRAFFIC_LINE_SECTION	
		
	lines: ARRAYED_LIST[TRAFFIC_LINE_SECTION]
			-- Traffic line provides information about points and segments.
	
	line_color: GL_VECTOR_3D[DOUBLE]
			-- Vector of RGB values for the line color
			
	object_width: DOUBLE is 2.0
			-- The size of the bounding box in x direction of created objects.
			
	object_height: DOUBLE is 2.0
			-- The size of the bounding box in y direction of created objects.
			
	object_depth: DOUBLE is 2.0
			-- The size of the bounding box in z direction of created objects.
				
	line_objects: HASH_TABLE[ARRAY[EM_3D_OBJECT], TRAFFIC_LINE]
		--  Container for all drawable lines, separated by line
	
	shortest_line: ARRAYED_LIST[EM_3D_OBJECT]
		-- Container for shortest path line
	
	line_factory: TRAFFIC_LINE_FACTORY
		-- factory for lines	
		
	centre: GL_VECTOR_3D[DOUBLE]
		-- Centre of the city
		
	is_highlighted: BOOLEAN
		-- are the lines highlighted
		
	delay_time: EM_TIME --is
--		-- for waiting time of highlighting
--		once
--			delay_time.make
--		end
	
	delay_time_2: EM_EVENT_LOOP	
		
	wait_time: INTEGER
		
	highlighting_delta: DOUBLE
		-- Height difference between highlighted and normal line representation
	
end
