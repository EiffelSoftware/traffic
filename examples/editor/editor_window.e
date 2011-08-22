note
	description: "Window of traffic4 editor."
	date: "$Date$"
	revision: "$Revision$"

class
	EDITOR_WINDOW

inherit

	EV_TITLED_WINDOW
		redefine
			create_interface_objects,
			initialize
		end

feature {NONE} -- Initialization

	create_interface_objects
		do
			Precursor {EV_TITLED_WINDOW}
		end

	initialize
			-- Build the interface for this window.
		local
			l_stations_label: EV_LABEL
			l_lines_label: EV_LABEL
			l_left_box: EV_VERTICAL_BOX
			l_right_box: EV_VERTICAL_BOX
		do
			Precursor {EV_TITLED_WINDOW}

			build_main_container
			extend (main_container)

			create l_stations_label.make_with_text ("Stations")
			l_stations_label.font.set_weight ({EV_FONT_CONSTANTS}.Weight_bold)
			create l_lines_label.make_with_text ("Lines")
			l_lines_label.font.set_weight ({EV_FONT_CONSTANTS}.Weight_bold)
			create l_left_box
			create l_right_box

			create station_list
			create line_list
			create map_panel
			create city_properties_panel.make
			create station_properties_panel.make
			create line_properties_panel.make

			l_left_box.extend (l_stations_label)
			l_left_box.disable_item_expand (l_stations_label)
			l_left_box.extend (station_list)
			l_left_box.extend (l_lines_label)
			l_left_box.disable_item_expand (l_lines_label)
			l_left_box.extend (line_list)
			l_left_box.set_minimum_size (200, 400)

			map_panel.set_minimum_size (300, 400)
			map_panel.resize_actions.extend (agent on_resize)

			l_right_box.extend (city_properties_panel)
			l_right_box.disable_item_expand (city_properties_panel)
			l_right_box.extend (station_properties_panel)
			l_right_box.disable_item_expand (station_properties_panel)
			l_right_box.extend (line_properties_panel)
			l_right_box.disable_item_expand (line_properties_panel)
			l_right_box.set_minimum_size (200, 400)

			main_container.extend (l_left_box)
			main_container.disable_item_expand (l_left_box)
			main_container.extend (map_panel)
			main_container.extend (l_right_box)
			main_container.disable_item_expand (l_right_box)

			set_title (Window_title)
			set_size (Window_width, Window_height)

			station_list.disable_multiple_selection
			station_list.select_actions.extend (agent on_station_selected)
			station_list.deselect_actions.extend (agent on_station_deselected)

			line_list.disable_multiple_selection
			line_list.select_actions.extend (agent on_line_selected)
			line_list.deselect_actions.extend (agent on_line_deselected)

		end

	main_container: EV_HORIZONTAL_BOX
			-- Main container (contains all widgets displayed in this window)

	station_list: EV_LIST
			-- List of stations.

	line_list: EV_LIST
			-- List of lines.

	city_properties_panel: CITY_PROPERTIES_PANEL
			-- Panel for city properties.

	station_properties_panel: STATION_PROPERTIES_PANEL
			-- Panel for station properties.

	line_properties_panel: LINE_PROPERTIES_PANEL
			-- Panel for line properties.

	map_panel: EV_HORIZONTAL_BOX
			-- Panel for displaying map.

	city: CITY
			-- City that is being displayed.

	map: CITY_VIEW
			-- City view to visualize city.

	build_main_container
			-- Create and populate `main_container'.
		do
			create main_container
		end

	on_resize (a_x: INTEGER; a_y: INTEGER; a_width: INTEGER; a_height: INTEGER)
			-- Resize map.
		do
			if map /= Void and then map.pixmap /= Void then
				map.pixmap.set_size (a_width, a_height)
			end
		end

feature -- Basic operations

	set_city (a_city: CITY)
			-- Set `city' to `a_city'.
		do
			city := a_city
			create map.make (city, 1000, 1000)
			update_city_view
			update_lists
			city_properties_panel.set_city (a_city)
		end

	update_city_view
			-- Update map display.
		do
			map.pixmap.set_size (map_panel.width, map_panel.height)
			map_panel.wipe_out
			map_panel.extend (map.pixmap)
		end

	update_lists
			-- Update stations and line lists.
		local
			l_list_item: EV_LIST_ITEM
		do
			station_list.wipe_out
			across city.stations as i loop
				create l_list_item.make_with_text (i.key)
				l_list_item.set_data (i.key)
				station_list.extend (l_list_item)
			end

			line_list.wipe_out
			across city.lines as i loop
				create l_list_item.make_with_text (i.key.out + "   (" + i.value.north_terminal.name + " -> " + i.value.south_terminal.name + ")")
				l_list_item.set_data (i.key)
				line_list.extend (l_list_item)
			end
		end

feature {NONE} -- Event handlers

	on_station_selected
			-- Handle event that station is selected in stations list.
		local
			l_station_view: STATION_VIEW
		do
			if attached {STRING} station_list.selected_item.data as l_station_name then
				l_station_view := map.station_views.item (l_station_name)
				station_properties_panel.set_station (l_station_view.station)
				l_station_view.highlight
				map.projector.project
			end
		end

	on_station_deselected
			-- Handle event that the selected station has been deselected.
		do
			across map.station_views as i loop
				i.value.unhighlight
			end
			station_properties_panel.set_station (Void)
			map.projector.project
		end

	on_line_selected
			-- Handle event that line is selected in lines list.
		local
			l_line_view: LINE_VIEW
		do
			if attached {INTEGER} line_list.selected_item.data as l_line_number then
				l_line_view := map.line_views.item (l_line_number)
				line_properties_panel.set_line (l_line_view.line)
				l_line_view.highlight
				map.projector.project
			end
		end

	on_line_deselected
			-- Handle event that the selected line has been deselected.
		do
			across map.line_views as i loop
				i.value.unhighlight
			end
			line_properties_panel.set_line (Void)
			map.projector.project
		end

feature {NONE} -- Implementation / Constants

	Window_title: STRING = "Traffic4 editor"
			-- Title of the window.

	Window_width: INTEGER = 800
			-- Initial width for this window.

	Window_height: INTEGER = 600
			-- Initial height for this window.

end
