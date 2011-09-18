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
		do
			create_from_file

			if city /= Void then
				create gui_application
				create window
				window.set_size (1000, 1000)
				window.set_title ("Traffic test")
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

				last_update_time := -1
				create timeout.make_with_interval (33)
				timeout.actions.extend (agent update_movers)

				gui_application.launch
			end
		end

	last_update_time: INTEGER
			-- Time when last update was called.
			-- Resolution is milliseconds, wraps after 60 seconds
			-- (i.e. value is between 0 and 60000)

	update_movers
		local
			date: C_DATE
			new_time: INTEGER
			dt: INTEGER
		do
			create date
			new_time := (date.second_now * 1000) + date.millisecond_now
			if last_update_time > 0 then
				if new_time < last_update_time then
					dt := new_time - last_update_time + 60000
				else
					dt := new_time - last_update_time
				end
				city.move_all (dt * 2)
				map.update_mobile
			end
			last_update_time := new_time
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
			end
		end

	create_from_file
			-- Test that reads a city from an xml file.
		local
			reader: XML_READER
		do
			create reader.read (map_file_name)
			if reader.has_error then
				print (reader.error_message)
			else
				city := reader.city
			end
		end

	map_file_name: FILE_NAME
		do
			create Result.make
			Result.extend ("..")
			Result.extend ("map")
			Result.set_file_name ("zurich.xml")
		end

	on_double_click (a_location: VECTOR; a_is_left, a_is_right: BOOLEAN)
		do
			print (a_location) print ("%N")
			print (a_is_left) print ("%N")
			print (a_is_right) print ("%N")
		end

end
