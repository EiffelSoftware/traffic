indexing
	description: "Vision2 Main window for touch examples, containing a console and a button plus a map canvas"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_MAIN_WINDOW

inherit
	EV_TITLED_WINDOW
		redefine
			initialize
		end

create
	default_create

feature {NONE} -- Initialization

	initialize is
			-- Build the interface for this window.
		do
			Precursor {EV_TITLED_WINDOW}
				-- Create and add the status bar.
			build_standard_status_bar
			lower_bar.extend (standard_status_bar)
			build_main_container
			extend (main_container)
				-- Execute `request_close_window' when the user clicks
				-- on the cross in the title bar.
			close_request_actions.extend (agent request_close_window)
				-- Set the title of the window
			set_title (Window_title)
				-- Set the initial size of the window
			set_size ((canvas.width*1.2).floor, (canvas.height*1.2).floor)
		end

feature -- Basic operations

	set_example (a_example: TOURISM) is
			--
		do
			a_example.run (console, Current)
			run_button.select_actions.extend (agent a_example.explore_on_click)
		end

--feature {NONE} -- Menu Implementation

--	standard_menu_bar: EV_MENU_BAR
			-- Standard menu bar for this window.

--	file_menu: EV_MENU
			-- "File" menu for this window (contains New, Open, Close, Exit...)

--	help_menu: EV_MENU
			-- "Help" menu for this window (contains About...)

--	build_standard_menu_bar is
--			-- Create and populate `standard_menu_bar'.
--		require
--			menu_bar_not_yet_created: standard_menu_bar = Void
--		do
--				-- Create the menu bar.
--			create standard_menu_bar

--				-- Add the "File" menu
--			build_file_menu
--			standard_menu_bar.extend (file_menu)

--				-- Add the "Help" menu
--			build_help_menu
--			standard_menu_bar.extend (help_menu)
--		ensure
--			menu_bar_created:
--				standard_menu_bar /= Void and then
--				not standard_menu_bar.is_empty
--		end

--	build_file_menu is
--			-- Create and populate `file_menu'.
--		require
--			file_menu_not_yet_created: file_menu = Void
--		local
--			menu_item: EV_MENU_ITEM
--		do
--			create file_menu.make_with_text (Menu_file_item)

--			create menu_item.make_with_text (Menu_file_new_item)
--				--| TODO: Add the action associated with "New" here.
--			file_menu.extend (menu_item)

--			create menu_item.make_with_text (Menu_file_open_item)
--			menu_item.select_actions.extend (agent choose_file)
--				--| TODO: Add the action associated with "Open" here.
--			file_menu.extend (menu_item)

--			create menu_item.make_with_text (Menu_file_save_item)
--				--| TODO: Add the action associated with "Save" here.
--			file_menu.extend (menu_item)

--			create menu_item.make_with_text (Menu_file_saveas_item)
--				--| TODO: Add the action associated with "Save As..." here.
--			file_menu.extend (menu_item)

--			create menu_item.make_with_text (Menu_file_close_item)
--				--| TODO: Add the action associated with "Close" here.
--			file_menu.extend (menu_item)

--			file_menu.extend (create {EV_MENU_SEPARATOR})

--				-- Create the File/Exit menu item and make it call
--				-- `request_close_window' when it is selected.
--			create menu_item.make_with_text (Menu_file_exit_item)
--			menu_item.select_actions.extend (agent request_close_window)
--			file_menu.extend (menu_item)
--		ensure
--			file_menu_created: file_menu /= Void and then not file_menu.is_empty
--		end

