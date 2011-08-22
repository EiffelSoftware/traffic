note
	description : "Editor application for traffic4"

class
	EDITOR

create
	execute

feature {NONE} -- Initialization

	execute
			-- Run application.
		do
				-- TODO: add file open dialog to select city file
			create_from_file

			if city /= Void then
				create gui_application
				create window
				window.close_request_actions.extend (agent on_close)

				window.show

				create_from_file
				window.set_city (city)

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

	window: EDITOR_WINDOW
			-- Main window.

	on_close
			-- Close `window' and exit.
		do
			window.destroy
			gui_application.destroy
		end

	create_from_file
			-- Test that reads a city from an xml file.
		local
			reader: XML_READER
			writer: XML_WRITER
		do
			create reader.read ("..\map\zurich.xml")
			if reader.has_error then
				print (reader.error_message)
			else
				city := reader.city
			end
		end

end
