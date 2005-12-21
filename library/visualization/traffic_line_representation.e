indexing
	description: "Representation for the lines, all lines are stored here and representated"
	author: "Florian Geldmacher"
	date: "$Date$"
	revision: "0.1"

class
	TRAFFIC_LINE_REPRESENTATION
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
			create em_lines.make(1,1)
			create shortest_line.make (1)
			create em_highlighted_lines.make(1,1)
			add_lines(map)		
		end
		
feature{TRAFFIC_3D_MAP_WIDGET} -- Interface

	draw is
			-- draw all lines
			local
				i: INTEGER
			do
				if is_highlighted then
					from
						i := em_highlighted_lines.lower
					until
						i > em_highlighted_lines.upper
					loop
						em_highlighted_lines.item (i).draw
						i := i+1
					end	
				else
					from
						i := em_lines.lower
					until
						i > em_lines.upper
					loop
						em_lines.item (i).draw
						i := i+1
					end
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

feature -- Collision detection

	-- TODO: implement has_collision
	
feature{TRAFFIC_3D_MAP_WIDGET} -- Implementation

	add_lines(map: TRAFFIC_MAP) is
			-- add all lines from the map to the lines array
			require
				map_valid: map /= Void
			local
				x_coord, z_coord: DOUBLE
				i, j: INTEGER
				all_lines: HASH_TABLE [TRAFFIC_LINE, STRING]
				all_sections: LINEAR [TRAFFIC_LINE_SECTION] -- lines are at beginning and end of linesections
				a_line: EM_3D_OBJECT
				collision_poly: EM_POLYGON_CONVEX_COLLIDABLE
				poly_points: DS_LINKED_LIST[EM_VECTOR_2D]
			do
				all_lines := map.lines
				from
					i := 0
					j := 0
					all_lines.start
				until
					all_lines.after
				loop
					all_sections := all_lines.item_for_iteration
					line_color := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (all_lines.item_for_iteration.color.red/255, all_lines.item_for_iteration.color.green/255, all_lines.item_for_iteration.color.blue/255)
					from
						all_sections.start
					until
						all_sections.after
					loop
						line_section := all_sections.item

						x_coord := map_to_gl_coords(all_sections.item.polypoints.first).x
						z_coord := map_to_gl_coords(all_sections.item.polypoints.first).y
						
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
						em_lines.force(a_line, i)
						line_factory.take_decision(decision_type)
						set_highlighted(true)
						a_line := line_factory.create_object
						a_line.set_origin (0, line_height + 0.4*j + highlighting_delta, 0)
						em_highlighted_lines.force(a_line, i)
						set_highlighted(false)
						i := i+1
						all_sections.forth
					end
					j := j+1
					all_lines.forth
				end
			end

	add_shortest_line(a_line: TRAFFIC_LINE) is
		-- add one line to the map, e.g. the shortest path line
		require
			a_line_valid: a_line /= Void
		local
			i: INTEGER
			a_line_section: EM_3D_OBJECT
		do
			shortest_line.wipe_out
--			remove_shortest_path
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
	
	
feature{TRAFFIC_3D_MAP_WIDGET} -- Attributes Setting
	
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

	em_lines: ARRAY[EM_3D_OBJECT]
		-- Container for all lines.	
	
	em_highlighted_lines: ARRAY[EM_3D_OBJECT]
		-- Container for highlighted lines.
		
	shortest_line: ARRAYED_LIST[EM_3D_OBJECT]
		-- Container for shortest path line
	
	line_factory: TRAFFIC_LINE_FACTORY
		-- factory for lines	
		
	centre: GL_VECTOR_3D[DOUBLE]
		-- Centre of the city
		
	is_highlighted: BOOLEAN
		-- are the lines highlighted
		
	highlighting_delta: DOUBLE
		-- Height difference between highlighted and normal line representation
	
invariant
	line_consistency: em_lines.count = em_highlighted_lines.count
	
	
end
