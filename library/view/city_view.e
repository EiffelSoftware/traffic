note
	description: "Graphical representation of a city."

class
	CITY_VIEW

create
	make

feature {NONE} -- Initialization

	make (a_city: CITY; a_width, a_height: INTEGER)
			-- Create a map of `a_city' with dimensions `a_width' and `a_height'.
		require
			a_city_exists: a_city /= Void
			a_width_positive: a_width > 0
			a_height_positive: a_height > 0
		local
			si: V_ITERATOR [STATION]
			li: V_ITERATOR [LINE]
			scale_factor: REAL_64
			color: EV_COLOR
		do
			city := a_city

			create world
			create pixmap.make_with_size (a_width, a_height)
			create projector.make (world, pixmap)
			create {V_ARRAYED_LIST [STATION_VIEW]} station_views
			create {V_ARRAYED_LIST [LINE_VIEW]} line_views
			
			from
				li := city.lines.new_iterator
			until
				li.after
			loop
				line_views.extend_back (create {LINE_VIEW}.make_in_city (li.item, Current))
				li.forth
			end

			from
				si := city.stations.new_iterator
			until
				si.after
			loop
				station_views.extend_back (create {STATION_VIEW}.make_in_city (si.item, Current))
				si.forth
			end

			scale_factor :=
				((a_width - Frame_width) / (city.east - city.west)).min
				((a_height - Frame_width) / (city.north - city.south))
			world.scale (scale_factor)
			world.set_x_y (a_width // 2, a_height // 2)

			projector.project

			pixmap.pointer_button_press_actions.extend (agent on_button_pressed)
			pixmap.pointer_button_release_actions.extend (agent on_button_released)
			pixmap.pointer_motion_actions.extend (agent on_mouse_move)
			pixmap.mouse_wheel_actions.extend (agent on_mouse_wheel)
		end

feature -- Access

	city: CITY
			-- Underlying model.

	pixmap: EV_PIXMAP
			-- Generated map.

	station_views: V_LIST [STATION_VIEW]
			-- Graphical representations of city stations.

	line_views: V_LIST [LINE_VIEW]
			-- Graphical representations of city lines.

feature {STATION_VIEW, LINE_VIEW} -- Access

	world: EV_MODEL_WORLD
			-- World that contains graphical representations of city objects.

	world_coordinate (v: VECTOR): EV_COORDINATE
			-- World coordinate corresponding to city vector `v'.
		do
			create Result.make (v.x.truncated_to_integer, - v.y.truncated_to_integer)
		end

feature {NONE} -- Implementation

	projector: EV_MODEL_PIXMAP_PROJECTOR
			-- Projector used to generate `pixmap' from `world'.

	Frame_width: INTEGER = 50
			-- Minimum space left between the outer city object and the edge of the map in the default view.

feature -- Event handling

	is_button_pressed: BOOLEAN
			-- Is mouse button pressed?

	dx, dy: INTEGER
			-- Difference between mouse position and city center.

	on_mouse_move (a_x: INTEGER; a_y: INTEGER; a_x_tilt: DOUBLE; a_y_tilt: DOUBLE; a_pressure: DOUBLE; a_screen_x: INTEGER; a_screen_y: INTEGER)
			-- Move the map if button is pressed.
		do
			if is_button_pressed then
				world.set_x_y (a_x - dx, a_y - dy)
			end
		end

	on_button_pressed (x: INTEGER; y: INTEGER; button: INTEGER; x_tilt: DOUBLE; y_tilt: DOUBLE; pressure: DOUBLE; screen_x: INTEGER; screen_y: INTEGER)
			-- Record that button is pressed.
		do
			is_button_pressed := True
			dx := x - world.x
			dy := y - world.y
		end

	on_button_released (x: INTEGER; y: INTEGER; button: INTEGER; x_tilt: DOUBLE; y_tilt: DOUBLE; pressure: DOUBLE; screen_x: INTEGER; screen_y: INTEGER)
			-- Record that button is released.	
		do
			is_button_pressed := False
		end

	on_mouse_wheel (x: INTEGER)
			-- Scale map.
		do
			if x < 0 then
				world.scale (0.9)
			else
				world.scale (1.1)
			end
			projector.project
		end

invariant
	city_exists: city /= Void
	pixmap_exists: pixmap /= Void
	station_views_exists: station_views /= Void
	line_views_exisst: line_views /= Void
	world_exists: world /= Void
	projector_exists: projector /= Void
end
