indexing
	description:  "[
						Factory generating 3d representations for connections consisting of a polyline (same as TRAFFIC_3D_CONNECTION_LINE_REP_FACTORY) 
						and a polycubus floating in the air 
				   ]"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_3D_CONNECTION_HIGHLIGHTED_REP_FACTORY

inherit

	TRAFFIC_3D_CONNECTION_FACTORY

	DOUBLE_MATH

	TRAFFIC_3D_DRAWING_PRIMITIVES


feature -- Basic operations

	prepare is
			-- Prepare color, width etc. to be correct for the item to draw.
			-- In future, use various factories for the various items to draw.
		local
			road: TRAFFIC_ROAD
			line_section: TRAFFIC_LINE_SECTION
		do
			road ?= connection
			if road /= Void then
				if color = Void then
					if road.type.is_equal (create {TRAFFIC_TYPE_LIGHTRAIL}.make) then
						drawing_color := (create {GL_VECTOR_3D [DOUBLE]}.make_xyz (.4, .4, .4))
					elseif road.type.is_equal (create {TRAFFIC_TYPE_RAILROAD}.make) then
						drawing_color := (create {GL_VECTOR_3D [DOUBLE]}.make_xyz (0, 0, 0))
					else
						drawing_color := (create {GL_VECTOR_3D [DOUBLE]}.make_xyz (.4, .4, .4))
					end
				else
					drawing_color := create {GL_VECTOR_3D [DOUBLE]}.make_xyz (color.red/255, color.green/255, color.blue/255)
				end

				if width /= 0.0 then
					drawing_width := width
				else
					drawing_width := road_width
				end
			end

			line_section ?= connection
			if line_section /= Void then
				if color = Void and line_section.line /= Void and then line_section.line.color /= Void then
					drawing_color := (create {GL_VECTOR_3D [DOUBLE]}.make_xyz (line_section.line.color.red/255, line_section.line.color.green/255, line_section.line.color.blue/255))
				elseif color /= Void then
					drawing_color := create {GL_VECTOR_3D [DOUBLE]}.make_xyz (color.red/255, color.green/255, color.blue/255)
				else
					drawing_color := create {GL_VECTOR_3D [DOUBLE]}.make_xyz (0.4, 1.0, 0.4)
				end

				if width /= 0.0 then
					drawing_width := width
				else
					drawing_width := line_width
				end
			end

			if height >= 0.0 then
				drawing_height := height
			else
				drawing_height := line_height*20
			end
		end

	specify_object is
			-- Specify an object that can be drawn in the origin
			-- (front, left, lower corner of bounding box = 0,0,0)
		local
			i: INTEGER
			org, dst: GL_VECTOR_3D[DOUBLE]
			delta_x, delta_z, norm: DOUBLE
		do
			prepare

			from
				i := 1
			until
				i >= connection.polypoints.count
			loop
				org := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (map_to_gl_coords (connection.polypoints.i_th (i)).x, line_height, map_to_gl_coords (connection.polypoints.i_th (i)).y)
				dst := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (map_to_gl_coords (connection.polypoints.i_th (i+1)).x, line_height, map_to_gl_coords (connection.polypoints.i_th (i+1)).y)
				delta_x := dst.x - org.x
				delta_z := dst.z - org.z

				norm := sqrt (delta_x*delta_x + delta_z*delta_z)

				if norm = 0 then
					norm := 1
				end
				create_rectangle (	drawing_color,
									create {GL_VECTOR_3D[DOUBLE]}.make_xyz (org.x-delta_z*drawing_width/norm, org.y, org.z+delta_x*drawing_width/norm),
									create {GL_VECTOR_3D[DOUBLE]}.make_xyz (org.x+delta_z*drawing_width/norm, org.y, org.z-delta_x*drawing_width/norm),
									create {GL_VECTOR_3D[DOUBLE]}.make_xyz (dst.x+delta_z*drawing_width/norm, dst.y, dst.z-delta_x*drawing_width/norm),
									create {GL_VECTOR_3D[DOUBLE]}.make_xyz (dst.x-delta_z*drawing_width/norm, dst.y, dst.z+delta_x*drawing_width/norm))
				create_circle (drawing_color, org, drawing_width)--, line_height)
				create_cube (		drawing_color,
									create {GL_VECTOR_3D[DOUBLE]}.make_xyz (org.x-delta_z*drawing_width/norm, org.y + drawing_height, org.z+delta_x*drawing_width/norm),
									create {GL_VECTOR_3D[DOUBLE]}.make_xyz (org.x+delta_z*drawing_width/norm, org.y + drawing_height, org.z-delta_x*drawing_width/norm),
									create {GL_VECTOR_3D[DOUBLE]}.make_xyz (dst.x+delta_z*drawing_width/norm, org.y + drawing_height, dst.z-delta_x*drawing_width/norm),
									create {GL_VECTOR_3D[DOUBLE]}.make_xyz (dst.x-delta_z*drawing_width/norm, org.y + drawing_height, dst.z+delta_x*drawing_width/norm),
									drawing_width)
				create_cylinder (drawing_color, org, drawing_width, line_width)--line_height + line_height + 0.4*height + highlighting_delta)

				i := i + 1
			end
		end
