indexing
	description: "[
	
		A 3-dimensional pyramid that can be further subdivided into
		four smaller pyramids.
		
	]"
	date: "$Date$"
	revision: "$Revision$"

class
	SIERPINSKI_PYRAMID
	
inherit
	SINGLE_MATH
		export {NONE} all end
	
	EM_CONSTANTS
		export {NONE} all end
	
	GL_FUNCTIONS
		export {NONE} all end
	
create	
	make
	
feature {NONE} -- Initialisation

	make (a_point1, a_point2, a_point3, a_point4, a_color1, a_color2, a_color3, a_color4: GL_VECTOR_3D [REAL]) is
			-- Initialise pyramid with 4 corners and their colors.
		require
			points_exist: a_point1 /= Void and a_point2 /= Void and a_point3 /= Void and a_point4 /= Void
			colors_exist: a_color1 /= Void and a_color2 /= Void and a_color3 /= Void and a_color4 /= Void
		do
			point1 := a_point1
			point2 := a_point2
			point3 := a_point3
			point4 := a_point4
			color1 := a_color1
			color2 := a_color2
			color3 := a_color3
			color4 := a_color4
			is_subdivided := False
		end

feature -- Access

	point1, point2, point3, point4: GL_VECTOR_3D [REAL]
			-- Corner points of pyramid
	
	color1, color2, color3, color4: GL_VECTOR_3D [REAL]
			-- Color of corners

feature -- Status

	is_subdivided: BOOLEAN
			-- Is this pyramid subdivided?

feature -- Basic operations

	subdivide (level: INTEGER) is
			-- Subdivide `Current' `level's deep.
		local
			point12, point13, point14, point23, point24, point34: GL_VECTOR_3D [REAL]
			color12, color13, color14, color23, color24, color34: GL_VECTOR_3D [REAL]
			pyramid: SIERPINSKI_PYRAMID
		do
			if level > 0 then
				if not is_subdivided then
					point12 := middle (point1, point2)
					point13 := middle (point1, point3)
					point14 := middle (point1, point4)
					point23 := middle (point2, point3)
					point24 := middle (point2, point4)
					point34 := middle (point3, point4)
		
					color12 := middle (color1, color2)
					color13 := middle (color1, color3)
					color14 := middle (color1, color4)
					color23 := middle (color2, color3)
					color24 := middle (color2, color4)
					color34 := middle (color3, color4)
		
					create pyramids.make (1, 4)
					create pyramid.make (point1, point12, point13, point14, color1, color12, color13, color14)
					pyramids.put (pyramid, 1)
					create pyramid.make (point2, point12, point23, point24, color2, color12, color23, color24)
					pyramids.put (pyramid, 2)
					create pyramid.make (point3, point13, point23, point34, color3, color13, color23, color34)
					pyramids.put (pyramid, 3)
					create pyramid.make (point4, point14, point24, point34, color4, color14, color24, color34)
					pyramids.put (pyramid, 4)
					is_subdivided := True
				end
				
				pyramids.item (1).subdivide (level-1)
				pyramids.item (2).subdivide (level-1)
				pyramids.item (3).subdivide (level-1)
				pyramids.item (4).subdivide (level-1)
			else
				is_subdivided := False
			end
		end

feature -- Drawing

	draw is
			-- Draw `Current'.
		do
			if is_subdivided then
				pyramids.item (1).draw
				pyramids.item (2).draw
				pyramids.item (3).draw
				pyramids.item (4).draw
			else
				gl_begin (Em_gl_triangle_strip)
					gl_color3fv (color1.pointer)
					gl_normal3fv (point1.pointer)
					gl_vertex3fv (point1.pointer)

					gl_color3fv (color2.pointer)
					gl_normal3fv (point2.pointer)
					gl_vertex3fv (point2.pointer)

					gl_color3fv (color3.pointer)
					gl_normal3fv (point3.pointer)
					gl_vertex3fv (point3.pointer)

					gl_color3fv (color4.pointer)
					gl_normal3fv (point4.pointer)
					gl_vertex3fv (point4.pointer)

					gl_color3fv (color1.pointer)
					gl_normal3fv (point1.pointer)
					gl_vertex3fv (point1.pointer)

					gl_color3fv (color2.pointer)
					gl_normal3fv (point2.pointer)
					gl_vertex3fv (point2.pointer)
				gl_end
			end
		end

feature {NONE} -- Implementation

	pyramids: ARRAY [SIERPINSKI_PYRAMID]
			-- Subdivded pyramids
	
	middle (vector1, vector2: GL_VECTOR_3D [REAL]): GL_VECTOR_3D [REAL] is
			-- Calculate middle of `vector1' and `vector2'.
		do
			create Result.make_xyz ((vector1.x+vector2.x)/2, (vector1.y+vector2.y)/2, (vector1.z+vector2.z)/2)
		end
		
end
