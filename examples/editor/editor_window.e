note
	description: "Window of traffic4 editor."
	date: "$Date$"
	revision: "$Revision$"

class
	EDITOR_WINDOW

inherit

	EV_TITLED_WINDOW
		redefine
			initialize,
			is_in_default_state
		end

feature {NONE} -- Initialization

	initialize
			-- Build the interface for this window.
		local
			l_file_menu: EV_MENU
			l_stations_label: EV_LABEL
			l_lines_label: EV_LABEL
			l_left_box: EV_VERTICAL_BOX
			l_right_box: EV_VERTICAL_BOX
		do
			Precursor {EV_TITLED_WINDOW}

			set_menu_bar (create {EV_MENU_BAR})
			create l_file_menu.make_with_text ("File")
			l_file_menu.extend (create {EV_MENU_ITEM}.make_with_text_and_action ("Open", agent on_open))
			l_file_menu.extend (create {EV_MENU_ITEM}.make_with_text_and_action ("Save", agent on_save))
			l_file_menu.extend (create {EV_MENU_ITEM}.make_with_text_and_action ("Close", agent on_close))
			l_file_menu.extend (create {EV_MENU_ITEM}.make_with_text_and_action ("Exit", agent on_exit))
			menu_bar.extend (l_file_menu)

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
			station_list.deselect_actions.extend (agent deselect_station)
			station_list.pointer_double_press_actions.force_extend (agent on_station_list_double_clicked)

			line_list.disable_multiple_selection
			line_list.select_actions.extend (agent on_line_selected)
			line_list.deselect_actions.extend (agent deselect_line)

			station_properties_panel.properties_changed_actions.extend (agent update_map)
			line_properties_panel.properties_changed_actions.extend (agent update_map)

			close_request_actions.extend (agent on_exit)
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
				map.projector.project
			end
		end

