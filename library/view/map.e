note
	description: "Graphical representation of a city."

class
	MAP

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
			color: EV_COLOR
		do
			city := a_city

			create world
			create pixmap.make_with_size (a_width, a_height)
			create projector.make (world, pixmap)
			create {V_HASH_TABLE [STRING, STATION_VIEW]} station_views.with_object_equality
			create {V_HASH_TABLE [INTEGER, LINE_VIEW]} line_views
			create {V_ARRAYED_LIST [TRANSPORT_VIEW]} transport_views

			scale_factor := (a_width - 2 * Frame_width) / (city.east - city.west)
			center_x := Frame_width + (-city.west * scale_factor).rounded
			center_y := (a_height + ((city.north + city.south) * scale_factor).rounded) // 2 - Frame_width

			across
				city.lines as i
			loop
				line_views [i.key] := create {LINE_VIEW}.make_in_city (i.value, Current)
			end
			across
				city.stations as i
			loop
				station_views [i.key] := create {STATION_VIEW}.make_in_city (i.value, Current)
			end
			across
				city.transports as i
			loop
				transport_views.extend_back (create {TRANSPORT_VIEW}.make_in_city (i.item, Current))
			end

			projector.project

			pixmap.pointer_button_press_actions.extend (agent on_button_pressed)
			pixmap.pointer_button_release_actions.extend (agent on_button_released)
			pixmap.pointer_motion_actions.extend (agent on_mouse_move)
			pixmap.mouse_wheel_actions.extend (agent on_mouse_wheel)
			pixmap.resize_actions.extend (agent on_resize)
		end

feature -- Access

	city: CITY
			-- Underlying model.

	pixmap: EV_PIXMAP
			-- Generated map.

	station_views: V_TABLE [STRING, STATION_VIEW]
			-- Graphical representations of city stations.

	line_views: V_TABLE [INTEGER, LINE_VIEW]
			-- Graphical representations of city lines.

	transport_views: V_LIST [TRANSPORT_VIEW]
			-- Graphical representations of movers.

feature {VIEW} -- Access

	world: EV_MODEL_WORLD
			-- World that contains graphical representations of city objects.			

	scale_factor: REAL_64
			-- Scale factor of city coordinates in world coordinates.

	center_x, center_y: INTEGER
			-- World coordinates of city center.

	world_coordinate (v: VECTOR): EV_COORDINATE
			-- World coordinate corresponding to city vector `v'.
		do
			create Result.make (center_x + (v.x * scale_factor).rounded,
				center_y - (v.y * scale_factor).rounded)
		end

	city_coordinate (c: EV_COORDINATE): VECTOR
			-- City vector corresponding to world coordinate `c'.
		do
			create Result.make ((c.x - center_x) / scale_factor,
				(center_y - c.y) / scale_factor)
		end

