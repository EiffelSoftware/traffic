indexing
	description	: "Root class for this application."
	author		: "Corinne Mueller."
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
		local
			control: CONTROL
		do
			create first_window
			create control
			first_window.set_example (control, agent control.explore_on_click)
			first_window.set_title ("Variables, Assignment and References (Chapter 9, Touch of Class)")
			first_window.show
		end

feature {NONE} -- Implementation

	first_window: TRAFFIC_MAIN_WINDOW
			-- Main window.

end -- class APPLICATION
