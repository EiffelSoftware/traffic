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
			refresh
		end

	TRAFFIC_MAP_WIDGET
		undefine
			copy,
			default_create,
			is_equal
		redefine
			set_map
		end

create
	make

feature -- Initialization

	make is
			-- Initialize
		local
			e: EV_ENVIRONMENT
		do
			create internal_factory
			create internal_place_representations.make
			create internal_line_representations.make
			create internal_building_representations.make
			create internal_moving_representations.make
			create internal_path_representations.make

			Precursor
		end

feature -- Basic operations

	set_map (a_map: TRAFFIC_MAP) is
			-- Set map that is displayed to `a_map'.
		local
			e: EV_ENVIRONMENT
		do
			create internal_place_representations.make
			create internal_line_representations.make
			create internal_building_representations.make
			create internal_moving_representations.make
			create internal_path_representations.make
			object_list.wipe_out
			Precursor (a_map)
			refresh
			create e
			e.application.add_idle_action (agent fast_refresh)
		end

feature {NONE} -- Implementation

	internal_factory: TRAFFIC_VS_VIEW_FACTORY
	internal_moving_representations: TRAFFIC_VIEW_CONTAINER [TRAFFIC_MOVING, TRAFFIC_VS_VIEW [TRAFFIC_MOVING]]
	internal_path_representations: TRAFFIC_VIEW_CONTAINER [TRAFFIC_PATH, TRAFFIC_VS_VIEW [TRAFFIC_PATH]]
	internal_line_representations: TRAFFIC_VIEW_CONTAINER [TRAFFIC_LINE_CONNECTION, TRAFFIC_VS_VIEW [TRAFFIC_LINE_CONNECTION]]
	internal_place_representations: TRAFFIC_VIEW_CONTAINER [TRAFFIC_PLACE, TRAFFIC_VS_VIEW [TRAFFIC_PLACE]]
	internal_building_representations: TRAFFIC_VIEW_CONTAINER [TRAFFIC_BUILDING, TRAFFIC_VS_VIEW [TRAFFIC_BUILDING]]

feature -- Access

	line_representations:  TRAFFIC_VIEW_CONTAINER [TRAFFIC_LINE_CONNECTION, TRAFFIC_VIEW [TRAFFIC_LINE_CONNECTION]] is
			--
		do
			Result := internal_line_representations
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

	refresh is
			-- Refresh all items on `Current'.
		do
			clear
			from
				internal_line_representations.start
			until
				internal_line_representations.off
			loop
				draw_item (internal_line_representations.item_for_iteration)
				internal_line_representations.forth
			end
			from
				internal_place_representations.start
			until
				internal_place_representations.off
			loop
				draw_item (internal_place_representations.item_for_iteration)
				internal_place_representations.forth
			end
			from
				internal_building_representations.start
			until
				internal_building_representations.off
			loop
				draw_item (internal_building_representations.item_for_iteration)
				internal_building_representations.forth
			end
			background_image := twin
			fast_refresh
		end

	fast_refresh is
			-- Refresh only the objects in mutable_object_list.
		do
			clear
			draw_pixmap (0, 0, background_image)
			from
				internal_moving_representations.start
			until
				internal_moving_representations.off
			loop
				draw_item (internal_moving_representations.item_for_iteration)
				internal_moving_representations.forth
			end
			from
				internal_path_representations.start
			until
				internal_path_representations.off
			loop
				draw_item (internal_path_representations.item_for_iteration)
				internal_path_representations.forth
			end
		end

	background_image: EV_PIXMAP

end
