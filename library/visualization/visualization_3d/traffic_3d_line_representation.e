indexing
	description: "Representation for the traffic lines"
	date: "$Date$"
	revision: "$Revision: 1.90 $"

class
	TRAFFIC_3D_LINE_REPRESENTATION
inherit

	TRAFFIC_3D_CONSTANTS
		export {NONE} all end

	DOUBLE_MATH
		export {NONE} all end

	EM_CONSTANTS
		export {NONE} all end

	GL_FUNCTIONS
		export {NONE} all end

	GLU_FUNCTIONS
		export {NONE} all end

	EM_TIME_SINGLETON
		export {NONE} all end

create
	make

feature -- Initialization

	make (a_map: TRAFFIC_MAP) is
			-- Create a new object.
		require
			map_exists: a_map /= void
		do
			map := a_map

			create line_factory.make
			line_factory.add_line_type (agent create_line_section_normal, normal_type)
			line_factory.add_line_type (agent create_line_section_highlighted, highlighted_type)
			line_factory.add_gauger(agent decide_line_type, decision_type)

			create shortest_line.make (1)
			create line_section_lookup.make (map.line_sections.count)
			create line_section_views.make (map.line_sections.count)
			create collision_polygons.make (4)

			add_lines(map)

			map.line_section_inserted_event.subscribe (agent process_item_inserted)
			map.line_section_removed_event.subscribe (agent process_item_removed)

			height := 1
		ensure
			line_factory_created: line_factory /= Void
			shortest_line_created: shortest_line /= Void
			line_objects_created: line_section_views /= Void and line_section_lookup /= Void
		end

feature {TRAFFIC_3D_MAP_WIDGET} -- Interface

	draw is
			-- Draw all lines onto the screen.
		do
			-- draw all the lines in the hashtable.  					
			from
				line_section_views.start
			until
				line_section_views.after
			loop
				line_section_views.item.draw
				line_section_views.forth
			end
		end

	draw_shortest_path is
			-- Draw the shortest line if it exists.
		do
			from
				shortest_line.start
			until
				shortest_line.after
			loop
				shortest_line.item.draw
				shortest_line.forth
			end
		end

	remove_shortest_path is
			-- Remove the shortest path from the map.
		do
			shortest_line.wipe_out
		ensure
			shortest_line_empty: shortest_line.is_empty
		end

feature -- Event handling

	process_item_inserted (a_line_section: TRAFFIC_LINE_SECTION) is
			-- Add view for `a_line_section'.
		require
			a_line_section: a_line_section /= Void
		local
			c: GL_VECTOR_3D [DOUBLE]
			l: TRAFFIC_LINE
		do
			l := a_line_section.line
			if l /= Void then
				c := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (l.color.red/255, l.color.green/255, l.color.blue/255)
			else
				c := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (0, 0, 0)
			end
			add_line_section (a_line_section, c)
		end

	process_item_removed (a_line_section: TRAFFIC_LINE_SECTION) is
			-- Remove view for `a_line_section'.
		require
			a_line_section_exists: a_line_section /= Void
		do
			line_section_lookup.search (a_line_section)
			if line_section_lookup.found then
				line_section_views.go_i_th (line_section_lookup.found_item)
				line_section_views.remove
				line_section_lookup.remove_found_item
			end
		end

feature {TRAFFIC_3D_MAP_WIDGET} -- Collision detection

	collision_polygons: ARRAYED_LIST[EM_POLYGON_CONVEX_COLLIDABLE]
			-- Collision polygons to check for collisions with traffic lines

