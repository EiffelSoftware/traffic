indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_MAP_CANVAS

inherit

	ZOOMABLE_CANVAS
		export {NONE}
			object_list
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
			e: EV_ENVIRONMENT
		do
			add_taxi_agent := agent add_taxi (?)
			remove_taxi_agent := agent remove_taxi (?)
			create internal_factory
			create internal_place_representations.make
			create internal_line_representations.make
			create internal_road_representations.make
			create internal_building_representations.make
			create internal_moving_representations.make
			create internal_path_representations.make

			Precursor
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
		end

	road_representations:  TRAFFIC_VIEW_CONTAINER [TRAFFIC_ROAD, TRAFFIC_VIEW [TRAFFIC_ROAD]] is
			--
		do
			Result := internal_road_representations
		end

	path_representations:  TRAFFIC_VIEW_CONTAINER [TRAFFIC_PATH, TRAFFIC_VIEW [TRAFFIC_PATH]] is
			--
		do
			Result := internal_path_representations
		end

	place_representations: TRAFFIC_VIEW_CONTAINER [TRAFFIC_PLACE, TRAFFIC_VIEW [TRAFFIC_PLACE]]
			--
		do
			Result := internal_place_representations
		end

	building_representations: TRAFFIC_VIEW_CONTAINER [TRAFFIC_BUILDING, TRAFFIC_VIEW [TRAFFIC_BUILDING]]
			--
		do
			Result := internal_building_representations
		end

	moving_representations: TRAFFIC_VIEW_CONTAINER [TRAFFIC_MOVING, TRAFFIC_VIEW [TRAFFIC_MOVING]]
			--
		do
			Result := internal_moving_representations
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
			clear
			if not is_map_hidden then
				from
					internal_road_representations.start
				until
					internal_road_representations.after
				loop
					draw_item (internal_road_representations.item_for_iteration)
					internal_road_representations.forth
				end
				from
					internal_line_representations.start
				until
					internal_line_representations.after
				loop
					draw_item (internal_line_representations.item_for_iteration)
					internal_line_representations.forth
				end
				from
					internal_place_representations.start
				until
					internal_place_representations.after
				loop
					draw_item (internal_place_representations.item_for_iteration)
					internal_place_representations.forth
				end
				from
					internal_building_representations.start
				until
					internal_building_representations.after
				loop
					draw_item (internal_building_representations.item_for_iteration)
					internal_building_representations.forth
				end
				background_image := twin
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
				from
					internal_path_representations.start
				until
					internal_path_representations.after
				loop
					draw_item (internal_path_representations.item_for_iteration)
					internal_path_representations.forth
				end
				from
					internal_moving_representations.start
				until
					internal_moving_representations.after
				loop
					draw_item (internal_moving_representations.item_for_iteration)
					internal_moving_representations.forth
				end
			end
		end

	background_image: EV_PIXMAP

end
