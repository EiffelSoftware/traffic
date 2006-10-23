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

			create {TRAFFIC_3D_CONNECTION_LINE_REP_FACTORY} line_factory

			create line_section_lookup.make (map.line_sections.count)
			create line_section_views.make (map.line_sections.count)
			create collision_polygons.make (4)

			add_lines(map)

			map.line_section_inserted_event.subscribe (agent process_item_inserted)
			map.line_section_removed_event.subscribe (agent process_item_removed)

		ensure
			line_factory_created: line_factory /= Void
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
				if line_section_views.item /= Void then
					line_section_views.item.draw
				end
				line_section_views.forth
			end
		end

feature -- Event handling

	process_item_inserted (a_line_section: TRAFFIC_LINE_SECTION) is
			-- Add view for `a_line_section'.
		require
			a_line_section: a_line_section /= Void
		local
			c: EM_COLOR
			l: TRAFFIC_LINE
		do
			l := a_line_section.line
			if l /= Void and then l.color /= Void then
				create c.make_with_rgb (l.color.red, l.color.green, l.color.blue)
			else
				create c.make_black
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
				line_section_views.put_i_th (Void, line_section_lookup.found_item)
				line_section_lookup.remove_found_item
			end
		end

feature {TRAFFIC_3D_MAP_WIDGET} -- Collision detection

	collision_polygons: DS_ARRAYED_LIST[EM_POLYGON_CONVEX_COLLIDABLE]
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
			c: EM_COLOR
		do
			if a_line.color /= Void then
				create c.make_with_rgb (a_line.color.red, a_line.color.green, a_line.color.blue)
			else
				create c.make_black
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

	add_line_section (a_line_section: TRAFFIC_LINE_SECTION; a_color: EM_COLOR) is
			-- Add view for `a_line_section'.
		require
			a_color_exists: a_color /= Void
			a_line_section_exists: a_line_section /= Void
		local
			line_section_view: EM_3D_OBJECT
		do
			line_factory.set_connection (a_line_section)
			line_section_view := line_factory.create_object
			line_section_views.extend (line_section_view)
			line_section_lookup.force (line_section_views.count, a_line_section)
			collision_polygons.append_last (line_factory.collision_polygons)
		end

feature -- Basic operations

--	highlight_path (a_route: TRAFFIC_ROUTE) is
--			-- Highlight `a_route' on the map.
--		require
--			a_route_exists: a_route /= Void
--		local
--			line_section_view: EM_3D_OBJECT
--			line_sections: LINKED_LIST [TRAFFIC_LINE_SECTION]
--			old_is_highlighted: BOOLEAN
--		do
--			old_is_highlighted := is_highlighted
--			is_highlighted := False
--			from
--				line_sections := a_route.line_sections
--				line_sections.start
--			until
--				line_sections.off
--			loop
--				line_color := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (1, 1, 1)

--				line_section := line_sections.item

----				line_factory.take_decision (decision_type)
--				line_section_view := line_factory.create_object

--				line_section_views.go_i_th (line_section_lookup.item (line_section))
--				line_section_views.replace (line_section_view)
--				line_sections.forth
--			end
--			is_highlighted := old_is_highlighted

--		end

--	unhighlight_path (a_route: TRAFFIC_ROUTE) is
--			-- Unhighlight `a_route' on the map.
--		require
--			a_route_exists: a_route /= Void
--		local
--			line_section_view: EM_3D_OBJECT
--			line_sections: LINKED_LIST [TRAFFIC_LINE_SECTION]
--			old_is_highlighted: BOOLEAN
--		do
--			old_is_highlighted := is_highlighted
--			is_highlighted := False
--			from
--				line_sections := a_route.line_sections
--				line_sections.start
--			until
--				line_sections.off
--			loop
--				line_color := create {GL_VECTOR_3D[DOUBLE]}.make_xyz (line_sections.item.line.color.red/255, line_sections.item.line.color.green/255, line_sections.item.line.color.blue/255)

--				line_section := line_sections.item

--				-- line creation
----				line_factory.take_decision (decision_type)
--				line_section_view := line_factory.create_object

--				line_section_views.go_i_th (line_section_lookup.item (line_section))
--				line_section_views.replace (line_section_view)
--				line_sections.forth
--			end
--			is_highlighted := old_is_highlighted
--		end

	highlight_single_line(a_line: TRAFFIC_LINE) is
			-- Highlight the line `a_line'.
		require
			a_line_valid: a_line /= Void
		local
			line_section_view: EM_3D_OBJECT
			old_factory: TRAFFIC_3D_CONNECTION_FACTORY
		do
			old_factory := line_factory
			set_factory (create {TRAFFIC_3D_CONNECTION_HIGHLIGHTED_REP_FACTORY})
			from
				a_line.start
			until
				a_line.off
			loop
				line_factory.set_connection (a_line.item)
				line_factory.set_height (5)
				line_section_view := line_factory.create_object

				line_section_views.go_i_th (line_section_lookup.item (a_line.item))
				line_section_views.replace (line_section_view)

				a_line.forth
			end
			set_factory (old_factory)
		end

	unhighlight_single_line(a_line: TRAFFIC_LINE) is
			-- Unhighlight the line `a_line'.
		require
			a_line_valid: a_line /= Void
		local
			line_section_view: EM_3D_OBJECT
		do
			from
				a_line.start
			until
				a_line.off
			loop
				line_factory.set_connection (a_line.item)
				line_section_view := line_factory.create_object

				line_section_views.go_i_th (line_section_lookup.item (a_line.item))
				line_section_views.replace (line_section_view)

				a_line.forth
			end
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
--			height := 1
		end

	highlight_all_lines is
			-- Highlight all the lines.
		local
			lines: HASH_TABLE [TRAFFIC_LINE , STRING]
			line: TRAFFIC_LINE
			line_section_view: EM_3D_OBJECT
			old_factory: TRAFFIC_3D_CONNECTION_FACTORY
			i: INTEGER
		do
			old_factory := line_factory
			set_factory (create {TRAFFIC_3D_CONNECTION_HIGHLIGHTED_REP_FACTORY})
			from
				lines := map.lines
				lines.start
				i := 1
			until
				lines.off
			loop
				line := lines.item_for_iteration
				from
					line.start
				until
					line.off
				loop
					line_factory.set_connection (line.item)
					line_factory.set_height (5 + i*.2)
					line_section_view := line_factory.create_object

					line_section_views.go_i_th (line_section_lookup.item (line.item))
					line_section_views.replace (line_section_view)

					line.forth
				end
				lines.forth
				i := i + 1
			end

			set_factory (old_factory)
		 end

feature -- Access

	line_section_views: ARRAYED_LIST [EM_3D_OBJECT]
			-- Container for all line section representations

	line_section_lookup: DS_HASH_TABLE [INTEGER, TRAFFIC_LINE_SECTION]
			--  lookup for line_section_views

	line_factory: TRAFFIC_3D_CONNECTION_FACTORY
			-- Factory for line segments

	map: TRAFFIC_MAP
			-- Map where lines are stored

feature -- Element change

	set_factory (a_factory: TRAFFIC_3D_CONNECTION_FACTORY) is
			-- Set `line_factory' to `a_factory'.
		require
			a_factory_exists: a_factory /= Void
		do
			line_factory := a_factory
		ensure
			factory_set: line_factory = a_factory
		end

end
