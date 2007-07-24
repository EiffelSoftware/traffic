indexing
	description:  "[
						Factory generating 3d representations for connections consisting of a polyline (same as TRAFFIC_3D_CONNECTION_LINE_REP_FACTORY) 
						and a polycubus floating in the air
				   ]"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_3D_CONNECTION_HIGHLIGHTED_REP_FACTORY_OBSOLETE

inherit

	TRAFFIC_3D_CONNECTION_FACTORY_OBSOLETE

	DOUBLE_MATH

	TRAFFIC_3D_DRAWING_PRIMITIVES


feature {NONE} -- Implementation

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
			-- (front, left, lower corner of bounding box = 0,0,0).
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

end
