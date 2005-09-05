indexing
	description: "Factory for traffic lines"
	author: ""
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

feature -- Initialization

	set_line (l : TRAFFIC_LINE) is
			-- create a new object
		require
			l /= Void
			l.count > 0
		do
			line := l
			unchanged := False
		end
		
	set_color (rgb: GL_VECTOR_3D[DOUBLE]) is
			-- set the color
		require
			rgb /= Void
		do
			create line_color.make_xyz (rgb.x,rgb.y,rgb.z)
			unchanged := False
		end
		
	set_line_width (w: DOUBLE) is
			-- set the line width
		require
			w > 0
		do
			line_width := w
			unchanged := False
		end
		
feature {NONE} -- Drawing
		
	draw_circle (p, rgb: GL_VECTOR_3D[DOUBLE]; r: DOUBLE; ) is
			-- draw a circle between traffic line segments
		require
			p /= Void
			rgb /= Void
			r > 0
		do
			identifier := identifier + 1
			
			gl_matrix_mode (Em_gl_modelview)
			gl_push_matrix
			gl_color3dv(rgb.pointer)
			gl_translated (p.x,p.y,p.z)
			gl_rotated (90, 1, 0, 0)
			gl_load_name (identifier)
			glu_disk (glu_new_quadric, 0, r, 72, 1)
			gl_pop_matrix
			gl_flush			
		end
		
	draw_line (p, q: GL_VECTOR_3D[DOUBLE]) is
			-- draw a line
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
			
			draw_plane (create {GL_VECTOR_3D[DOUBLE]}.make_xyz (p.x-delta_z*line_width/norm,p.y,p.z+delta_x*line_width/norm), create {GL_VECTOR_3D[DOUBLE]}.make_xyz (p.x+delta_z*line_width/norm,p.y,p.z-delta_x*line_width/norm), create {GL_VECTOR_3D[DOUBLE]}.make_xyz (q.x+delta_z*line_width/norm,q.y,q.z-delta_x*line_width/norm) ,create {GL_VECTOR_3D[DOUBLE]}.make_xyz (q.x-delta_z*line_width/norm,q.y,q.z+delta_x*line_width/norm))
			gl_flush
		end
		
	draw_plane (p1, p2, p3, p4: GL_VECTOR_3D[DOUBLE]) is
			-- draw a plane
		require
			p1 /= Void
			p2 /= Void
			p3 /= Void
			p4 /= Void
		do
			-- Normals all parallel to y axis
			gl_begin (em_gl_quads)
				gl_color3dv (line_color.pointer)
				gl_normal3d (0,1,0)
				gl_vertex3d (p1.x, p1.y, p1.z)
				gl_normal3d (0,1,0)
				gl_vertex3d (p2.x, p2.y, p2.z)
				gl_normal3d (0,1,0)
				gl_vertex3d (p3.x, p3.y, p3.z)
				gl_normal3d (0,1,0)
				gl_vertex3d (p4.x, p4.y, p4.z)
			gl_end
		end
		
feature {NONE} -- Variables
		
	line: TRAFFIC_LINE
			-- Traffic line provides information about points and segments.
	
	line_color: GL_VECTOR_3D[DOUBLE]
			-- Vector of RGB values for color.
			
	line_width: DOUBLE
			-- Width of the line
	
	identifier: INTEGER
			-- Unique name for OpenGL reasons.
			
	texture: INTEGER
	
	object_width: DOUBLE is 2.0
			-- The size of the bounding box in x direction of created objects.

	object_height: DOUBLE is 2.0
			-- The size of the bounding box in y direction of created objects.

	object_depth: DOUBLE is 2.0
			-- The size of the bounding box in z direction of created objects.
			
feature {NONE} -- Implementation
	
	specify_object is
			-- defining the object
		do
			line.do_all (agent draw_line_section (?))
		end
		
	draw_line_section (s: TRAFFIC_LINE_SECTION) is
			-- draw a traffic line section on the map
		require
			s /= Void
		local
			f, t: INTEGER
			org, dst: GL_VECTOR_3D[DOUBLE]
			color: GL_VECTOR_3D[DOUBLE]
		do
			-- draw circles at the origin and destination
--			create org.make_xyz (s.origin.position.x / 100, 0.11, s.origin.position.y / 100)
--			create dst.make_xyz (s.destination.position.x / 100, 0.11, s.destination.position.y / 100)
			
			create org.make_xyz (s.polypoints.first.x / 50, 0.11, s.polypoints.first.y / 50)
			create dst.make_xyz (s.polypoints.last.x / 50, 0.11, s.polypoints.last.y / 50)
			create color.make_xyz (0,0,0)	-- Black
			
--			io.put_string ("%N" + s.line.name + ": " + s.origin.name + x_org.out + y_org.out + " -> " + s.destination.name + x_dst.out + y_dst.out)
			draw_circle (org, color, 2*line_width)
			draw_circle (dst, color, 2*line_width)

			-- draw a connecting line
			from
				f := 1
				t := 2
			until
				f >= s.polypoints.count
			loop
				draw_line (create {GL_VECTOR_3D[DOUBLE]}.make_xyz (s.polypoints.i_th (f).x / 50, 0.1, s.polypoints.i_th (f).y / 50), create {GL_VECTOR_3D[DOUBLE]}.make_xyz (s.polypoints.i_th (t).x / 50, 0.1, s.polypoints.i_th (t).y / 50))
				draw_circle(create {GL_VECTOR_3D[DOUBLE]}.make_xyz (s.polypoints.i_th (f).x / 50, 0.1, s.polypoints.i_th (f).y / 50), line_color, line_width)
				f := f + 1
				t := t + 1
			end
			draw_circle (create {GL_VECTOR_3D[DOUBLE]}.make_xyz (s.polypoints.i_th (f).x / 50, 0.1, s.polypoints.i_th (f).y / 50), line_color, line_width)
		end

end -- class TRAFFIC_LINE_FACTORY
