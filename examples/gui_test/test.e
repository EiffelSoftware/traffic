note
	description : "Testing traffic library"

class
	TEST

create
	execute

feature {NONE} -- Initialization

	execute
			-- Run application.
		do
			create_from_file

			if city /= Void then
				create gui_application
				create window
				window.set_size (1000, 1000)
				window.set_title ("Traffic test")
				window.resize_actions.extend (agent on_resize)
				window.close_request_actions.extend (agent on_close)
				window.show

				create map.make (city, window.width, window.height)
				window.extend (map.pixmap)
				map.pixmap.set_focus

				gui_application.launch
			end
		end

feature {NONE} -- Implementation
	city: CITY
			-- Example city.

	map: CITY_VIEW
			-- Map of `city'.

	gui_application: EV_APPLICATION
			-- Graphical application.

	window: EV_TITLED_WINDOW
			-- Main window.

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
end