feature -- Basic operations

	update
			-- Update according to state of `city'.
		local
			svi: V_TABLE_ITERATOR [STRING, STATION_VIEW]
			lvi: V_TABLE_ITERATOR [INTEGER, LINE_VIEW]
			tvi: V_LIST_ITERATOR [TRANSPORT_VIEW]
		do
			-- Remove objects that do not exists anymore
			from
				svi := station_views.new_cursor
			until
				svi.after
			loop
				if not city.stations.has_key (svi.key) then
					svi.value.remove_from_city
					svi.remove
				else
					svi.forth
				end
			end
			from
				lvi := line_views.new_cursor
			until
				lvi.after
			loop
				if not city.lines.has_key (lvi.key) then
					lvi.value.remove_from_city
					lvi.remove
				else
					lvi.forth
				end
			end
			from
				tvi := transport_views.new_cursor
			until
				tvi.after
			loop
				if not city.transports.has (tvi.item.transport) then
					tvi.item.remove_from_city
					tvi.remove
				else
					tvi.forth
				end
			end
			-- Update existing and add new objects			
			across
				city.stations as si
			loop
				svi.search_key (si.key)
				if svi.after then
					station_views [si.key] := create {STATION_VIEW}.make_in_city (si.value, Current)
				else
					svi.value.update
				end
			end
			across
				city.lines as li
			loop
				lvi.search_key (li.key)
				if lvi.after then
					line_views [li.key] := create {LINE_VIEW}.make_in_city (li.value, Current)
				else
					lvi.value.update
				end
			end
			across
				city.transports as ti
			loop
				tvi.start
				tvi.satisfy_forth (agent (v: TRANSPORT_VIEW; t: PUBLIC_TRANSPORT): BOOLEAN do Result := v.transport = t end (?, ti.item))

				if tvi.after then
					transport_views.extend_back (create {TRANSPORT_VIEW}.make_in_city (ti.item, Current))
				else
					tvi.item.update
				end
			end
		end

	update_mobile
			-- Update only existing mobile object views.
		do
			across
				transport_views as tvi
			loop
				tvi.item.update
			end

			projector.project
		end

feature {NONE} -- Implementation

	projector: EV_MODEL_PIXMAP_PROJECTOR
			-- Projector used to generate `pixmap' from `world'.


	Frame_width: INTEGER = 20
			-- Minimum space left between the outer city object and the edge of the map in the default view.

	Max_scale: REAL_64 = 5.0
			-- Maximum scale factor.

	Min_scale: REAL_64 = 0.2
			-- Minimum scale factor.


feature {NONE} -- Event handling

	is_button_pressed: BOOLEAN
			-- Is mouse button pressed?

	dx, dy: INTEGER
			-- Difference between mouse position and city center.

	on_mouse_move (a_x: INTEGER; a_y: INTEGER; a_x_tilt: DOUBLE; a_y_tilt: DOUBLE; a_pressure: DOUBLE; a_screen_x: INTEGER; a_screen_y: INTEGER)
			-- Move the map if button is pressed.
		do
			if is_button_pressed then
				center_x := center_x + a_x - dx - world.x
				center_y := center_y + a_y - dy - world.y
				world.set_x_y (a_x - dx, a_y - dy)
			end
		end

	on_button_pressed (x: INTEGER; y: INTEGER; button: INTEGER; x_tilt: DOUBLE; y_tilt: DOUBLE; pressure: DOUBLE; screen_x: INTEGER; screen_y: INTEGER)
			-- Record that button is pressed.
		local
			blob: EV_MODEL_ELLIPSE
 		do
			if button = {EV_POINTER_CONSTANTS}.left then
				is_button_pressed := True
				dx := x - world.x
				dy := y - world.y
			else
				update
			end
		end

	on_button_released (x: INTEGER; y: INTEGER; button: INTEGER; x_tilt: DOUBLE; y_tilt: DOUBLE; pressure: DOUBLE; screen_x: INTEGER; screen_y: INTEGER)
			-- Record that button is released.	
		do
			is_button_pressed := False
		end

	on_mouse_wheel (x: INTEGER)
			-- Scale map.
		local
			ds, new_scale: REAL_64
		do
			if x < 0 then
				ds := 0.9
			else
				ds := 1.1
			end
			new_scale := scale_factor * ds
			if Min_scale <= new_scale and new_scale <= Max_scale then
				scale_factor := new_scale
				world.scale (ds)
				-- This translation is here because we want to scale around the center of the city, not the center of `world'
				world.set_x_y (world.x + ((center_x - world.x) * (1.0 - ds)).rounded, world.y + ((center_y - world.y) * (1.0 - ds)).rounded)
				projector.project
			end
		end

	on_resize (x: INTEGER; y: INTEGER; width: INTEGER; height: INTEGER)
			-- Resize map.
		do
			world.invalidate
		end

invariant
	city_exists: city /= Void
	pixmap_exists: pixmap /= Void
	station_views_exists: station_views /= Void
	line_views_exisst: line_views /= Void
	world_exists: world /= Void
	projector_exists: projector /= Void
end