feature {TRAFFIC_3D_MAP_WIDGET} -- Interface

	add_lines(a_map: TRAFFIC_MAP) is
			-- Add views for all lines of `a_map'.
		require
			map_valid: a_map /= Void
		local
			all_lines: HASH_TABLE [TRAFFIC_LINE, STRING]
		do
			all_lines := map.lines
			from
				all_lines.start
			until
				all_lines.after
			loop
				add_line (all_lines.item_for_iteration)
				all_lines.forth
			end
		end

	add_line (a_line: TRAFFIC_LINE) is
			-- Add views for all line sections of `a_line'.
		require
			a_line_exists: a_line /= Void
		local
			c: GL_VECTOR_3D [DOUBLE]
		do
			if a_line.color /= Void then
				c := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (a_line.color.red/255, a_line.color.green/255, a_line.color.blue/255)
			else
				c := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (0, 0, 0)
			end
			from
				a_line.start
			until
				a_line.after
			loop
				add_line_section (a_line.item, c)
				a_line.forth
			end
		end

	add_line_section (a_line_section: TRAFFIC_LINE_SECTION; a_color: GL_VECTOR_3D[DOUBLE]) is
			-- Add view for `a_line_section'.
		require
			a_color_exists: a_color /= Void
			a_line_section_exists: a_line_section /= Void
		local
			line_section_view: EM_3D_OBJECT
		do
			line_color := a_color
			line_section := a_line_section
			line_factory.take_decision (decision_type)
			line_section_view := line_factory.create_object
			line_section_views.extend (line_section_view)
			line_section_lookup.force (line_section_views.count, line_section)
		end

	add_shortest_line(a_line: TRAFFIC_LINE) is
		-- Add one line to the map, e.g. the shortest path line.
		require
			a_line_exists: a_line /= Void
		local
			i: INTEGER
			a_line_section: EM_3D_OBJECT
		do
			shortest_line.wipe_out
			line_color := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (1,1,1)
			from
				a_line.start
				i := 0
			until
				a_line.after
			loop
				line_section := a_line.item
				-- line creation

				line_factory.take_decision (decision_type)
				a_line_section := line_factory.create_object
				a_line_section.set_origin (0, line_height + 0.01, 0)
				shortest_line.force(a_line_section)
				i := i+1
				a_line.forth
			end
		end

feature -- Basic operations

	highlight_path (a_route: TRAFFIC_ROUTE) is
			-- Highlight `a_route' on the map.
		require
			a_route_exists: a_route /= Void
		local
			line_section_view: EM_3D_OBJECT
			line_sections: LINKED_LIST [TRAFFIC_LINE_SECTION]
			old_is_highlighted: BOOLEAN
		do
			old_is_highlighted := is_highlighted
			is_highlighted := False
			from
				line_sections := a_route.line_sections
				line_sections.start
			until
				line_sections.off
			loop
				line_color := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (1, 1, 1)

				line_section := line_sections.item

				line_factory.take_decision (decision_type)
				line_section_view := line_factory.create_object

				line_section_views.go_i_th (line_section_lookup.item (line_section))
				line_section_views.replace (line_section_view)
				line_sections.forth
			end
			is_highlighted := old_is_highlighted

		end

	unhighlight_path (a_route: TRAFFIC_ROUTE) is
			-- Unhighlight `a_route' on the map.
		require
			a_route_exists: a_route /= Void
		local
			line_section_view: EM_3D_OBJECT
			line_sections: LINKED_LIST [TRAFFIC_LINE_SECTION]
			old_is_highlighted: BOOLEAN
		do
			old_is_highlighted := is_highlighted
			is_highlighted := False
			from
				line_sections := a_route.line_sections
				line_sections.start
			until
				line_sections.off
			loop
				line_color := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (line_sections.item.line.color.red/255, line_sections.item.line.color.green/255, line_sections.item.line.color.blue/255)

				line_section := line_sections.item

				-- line creation
				line_factory.take_decision (decision_type)
				line_section_view := line_factory.create_object

				line_section_views.go_i_th (line_section_lookup.item (line_section))
				line_section_views.replace (line_section_view)
				line_sections.forth
			end
			is_highlighted := old_is_highlighted
		end

	highlight_single_line(a_line: TRAFFIC_LINE) is
			-- Highlight the line `a_line'.
		require
			a_line_valid: a_line /= Void
		local
			line_section_view: EM_3D_OBJECT
			old_is_highlighted: BOOLEAN
		do
			old_is_highlighted := is_highlighted
			is_highlighted := True
			from
				a_line.start
			until
				a_line.off
			loop
				line_color := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (a_line.color.red/255, a_line.color.green/255, a_line.color.blue/255)

				line_section := a_line.item

				-- line creation
				line_factory.take_decision (decision_type)
				line_section_view := line_factory.create_object

				line_section_views.go_i_th (line_section_lookup.item (line_section))
				line_section_views.replace (line_section_view)

				a_line.forth
			end
			is_highlighted := old_is_highlighted
		end

	unhighlight_single_line(a_line:TRAFFIC_LINE) is
			-- Highlight the line `a_line'.
		require
				a_line_valid: a_line /= Void
		local
			line_section_view: EM_3D_OBJECT
			old_is_highlighted: BOOLEAN
		do
			old_is_highlighted := is_highlighted
			is_highlighted := False
			from
				a_line.start
			until
				a_line.off
			loop
				line_color := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (a_line.color.red/255, a_line.color.green/255, a_line.color.blue/255)

				line_section := a_line.item

				-- line creation
				line_factory.take_decision (decision_type)
				line_section_view := line_factory.create_object

				line_section_views.go_i_th (line_section_lookup.item (line_section))
				line_section_views.replace (line_section_view)

				a_line.forth
			end
			is_highlighted := old_is_highlighted
		end

	unhighlight_all_lines is
			-- Unhighlight all the lines.
		local
			lines: HASH_TABLE [TRAFFIC_LINE , STRING]
		do
			from
				lines := map.lines
				lines.start
			until
				lines.off
			loop
				unhighlight_single_line (lines.item_for_iteration)
				lines.forth
			end
			height := 1
		end

	highlight_all_lines is
			-- Highlight all the lines.
		local
			lines: HASH_TABLE [TRAFFIC_LINE , STRING]
			i: INTEGER
		do
			from
				lines := map.lines
				lines.start
				i := 1
			until
				lines.off
			loop
				height := i
				highlight_single_line (lines.item_for_iteration)
				lines.forth
				i := i + 1
			end
			height := 1
		 end

feature -- Access

	line_section_views: ARRAYED_LIST [EM_3D_OBJECT]
			-- Container for all line section representations

	line_section_lookup: DS_HASH_TABLE [INTEGER, TRAFFIC_LINE_SECTION]
			--  lookup for line_section_views

	shortest_line: ARRAYED_LIST [EM_3D_OBJECT]
			-- Container for shortest path line

	line_factory: TRAFFIC_3D_LINE_FACTORY
			-- Factory for line segments

	map: TRAFFIC_MAP
			-- Map where lines are stored

feature {NONE} -- Implementation

	line_section: TRAFFIC_LINE_SECTION
			-- Line section for which a representation should  be created

	line_color: GL_VECTOR_3D[DOUBLE]
			-- Vector of RGB values for the line color

	height: INTEGER
			-- Level of highlighted line (starts with lowest at 1)

	is_highlighted: BOOLEAN
			-- Is the line section highlighted?

	wait_time: INTEGER is 5000
			-- Wait time before a highlighted line is reset when calling `highlight_single_line_for_5sec'

	highlighting_delta: DOUBLE is 2.0
			-- Height difference between highlighted line representations

	decision_type: STRING is "line_type"
			-- Name of the decision function

	normal_type: STRING is "normal"
			-- Name of the type for normal line section representations

	highlighted_type: STRING is "highlighted"
			-- Name of the type for highlighted line section representations

