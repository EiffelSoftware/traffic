indexing
	description: "Factory generating 3d representations of places as orthogonal squares"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_3D_PLACE_SQUARE_REP_FACTORY

inherit
	TRAFFIC_3D_PLACE_FACTORY

	EM_SHARED_BITMAP_FACTORY
		export {NONE} all end

	TRAFFIC_3D_CONSTANTS
		export {NONE} all end

	GL_FUNCTIONS
		export {NONE} all end

	GLU_FUNCTIONS
		export {NONE} all end

	TRAFFIC_3D_DRAWING_PRIMITIVES

feature {NONE} -- Implementation

	specify_object is
			-- Specify an object that can be drawn in the origin
			-- (front, left, lower corner of bounding box = 0,0,0)
		local
			p1, p2, p3, p4: GL_VECTOR_3D[DOUBLE]
			poly_points: DS_LINKED_LIST[EM_VECTOR_2D]
			color_3d: GL_VECTOR_3D [DOUBLE]
			q1, q2, q3, q4: EM_VECTOR_2D
			border: DOUBLE
			place_radius: DOUBLE
		do
			-- Normals all parallel to y axis
			if color /= Void then
				create color_3d.make_xyz (color.red/255, color.green/255, color.blue/255)
			else
				create color_3d.make_xyz (0, 0, 0)
			end
			border := 4.0

			if place.stops.count > 2 then

				q1 := map_to_gl_coords (create {EM_VECTOR_2D}.make (place.position.x - place.width/2 - border, place.position.y - place.breadth/2 - border))
				q2 := map_to_gl_coords (create {EM_VECTOR_2D}.make (place.position.x - place.width/2 - border, place.position.y + place.breadth/2 + border))
				q3 := map_to_gl_coords (create {EM_VECTOR_2D}.make (place.position.x + place.width/2 + border, place.position.y + place.breadth/2 + border))
				q4 := map_to_gl_coords (create {EM_VECTOR_2D}.make (place.position.x + place.width/2 + border, place.position.y - place.breadth/2 - border))
				p1 := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (q1.x , place_height, q1.y)
				p2 := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (q2.x , place_height, q2.y)
				p3 := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (q3.x , place_height, q3.y)
				p4 := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (q4.x , place_height, q4.y)
				gl_begin_external (em_gl_quads)
					gl_color3dv_external (color_3d.pointer)
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

				object_width := (q3.x - q1.x).abs
				object_height := 2.0
				object_depth := (q2.y - q1.y).abs

				create poly_points.make
				poly_points.force (create {EM_VECTOR_2D}.make (p1.x, p1.z), 1) -- left bottom corner
				poly_points.force (create {EM_VECTOR_2D}.make (p2.x, p2.z), 2) -- left upper corner
				poly_points.force (create {EM_VECTOR_2D}.make (p3.x, p3.z), 3) -- right upper corner
				poly_points.force (create {EM_VECTOR_2D}.make (p4.x, p4.z), 4) -- right bottom corner

				create collision_polygon.make_from_absolute_list (create {EM_VECTOR_2D}.make (p3.x-(p3.x-p1.x)/2, p1.z-(p3.z-p1.z)/2), poly_points)
			else
				p1 := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (map_to_gl_coords (place.position).x, place_height, map_to_gl_coords (place.position).y)
				place_radius := .1

					-- a little bit higher than the line
					gl_matrix_mode_external (Em_gl_modelview)
					gl_push_matrix_external
					gl_color3dv_external(color_3d.pointer)
					gl_translated_external (p1.x, p1.y, p1.z)
					gl_rotated_external (90, 1, 0, 0)
					gl_disable_external (em_gl_lighting)
					glu_disk_external (glu_new_quadric, 0, place_radius, 72, 1)
					gl_pop_matrix_external
					gl_flush_external

				q1 := map_to_gl_coords (create {EM_VECTOR_2D}.make (place.position.x - place.width/2 - border, place.position.y - place.breadth/2 - border))
				q2 := map_to_gl_coords (create {EM_VECTOR_2D}.make (place.position.x - place.width/2 - border, place.position.y + place.breadth/2 + border))
				q3 := map_to_gl_coords (create {EM_VECTOR_2D}.make (place.position.x + place.width/2 + border, place.position.y + place.breadth/2 + border))
				q4 := map_to_gl_coords (create {EM_VECTOR_2D}.make (place.position.x + place.width/2 + border, place.position.y - place.breadth/2 - border))
				p1 := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (q1.x , place_height, q1.y)
				p2 := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (q2.x , place_height, q2.y)
				p3 := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (q3.x , place_height, q3.y)
				p4 := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (q4.x , place_height, q4.y)

				create poly_points.make
				poly_points.force (create {EM_VECTOR_2D}.make (p1.x, p1.z), 1) -- left bottom corner
				poly_points.force (create {EM_VECTOR_2D}.make (p2.x, p2.z), 2) -- left upper corner
				poly_points.force (create {EM_VECTOR_2D}.make (p3.x, p3.z), 3) -- right upper corner
				poly_points.force (create {EM_VECTOR_2D}.make (p4.x, p4.z), 4) -- right bottom corner

				create collision_polygon.make_from_absolute_list (create {EM_VECTOR_2D}.make (p3.x-(p3.x-p1.x)/2, p1.z-(p3.z-p1.z)/2), poly_points)

				object_width := (q3.x - q1.x).abs
				object_height := 2.0
				object_depth := (q2.y - q1.y).abs

			end
		end


end