--	build_help_menu is
--			-- Create and populate `help_menu'.
--		require
--			help_menu_not_yet_created: help_menu = Void
--		local
--			menu_item: EV_MENU_ITEM
--		do
--			create help_menu.make_with_text (Menu_help_item)

--			create menu_item.make_with_text (Menu_help_contents_item)
--				--| TODO: Add the action associated with "Contents and Index" here.
--			help_menu.extend (menu_item)

--			create menu_item.make_with_text (Menu_help_about_item)
--			menu_item.select_actions.extend (agent on_about)
--			help_menu.extend (menu_item)
--		ensure
--			help_menu_created: help_menu /= Void and then not help_menu.is_empty
--		end

feature {NONE} -- GUI building

	build_main_container is
			-- Create and populate `main_container'.
		require
			main_container_not_yet_created: main_container = Void
		local
			hb1: EV_HORIZONTAL_BOX
			fr: EV_FRAME
			fixed: EV_FIXED
		do
			create viewport
			viewport.set_offset (0, 0)
			create hb1
			create fr
			create canvas.make
			create main_container
			create fixed

			viewport.set_minimum_height (600)
			viewport.set_minimum_width (600)
			viewport.extend (canvas)
			fr.extend (viewport)
			canvas.set_zoom_limits (0.5, 10.0)
			viewport.resize_actions.force_extend (agent resize_canvas)

			-- Example button
			create run_button.make_with_text ("Run example")
			fixed.extend (run_button)
			fixed.set_item_position (run_button, 5, 2)

			create console.default_create
			console.set_minimum_size (200, 400)
			console.disable_edit
			fixed.extend (console)
			fixed.set_item_position (console, 5, 35)

			hb1.extend (fixed)
			hb1.disable_item_expand (fixed)
			hb1.extend (fr)
			main_container.extend (hb1)
			main_container.set_padding (10)
		ensure
			main_container_created: main_container /= Void
		end

	build_standard_status_bar is
			-- Create and populate the standard toolbar.
		require
			status_bar_not_yet_created:
				standard_status_bar = Void and then
				standard_status_label = Void
		local
			env: EV_ENVIRONMENT
		do
				-- Create the status bar.
			create standard_status_bar
			standard_status_bar.set_border_width (2)

				-- Populate the status bar.
			create standard_status_label.make_with_text ("Please run the example...")
			standard_status_label.align_text_left
			standard_status_bar.extend (standard_status_label)

			create env
			env.application.add_idle_action (agent update_status_label)
		ensure
			status_bar_created:
				standard_status_bar /= Void and then
				standard_status_label /= Void
		end

--feature {NONE} -- About Dialog Implementation

--	on_about is
--			-- Display the About dialog.
--		local
--			about_dialog: ABOUT_DIALOG
--		do
--			create about_dialog
--			about_dialog.show_modal_to_window (Current)
--		end

feature {NONE} -- Implementation

	request_close_window is
			-- The user wants to close the window
		local
			question_dialog: EV_CONFIRMATION_DIALOG
		do
			create question_dialog.make_with_text (Label_confirm_close_window)
			question_dialog.show_modal_to_window (Current)

			if question_dialog.selected_button.is_equal ((create {EV_DIALOG_CONSTANTS}).ev_ok) then
					-- Destroy the window
				destroy;

					-- End the application
					--| TODO: Remove this line if you don't want the application
					--|       to end when the first window is closed..
				(create {EV_ENVIRONMENT}).application.destroy
			end
		end

--	choose_file is
--			-- Open file dialog and choose a map to load.
--		local
--			dlg: EV_FILE_OPEN_DIALOG
--		do
--			create dlg.make_with_title ("Open map file")
--			dlg.filters.extend (["*.xml", "Traffic xml files (*.xml)"] )
--			dlg.open_actions.extend (agent open_file (dlg))
--			dlg.show_modal_to_window (Current)
--		end

--	open_file (a_dlg: EV_FILE_OPEN_DIALOG) is
--			-- File dialog was closed, now load a map.
--		local
--			loader: TRAFFIC_MAP_LOADER
--			dlg: EV_MESSAGE_DIALOG
--		do
--			create loader.make (a_dlg.file_name)
--			loader.disable_dump_loading
--			loader.load_map
--			if not loader.has_error then
--				if canvas.map /= Void and then canvas.map.time.is_time_running then
--					canvas.map.time.reset
--				end
--				canvas.set_map (loader.map)
--				create point_randomizer.make (loader.map.center, loader.map.radius)
--				create path_randomizer.set_map (loader.map)
--				resize_canvas
--				add_buildings
--				canvas.map.time.set_speedup (50)
--				canvas.map.time.start
--				move_to_center
--				from
--					fixed.start
--				until
--					fixed.after
--				loop
--					fixed.item.enable_sensitive
--					fixed.forth
--				end
--			else
--				create dlg.make_with_text ("Error parsing" + a_dlg.file_name)
--				dlg.show
--			end
--		end

