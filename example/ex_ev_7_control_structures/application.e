indexing
	description	: "Root class for this application."
	author		: "Corinne Mueller"
	date		: "10.01.2008"
	revision	: "1.0.0"

class
	APPLICATION

inherit
	EV_APPLICATION

create
	make_and_launch

feature {NONE} -- Initialization

	make_and_launch is
			-- Initialize and launch application
		do
			default_create
			prepare
			launch
		end

	prepare is
			-- Prepare the first window to be displayed.
		do
			create first_window
			first_window.set_example (create {CONTROL_1})
			first_window.set_title ("Control Structures (chapter 7)")
			first_window.show
		end

feature {NONE} -- Implementation

	first_window: TRAFFIC_MAIN_WINDOW
			-- Main window.

end -- class APPLICATION
