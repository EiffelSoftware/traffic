indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_3D_CONNECTION_FACTORY inherit

		TE_3D_MEMBER_FACTORY_PRIMITIVE
			redefine
				make
			end

		TRAFFIC_3D_CONSTANTS

		DOUBLE_MATH

create make

feature -- Initialization

	make is
			-- makes factory and sets the color to black
		local
		default_material: TE_MATERIAL_SIMPLE
		do
			create default_material.make_with_color(0.0,0.0,0.0)
			set_material(default_material)
			width := Line_width
		end

feature -- 3D Member Creation

	create_flat_polyline(some_points: ARRAYED_LIST[EM_VECTOR3D]; a_width: DOUBLE) is
			-- creates polyline facing torwards the y value
		require
			at_least_one_segment: some_points.count >= 2
		local
			current_uvw_set: ARRAYED_LIST[EM_VECTOR3D]
			new_uvw_index_set: ARRAYED_LIST[ARRAYED_LIST[INTEGER]]
			vector, current_point, next_point, last_point, current_bisector, up_vector: EM_VECTOR3D
			current_angle: DOUBLE
			vertex_indices, normal_indices, uvw_indices: ARRAYED_LIST[INTEGER]
			current_face: TE_3D_FACE
			single_cluster: TE_3D_CLUSTER
			i: INTEGER
		do
			create vertex_list.make(some_points.count*2)
			create normal_list.make(1)
			create face_list.make((some_points.count-1)*2)
			create uvw_sets.make(1)
			create current_uvw_set.make(0)

			create uvw_indices.make(0)
			--create cluster
			create cluster_list.make(1)
			create single_cluster.make(material)

			up_vector.set(0.0, 1.0, 0.0)
			--create normal
			normal_list.force(up_vector)
			-- create first two vertices
			current_point := some_points.i_th(1)
			next_point := some_points.i_th(2)
			current_bisector := up_vector.cross_product(next_point-current_point).normalized  * (a_width/2.0)
			vector := current_point + current_bisector
			vertex_list.force(vector)
			vector := current_point - current_bisector
			vertex_list.force(vector)
			from
				i := 2
			until
				i > some_points.count-1
			loop
				--create vertices
				last_point := some_points.i_th(i-1)
				current_point := some_points.i_th(i)
				next_point := some_points.i_th(i+1)
				current_angle := angle_between_vectors((last_point-current_point),(next_point-current_point))/2.0
				current_bisector := up_vector.cross_product(((next_point-current_point).normalized + (current_point-last_point).normalized).normalized)
				current_bisector := current_bisector * (a_width/(2.0*sine(current_angle)))
				vector := current_point + current_bisector
				vertex_list.force(vector)
				vector := current_point - current_bisector
				vertex_list.force(vector)

				--create first triangle of quad
				create new_uvw_index_set.make(1)
				create vertex_indices.make(3)
				create normal_indices.make(3)

				vertex_indices.force(i+(i-3))
				vertex_indices.force(i+(i-2))
				vertex_indices.force(i+(i-1))

				normal_indices.force(1)
				normal_indices.force(1)
				normal_indices.force(1)

				new_uvw_index_set.force(uvw_indices)
				create current_face.make(vertex_indices, normal_indices,new_uvw_index_set, vertex_list.i_th (vertex_indices.i_th (1)),vertex_list.i_th (vertex_indices.i_th (2)),vertex_list.i_th (vertex_indices.i_th (3)))
				face_list.force(current_face)
				single_cluster.push_index (face_list.count)


				--create second triangle of quad
				create new_uvw_index_set.make(1)
				create vertex_indices.make(3)
				create normal_indices.make(3)

				vertex_indices.force(i+(i-2))
				vertex_indices.force(i+(i))
				vertex_indices.force(i+(i-1))

				normal_indices.force(1)
				normal_indices.force(1)
				normal_indices.force(1)

				new_uvw_index_set.force(uvw_indices)

				create current_face.make(vertex_indices, normal_indices,new_uvw_index_set, vertex_list.i_th (vertex_indices.i_th (1)),vertex_list.i_th (vertex_indices.i_th (2)),vertex_list.i_th (vertex_indices.i_th (3)))
				face_list.force(current_face)
				single_cluster.push_index (face_list.count)

				i := i+1
			end
			-- create last two vertices
			i := some_points.count
			current_point := some_points.i_th(i)
			last_point := some_points.i_th(i-1)
			current_bisector := up_vector.cross_product(current_point-last_point).normalized  * (a_width/2.0)
			vector := current_point + current_bisector
			vertex_list.force(vector)
			vector := current_point - current_bisector
			vertex_list.force(vector)

			--create first triangle of last quad
			create new_uvw_index_set.make(1)
			create vertex_indices.make(3)
			create normal_indices.make(3)

			vertex_indices.force(i+(i-3))
			vertex_indices.force(i+(i-2))
			vertex_indices.force(i+(i-1))

			normal_indices.force(1)
			normal_indices.force(1)
			normal_indices.force(1)

			new_uvw_index_set.force(uvw_indices)
			create current_face.make(vertex_indices, normal_indices,new_uvw_index_set, vertex_list.i_th (vertex_indices.i_th (1)),vertex_list.i_th (vertex_indices.i_th (2)),vertex_list.i_th (vertex_indices.i_th (3)))
			face_list.force(current_face)
			single_cluster.push_index (face_list.count)


			--create secound triangle of last quad
			create new_uvw_index_set.make(1)
			create vertex_indices.make(3)
			create normal_indices.make(3)

			vertex_indices.force(i+(i-2))
			vertex_indices.force(i+(i))
			vertex_indices.force(i+(i-1))

			normal_indices.force(1)
			normal_indices.force(1)
			normal_indices.force(1)

			new_uvw_index_set.force(uvw_indices)

			create current_face.make(vertex_indices, normal_indices,new_uvw_index_set, vertex_list.i_th (vertex_indices.i_th (1)),vertex_list.i_th (vertex_indices.i_th (2)),vertex_list.i_th (vertex_indices.i_th (3)))
			face_list.force(current_face)
			single_cluster.push_index (face_list.count)


			cluster_list.force(single_cluster)

			calculate_face_neighbours
			build_ressource_list
			last_3d_member := build_3d_member

		end