--	add_buildings is
--			-- Add buildings to the city.
--		local
--			r: TRAFFIC_BUILDING_RANDOMIZER
--		do
--			create r.set_map (canvas.map)
--			r.generate_random_buildings (10, canvas.map.radius/3, 3)
--			from
--				r.last_buildings.start
--			until
--				r.last_buildings.off
--			loop
--				canvas.map.buildings.put_last (r.last_buildings.item_for_iteration)
--				r.last_buildings.forth
--			end
--			r.generate_random_buildings (15, canvas.map.radius*2/3, 2)
--			from
--				r.last_buildings.start
--			until
--				r.last_buildings.off
--			loop
--				canvas.map.buildings.put_last (r.last_buildings.item_for_iteration)
--				r.last_buildings.forth
--			end
--			r.generate_random_buildings (100, canvas.map.radius, 1)
--			from
--				r.last_buildings.start
--			until
--				r.last_buildings.off
--			loop
--				canvas.map.buildings.put_last (r.last_buildings.item_for_iteration)
--				r.last_buildings.forth
--			end
--		end

--	add_line_vehicles (a_value: INTEGER) is
--			-- Add as many line vehicles to the city, so that there are `a_value' per line (or remove some if needed).
--		local
--			tram: TRAFFIC_TRAM
--			bus: TRAFFIC_BUS
--			i: INTEGER
--		do
--			if canvas.map /= Void then
--				canvas.map.trams.wipe_out
--				canvas.map.busses.wipe_out
--				if a_value > 0 then
--					from
--						canvas.map.lines.start
--					until
--						canvas.map.lines.after
--					loop
--						from
--							i := 1
--						until
--							i > a_value or else i > canvas.map.lines.item_for_iteration.count
--						loop
--							if canvas.map.lines.item_for_iteration.type.name.is_equal ("tram") then
--								create tram.make_with_line (canvas.map.lines.item_for_iteration)
--								tram.set_to_station (canvas.map.lines.item_for_iteration.i_th (i))
--								canvas.map.trams.put_last (tram)
--								tram.start
--							elseif canvas.map.lines.item_for_iteration.type.name.is_equal ("bus") then
--								create bus.make_with_line (canvas.map.lines.item_for_iteration)
--								bus.set_to_station (canvas.map.lines.item_for_iteration.i_th (i))
--								bus.set_speed (5)
--								canvas.map.busses.put_last (bus)
--								bus.start
--							end
--							i := i + 1
--						end
--						canvas.map.lines.forth
--					end
--				end
--			end
--		end

--	add_free_movings (a_value: INTEGER) is
--			-- Add `a_value' number of free moving objects (or remove some if needed).
--		local
--			moving: TRAFFIC_FREE_MOVING
--		do
--			if canvas.map /= Void then
--				if a_value > canvas.map.free_movings.count then
--					-- Add more
--					from
--					until
--						canvas.map.free_movings.count >= a_value
--					loop
--						point_randomizer.generate_point_array (7)
--						create moving.make_with_points (point_randomizer.last_array, 1.5)
--						canvas.map.free_movings.put_last (moving)
--						moving.set_reiterate (True)
--						moving.start
--					end
--				elseif a_value < canvas.map.free_movings.count then
--					-- Remove
--					canvas.map.free_movings.prune_last (canvas.map.free_movings.count - a_value)
--				end
--			end
--		end

