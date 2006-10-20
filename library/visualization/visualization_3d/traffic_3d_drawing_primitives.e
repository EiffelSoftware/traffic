indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	TRAFFIC_3D_DRAWING_PRIMITIVES

inherit

	EM_CONSTANTS
		export {NONE} all end

	GL_FUNCTIONS
		export {NONE} all end

	GLU_FUNCTIONS
		export {NONE} all end

	DOUBLE_MATH
		export {NONE} all end


feature -- Basic operations

	create_circle (a_color: GL_VECTOR_3D [DOUBLE]; a_center: GL_VECTOR_3D [DOUBLE]; a_radius: REAL) is
			--
		do
			gl_matrix_mode_external (Em_gl_modelview)
			gl_push_matrix_external
				gl_color3dv_external(a_color.pointer)
				-- a little bit higher than the line
				gl_translated_external (a_center.x, a_center.y, a_center.z)
				gl_rotated_external (90, 1, 0, 0)
				gl_disable_external (em_gl_lighting)
				glu_disk_external (glu_new_quadric, 0, a_radius, 72, 1)
			gl_pop_matrix_external
			gl_flush_external
		end


	create_rectangle (a_color: GL_VECTOR_3D [DOUBLE]; p1, p2, p3, p4: GL_VECTOR_3D [DOUBLE]) is
			--
		do
			gl_begin_external (em_gl_quads)
				gl_color3dv_external (a_color.pointer)
				gl_normal3d_external (0,1,0)
				gl_vertex3d_external (p1.x, p1.y, p1.z)
				gl_normal3d_external (0,1,0)
				gl_vertex3d_external (p2.x, p2.y, p2.z)
				gl_normal3d_external (0,1,0)
				gl_vertex3d_external (p3.x, p3.y, p3.z)
				gl_normal3d_external (0,1,0)
				gl_vertex3d_external (p4.x, p4.y, p4.z)
			gl_end
			gl_flush_external
		end

	create_polyline (a_color: GL_VECTOR_3D [DOUBLE]; a_polypoints: ARRAYED_LIST [GL_VECTOR_3D [DOUBLE]]; a_height: DOUBLE) is
			--
		local
			i: INTEGER
			org, dst: GL_VECTOR_3D[DOUBLE]
			delta_x, delta_z, norm: DOUBLE
		do
			from
				i := 1
			until
				i >= a_polypoints.count
			loop
				org := a_polypoints.i_th (i)
				dst := a_polypoints.i_th (i+1)
				delta_x := dst.x - org.x
				delta_z := dst.z - org.z

				norm := sqrt (delta_x*delta_x + delta_z*delta_z)

				if norm = 0 then
					norm := 1
				end
				create_rectangle (a_color, create {GL_VECTOR_3D[DOUBLE]}.make_xyz (org.x-delta_z*a_height/norm, org.y, org.z+delta_x*a_height/norm), create {GL_VECTOR_3D[DOUBLE]}.make_xyz (org.x+delta_z*a_height/norm, org.y, org.z-delta_x*a_height/norm), create {GL_VECTOR_3D[DOUBLE]}.make_xyz (dst.x+delta_z*a_height/norm, dst.y, dst.z-delta_x*a_height/norm) ,create {GL_VECTOR_3D[DOUBLE]}.make_xyz (dst.x-delta_z*a_height/norm, dst.y, dst.z+delta_x*a_height/norm))
				create_circle (a_color, org, a_height)
