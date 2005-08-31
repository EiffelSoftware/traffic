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
		do
			create line_color.make_xyz (rgb.x,rgb.y,rgb.z)
			unchanged := False
		end
		
	set_line_width (w: DOUBLE) is
			-- set the line width
		do
			line_width := w
			unchanged := False
		end
		
feature{NONE} -- Drawing
		
	draw_circle(p, rgb: GL_VECTOR_3D[DOUBLE]; r: DOUBLE; ) is
			-- draw a circle between traffic line segments
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
--			io.new_line
--			io.put_string (p.double_item (1).out)
--			io.put_string (p.double_item (3).out)
			
		end
		
	draw_line (p1, p2: TUPLE[DOUBLE]) is
			-- draw a line
		local
			px, py, pz, qx, qy, qz: DOUBLE
			delta_x, delta_z: DOUBLE
			norm: DOUBLE
		do
			px := p1.double_item (1)
			py := p1.double_item (2)
			pz := p1.double_item (3)
			
			qx := p2.double_item (1)
			qy := p2.double_item (2)
			qz := p2.double_item (3)
			
			delta_x := qx - px
			delta_z := qz - pz
			
			norm := sqrt (delta_x*delta_x + delta_z*delta_z)
			
			draw_plane ([px-delta_z*line_width/norm,py,pz+delta_x*line_width/norm],[px+delta_z*line_width/norm,py,pz-delta_x*line_width/norm], [qx+delta_z*line_width/norm,qy,qz-delta_x*line_width/norm] ,[qx-delta_z*line_width/norm,qy,qz+delta_x*line_width/norm])
			gl_flush
		end
		
	draw_plane (p1, p2, p3, p4: TUPLE[DOUBLE]) is
			-- draw a plane
		do
			gl_begin (em_gl_quads)
				gl_color3dv (line_color.pointer)
				gl_vertex3d (p1.double_item (1), p1.double_item (2), p1.double_item (3))
				gl_vertex3d (p2.double_item (1), p2.double_item (2), p2.double_item (3))
				gl_vertex3d (p3.double_item (1), p3.double_item (2), p3.double_item (3))
				gl_vertex3d (p4.double_item (1), p4.double_item (2), p4.double_item (3))
			gl_end
		end
		
feature{NONE} -- Variables
		
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
		local
			x_org, y_org, x_dst, y_dst: DOUBLE
			f, t: INTEGER
--			rgb: TUPLE[DOUBLE]
		do
			-- draw circles at the origin and destination
			x_org := s.origin.position.x / 100
			y_org := s.origin.position.y / 100
			x_dst := s.destination.position.x / 100
			y_dst := s.destination.position.y / 100
--			io.put_string ("%N" + s.line.name + ": " + s.origin.name + x_org.out + y_org.out + " -> " + s.destination.name + x_dst.out + y_dst.out)
			draw_circle (create {GL_VECTOR_3D[DOUBLE]}.make_xyz (x_org, 0.11, y_org), create {GL_VECTOR_3D[DOUBLE]}.make_xyz (0,0,0), 2*line_width)
			draw_circle (create {GL_VECTOR_3D[DOUBLE]}.make_xyz (x_dst, 0.11, y_dst), create {GL_VECTOR_3D[DOUBLE]}.make_xyz (0,0,0), 2*line_width)
			
			-- draw a connecting line
--			rgb := [red, green, blue]
			from
				f := 1
				t := 2
			until
				f >= s.polypoints.count
			loop
				draw_line ([s.polypoints.i_th (f).x / 100, 0.1, s.polypoints.i_th (f).y / 100], [s.polypoints.i_th (t).x / 100, 0.1, s.polypoints.i_th (t).y / 100])
--				draw_circle([s.polypoints.i_th (f).x / 100, 0.1, s.polypoints.i_th (f).y / 100], line_width,rgb)
				f := f + 1
				t := t + 1
			end
--			draw_circle ([s.polypoints.i_th (f).x / 100, 0.1, s.polypoints.i_th (f).y / 100], line_width, rgb)
		end

end -- class TRAFFIC_LINE_FACTORY