--	add_passengers (a_value: INTEGER) is
--			-- Add `a_value' number of passengers (or remove some if needed).
--		local
--			passenger: TRAFFIC_PASSENGER
--			i: INTEGER
--		do
--			if a_value > canvas.map.passengers.count then
--				-- Add more
--				from
--				until
--					canvas.map.passengers.count >= a_value
--				loop
--					path_randomizer.generate_path (6)
--					random.forth
--					if path_randomizer.last_path.first /= Void then
--						create passenger.make_with_path (path_randomizer.last_path, random.double_item*3 + 0.1)
--						canvas.map.passengers.put_last (passenger)
--						passenger.set_reiterate (True)
--						passenger.start
--					end
--					i := i + 1
--				end
--			elseif a_value < canvas.map.passengers.count then
--				-- Remove
--				canvas.map.passengers.prune_last (canvas.map.passengers.count - a_value)
--			end
--		end

--	add_paths (a_value: INTEGER) is
--			-- Add `a_value' number of paths to the city (or remove if needed).
--		local
--			g, b: INTEGER
--			p: ARRAY [TRAFFIC_PLACE]
--			p1, p2: TRAFFIC_PLACE
--			c: TRAFFIC_PATH_CALCULATOR
--		do
--			if a_value > canvas.map.paths.count then
--				-- Add more
--				p := canvas.map.places.to_array
--				create c.set_map (canvas.map)
--				from
--				until
--					canvas.map.paths.count >= a_value
--				loop
--					random.forth
--					p1 := p.item (random.item \\ p.count + 1)
--					random.forth
--					p2 := p.item (random.item \\ p.count + 1)
--					if p1 /= p2 then
--						c.find_shortest_path (p1, p2)
--						if c.path /= Void then
--							random.forth
--							g := random.item \\ 256
--							random.forth
--							b := random.item \\ 256
--							canvas.map.paths.put_last (c.path)
--						end
--					end
--				end
--			elseif a_value < canvas.map.paths.count then
--				-- Remove
--				canvas.map.paths.prune_last (canvas.map.paths.count - a_value)
--			end
--		end

--	add_place is
--			-- Add place.
--		local
--			p: TRAFFIC_PLACE
--			x, y: INTEGER
--		do
--			-- Create new place
--			random.forth
--			create p.make ("New place" + random.item.out)
--			random.forth
--			x := random.item \\ (2*canvas.map.radius.floor)
--			random.forth
--			y := random.item \\ (2*canvas.map.radius.floor)
--			p.set_position (create {TRAFFIC_COORDINATE}.make (canvas.map.center.x + x - canvas.map.radius, canvas.map.center.y + y - canvas.map.radius))
--			canvas.map.places.force (p, p.name)
--			canvas.redraw
--		end

--	add_line is
--			-- Add line.
--		local
--			l: TRAFFIC_LINE
--			lc1, lc2: TRAFFIC_LINE_CONNECTION
--			r, g, b: INTEGER
--			p1, p2: TRAFFIC_PLACE
--			s1, s2: TRAFFIC_STOP
--			p: ARRAY [TRAFFIC_PLACE]
--			pp: DS_ARRAYED_LIST [TRAFFIC_COORDINATE]
--		do
--			random.forth
--			r := random.item \\ 256
--			random.forth
--			g := random.item \\ 256
--			random.forth
--			b := random.item \\ 256
--			create l.make ("Line" + random.item.out, create {TRAFFIC_TYPE_TRAM}.make)
--			l.set_color (create {TRAFFIC_COLOR}.make_with_rgb (r, g, b))
--			p := canvas.map.places.to_array
--			p1 := p.item (random.item \\ p.count + 1)
--			random.forth
--			p2 := p.item (random.item \\ p.count + 1)
--			if p1.has_stop (l) then
--				s1 := p1.stop (l)
--			else
--				create s1.make_stop (p1, l, create {TRAFFIC_COORDINATE}.make_from_other (p1.position))
--			end
--			if p2.has_stop (l) then
--				s2 := p2.stop (l)
--			else
--				create s2.make_stop (p2, l, create {TRAFFIC_COORDINATE}.make_from_other (p2.position))
--			end
--			create pp.make (2)
--			pp.force_last (create {TRAFFIC_COORDINATE}.make_from_other (s1.position))
--			pp.force_last (create {TRAFFIC_COORDINATE}.make_from_other (s2.position))
--			create lc1.make (s1, s2, l.type, pp)
--			create pp.make (2)
--			pp.force_last (create {TRAFFIC_COORDINATE}.make_from_other (s2.position))
--			pp.force_last (create {TRAFFIC_COORDINATE}.make_from_other (s1.position))
--			create lc2.make (s2, s1, l.type, pp)
--			l.put_last (lc1, lc2)
--			canvas.map.lines.force (l, l.name)
--		end

