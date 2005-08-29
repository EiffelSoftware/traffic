indexing
	description: "Factory for metro lines"
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	METRO_LINE_FACTORY

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
	
	DOUBLE_MATH

feature -- Implementation

	identifier: INTEGER

	set_points (ps : ARRAY[TUPLE[DOUBLE]]) is
			-- create a new object
		require
			ps /= Void
			ps.count > 0
		do
			points := ps
			unchanged := False
		end
		
	set_color (rgb: TUPLE[DOUBLE]) is
			-- set the color
		do
			red := rgb.double_item(1)
			green := rgb.double_item(2)
			blue := rgb.double_item(3)
			unchanged := False
		end
		
	set_line_width (w: DOUBLE) is
			-- set the line width
		do
			line_width := w
		end
		
	draw_circle(p1: TUPLE[DOUBLE]) is
			-- draw a circle between metro segments
		local
			m_x,m_y,m_z: DOUBLE
			coords: ARRAY[TUPLE[DOUBLE]]
			i: INTEGER
		do
			identifier := identifier + 1
			
			gl_matrix_mode (Em_gl_modelview)
			gl_push_matrix
			gl_color3d (0,0.14,1)
			gl_translated (p1.double_item(1),0.14,p1.double_item(3))
			gl_rotated (90, 1,0,0)
			gl_load_name (identifier)
			glu_disk (glu_new_quadric, 0, 0.2, 72, 1)
			gl_pop_matrix
			
			gl_flush
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
			
			draw_plane ([px-delta_z*line_width/norm,py,pz+delta_x*line_width/norm],[px+delta_z*line_width/norm,py,pz-delta_x*line_width/norm], [qx+delta_z*line_width/norm,qy,qz-delta_x*line_width/norm] ,[qx-delta_z*line_width/norm,qy,qz+delta_x*line_width/norm],[red,green,blue])
			gl_flush
		end
		
	draw_plane (p1, p2, p3, p4, rgb: TUPLE[DOUBLE]) is
			-- draw a plane
		do
			gl_begin (em_gl_quads)
				-- Boden
				gl_color3d(rgb.double_item(1), rgb.double_item(2), rgb.double_item(3))
				gl_vertex3d (p1.double_item (1), p1.double_item (2), p1.double_item (3))
				gl_vertex3d (p2.double_item (1), p2.double_item (2), p2.double_item (3))
				gl_vertex3d (p3.double_item (1), p3.double_item (2), p3.double_item (3))
				gl_vertex3d (p4.double_item (1), p4.double_item (2), p4.double_item (3))
			gl_end
		end
	
	points: ARRAY[TUPLE[DOUBLE]]
	
	red, green, blue: DOUBLE
	
	object_width: DOUBLE is 2.0
			-- The size of the bounding box in x direction of created objects

	object_height: DOUBLE is 2.0
			-- The size of the bounding box in y direction of created objects

	object_depth: DOUBLE is 2.0
			-- The size of the bounding box in z direction of created objects
			
feature {NONE} -- Implementation

	texture: INTEGER
	
	line_width: DOUBLE
	
	specify_object is
			-- defining the object
		local
			v, n: INTEGER
		do
			from
				v := 1
				n := 2
			until
				v = points.count
			loop
				draw_line (points.item(v), points.item(n))
				draw_circle(points.item(v))
				v := v + 1
				n := n + 1
			end
			draw_circle (points.item(v))
		end

end -- class HOUSE_FACTORY
