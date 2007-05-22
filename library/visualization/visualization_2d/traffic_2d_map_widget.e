indexing
	description: "Map widget to visualize a TRAFFIC_MAP with TRAFFIC_2D_MAP_RENDERER."
	date: "2005/08/31"
	revision: "1.1"

class TRAFFIC_2D_MAP_WIDGET

inherit

	EM_ZOOMABLE_CONTAINER
		redefine
			draw, make
		end

	TRAFFIC_MAP_WIDGET
		undefine
			is_equal,
			copy
		end

create
	make_with_map, make

feature -- Initialization

	make_with_map (a_width, a_height: INTEGER; a_map: TRAFFIC_MAP) is
			-- Initialize with `a_map' to visualize.
		require
			map_not_void: a_map /= Void
		do
			make (a_width, a_height)

			set_map (a_map)

		ensure
			map_set: map = a_map
		end

	make (a_width, a_height: INTEGER) is
			-- Make with size.
		do
			Precursor (a_width, a_height)
			mouse_drag_agent := agent process_mouse_move_event (?)
		end

feature -- Access

	line_section_renderer: TRAFFIC_2D_LINE_SECTION_RENDERER
			--standard renderer for the TRAFFIC_LINE_SECTIONs

	place_renderer: TRAFFIC_2D_PLACE_RENDERER
			--standard renderer for the TRAFFIC_PLACEs

	background_color: EM_COLOR
			-- Background color of the map

feature -- Input

	subscribe_to_clicked_place_event (an_action: PROCEDURE [ANY, TUPLE [TRAFFIC_PLACE]]) is
		require
			an_action_not_void: an_action /= Void
		do
			place_drawables.mouse_button_down_on_map_item_event.subscribe (an_action)
		end

	subscribe_to_clicked_line_section_event (an_action: PROCEDURE [ANY, TUPLE [TRAFFIC_LINE_CONNECTION]]) is
		require
			an_action_not_void: an_action /= Void
		do
			line_section_drawables.mouse_button_down_on_map_item_event.subscribe (an_action)
		end

feature -- Status change

	enable_scroll_and_zoom_by_mouse is
			-- Enable the widget to scroll and zoom on mouse dragging.
		do
			mouse_motion_event.subscribe (mouse_drag_agent)
		end

	disable_scroll_and_zoom_by_mouse is
			-- Enable the widget to scroll and zoom on mouse dragging.
		do
			mouse_motion_event.unsubscribe (mouse_drag_agent)
		end

feature -- Status - Places

	set_default_place_renderer (a_renderer: TRAFFIC_2D_ITEM_RENDERER [TRAFFIC_PLACE]) is
			--
		require
			a_renderer_not_void: a_renderer /= Void
		do
			place_drawables.set_default_renderer (a_renderer)
			place_drawables.render
		end

	set_place_special_renderer (a_renderer: TRAFFIC_2D_ITEM_RENDERER [TRAFFIC_PLACE]; a_place: TRAFFIC_PLACE) is
		-- set a proprietary renderer for a place
		-- does not re-render the scene. call render to see the changes
		require
			a_renderer_not_void: a_renderer /= Void
			a_place_not_void: a_place /= Void
		do
			place_drawables.set_renderer_for_item (a_renderer, a_place)
		end

	reset_place_special_renderer (a_place: TRAFFIC_PLACE) is
			-- reset the proprietary renderer for a place
		require
			a_place_not_void: a_place /= Void
		do
			place_drawables.reset_renderer_for_item (a_place)
		end

feature -- Status - Line_Sections
	set_default_line_section_renderer (a_renderer: TRAFFIC_2D_ITEM_RENDERER [TRAFFIC_LINE_CONNECTION]) is
			-- set new default renderer for the line_sections
		require
			a_renderer_not_void: a_renderer /= Void
		do
			line_section_drawables.set_default_renderer (a_renderer)
			line_section_drawables.render
		end

	set_line_section_special_renderer (a_renderer: TRAFFIC_2D_ITEM_RENDERER [TRAFFIC_LINE_CONNECTION]; a_line_section: TRAFFIC_LINE_CONNECTION) is
		--set a proprietary renderer for a line_section, if it exists
		--does not re-render the scene. call render to see the changes
		require
			a_renderer_not_void: a_renderer /= Void
			a_line_section_not_void: a_line_section /= Void
		do
			line_section_drawables.set_renderer_for_item (a_renderer, a_line_section)
		end

	reset_line_section_special_renderer (a_line_section: TRAFFIC_LINE_CONNECTION) is
		--reset the proprietary renderer for a line, if it exists
		require
			a_line_section_not_void: a_line_section /= Void
		do
			line_section_drawables.reset_renderer_for_item (a_line_section)
		end

	set_line_special_renderer (a_renderer: TRAFFIC_2D_ITEM_RENDERER [TRAFFIC_LINE_CONNECTION]; a_line: TRAFFIC_LINE) is
		--set a proprietary renderer for a line, if it exists
		--does not re-render the scene. call render to see the changes
		require
			a_renderer_not_void: a_renderer /= Void
			a_line_not_void: a_line /= Void
		local
			line_section: TRAFFIC_LINE_CONNECTION
		do
			from
				a_line.start
			until
			 	a_line.after
			loop
				line_section := a_line.item_for_iteration
				line_section_drawables.set_renderer_for_item (a_renderer, line_section)
			 	a_line.forth
			end
		end

	reset_line_special_renderer (a_line: TRAFFIC_LINE) is
		--reset the proprietary renderer for a line, if it exists
		require
			a_line_not_void: a_line /= Void
		local
			line_section: TRAFFIC_LINE_CONNECTION
		do
			from
				a_line.start
			until
			 	a_line.after
			loop
				line_section := a_line.item_for_iteration
				line_section_drawables.reset_renderer_for_item (line_section)
			 	a_line.forth
			end
		end

feature -- Basic Operation

	draw (a_surface: EM_SURFACE) is
			-- Draw everything on a `a_surface'.
		do
			if background_color /= Void then
				a_surface.set_drawing_color (background_color)
				a_surface.set_line_width (5)
				a_surface.fill_rectangle (create {EM_ORTHOGONAL_RECTANGLE}.make_from_position_and_size (x, y, width, height))
			end
			Precursor (a_surface)
		end

	set_background_color (a_color: EM_COLOR) is
			-- Set `background_color' to `a_color'.
		do
			background_color := a_color
		ensure
			background_color_set: background_color = a_color
		end

	set_map (a_map: TRAFFIC_MAP) is
			-- Set map that is displayed to `a_map'.
		do
			map := a_map;
			if map /= Void then
				create line_section_renderer.make_with_map (a_map)
				create place_renderer.make_with_map (a_map)

				create place_drawables.make_with_map_and_default_renderer (map, place_renderer)
--				map.places.changed_event.subscribe (agent place_drawables.process_changed_item)
				map.places.element_inserted_event.subscribe (agent place_drawables.process_inserted_item )
				map.places.element_removed_event.subscribe (agent place_drawables.process_removed_item )
--				map.places.changed_event.subscribe (agent place_drawables.process_changed_map)

				create line_section_drawables.make_with_map_and_default_renderer (map, line_section_renderer)
--				map.line_sections.changed_event.subscribe (agent line_section_drawables.process_changed_item)
				map.line_sections.element_inserted_event.subscribe (agent line_section_drawables.process_inserted_item )
				map.line_sections.element_removed_event.subscribe (agent line_section_drawables.process_removed_item )
--				map.line_sections.changed_event.subscribe (agent line_section_drawables.process_changed_map)

				render

				display
			else
				-- Todo remove all
			end

		end

	render is
			--Render the map: It just updates the drawables
		do
			line_section_drawables.render
			place_drawables.render
		end

	rerender_place (a_place: TRAFFIC_PLACE) is
			-- Rerender `a_place'.
			-- `a_place' must already have a view to take effect.
		do
			place_drawables.rerender_element (a_place)
		end



	hide is
			-- remove all drawables from the container
		do
			if has (line_section_drawables) then
				delete (line_section_drawables)
			end
			if has (place_drawables) then
				delete (place_drawables)
			end
		end

	display, show is
			-- show the drawables
		do
			if not has (place_drawables) then
				force_first (place_drawables)
			end

			if not has (line_section_drawables) then
				force_first (line_section_drawables)
			end
		end


feature {NONE} -- Implementation

	line_section_drawables: TRAFFIC_2D_LINE_SECTIONS_CONTAINER

	place_drawables: TRAFFIC_2D_PLACES_CONTAINER

	process_mouse_move_event (a_event: EM_MOUSEMOTION_EVENT) is
			-- Process mouse move event over `Current' to zoom or scroll Current.
		local
			zoom_step: DOUBLE
		do
			if a_event.button_state_right then
				scroll_proportional (- a_event.motion)
			end
			if a_event.button_state_middle then
				zoom_step := 1.0 - (a_event.y_motion / 100)
				if zoom_step <= 0.5 then
					zoom_step := 0.5
				end
				if zoom_step > 2.0 then
					zoom_step := 2.0
				end
				zoom (zoom_step)
			end
		end

	mouse_drag_agent: PROCEDURE [ANY, TUPLE [EM_MOUSEMOTION_EVENT]]
			-- Agent that refers to the procedure for scrolling and zooming on mouse drag	


end
