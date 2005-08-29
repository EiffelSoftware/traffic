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
--		create coords.make (1,71)
--		
--			coords.force ([0.0,1.0], 1)
--			coords.force ([-0.9589, 0.2837], 1)
--			coords.force ([-0.5440, -0.8391], 2)
--			coords.force ([ 0.6503, -0.7597], 3)
--			coords.force ([ 0.9129, 0.4081], 4)
--			coords.force ([-0.1324, 0.9912], 5)
--			coords.force ([-0.9880, 0.1543], 6)
--			coords.force ([-0.4282, -0.9037],7)
--			coords.force ([ 0.7451, -0.6669], 8)
--			coords.force ([ 0.8509, 0.5253], 9)
--			coords.force ([-0.2624, 0.9650], 10)
--			coords.force ([-0.9998, 0.0221], 11)
--			coords.force ([-0.3048, -0.9524], 12)
--			coords.force ([ 0.8268, -0.5625], 13)
--			coords.force ([ 0.7739, 0.6333], 14)
--			coords.force ([-0.3878, 0.9218], 15)
--			coords.force ([-0.9939,-0.1104], 16)
--			coords.force ([-0.1761,-0.9844], 17)
--			coords.force ([ 0.8940,-0.4481], 18)
--			coords.force ([ 0.6833, 0.7302], 19)
--			coords.force ([-0.5064, 0.8623], 20)
--			coords.force ([-0.9705, -0.2410], 21)
--			coords.force ([-0.0442,-0.9990], 22)
--			coords.force ([ 0.9454,-0.3258], 23)
--			coords.force ([ 0.5806, 0.8142], 24)
--			coords.force ([-0.6160, 0.7877], 25)
--			coords.force ([-0.9301,-0.3673], 26)
--			coords.force ([ 0.0884,-0.9961], 27)
--			coords.force ([ 0.9802,-0.1978], 28)
--			coords.force ([ 0.4677, 0.8839], 29)
--			coords.force ([-0.7149, 0.6993], 30)
--			coords.force ([-0.8733,-0.4872], 31)
--			coords.force ([ 0.2194,-0.9756], 32)
--			coords.force ([ 0.9978,-0.0663], 33)
--			coords.force ([ 0.3466, 0.9380], 34)
--			coords.force ([-0.8011, 0.5985], 35)
--			coords.force ([-0.8012,-0.5985], 36)
--			coords.force ([ 0.3466,-0.9380], 37)
--			coords.force ([ 0.9978, 0.0663], 38)
--			coords.force ([ 0.2195, 0.9756], 39)
--			coords.force ([-0.8733, 0.4872], 40)
--			coords.force ([-0.7149,-0.6992], 41)
--			coords.force ([ 0.4677,-0.8839], 42)
--			coords.force ([ 0.9802, 0.1978], 43)
--			coords.force ([ 0.0884, 0.9961], 44)
--			coords.force ([-0.9301, 0.3673], 45)
--			coords.force ([-0.6161, -0.7877],46)
--			coords.force ([ 0.5806, -0.8142],47)
--			coords.force ([ 0.9454, 0.3258], 48)
--			coords.force ([-0.0442, 0.9990], 49)
--			coords.force ([-0.9705, 0.2410], 50)
--			coords.force ([-0.5064,-0.8623], 51)
--			coords.force ([ 0.6832, -0.7302], 52)
--			coords.force ([ 0.8940, 0.4480], 53)
--			coords.force ([-0.1760, 0.9844], 54)
--			coords.force ([-0.9939, 0.1104], 55)
--			coords.force ([-0.3878, -0.9217], 56)
--			coords.force ([ 0.7739, -0.6333], 57)
--			coords.force ([ 0.8268, 0.5624], 58)
--			coords.force ([-0.3048, 0.9524], 59)
--			coords.force ([-0.9998, -0.0221], 60)
--			coords.force ([-0.2624, -0.9650], 61)
--			coords.force ([ 0.8509, -0.5253], 62)
--			coords.force ([ 0.7451, 0.6669], 63)
--			coords.force ([-0.4282, 0.9037], 64)
--			coords.force ([-0.9880, -0.1542], 65)
--			coords.force ([-0.1324, -0.9912], 66)
--			coords.force ([ 0.9129, -0.4081], 67)
--			coords.force ([ 0.6503, 0.7597], 68)
--			coords.force ([-0.5440, 0.8391], 69)
--			coords.force ([-0.9589, -0.2836], 70)
--			coords.force ([-0.0000, -1.0000], 71)
			
			identifier := identifier + 1
			
			gl_matrix_mode (Em_gl_modelview)
			gl_push_matrix
			gl_color3d (0,0.14,1)
			gl_translated (p1.double_item(1),0.14,p1.double_item(3))
			gl_rotated (90, 1,0,0)
			gl_load_name (identifier)
			glu_disk (glu_new_quadric, 0, 0.2, 72, 1)
			gl_pop_matrix
			
--			gl_begin (em_gl_polygon)
--			gl_color3d (0,0.14,1)
--			from i:= 1
--			until i > coords.count
--			loop
--				gl_vertex3d (coords.item(i).double_item(1)*0.2 + p1.double_item(1), 0.14,coords.item (i).double_item(2)*0.2 + p1.double_item(3))
--				i := i + 1
--			end
--			gl_end
			gl_flush
		
--			m_x := p1.double_item(1)
--			m_y := 0.14
--			m_z := p1.double_item(3)
--
--		gl_begin (em_gl_quads)
--				-- Front
--				gl_color3f (0, 0.14, 1) -- Blue
--				gl_vertex3d (p1.double_item(1)-0.15,0.14,p1.double_item(3)-0.15)
--				gl_vertex3d (p1.double_item(1)-0.15,0.14,p1.double_item(3)+0.15)
--				gl_vertex3d (p1.double_item(1)+0.15,0.14,p1.double_item(3)+0.15)
--				gl_vertex3d (p1.double_item(1)+0.15,0.14,p1.double_item(3)-0.15)
--			gl_end
--			gl_flush	
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
		
--	draw_circle(p1: TUPLE[DOUBLE]) is
--			-- draw a circle between metro segments
--		local
--			radius, x, y, i: DOUBLE
--		do
--			radius := line_width/2
--			gl_begin (em_gl_polygon)
--				gl_color3f (red, green, blue)
--				from
--					i := 0
--				until
--					i >= 100
--				loop
--					x := cosine (i/100*2*pi) * radius
--					y := sine (i/100*2*pi) * radius
--					gl_vertex3d (p1.double_item(1)+x,0.1,p1.double_item(3)+y)
--					i := i + 1
--				end
--			gl_end
--			gl_flush
--		end
	
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