--	add_line_connection is
--			-- Add line connection.
--		local
--			l: TRAFFIC_LINE
--			lc1, lc2: TRAFFIC_LINE_CONNECTION
--			p1, p2: TRAFFIC_PLACE
--			s1, s2: TRAFFIC_STOP
--			pt: ARRAY [TRAFFIC_PLACE]
--			lt: ARRAY [TRAFFIC_LINE]
--			pp: DS_ARRAYED_LIST [TRAFFIC_COORDINATE]
--		do
--			lt := canvas.map.lines.to_array
--			l := lt.item ((random.item \\ lt.count) + 1)
--			pt := canvas.map.places.to_array
--			if l.terminal_2 /= Void then
--				if l.terminal_2.has_stop (l) then
--					s1 := l.terminal_2.stop (l)
--				else
--					create s1.make_stop (l.terminal_2, l, create {TRAFFIC_COORDINATE}.make_from_other (l.terminal_2.position))
--				end
--			else
--				random.forth
--				p1 := pt.item ((random.item \\ pt.count) + 1)
--				if p1 /= Void and then p1.has_stop (l) then
--					s1 := p1.stop (l)
--				else
--					create s1.make_stop (p1, l, create {TRAFFIC_COORDINATE}.make_from_other (p1.position))
--				end
--			end
--			random.forth
--			p2 := pt.item ((random.item \\ pt.count) + 1)
--			if p2.has_stop (l) then
--				s2 := p2.stop (l)
--			else
--				create s2.make_stop (p2, l, create {TRAFFIC_COORDINATE}.make_from_other (p2.position))
--			end
--			create pp.make (2)
--			pp.force_last (create {TRAFFIC_COORDINATE}.make_from_other (s1.position))
--			pp.force_last (create {TRAFFIC_COORDINATE}.make_from_other (s2.position))
--			create lc1.make (s1, s2, l.type, pp)
--			create pp.make (2)
--			pp.force_last (create {TRAFFIC_COORDINATE}.make_from_other (s2.position))
--			pp.force_last (create {TRAFFIC_COORDINATE}.make_from_other (s1.position))
--			create lc2.make (s2, s1, l.type, pp)
--			l.put_last (lc1, lc2)
--			canvas.redraw
--		end

--	add_road is
--			-- Add road.
--		local
--			r: TRAFFIC_ROAD
--			rc1, rc2: TRAFFIC_ROAD_CONNECTION
--			n1, n2: TRAFFIC_NODE
--			pt: ARRAY [TRAFFIC_PLACE]
--		do
--			pt := canvas.map.places.to_array
--			random.forth
--			n1 := pt.item ((random.item \\ pt.count) + 1).dummy_node
--			random.forth
--			n2 := pt.item ((random.item \\ pt.count) + 1).dummy_node

--			create rc1.make (n1, n2, create {TRAFFIC_TYPE_STREET}.make, canvas.map.graph.id_manager.next_free_index)
--			create rc2.make (n2, n1, create {TRAFFIC_TYPE_STREET}.make, canvas.map.graph.id_manager.next_free_index)
--			create r.make (rc1, rc2)
--			canvas.map.roads.force (r, r.id)
--			canvas.redraw
--		end

--	add_taxi_office is
--			-- Add taxi office.
--		local
--			dt: TRAFFIC_DISPATCHER_TAXI_OFFICE
--			et: TRAFFIC_EVENT_TAXI_OFFICE
--			r, g, b: INTEGER
--			td: TRAFFIC_DISPATCHER_TAXI
--			te: TRAFFIC_EVENT_TAXI
--		do
--			random.forth
--			r := random.item \\ 256
--			random.forth
--			g := random.item \\ 256
--			random.forth
--			b := random.item \\ 256
--			random.forth
--			if not canvas.map.taxi_offices.is_empty then
--				if canvas.map.taxi_offices.last.generating_type.is_equal ("TRAFFIC_EVENT_TAXI_OFFICE") then
--					create dt.make_with_color (r, g, b)
--					point_randomizer.generate_point_array (5)
--					create td.make_random (dt, point_randomizer.last_array)
--					dt.add_taxi (td)
--					canvas.map.taxi_offices.put_last (dt)
--					point_randomizer.generate_point_array (5)
--					create td.make_random (dt, point_randomizer.last_array)
--					dt.add_taxi (td)
--				else
--					create et.make_with_color (r, g, b)
--					point_randomizer.generate_point_array (5)
--					create te.make_random (et, point_randomizer.last_array)
--					et.add_taxi (te)
--					canvas.map.taxi_offices.put_last (et)
--					point_randomizer.generate_point_array (5)
--					create te.make_random (et, point_randomizer.last_array)
--					et.add_taxi (te)
--				end
--			else
--				create et.make_with_color (r, g, b)
--				point_randomizer.generate_point_array (5)
--				create te.make_random (et, point_randomizer.last_array)
--				et.add_taxi (te)
--				canvas.map.taxi_offices.put_last (et)
--				point_randomizer.generate_point_array (5)
--				create te.make_random (et, point_randomizer.last_array)
--				et.add_taxi (te)
--			end
--		end