--			i: INTEGER
--			col, org, dst: GL_VECTOR_3D[DOUBLE]
--			delta_x, delta_y, delta_z, norm: DOUBLE
--			start_point, end_point, a_point, c_point: EM_VECTOR_2D
--			polygon_points: DS_LINKED_LIST [EM_VECTOR_2D]
--			collidable: EM_POLYGON_CONVEX_COLLIDABLE
--			help_width: DOUBLE
--			help_color: EM_COLOR
--			road: TRAFFIC_ROAD
--			line_section: TRAFFIC_LINE_SECTION
--		do
--			road ?= connection
--			if road /= Void then
--				if color = Void then
--					if road.type.is_equal (create {TRAFFIC_TYPE_LIGHTRAIL}.make) then
--						help_color := (create {EM_COLOR}.make_with_rgb (150, 150, 150))
--					elseif road.type.is_equal (create {TRAFFIC_TYPE_RAILROAD}.make) then
--						help_color := (create {EM_COLOR}.make_with_rgb (0, 0, 0))
--					else
--						help_color := (create {EM_COLOR}.make_with_rgb (150, 150, 150))
--					end
--				else
--					help_color := color
--				end

--				if width /= 0.0 then
--					help_width := width
--				else
--					help_width := road_width
--				end
--			end

--			line_section ?= connection
--			if line_section /= Void then
--				if color = Void then
--					help_color := (create {EM_COLOR}.make_with_rgb (0, 0, 0))
--				else
--					help_color := color
--				end

--				if width /= 0.0 then
--					help_width := width
--				else
--					help_width := road_width
--				end
--			end

--			create collision_polygons.make
--			from
--				i := 1
--			until
--				i >= connection.polypoints.count
--			loop
--				org := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (map_to_gl_coords (connection.polypoints.i_th (i)).x, road_height, map_to_gl_coords (connection.polypoints.i_th (i)).y)
--				dst := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (map_to_gl_coords (connection.polypoints.i_th (i+1)).x, road_height, map_to_gl_coords (connection.polypoints.i_th (i+1)).y)
--				delta_x := dst.x - org.x
--				delta_z := dst.z - org.z

--				norm := sqrt (delta_x*delta_x + delta_z*delta_z)

--				if norm = 0 then
--					norm := 1
--				end

--				col:=create {GL_VECTOR_3D[DOUBLE]}.make_xyz (help_color.red/255, help_color.green/255, help_color.blue/255)
--				create_circle (col, org, help_width)--, road_height)
--				create_rectangle (	col,
--									create {GL_VECTOR_3D[DOUBLE]}.make_xyz (org.x-delta_z*help_width/norm, org.y, org.z+delta_x*help_width/norm),
--									create {GL_VECTOR_3D[DOUBLE]}.make_xyz (org.x+delta_z*help_width/norm, org.y, org.z-delta_x*help_width/norm),
--									create {GL_VECTOR_3D[DOUBLE]}.make_xyz (dst.x+delta_z*help_width/norm, dst.y, dst.z-delta_x*help_width/norm),
--									create {GL_VECTOR_3D[DOUBLE]}.make_xyz (dst.x-delta_z*help_width/norm, dst.y, dst.z+delta_x*help_width/norm))

--				-- Collision polygon
--				create start_point.make (connection.polypoints.i_th (i).x, connection.polypoints.i_th (i).y)
--				create end_point.make (connection.polypoints.i_th (i+1).x, connection.polypoints.i_th (i+1).y)

--				start_point := map_to_gl_coords (start_point)
--				end_point := map_to_gl_coords (end_point)

--				delta_x := end_point.x - start_point.x
--				delta_y := end_point.y - start_point.y

--				norm := sqrt (delta_x*delta_x + delta_y*delta_y)

--				if norm = 0 then
--					norm := 1
--				end

--				create a_point.make (start_point.x-delta_y*1.5*help_width/norm, start_point.y+delta_x*1.5*help_width/norm)
--				create c_point.make (end_point.x+delta_y*1.5*help_width/norm, end_point.y-delta_x*1.5*help_width/norm)

--				create polygon_points.make
--				polygon_points.force ((a_point),1)
--				polygon_points.force (create {EM_VECTOR_2D}.make (start_point.x+delta_y*1.5*help_width/norm, start_point.y-delta_x*1.5*help_width/norm), 2)
--				polygon_points.force ((c_point),3)
--				polygon_points.force (create {EM_VECTOR_2D}.make (end_point.x-delta_y*1.5*help_width/norm, end_point.y+delta_x*1.5*help_width/norm), 4)
--				create collidable.make_from_absolute_list ((a_point + (c_point - a_point)/2), polygon_points)
--				collision_polygons.force_last (collidable)

--				i := i + 1
--			end
--		end

end