feature -- Basic operations

	load_file (a_filename: STRING)
			-- Load file `a_filename'.
		local
			l_reader: XML_READER
			l_dialog: EV_ERROR_DIALOG
		do
			create l_reader.read (a_filename)
			if l_reader.has_error then
				create l_dialog.make_with_text (l_reader.error_message)
				l_dialog.set_buttons (<< "Ok" >>)
				l_dialog.show_modal_to_window (Current)
			else
				set_city (l_reader.city)
			end
		end

	save_file (a_filename: STRING)
			-- Save `city' to file `a_filename'.
		local
			l_writer: XML_WRITER
		do
			create l_writer.write (city, a_filename)
		end

	set_city (a_city: CITY)
			-- Set `city' to `a_city'.
		do
			city := a_city
			if city = Void then
				map := Void
			else
				create map.make (city, 1000, 1000)

				across map.station_views as l_stations loop
					l_stations.value.mouse_clicked_actions.force_extend (agent set_selected_station (l_stations.value.station))
					l_stations.value.mouse_double_clicked_actions.force_extend (agent center_map_on_station (l_stations.value.station))
				end

				across map.line_views as l_lines loop
					l_lines.value.mouse_clicked_actions.force_extend (agent set_selected_line (l_lines.value.line))
				end

			end
			update_city_view
			update_lists
			city_properties_panel.set_city (a_city)
		end

	station_clicked (a_station: STATION)
		do
			print (a_station.name) print ("%N")
		end

	update_city_view
			-- Update map display.
		do
			map_panel.wipe_out
			if map /= Void then
				map.pixmap.set_size (map_panel.width, map_panel.height)
				map_panel.extend (map.pixmap)
			end
		end

	update_map
		do
			map.update
		end

	update_lists
			-- Update stations and line lists.
		local
			l_list_item: EV_LIST_ITEM
		do
			station_list.wipe_out
			line_list.wipe_out

			if city /= Void then
				across city.stations as i loop
					create l_list_item.make_with_text (i.key)
					l_list_item.set_data (i.key)
					station_list.extend (l_list_item)
				end
				across city.lines as i loop
					create l_list_item.make_with_text (i.key.out + "   (" + i.value.north_terminal.name + " -> " + i.value.south_terminal.name + ")")
					l_list_item.set_data (i.key)
					line_list.extend (l_list_item)
				end
			end
		end

	center_map_on_station (a_station: STATION)
			-- Center map on station `a_station'.
		require
			a_station_not_void: a_station /= Void
		do

		end

	selected_station: STATION
			-- Currently selected station (if any).

	selected_line: LINE
			-- Currently selected line (if any).

	set_selected_station (a_station: STATION)
			-- Set currently selected station to `a_station'.
		require
			a_station_not_void: a_station /= Void
		do
			selected_station := a_station
			station_properties_panel.set_station (a_station, city)
			map.station_views.item (a_station.name).highlight
			across station_list as i loop
				if i.item.text ~ a_station.name then
					i.item.enable_select
					station_list.ensure_item_visible (i.item)
				else
					i.item.disable_select
				end
			end
			map.projector.project
		ensure
			selected_station_set: selected_station = a_station
		end

	set_selected_line (a_line: LINE)
			-- Set currently selected line to `a_line'.
		do
			selected_line := a_line
			line_properties_panel.set_line (a_line, city)
			map.line_views.item (a_line.name).highlight
			across line_list as i loop
				if i.item.data ~ a_line.name then
					i.item.enable_select
					line_list.ensure_item_visible (i.item)
				else
					i.item.disable_select
				end
			end
			map.projector.project
		end

	deselect_station
			-- Set currently selected station to Void.
		do
			selected_station := Void
			station_properties_panel.set_station (Void, Void)
			across map.station_views as i loop
				i.value.unhighlight
			end
			across station_list as i loop
				i.item.disable_select
			end
		end

	deselect_line
			-- Set currently selected line to Void.
		do
			selected_line := Void
			line_properties_panel.set_line (Void, Void)
			across map.line_views as i loop
				i.value.unhighlight
			end
			across line_list as i loop
				i.item.disable_select
			end
		end

feature {NONE} -- Event handlers

	on_station_selected
			-- Handle event that station is selected in stations list.
		do
			if attached {STRING} station_list.selected_item.data as l_station_name then
				set_selected_station (map.station_views.item (l_station_name).station)
			end
		end

	on_station_list_double_clicked
			-- Handle event that station list was double clicked.
		do
			if selected_station /= Void then
				center_map_on_station (selected_station)
			end
		end

	on_line_selected
			-- Handle event that line is selected in lines list.
		do
			if attached {INTEGER} line_list.selected_item.data as l_line_number then
				set_selected_line (map.line_views.item (l_line_number).line)
			end
		end

	on_open
			-- Handle selection of menu entry 'open'.
		local
			l_file_dialog: EV_FILE_OPEN_DIALOG
		do
			create l_file_dialog.make_with_title ("Open map")
			l_file_dialog.filters.extend (["*.xml", "*.xml"])
			l_file_dialog.show_modal_to_window (Current)
			if not l_file_dialog.file_name.is_empty then
				load_file (l_file_dialog.file_name)
			end
		end

	on_save
			-- Handle selection of menu entry 'save'.
		local
			l_file_dialog: EV_FILE_SAVE_DIALOG
		do
			create l_file_dialog.make_with_title ("Save map")
			l_file_dialog.filters.extend (["*.xml", "*.xml"])
			l_file_dialog.show_modal_to_window (Current)
			if not l_file_dialog.file_name.is_empty then
				save_file (l_file_dialog.file_name)
			end
		end

	on_close
			-- Handle selection of menu entry 'close'.
		do
			set_city (Void)
		end

	on_exit
			-- Handle selection of menu entry 'exit'.
		do
			destroy_and_exit_if_last
		end

feature {NONE} -- Implementation / Constants

	Window_title: STRING = "Traffic4 editor"
			-- Title of the window.

	Window_width: INTEGER = 800
			-- Initial width for this window.

	Window_height: INTEGER = 600
			-- Initial height for this window.

	is_in_default_state: BOOLEAN
			-- <Precursor>
		do
			Result := True
		end

end