--	add_taxi (a_value: INTEGER) is
--			-- Add taxi.
--		local
--			td: TRAFFIC_DISPATCHER_TAXI
--			te: TRAFFIC_EVENT_TAXI
--			dt: TRAFFIC_DISPATCHER_TAXI_OFFICE
--			et: TRAFFIC_EVENT_TAXI_OFFICE
--		do
--			if not canvas.map.taxi_offices.is_empty then
--				dt ?= canvas.map.taxi_offices.last
--				et ?= canvas.map.taxi_offices.last
--				if et /= Void then
--					if et.taxis.count <= a_value then
--						from
--						until
--							et.taxis.count >= a_value
--						loop
--							point_randomizer.generate_point_array (5)
--							create te.make_random (et, point_randomizer.last_array)
--							et.add_taxi (te)
--						end
--					else
--						from
--						until
--							et.taxis.count <= a_value
--						loop
--							et.remove_taxi (et.taxis.last)
--						end
--					end
--				elseif dt /= Void then
--					if dt.taxis.count <= a_value then
--						from
--						until
--							dt.taxis.count >= a_value
--						loop
--							point_randomizer.generate_point_array (5)
--							create td.make_random (dt, point_randomizer.last_array)
--							dt.add_taxi (td)
--						end
--					else
--						from
--						until
--							dt.taxis.count <= a_value
--						loop
--							dt.remove_taxi (dt.taxis.last)
--						end
--					end
--				end
--			end
--		end

--	remove_place is
--			-- Remove random map items.
--		local
--			p: TRAFFIC_PLACE
--			pt: ARRAY [TRAFFIC_PLACE]
--		do
--			pt := canvas.map.places.to_array
--			if pt.count > 0 then
--				p := pt.item ((random.item \\ pt.count) + 1)
--				if p.is_removable then
--					canvas.map.places.remove (p.name)
--				end
--			end
--			canvas.redraw
--		end

--	remove_line is
--			-- Add random map items
--		local
--			l: TRAFFIC_LINE
--			lt: ARRAY [TRAFFIC_LINE]
--		do
--			lt := canvas.map.lines.to_array
--			if lt.count > 0 then
--				l := lt.item ((random.item \\ lt.count) + 1)
--				canvas.map.lines.remove (l.name)
--			end
--		end

--	remove_line_connection is
--			-- Add random map items
--		local
--			l: TRAFFIC_LINE
--			lt: ARRAY [TRAFFIC_LINE]
--			s: TRAFFIC_STOP
--		do
--			lt := canvas.map.lines.to_array
--			if lt.count > 0 then
--				l := lt.item ((random.item \\ lt.count) + 1)
--				l.remove_all_connections
--				random.forth
--				l := lt.item ((random.item \\ lt.count) + 1)
--				if l.count >= 1 then
--					l.start
--					s := l.item_for_iteration.start_node
--					l.remove_first
--				end
--				random.forth
--				l := lt.item ((random.item \\ lt.count) + 1)
--				if l.count >= 1 then
--					l.remove_last
--				end
--			end
--		end

--	remove_road is
--			-- Add random map items
--		local
--			r: TRAFFIC_ROAD
--			rt: ARRAY [TRAFFIC_ROAD]
--		do
--			rt := canvas.map.roads.to_array
--			random.forth
--			if rt.count > 0 then
--				r := rt.item ((random.item \\ rt.count) + 1)
--				if r.is_removable then
--					canvas.map.roads.remove (r.id)
--				end
--			end
--			canvas.redraw
--		end

--	toggle_map_hidden (a_check_box: EV_CHECK_BUTTON) is
--			--
--		do
--			if a_check_box.is_selected then
--				canvas.disable_map_hidden
--			else
--				canvas.enable_map_hidden
--			end
--		end