feature {NONE} -- Implementation

	decide_line_type: STRING is
			-- Line type to be taken
		do
			if is_highlighted then
				Result := highlighted_type
			else
				Result := normal_type
			end
		ensure
			Result_is_valid: Result = highlighted_type or Result = normal_type
		end

	create_line_section_normal is
			-- Create a representation for a normal `line_section'.
		do
			create_line_section_rep_normal (line_section)
		end

	create_line_section_highlighted is
			-- Create a representation for a highlighted `line_section'.
		do
			create_line_section_rep_highlighted (line_section)
		end

	create_line_section_rep_highlighted (section: TRAFFIC_LINE_SECTION) is
			-- Create a representation for a highlighted section `section'.
		require
			section_exists: section /= Void
		local
			i: INTEGER
			org, dst: GL_VECTOR_3D[DOUBLE]
			delta_x, delta_z, norm: DOUBLE
		do
			from
				i := 1
			until
				i >= section.polypoints.count
			loop
				org := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (map_to_gl_coords (section.polypoints.i_th (i)).x, line_height, map_to_gl_coords (section.polypoints.i_th (i)).y)
				dst := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (map_to_gl_coords (section.polypoints.i_th (i+1)).x, line_height, map_to_gl_coords (section.polypoints.i_th (i+1)).y)
				delta_x := dst.x - org.x
				delta_z := dst.z - org.z

				norm := sqrt (delta_x*delta_x + delta_z*delta_z)

				if norm = 0 then
					norm := 1
				end
				create_plane (create {GL_VECTOR_3D[DOUBLE]}.make_xyz (org.x-delta_z*line_width/norm, org.y, org.z+delta_x*line_width/norm), create {GL_VECTOR_3D[DOUBLE]}.make_xyz (org.x+delta_z*line_width/norm, org.y, org.z-delta_x*line_width/norm), create {GL_VECTOR_3D[DOUBLE]}.make_xyz (dst.x+delta_z*line_width/norm, dst.y, dst.z-delta_x*line_width/norm) ,create {GL_VECTOR_3D[DOUBLE]}.make_xyz (dst.x-delta_z*line_width/norm, dst.y, dst.z+delta_x*line_width/norm))
				create_circle (org, line_color, line_width, line_height)
				create_cube (create {GL_VECTOR_3D[DOUBLE]}.make_xyz (org.x-delta_z*line_width/norm, org.y + line_height + 0.4*height + highlighting_delta, org.z+delta_x*line_width/norm), create {GL_VECTOR_3D[DOUBLE]}.make_xyz (org.x+delta_z*line_width/norm, org.y + line_height + 0.4*height + highlighting_delta, org.z-delta_x*line_width/norm), create {GL_VECTOR_3D[DOUBLE]}.make_xyz (dst.x+delta_z*line_width/norm, dst.y + line_height + 0.4*height + highlighting_delta, dst.z-delta_x*line_width/norm) ,create {GL_VECTOR_3D[DOUBLE]}.make_xyz (dst.x-delta_z*line_width/norm, dst.y + line_height + 0.4*height + highlighting_delta, dst.z+delta_x*line_width/norm))
				create_cylinder (org, line_color, line_width, line_height + line_height + 0.4*height + highlighting_delta)

				i := i + 1
			end
		end

	create_line_section_rep_normal (section: TRAFFIC_LINE_SECTION) is
			-- Create a representation for the line section `section'.
		require
			section_exists: section /= Void
		local
			i: INTEGER
			org, dst: GL_VECTOR_3D[DOUBLE]
			delta_x, delta_y, delta_z, norm: DOUBLE
			start_point, end_point, a_point, c_point: EM_VECTOR_2D
			polygon_points: DS_LINKED_LIST [EM_VECTOR_2D]
			collidable: EM_POLYGON_CONVEX_COLLIDABLE
		do
			from
				i := 1
			until
				i >= section.polypoints.count
			loop
				org := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (map_to_gl_coords (section.polypoints.i_th (i)).x, line_height, map_to_gl_coords (section.polypoints.i_th (i)).y)
				dst := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (map_to_gl_coords (section.polypoints.i_th (i+1)).x, line_height, map_to_gl_coords (section.polypoints.i_th (i+1)).y)
				delta_x := dst.x - org.x
				delta_z := dst.z - org.z

				norm := sqrt (delta_x*delta_x + delta_z*delta_z)

				if norm = 0 then
					norm := 1
				end

				create_plane (create {GL_VECTOR_3D[DOUBLE]}.make_xyz (org.x-delta_z*line_width/norm, org.y, org.z+delta_x*line_width/norm), create {GL_VECTOR_3D[DOUBLE]}.make_xyz (org.x+delta_z*line_width/norm, org.y, org.z-delta_x*line_width/norm), create {GL_VECTOR_3D[DOUBLE]}.make_xyz (dst.x+delta_z*line_width/norm, dst.y, dst.z-delta_x*line_width/norm) ,create {GL_VECTOR_3D[DOUBLE]}.make_xyz (dst.x-delta_z*line_width/norm, dst.y, dst.z+delta_x*line_width/norm))
				create_circle (org, line_color, line_width, line_height)

				-- Collision polygon
				create start_point.make (section.polypoints.i_th (i).x, section.polypoints.i_th (i).y)
				create end_point.make (section.polypoints.i_th (i+1).x, section.polypoints.i_th (i+1).y)

				start_point := map_to_gl_coords (start_point)
				end_point := map_to_gl_coords (end_point)

				delta_x := end_point.x - start_point.x
				delta_y := end_point.y - start_point.y

				norm := sqrt (delta_x*delta_x + delta_y*delta_y)

				if norm = 0 then
					norm := 1
				end

				create a_point.make (start_point.x-delta_y*1.5*line_width/norm, start_point.y+delta_x*1.5*line_width/norm)
				create c_point.make (end_point.x+delta_y*1.5*line_width/norm, end_point.y-delta_x*1.5*line_width/norm)

				create polygon_points.make
				polygon_points.force ((a_point),1)
				polygon_points.force (create {EM_VECTOR_2D}.make (start_point.x+delta_y*1.5*line_width/norm, start_point.y-delta_x*1.5*line_width/norm), 2)
				polygon_points.force ((c_point),3)
				polygon_points.force (create {EM_VECTOR_2D}.make (end_point.x-delta_y*1.5*line_width/norm, end_point.y+delta_x*1.5*line_width/norm), 4)
				create collidable.make_from_absolute_list ((a_point + (c_point - a_point)/2), polygon_points)
				collision_polygons.force (collidable)

				i := i + 1
			end
		end

	create_circle (p, rgb: GL_VECTOR_3D[DOUBLE]; r, h: DOUBLE) is
			-- Create a circle at point `p' with color `rgb' and radius `r' and height `h'.
		require
			p_exists: p /= Void
			rgb_exists: rgb /= Void and then (rgb.x >= 0 and rgb.x <= 1 and rgb.y >= 0 and rgb.y <= 1 and rgb.z >= 0 and rgb.z <= 1)
			r_greater_than_zero: r > 0
		do
			gl_matrix_mode_external (Em_gl_modelview)
			gl_push_matrix_external
			gl_color3dv_external(rgb.pointer)
			-- a little bit higher than the line
			gl_translated_external (p.x, h, p.z)
			gl_rotated_external (90, 1, 0, 0)
			gl_disable_external (em_gl_lighting)
			glu_disk_external (glu_new_quadric, 0, r, 72, 1)
			gl_pop_matrix_external
			gl_flush_external
		end

	create_cylinder (p, rgb: GL_VECTOR_3D[DOUBLE]; r, h: DOUBLE) is
			-- Create a cylinder at point `p' with color `rgb' and radius `r' and height `h'.
		require
			p_exists: p /= Void
			rgb_exists: rgb /= Void and then (rgb.x >= 0 and rgb.x <= 1 and rgb.y >= 0 and rgb.y <= 1 and rgb.z >= 0 and rgb.z <= 1)
			r_greater_than_zero: r > 0
		do
			gl_matrix_mode_external (Em_gl_modelview)
			gl_push_matrix_external
			gl_color3dv_external(rgb.pointer)
			-- a little bit higher than the line
			gl_translated_external (p.x, h, p.z)
			gl_rotated_external (90, 1, 0, 0)
			gl_disable_external (em_gl_lighting)
			glu_disk_external (glu_new_quadric, 0, r, 8, 1)
			gl_pop_matrix_external
			gl_flush_external

			gl_matrix_mode_external (Em_gl_modelview)
			gl_push_matrix_external
			gl_color3dv_external(rgb.pointer)
			-- a little bit higher than the line
			gl_translated_external (p.x, h, p.z)
			gl_rotated_external (90, 1, 0, 0)
			gl_disable_external (em_gl_lighting)
			glu_cylinder_external (glu_new_quadric_external, r, r, line_depth, 8, 8)
			gl_pop_matrix_external
			gl_flush_external

			gl_matrix_mode_external (Em_gl_modelview)
			gl_push_matrix_external
			gl_color3dv_external(rgb.pointer)
			-- a little bit higher than the line
			gl_translated_external (p.x, h - line_depth, p.z)
			gl_rotated_external (90, 1, 0, 0)
			gl_disable_external (em_gl_lighting)
			glu_disk_external (glu_new_quadric, 0, r, 8, 1)
			gl_pop_matrix_external
			gl_flush_external
		end

	create_cube (p1, p2, p3, p4: GL_VECTOR_3D[DOUBLE]) is
			-- Create a cube with four edges `p1', `p2', `p3', and `p4' and height `line_depth'.
		require
			p1_exists: p1 /= Void
			p2_exists: p2 /= Void
			p3_exists: p3 /= Void
			p4_exists: p4 /= Void
		do
			gl_begin_external (em_gl_quads)
				gl_color3dv_external (line_color.pointer)

				-- Front
				gl_normal3d_external (1, 0, 0)
				gl_vertex3d_external (p1.x, p1.y, p1.z)

				gl_normal3d_external (1, 0, 0)
				gl_vertex3d_external (p1.x, p1.y - line_depth, p1.z)

				gl_normal3d_external (1, 0, 0)
				gl_vertex3d_external (p2.x, p2.y - line_depth, p2.z)

				gl_normal3d_external (1, 0, 0)
				gl_vertex3d_external (p2.x, p2.y, p2.z)

				-- Back
				gl_normal3d_external (-1, 0, 0)
				gl_vertex3d_external (p3.x, p3.y, p3.z)

				gl_normal3d_external (-1, 0, 0)
				gl_vertex3d_external (p3.x, p3.y - line_depth, p3.z)

				gl_normal3d_external (-1, 0, 0)
				gl_vertex3d_external (p4.x, p4.y - line_depth, p4.z)

				gl_normal3d_external (-1, 0, 0)
				gl_vertex3d_external (p4.x, p4.y, p4.z)

				-- Left
				gl_normal3d_external (0, 0, 1)
				gl_vertex3d_external (p3.x, p3.y, p3.z)

				gl_normal3d_external (0, 0, 1)
				gl_vertex3d_external (p3.x, p3.y - line_depth, p3.z)

				gl_normal3d_external (0, 0, 1)
				gl_vertex3d_external (p1.x, p1.y - line_depth, p1.z)

				gl_normal3d_external (0, 0, 1)
				gl_vertex3d_external (p1.x, p1.y, p1.z)

				-- Right
				gl_normal3d_external (0, 0, -1)
				gl_vertex3d_external (p2.x, p2.y, p2.z)

				gl_normal3d_external (0, 0, -1)
				gl_vertex3d_external (p2.x, p2.y - line_depth, p2.z)

				gl_normal3d_external (0, 0, -1)
				gl_vertex3d_external (p4.x, p4.y - line_width, p4.z)

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
				gl_vertex3d_external (p1.x, p1.y - line_depth, p1.z)

				gl_normal3d_external (0, 1, 0)
				gl_vertex3d_external (p2.x, p2.y - line_depth, p2.z)

				gl_normal3d_external (0, 1, 0)
				gl_vertex3d_external (p3.x, p3.y - line_depth, p3.z)

				gl_normal3d_external (0, 1, 0)
				gl_vertex3d_external (p4.x, p4.y - line_depth, p4.z)
			gl_end_external
		end

	create_plane (p1, p2, p3, p4: GL_VECTOR_3D[DOUBLE]) is
			-- Draw a plane with vertices `p1', `p2', `p3' and `p4'.
		require
			p1_exists: p1 /= Void
			p2_exists: p2 /= Void
			p3_exists: p3 /= Void
			p4_exists: p4 /= Void
		do
			-- Normals all parallel to y axis
			gl_begin_external (em_gl_quads)
				gl_color3dv_external (line_color.pointer)
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

end
