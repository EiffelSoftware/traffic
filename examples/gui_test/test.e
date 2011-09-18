note
	description : "Testing traffic library"

class
	TEST

inherit
	KL_SHARED_FILE_SYSTEM

create
	execute

feature {NONE} -- Initialization

	execute
			-- Run application.
		local
			timeout: EV_TIMEOUT
			icon: EV_PIXMAP
			sv: STATION_VIEW
			lv: LINE_VIEW
			tv: TRANSPORT_VIEW
		do
			create_from_file

			if city /= Void then
				create gui_application
				create window
				window.set_size (1000, 1000)
				window.set_title ("Map browser")
				if file_system.file_exists (file_system.pathname_to_string (icon_path)) then
					create icon
					icon.set_with_named_file (file_system.pathname_to_string (icon_path))
					window.set_icon_pixmap (icon)
				end
				window.resize_actions.extend (agent on_resize)
				window.close_request_actions.extend (agent on_close)
				window.show

				across
					city.lines as li
				loop
					city.add_public_transport (li.value.name)
				end

				create map.make (city, window.width, window.height)
				window.extend (map.pixmap)
				map.pixmap.set_focus
				map.on_scroll.extend_back (agent zoom)
				map.on_drag.extend_back (agent map.translate)
				across
					map.station_views as i
				loop
					sv := i.value
					sv.on_left_click_no_args.extend_back (agent sv.highlight)
				end
				across
					map.line_views as i
				loop
					lv := i.value
					lv.on_left_click_no_args.extend_back (agent lv.highlight)
				end
				across
					map.transport_views as i
				loop
					tv := i.item
					tv.on_left_click_no_args.extend_back (agent tv.highlight)
				end

				map.set_time_speedup (5.0)
				map.on_double_click_no_args.extend_back (agent map.start_animation)
				map.on_right_click_no_args.extend_back (agent map.stop_animation)

				gui_application.launch
			end
		end

feature {NONE} -- Implementation
	city: CITY
			-- Example city.

	map: MAP
			-- Map of `city'.

	gui_application: EV_APPLICATION
			-- Graphical application.

	window: EV_TITLED_WINDOW
			-- Main window.

	icon_path: KL_PATHNAME
			-- Path to application icon
		once
			create Result.make
			Result.set_relative (True)
			Result.append_parent
			Result.append_name ("image")
			Result.append_name ("traffic_icon.png")
		end

	map_path: KL_PATHNAME
			-- Path to map
		do
			create Result.make
			Result.set_relative (True)
			Result.append_parent
			Result.append_name ("map")
			Result.append_name ("zurich.xml")
		end

	on_close
			-- Close `window' and exit.
		do
			window.destroy
			gui_application.destroy
		end

	on_resize (x: INTEGER; y: INTEGER; width: INTEGER; height: INTEGER)
			-- Resize map.
		do
			if map /= Void and then map.pixmap /= Void then
				map.pixmap.set_size (width, height)
				map.refresh
			end
		end

	create_from_file
			-- Test that reads a city from an xml file.
		local
			reader: XML_READER
		do
			create reader.read (file_system.pathname_to_string (map_path))
			if reader.has_error then
				print (reader.error_message)
			else
				city := reader.city
			end
		end

	zoom (up: BOOLEAN)
			-- Scale map.
		do
			if up then
				map.zoom_in
			else
				map.zoom_out
			end
		end

end