feature -- Access

	connection: TRAFFIC_CONNECTION
			-- Connection for which the 3d object is created

	collision_polygons: DS_LINKED_LIST [EM_POLYGON_CONVEX_COLLIDABLE]
			-- Collision polygons for the generated object (one per two polypoints)

	width: DOUBLE
			-- Width of line that represents the connection

feature -- Measurement

feature -- Status report

feature -- Status setting

	set_connection (a_connection: TRAFFIC_CONNECTION) is
			-- Set the connection to generate a representation for to `a_connection'.
		require
			a_connection_exists: a_connection /= Void
		do
			connection := a_connection
		end

	set_color (r,g,b: DOUBLE) is
			-- Set `color' to `a_color'. as unclamped floating point colors
		local
			new_material: TE_MATERIAL_SIMPLE
		do
			create new_material.make_with_color(r, g, b)
			set_material(new_material)
		end

	set_width (a_width: DOUBLE) is
			-- Set the `width' of the drawn connection to `a_width'.
		require
			width_valid: a_width > 0.0
		do
			width := a_width
		end

feature -- Cursor movement

feature -- Element change

feature -- Removal

feature -- Resizing

feature -- Transformation

feature -- Conversion

feature -- Duplication

feature -- Miscellaneous

feature -- Basic operations

	create_connection is
			-- creates the connection and returns it
		require
			width_positive: width > 0
			connection_not_void: connection /= void
		local
			polyline_3d: ARRAYED_LIST[EM_VECTOR3D]
			current_polypoint_2d: EM_VECTOR_2D -- <- i use this because of the map_to_gl_coords function. ARGH! TODO: remove the map_to_gl_coords stuff...
			current_polypoint_3d: EM_VECTOR3D
			i: INTEGER

			delta_x, delta_y, delta_z, norm: DOUBLE -- for collision polygon creation from old factory
			start_point, end_point, a_point, c_point: EM_VECTOR_2D -- for collision polygon creation from old factory
			polygon_points: DS_LINKED_LIST [EM_VECTOR_2D] -- for collision polygon creation from old factory
			collidable: EM_POLYGON_CONVEX_COLLIDABLE -- for collision polygon creation from old factory

		do

			create polyline_3d.make(connection.polypoints.count)

			create collision_polygons.make -- from old factory
			from
				i := 1
			until
				i > connection.polypoints.count - 1
			loop
--				current_polypoint_2d := map_to_gl_coords(connection.polypoints.i_th(i))
				current_polypoint_2d := connection.polypoints.item(i)
				current_polypoint_3d.set (current_polypoint_2d.x, 0.0, current_polypoint_2d.y)
				polyline_3d.extend (current_polypoint_3d)


				-- Collision polygon TAKEN FROM OLD CONNECTION FACTORY
					create start_point.make (connection.polypoints.item (i).x, connection.polypoints.item (i).y)
					create end_point.make (connection.polypoints.item (i+1).x, connection.polypoints.item (i+1).y)

--					start_point := map_to_gl_coords (start_point)
--					end_point := map_to_gl_coords (end_point)
					start_point := start_point
					end_point := end_point

					delta_x := end_point.x - start_point.x
					delta_y := end_point.y - start_point.y

					norm := sqrt (delta_x*delta_x + delta_y*delta_y)

					if norm = 0 then
						norm := 1
					end

					create a_point.make (start_point.x-delta_y*1.5*width/norm, start_point.y+delta_x*1.5*width/norm)
					create c_point.make (end_point.x+delta_y*1.5*width/norm, end_point.y-delta_x*1.5*width/norm)

					create polygon_points.make
					polygon_points.force ((a_point),1)
					polygon_points.force (create {EM_VECTOR_2D}.make (start_point.x+delta_y*1.5*width/norm, start_point.y-delta_x*1.5*width/norm), 2)
					polygon_points.force ((c_point),3)
					polygon_points.force (create {EM_VECTOR_2D}.make (end_point.x-delta_y*1.5*width/norm, end_point.y+delta_x*1.5*width/norm), 4)
					create collidable.make_from_absolute_list ((a_point + (c_point - a_point)/2), polygon_points)
					collision_polygons.force_last (collidable)
				------

				i := i + 1
			end
			--add last point to the 3d_polyline
			i := connection.polypoints.count
			current_polypoint_2d := connection.polypoints.item (i)
--			current_polypoint_2d := map_to_gl_coords(connection.polypoints.i_th(i))
			current_polypoint_3d.set (current_polypoint_2d.x, 0.0, current_polypoint_2d.y)
			polyline_3d.extend (current_polypoint_3d)

			create_flat_polyline(polyline_3d, width)
		end

feature -- Obsolete

feature -- Inapplicable

feature {NONE} -- Implementation

	angle_between_vectors(vector_a, vector_b: EM_VECTOR3D): DOUBLE is
			-- angle between two 3d vectors
		local
			d,l,a: DOUBLE
		do
			l := (vector_a.length * vector_b.length)
			d := (vector_a.dot_product(vector_b))
			a := d/l
			if a < -1.0 then
				a := -1.0
			elseif a > 1.0 then
				a := 1.0
			end
			Result := arc_cosine(a)
		end


invariant
	invariant_clause: True -- Your invariant here

end
