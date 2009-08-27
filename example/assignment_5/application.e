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
		do
			create first_window
			create city_building
			first_window.set_example (city_building, agent city_building.explore)
			first_window.set_title ("Assignment 5 (city building)")
			first_window.canvas.pointer_double_press_actions.extend (agent mouse_pressed)
			city_building.explore
			first_window.show
		end

feature {NONE} -- Implementation

	city_building: CITY_BUILDING

	first_window: TRAFFIC_MAIN_WINDOW
			-- Main window.

	mouse_pressed (x, y, button: INTEGER; a, b, c: DOUBLE; u, v: INTEGER) is
			--
		local
			co: REAL_COORDINATE
		do
			if button = 1 then
				co := first_window.client_to_city_coordinates (x, y)
				city_building.add_station (co.x.floor, -co.y.floor)
			elseif button = 3 then
				city_building.add_line
			end
		end

end -- class APPLICATION