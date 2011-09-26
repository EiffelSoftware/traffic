note
	description : "Browsing traffic city maps"

class
	BROWSER

inherit
	KL_SHARED_FILE_SYSTEM

create
	execute

feature {NONE} -- Initialization

	execute
			-- Run application.
		local
			icon: EV_PIXMAP
			box: EV_VERTICAL_BOX
			map_frame: EV_CELL
		do
			create gui_application
			create window
			window.set_size (1000, 1000)
			window.set_title ("Map browser")
			if file_system.file_exists (file_system.pathname_to_string (icon_path)) then
				create icon
				icon.set_with_named_file (file_system.pathname_to_string (icon_path))
				window.set_icon_pixmap (icon)
			end
			window.close_request_actions.extend (agent on_close)
			window.show
			create box
			create console.make
			create map_frame
			box.extend (map_frame)
			box.extend (console)
			box.disable_item_expand (console)
			window.extend (box)

			load_city
			if city /= Void then
				create map.make (city)
				map.pixmap.set_size (window.client_width, window.client_height - console.height)
				map.fit_to_window
				map.refresh
				map_frame.extend (map.pixmap)
				map.pixmap.set_focus
				map_frame.resize_actions.extend (agent on_resize)

				add_public_transport

				map.on_scroll.extend_back (agent zoom)
				map.on_drag.extend_back (agent map.translate)
				add_selection_actions
				map.set_time_speedup (5.0)
				map.on_double_click_no_args.extend_back (agent toggle_animation)
			end
			gui_application.launch
		end

	add_public_transport
			-- Add a public transportation unit per line.
		require
			city_exists: city /= Void
			map_exists: map /= Void
		do
			across
				city.lines as li
			loop
				city.add_public_transport (li.value.name)
			end
			map.update
		end

	add_selection_actions
			-- Subscribe map items to events required to implement item selection.
		require
			map_exists: map /= Void
		local
			sv: STATION_VIEW
			lv: LINE_VIEW
			tv: TRANSPORT_VIEW
		do
			map.on_right_click_no_args.extend_back (agent deselect)
			map.on_right_click_no_args.extend_back (agent console.output (city))
			across
				map.station_views as i
			loop
				sv := i.value
				sv.on_left_click_no_args.extend_back (agent select_view (sv))
				sv.on_left_click_no_args.extend_back (agent console.output (sv.station))
			end
			across
				map.line_views as i
			loop
				lv := i.value
				lv.on_left_click_no_args.extend_back (agent select_view (lv))
				lv.on_left_click_no_args.extend_back (agent console.output (lv.line))
			end
			across
				map.transport_views as i
			loop
				tv := i.item
				tv.on_left_click_no_args.extend_back (agent select_view (tv))
				tv.on_left_click_no_args.extend_back (agent console.output (tv.transport))
			end
		end

feature -- Access

	city: CITY
			-- Current city.

	map: MAP
			-- Current city map..

feature {NONE} -- Implementation

	gui_application: EV_APPLICATION
			-- Graphical application.

	window: EV_TITLED_WINDOW
			-- Main window.

	console: TRAFFIC_CONSOLE
			-- Console for text output.

	icon_path: KL_PATHNAME
			-- Path to application icon.
		once
			create Result.make
			Result.set_relative (True)
			Result.append_parent
			Result.append_name ("image")
			Result.append_name ("traffic_icon.png")
		end

	map_path: KL_PATHNAME
			-- Path to map.
		do
			create Result.make
			Result.set_relative (True)
			Result.append_parent
			Result.append_name ("map")
			Result.append_name ("zurich.xml")
		end

	load_city
			-- Load `city' from file `map_path'.
		local
			reader: XML_READER
		do
			create reader.read (file_system.pathname_to_string (map_path))
			if reader.has_error then
				console.output (reader.error_message)
			else
				city := reader.city
			end
		end

feature {NONE} -- Map manipulation

	selected: VIEW
			-- Currently selected view.

	select_view (v: VIEW)
			-- Select view `v'.
		do
			if selected /= Void then
				selected.unhighlight
			end
			v.highlight
			selected := v
		end

	deselect
			-- Deselect currently selected view.
		do
			if selected /= Void then
				selected.unhighlight
				selected := Void
				map.refresh
			end
		end

	zoom (up: BOOLEAN)
			-- Scale `map'.
		do
			if up then
				map.zoom_in
			else
				map.zoom_out
			end
		end

	toggle_animation
			-- Start and stop animation on `map'.
		do
			if map.is_animated then
				map.deanimate
			else
				map.animate
			end
		end


feature {NONE} -- Event handling

	on_close
			-- Close `window' and exit.
		do
			window.destroy
			gui_application.destroy
		end

	on_resize (x: INTEGER; y: INTEGER; width: INTEGER; height: INTEGER)
			-- Resize `map'.
		do
			if map /= Void and then map.pixmap /= Void then
				map.pixmap.set_size (width, height)
				map.refresh
			end
		end

end