--	toggle_lines_hidden (a_check_box: EV_CHECK_BUTTON) is
--			--
--		do
--			if a_check_box.is_selected then
--				canvas.line_representations.show
--			else
--				canvas.line_representations.hide
--			end
--		end

--	toggle_roads_hidden (a_check_box: EV_CHECK_BUTTON) is
--			--
--		do
--			if a_check_box.is_selected then
--				canvas.road_representations.show
--			else
--				canvas.road_representations.hide
--			end
--		end

--	toggle_highlight (a_toggle: EV_TOGGLE_BUTTON) is
--			--
--		do
--			if a_toggle.is_selected then
--				canvas.map.places.first.highlight
--				canvas.map.lines.first.highlight
--				canvas.map.line_sections.last.highlight
--				canvas.map.roads.first.highlight
--				canvas.map.buildings.first.highlight
--				canvas.redraw
--			else
--				canvas.map.places.first.unhighlight
--				canvas.map.lines.first.unhighlight
--				canvas.map.line_sections.last.unhighlight
--				canvas.map.roads.first.unhighlight
--				canvas.map.buildings.first.unhighlight
--				canvas.redraw
--			end
--		end


	update_status_label is
			--
		do
			if canvas.map /= Void and then canvas.map.time.is_time_running then
				standard_status_label.set_text (canvas.map.time.out)
			end
		end

feature -- Widgets

	standard_status_bar: EV_STATUS_BAR
			-- Standard status bar for this window

	standard_status_label: EV_LABEL
			-- Label situated in the standard status bar.
			--
			-- Note: Call `standard_status_label.set_text (...)' to change the text
			--       displayed in the status bar.

	console: TRAFFIC_CONSOLE

	run_button: EV_BUTTON
			-- Clicking this button will run example

	main_container: EV_VERTICAL_BOX
			-- Main container (contains all widgets displayed in this window)

	canvas: TRAFFIC_MAP_CANVAS
			-- The Canvas Widget

	viewport: EV_VIEWPORT
			-- To display the canvas

feature -- Basic operations

	resize_canvas is
			-- Set up canvas.
		local
			w: INTEGER
			h: INTEGER
		do
			w := (viewport.width).max (1)
			h := (viewport.height).max (1)
			canvas.set_size (w, h)
			canvas.set_minimum_size (w, h)
			viewport.set_item_size (w, h)
		end

	move_to_center is
			-- Center map on screen.
		local
			xdiff, ydiff: DOUBLE
			canvas_center: REAL_COORDINATE
		do
			canvas_center := client_to_map_coordinates ((canvas.width/2).floor, (canvas.height/2).floor)
			xdiff := canvas.map.center.x - canvas_center.x
			ydiff := (-1)*canvas.map.center.y - canvas_center.y
			if xdiff /= 0 or ydiff /= 0 then
				canvas.go_down (ydiff)
				canvas.go_left (xdiff)
			end
			canvas.redraw
		end

feature -- Conversion

	client_to_map_coordinates (x, y: INTEGER): REAL_COORDINATE is
			-- Map position corresponding to client coordinates (`x', `y')
		local
			lx: DOUBLE
			ly: DOUBLE
			xperc: DOUBLE
			yperc: DOUBLE
			h: INTEGER
			org: REAL_COORDINATE
		do
			lx := x / 1
			ly := y / 1

			xperc := lx / (canvas.parent.client_width)
			h := (canvas.parent.client_height).max (1)
			yperc := (h - ly) / h

			org := canvas.visible_area.lower_left
			create Result.make (
				(org.x + xperc * canvas.visible_area.width).rounded,
				(org.y + yperc * canvas.visible_area.height).rounded)

		ensure
			Result_exists: Result /= Void
		end

feature {NONE} -- Implementation / Constants

	Window_title: STRING is "city_vision2"
			-- Title of the window.

	Window_width: INTEGER is 800
			-- Initial width for this window.

	Window_height: INTEGER is 600
			-- Initial height for this window.

	Label_confirm_close_window: STRING is "You are about to close this window.%NClick OK to proceed."
			-- String for the confirmation dialog box that appears
			-- when the user try to close the first window.

end
