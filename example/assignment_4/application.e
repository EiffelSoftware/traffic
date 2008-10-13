indexing
	description	: "Root class for this application."
	author		: "Generated by the New Vision2 Application Wizard."
	date		: "$Date: 2007/7/16 12:52:13 $"
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
			object_creation: OBJECT_CREATION
		do
			create first_window
			create object_creation
			first_window.set_example (object_creation, agent object_creation.explore)
			first_window.set_title ("Assignment 4 (tourist bus line)")
			first_window.show
		end

feature {NONE} -- Implementation

	first_window: TRAFFIC_MAIN_WINDOW
			-- Main window.

end -- class APPLICATION
