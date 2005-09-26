indexing
	description: "Factory for traffic lines"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_LINE_FACTORY

inherit

	EM_3D_OBJECT_FACTORY

	EM_SHARED_BITMAP_FACTORY
		export {NONE} all end
		
	EM_CONSTANTS
		export {NONE} all end
		
	GL_FUNCTIONS
		export {NONE} all end
		
	GLU_FUNCTIONS
		export {NONE} all end
		
	MATH_CONST
		export {NONE} all end
		
	DOUBLE_MATH
		export {NONE} all end
		
	SHARED_CONSTANTS
		export {NONE} all end

feature -- Initialization

	set_line (l: TRAFFIC_LINE) is
			-- Create a new object.
		require
			l /= Void
			l.count >= 0
		do
			line := l
			unchanged := False
		end
		
	set_line_color (rgb: GL_VECTOR_3D[DOUBLE]) is
			-- Set `line_color'.
		require
			rgb /= Void
		do
			create line_color.make_xyz (rgb.x, rgb.y, rgb.z)
			unchanged := False
		end
		
feature {NONE} -- Drawing
		
	draw_circle (p, rgb: GL_VECTOR_3D[DOUBLE]; r, h: DOUBLE) is
			-- Draw a circle between two traffic line segments.
		require
			p /= Void
			rgb /= Void
			r > 0
		do
			gl_matrix_mode_external (Em_gl_modelview)
			gl_push_matrix_external
			gl_color3dv_external(rgb.pointer)
			-- a little bit higher than the line
			gl_translated_external (p.x, h, p.z)
			gl_rotated_external (90, 1, 0, 0)
			gl_disable_external (em_gl_lighting)
			glu_disk_external (glu_new_quadric, 0, r, 20, 1)
			gl_pop_matrix_external
			gl_flush_external
			
			
			gl_matrix_mode_external (Em_gl_modelview)
			gl_push_matrix_external
			gl_color3dv_external(rgb.pointer)
			-- a little bit higher than the line
			gl_translated_external (p.x, h, p.z)
			gl_rotated_external (90, 1, 0, 0)
			gl_disable_external (em_gl_lighting)
			glu_cylinder_external (glu_new_quadric_external, r, r, line_depth, 10, 10)
			gl_pop_matrix_external
			gl_flush_external
			
			
			gl_matrix_mode_external (Em_gl_modelview)
			gl_push_matrix_external
			gl_color3dv_external(rgb.pointer)
			-- a little bit higher than the line
			gl_translated_external (p.x, h - line_depth, p.z)
			gl_rotated_external (90, 1, 0, 0)
			gl_disable_external (em_gl_lighting)
			glu_disk_external (glu_new_quadric, 0, r, 20, 1)
			gl_pop_matrix_external
			gl_flush_external
			
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
			-- Normals all parallel to y axis
--			gl_begin_external (em_gl_quads)
--				
--				gl_normal3d_external (0,1,0)
--				gl_vertex3d_external (p1.x, p1.y, p1.z)
--				gl_normal3d_external (0,1,0)
--				gl_vertex3d_external (p2.x, p2.y, p2.z)
--				gl_normal3d_external (0,1,0)
--				gl_vertex3d_external (p3.x, p3.y, p3.z)
--				gl_normal3d_external (0,1,0)
--				gl_vertex3d_external (p4.x, p4.y, p4.z)
--			gl_end
			
			
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
		end
		
feature {NONE} -- Attributes
		
	line: TRAFFIC_LINE
			-- Traffic line provides information about points and segments.
			
	line_color: GL_VECTOR_3D[DOUBLE]
			-- Vector of RGB values for the line color.
			
	object_width: DOUBLE is 2.0
			-- The size of the bounding box in x direction of created objects.
			
	object_height: DOUBLE is 2.0
			-- The size of the bounding box in y direction of created objects.
			
	object_depth: DOUBLE is 2.0
			-- The size of the bounding box in z direction of created objects.
			
feature {NONE} -- Implementation
	
	specify_object is
			-- Defines the object.
		do
			line.do_all (agent draw_line_section (?))
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
			create org.make_xyz (map_to_gl_coords (section.polypoints.first).x, line_height, map_to_gl_coords (section.polypoints.first).y)
			create dst.make_xyz (map_to_gl_coords (section.polypoints.last).x, line_height, map_to_gl_coords (section.polypoints.last).y)
			create color.make_xyz (0, 0, 0)	-- Black
			
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

end -- class TRAFFIC_LINE_FACTORY
