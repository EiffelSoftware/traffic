indexing
	description: "Map widget for vision2"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_MAP_CANVAS

inherit

	ZOOMABLE_CANVAS
		redefine
			make,
			redraw_now
		end

	TRAFFIC_MAP_WIDGET
		undefine
			copy,
			default_create,
			is_equal
		redefine
			set_map,
			enable_map_hidden,
			disable_map_hidden
		end

create
	make

feature -- Initialization

	make is
			-- Initialize
		local
			figure_world : EV_FIGURE_WORLD
			e: EV_ENVIRONMENT
		do
			create internal_factory
			create internal_place_representations.make
			create internal_line_representations.make
			create internal_road_representations.make
			create internal_building_representations.make
			create internal_moving_representations.make
			create internal_path_representations.make
			default_create
			create visible_area.make (
				create {REAL_COORDINATE}.make(0.0,0.0),
				create {REAL_COORDINATE}.make(1.0,1.0)
			)
			add_taxi_agent := agent add_taxi (?)
			remove_taxi_agent := agent remove_taxi (?)
			create figure_world
			create object_list.make
			create projector.make (figure_world,Current)
			set_zoom_limits (0.5, 2)
			zoom_factor := 1.0
			has_pending_redraw := false
			redraw_agent := agent redraw_now
			mouse_wheel_actions.extend (agent zoom)
			pan_agent := agent pan
			pointer_button_release_actions.extend (agent move_end)
			pointer_button_press_actions.extend (agent move_start)
			pointer_leave_actions.extend (agent release)

			create e
			e.application.add_idle_action (agent fast_redraw_now)
		end

feature -- Element change

	set_map (a_map: TRAFFIC_MAP) is
			-- Set map that is displayed to `a_map'.
		do
			create internal_place_representations.make
			create internal_line_representations.make
			create internal_road_representations.make
			create internal_building_representations.make
			create internal_moving_representations.make
			create internal_path_representations.make
			object_list.wipe_out
			Precursor (a_map)
			redraw
		end

feature -- Status setting

	enable_map_hidden is
			-- Set `is_map_hidden' to `True'.
		do
			is_map_hidden := True
			redraw
		end

	disable_map_hidden is
			-- Set `is_map_hidden' to `False'.
		do
			is_map_hidden := False
			redraw
		end

feature {NONE} -- Implementation

	internal_factory: TRAFFIC_VS_VIEW_FACTORY
	internal_moving_representations: TRAFFIC_VS_VIEW_CONTAINER [TRAFFIC_MOVING]
	internal_path_representations: TRAFFIC_VS_VIEW_CONTAINER [TRAFFIC_PATH]
	internal_line_representations: TRAFFIC_VS_VIEW_CONTAINER [TRAFFIC_LINE]
	internal_road_representations: TRAFFIC_VS_VIEW_CONTAINER [TRAFFIC_ROAD]
	internal_place_representations: TRAFFIC_VS_VIEW_CONTAINER [TRAFFIC_PLACE]
	internal_building_representations: TRAFFIC_VS_VIEW_CONTAINER [TRAFFIC_BUILDING]

feature -- Access

	line_representations:  TRAFFIC_VIEW_CONTAINER [TRAFFIC_LINE, TRAFFIC_VIEW [TRAFFIC_LINE]] is
			--
		do
			Result := internal_line_representations
--			internal_line_representations.draw (Current)
		end

	road_representations:  TRAFFIC_VIEW_CONTAINER [TRAFFIC_ROAD, TRAFFIC_VIEW [TRAFFIC_ROAD]] is
			--
		do
			Result := internal_road_representations
--			internal_road_representations.draw (Current)
		end

	path_representations:  TRAFFIC_VIEW_CONTAINER [TRAFFIC_PATH, TRAFFIC_VIEW [TRAFFIC_PATH]] is
			--
		do
			Result := internal_path_representations
--			internal_path_representations.draw (Current)
		end

	place_representations: TRAFFIC_VIEW_CONTAINER [TRAFFIC_PLACE, TRAFFIC_VIEW [TRAFFIC_PLACE]]
			--
		do
			Result := internal_place_representations
--			internal_place_representations.draw (Current)
		end

	building_representations: TRAFFIC_VIEW_CONTAINER [TRAFFIC_BUILDING, TRAFFIC_VIEW [TRAFFIC_BUILDING]]
			--
		do
			Result := internal_building_representations
--			internal_building_representations.draw (Current)
		end

	moving_representations: TRAFFIC_VIEW_CONTAINER [TRAFFIC_MOVING, TRAFFIC_VIEW [TRAFFIC_MOVING]]
			--
		do
			Result := internal_moving_representations
--			internal_moving_representations.draw (Current)
		end

	factory: TRAFFIC_VIEW_FACTORY is
			--
		do
			Result := internal_factory
		end

feature -- Basic operations

	redraw_now is
			-- Refresh all items on `Current'.
		do
			background_color.set_rgb (1.0, 1.0, 1.0)
			clear
			if not is_map_hidden and map /= Void then
				clear
				internal_road_representations.draw (Current)
				internal_line_representations.draw (Current)
				internal_place_representations.draw (Current)
				internal_building_representations.draw (Current)
				create background_image.make_with_size (width, height)
				background_image.draw_pixmap (0, 0, Current)
				fast_redraw_now
				has_pending_redraw := false
				(create {EV_ENVIRONMENT}).application.remove_idle_action (redraw_agent)
			end
		end

	fast_redraw_now is
			-- Refresh only the objects in mutable_object_list.
		do
			clear
			if not is_map_hidden then
				if background_image /= Void then
					draw_pixmap (0, 0, background_image)
				end
				internal_path_representations.draw (Current)
				internal_moving_representations.draw (Current)
			end
			from
				object_list.start
			until
				object_list.after
			loop
				object_list.item_for_iteration.draw (Current)
				object_list.forth
			end
		end

	background_image: EV_PIXMAP

end
