indexing
	description: "Representation for the traffic lines"
	date: "$Date$"
	revision: "$Revision: 1.90 $"

class
	TRAFFIC_3D_LINE_REPRESENTATION

create
	make

feature -- Initialization

	make (a_map: TRAFFIC_MAP) is
			-- Initialize the factory to be used.
		require
			map_exists: a_map /= void
		do
			map := a_map

			create line_factory.make

			create line_section_root.make_as_child((create{TE_3D_SHARED_GLOBALS}).root)
			line_section_root.transform.set_position (0.0,0.04,0.0)

			add_lines (map)

			map.lines.element_inserted_event.subscribe (agent add_line)
			map.lines.element_removed_event.subscribe (agent remove_line)

			map.lines.sub_element_inserted_event.subscribe (agent add_line_section)
			map.lines.sub_element_removed_event.subscribe (agent remove_line_section (?))

			visible := true

		ensure
			line_factory_set: line_factory /= Void
		end

feature -- Status setting

	hide is
			-- sets visibility to false
		do
			visible := false
			line_section_root.disable_hierarchy_renderable
		end

	unhide is
			-- sets visibility to true
		do
			visible := true
			line_section_root.enable_hierarchy_renderable
		end

feature -- Status report

	visible: BOOLEAN
		-- are the places visible?


feature -- Access

	line_section_root: TRAFFIC_3D_RENDERABLE_CONTAINER [TRAFFIC_LINE_CONNECTION]
			-- Root node for the line sections

	line_factory: TRAFFIC_3D_CONNECTION_FACTORY
			-- Factory for line segments

	map: TRAFFIC_MAP
			-- Map where lines are stored

feature -- Insertion

	add_lines (a_map: TRAFFIC_MAP) is
			-- Add views for all lines of `a_map'.
		require
			map_valid: a_map /= Void
		local
			all_lines: DS_HASH_TABLE [TRAFFIC_LINE, STRING]
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
			c: TRAFFIC_COLOR
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
				add_line_section (a_line.item_for_iteration, c)
				a_line.forth
			end
		end

	add_line_section (a_line_section: TRAFFIC_LINE_CONNECTION; a_color: TRAFFIC_COLOR) is
			-- Add view for `a_line_section'.
		require
			a_color_exists: a_color /= Void
			a_line_section_exists: a_line_section /= Void
		local
			l: TRAFFIC_3D_RENDERABLE [TRAFFIC_CONNECTION]
			line_section_view: TE_3D_NODE
		do
			l := line_factory.new_connection (a_line_section)
			l.set_color (a_color)
			l.set_as_child_of (line_section_root)
		end

feature -- Removal

	remove_line_section (a_line_section: TRAFFIC_LINE_CONNECTION) is
			-- Add view for `a_line_section'.
		require
			a_line_section_exists: a_line_section /= Void
		local
			l: TRAFFIC_3D_RENDERABLE [TRAFFIC_CONNECTION]
		do
			l := line_section_root.child_for_item (a_line_section)
			if l /= Void then
				line_section_root.remove_child (l)
			end
		end

	remove_line (a_line: TRAFFIC_LINE) is
			-- Add views for all line sections of `a_line'.
		require
			a_line_exists: a_line /= Void
		do
			from
				a_line.start
			until
				a_line.after
			loop
				remove_line_section (a_line.item_for_iteration)
				a_line.forth
			end
		end

feature -- Basic operations

	highlight_single_line(a_line: TRAFFIC_LINE) is
			-- Highlight the line `a_line'.
		require
			a_line_valid: a_line /= Void
		local
			line_section_view: EM_3D_OBJECT
			old_factory: TRAFFIC_3D_CONNECTION_FACTORY
		do
		end

	unhighlight_single_line(a_line: TRAFFIC_LINE) is
			-- Unhighlight the line `a_line'.
		require
			a_line_valid: a_line /= Void
		local
			line_section_view: EM_3D_OBJECT
		do
--			from
--				a_line.start
--			until
--				a_line.off
--			loop
--				line_factory.set_connection (a_line.item)
--				line_section_view := line_factory.create_object

--				line_section_views.go_i_th (line_section_lookup.item (a_line.item))
--				line_section_views.replace (line_section_view)

--				a_line.forth
--			end
		end

	unhighlight_all_lines is
			-- Unhighlight all the lines.
		local
			lines: DS_HASH_TABLE [TRAFFIC_LINE , STRING]
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
--			old_factory := line_factory
--			set_factory (create {TRAFFIC_3D_CONNECTION_HIGHLIGHTED_REP_FACTORY_OBSOLETE})
--			from
--				lines := map.lines
--				lines.start
--				i := 1
--			until
--				lines.off
--			loop
--				line := lines.item_for_iteration
--				from
--					line.start
--				until
--					line.off
--				loop
--					line_factory.set_connection (line.item)
--					line_factory.set_height (5 + i*.2)
--					line_section_view := line_factory.create_object

--					line_section_views.go_i_th (line_section_lookup.item (line.item))
--					line_section_views.replace (line_section_view)

--					line.forth
--				end
--				lines.forth
--				i := i + 1
--			end

--			set_factory (old_factory)
		 end

invariant

	line_factory_set: line_factory /= Void

end
