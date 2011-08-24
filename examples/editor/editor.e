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
			create gui_application
			create window
			window.show

				-- TODO: remove after testing				
			window.load_file ("..\map\zurich.xml")

			gui_application.launch
		end

feature {NONE} -- Implementation

	gui_application: EV_APPLICATION
			-- Graphical application.

	window: EDITOR_WINDOW
			-- Main window.

end