------				create_cube (create {GL_VECTOR_3D[DOUBLE]}.make_xyz (org.x-delta_z*line_width/norm, org.y + line_height + 0.4*height + highlighting_delta, org.z+delta_x*line_width/norm), create {GL_VECTOR_3D[DOUBLE]}.make_xyz (org.x+delta_z*line_width/norm, org.y + line_height + 0.4*height + highlighting_delta, org.z-delta_x*line_width/norm), create {GL_VECTOR_3D[DOUBLE]}.make_xyz (dst.x+delta_z*line_width/norm, dst.y + line_height + 0.4*height + highlighting_delta, dst.z-delta_x*line_width/norm) ,create {GL_VECTOR_3D[DOUBLE]}.make_xyz (dst.x-delta_z*line_width/norm, dst.y + line_height + 0.4*height + highlighting_delta, dst.z+delta_x*line_width/norm))
------				create_cylinder (org, line_color, line_width, line_height + line_height + 0.4*height + highlighting_delta)

				i := i + 1
			end
		end

	create_cylinder (a_color: GL_VECTOR_3D [DOUBLE]; a_center: GL_VECTOR_3D [DOUBLE]; a_radius, a_height: DOUBLE) is
			-- Create a cylinder at point `p' with color `rgb' and radius `r' and height `h'.
		require
			center_exists: a_center /= Void
			color_exists: a_color /= Void and then (a_color.x >= 0 and a_color.x <= 1 and a_color.y >= 0 and a_color.y <= 1 and a_color.z >= 0 and a_color.z <= 1)
			radius_greater_than_zero: a_radius > 0
		do
			create_circle (a_color, a_center, a_radius)

			gl_matrix_mode_external (Em_gl_modelview)
			gl_push_matrix_external
			gl_color3dv_external(a_color.pointer)
			-- a little bit higher than the line
			gl_translated_external (a_center.x, a_center.y, a_center.z)
			gl_rotated_external (90, 1, 0, 0)
			gl_disable_external (em_gl_lighting)
			glu_cylinder_external (glu_new_quadric_external, a_radius, a_radius, a_height, 8, 8)
			gl_pop_matrix_external
			gl_flush_external

			create_circle (a_color, create {GL_VECTOR_3D [DOUBLE]}.make_xyz (a_center.x, a_center.y - a_height, a_center.z), a_radius)

		end

	create_cube (a_color: GL_VECTOR_3D [DOUBLE]; p1, p2, p3, p4: GL_VECTOR_3D[DOUBLE]; a_height: DOUBLE) is
			-- Create a cube with four edges `p1', `p2', `p3', and `p4' and height `height'.
		require
			p1_exists: p1 /= Void
			p2_exists: p2 /= Void
			p3_exists: p3 /= Void
			p4_exists: p4 /= Void
		do
			gl_begin_external (em_gl_quads)
				gl_color3dv_external (a_color.pointer)
				-- Front
				gl_normal3d_external (1, 0, 0)
				gl_vertex3d_external (p1.x, p1.y, p1.z)
				gl_normal3d_external (1, 0, 0)
				gl_vertex3d_external (p1.x, p1.y - a_height, p1.z)
				gl_normal3d_external (1, 0, 0)
				gl_vertex3d_external (p2.x, p2.y - a_height, p2.z)
				gl_normal3d_external (1, 0, 0)
				gl_vertex3d_external (p2.x, p2.y, p2.z)
				-- Back
				gl_normal3d_external (-1, 0, 0)
				gl_vertex3d_external (p3.x, p3.y, p3.z)
				gl_normal3d_external (-1, 0, 0)
				gl_vertex3d_external (p3.x, p3.y - a_height, p3.z)
				gl_normal3d_external (-1, 0, 0)
				gl_vertex3d_external (p4.x, p4.y - a_height, p4.z)
				gl_normal3d_external (-1, 0, 0)
				gl_vertex3d_external (p4.x, p4.y, p4.z)
				-- Left
				gl_normal3d_external (0, 0, 1)
				gl_vertex3d_external (p3.x, p3.y, p3.z)
				gl_normal3d_external (0, 0, 1)
				gl_vertex3d_external (p3.x, p3.y - a_height, p3.z)
				gl_normal3d_external (0, 0, 1)
				gl_vertex3d_external (p1.x, p1.y - a_height, p1.z)
				gl_normal3d_external (0, 0, 1)
				gl_vertex3d_external (p1.x, p1.y, p1.z)
				-- Right
				gl_normal3d_external (0, 0, -1)
				gl_vertex3d_external (p2.x, p2.y, p2.z)
				gl_normal3d_external (0, 0, -1)
				gl_vertex3d_external (p2.x, p2.y - a_height, p2.z)
				gl_normal3d_external (0, 0, -1)
				gl_vertex3d_external (p4.x, p4.y - a_height, p4.z)
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
				gl_vertex3d_external (p1.x, p1.y - a_height, p1.z)
				gl_normal3d_external (0, 1, 0)
				gl_vertex3d_external (p2.x, p2.y - a_height, p2.z)
				gl_normal3d_external (0, 1, 0)
				gl_vertex3d_external (p3.x, p3.y - a_height, p3.z)
				gl_normal3d_external (0, 1, 0)
				gl_vertex3d_external (p4.x, p4.y - a_height, p4.z)
			gl_end_external
		end

end
