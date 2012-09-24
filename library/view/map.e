note
	description: "Graphical representation of a city."

class
	MAP

inherit
	ANIMATED_WIDGET

create
	make

feature {NONE} -- Initialization

	make (a_city: CITY)
			-- Create a map of `a_city' with dimensions `a_width' and `a_height'.
		require
			a_city_exists: a_city /= Void
		local
			color: EV_COLOR
		do
			city := a_city
			create world
			create pixmap
			create projector.make (world, pixmap)
			make_actions
			scale_factor := 1.0
			center_x := city.east.rounded
			center_y := city.north.rounded

			time_speedup := 1.0
			on_tick.extend_back (agent move_mobile)

			create {V_HASH_TABLE [CITY_ITEM, VIEW]} views
			create_views
			projector.project
			subscribe_widget (pixmap)
		end

feature -- Access

	city: CITY
			-- Underlying model.

	views: V_TABLE [CITY_ITEM, VIEW]
			-- Graphical representations of city items.

	station_view (a_station: STATION): STATION_VIEW
			-- Graphical representations of `a_station'.
		require
			station_view_exists: views.has_key (a_station)
		do
			if attached {STATION_VIEW} views [a_station] as sv then
				Result := sv
			end
		end

	line_view (a_line: LINE): LINE_VIEW
			-- Graphical representations of `a_line'.
		require
			line_view_exists: views.has_key (a_line)
		do
			if attached {LINE_VIEW} views [a_line] as lv then
				Result := lv
			end
		end

	transport_view (a_transport: PUBLIC_TRANSPORT): TRANSPORT_VIEW
			-- Graphical representations of `a_transport'.
		require
			transport_view_exists: views.has_key (a_transport)
		do
			if attached {TRANSPORT_VIEW} views [a_transport] as tv then
				Result := tv
			end
		end

	building_view (a_building: BUILDING): BUILDING_VIEW
			-- Graphical representations of `a_transport'.
		require
			building_view_exists: views.has_key (a_building)
		do
			if attached {BUILDING_VIEW} views [a_building] as bv then
				Result := bv
			end
		end

	route_view (a_route: ROUTE): ROUTE_VIEW
			-- Graphical representations of `a_route'.
		require
			route_view_exists: views.has_key (a_route)
		do
			if attached {ROUTE_VIEW} views [a_route] as rv then
				Result := rv
			end
		end

	custom_mobile_view (a_mobile: MOBILE): CUSTOM_MOBILE_VIEW
			-- Graphical representations of `a_mobile'.
		require
			custom_mobile_view_exists: views.has_key (a_mobile)
		do
			if attached {CUSTOM_MOBILE_VIEW} views [a_mobile] as mv then
				Result := mv
			end
		end

feature -- View update

	update
			-- Syncronize map with `city'.
--		local
--			vi: V_TABLE_ITERATOR [CITY_ITEM, VIEW]
		do
--			-- Remove/update existing views
--			from
--				vi := views.new_cursor
--			until
--				vi.after
--			loop
--				if vi.item.model_in_city then
--					vi.item.update
--					vi.forth
--				else
--					vi.item.remove_from_map
--					vi.remove
--				end
--			end
			-- Clear the map
			world.wipe_out
			views.wipe_out
			-- Add views for all city items			
			create_views
			refresh
		end

	update_mobile
			-- Synchronize only existing mobile object views.
		do
			across
				city.transports as i
			loop
				if views.has_key (i.item) then
					views [i.item].update
				end
			end
			across
				city.custom_mobiles as i
			loop
				if views.has_key (i.item) then
					views [i.item].update
				end
			end

			projector.project
		end

	refresh
			-- Refresh `pixmap' without synchronizing with the model.
		do
			world.invalidate
			projector.project
		end

feature {NONE} -- View factory

	create_views
			-- Create missing views for items of `city'.
		do
			across
				city.buildings as i
			loop
				if not views.has_key (i.item) then
					views [i.item] := create {BUILDING_VIEW}.make_in_city (i.item, Current)
				end
			end
			across
				city.lines as i
			loop
				if not views.has_key (i.item) then
					views [i.item] := create {LINE_VIEW}.make_in_city (i.item, Current)
				end
			end
			across
				city.stations as i
			loop
				if not views.has_key (i.item) then
					views [i.item] := create {STATION_VIEW}.make_in_city (i.item, Current)
				end
			end
			across
				city.routes as i
			loop
				if not views.has_key (i.item) then
					views [i.item] := create {ROUTE_VIEW}.make_in_city (i.item, Current)
				end
			end
			across
				city.transports as i
			loop
				if not views.has_key (i.item) then
					views [i.item] := create {TRANSPORT_VIEW}.make_in_city (i.item, Current)
				end
			end
			across
				city.custom_mobiles as i
			loop
				if not views.has_key (i.item) then
					views [i.item] := create {CUSTOM_MOBILE_VIEW}.make_in_city (i.item, Current)
				end
			end
		end

feature -- Transformations

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

	translate (dx, dy: INTEGER)
			-- Move map by [`dx', `dy'] in world coordinates.
		do
			center_x := center_x + dx
			center_y := center_y + dy
			world.set_x_y (world.x + dx, world.y + dy)
		end

	zoom_in
			-- Increase `scale_factor' unless it exceeds `Max_scale'.
		do
			if scale_factor * Zoom_in_factor <= Max_scale then
				scale_by (Zoom_in_factor)
			end
		end

	zoom_out
			-- Decrease `scale_factor' unless it exceeds `Min_scale'.
		do
			if scale_factor * Zoom_out_factor >= Min_scale then
				scale_by (Zoom_out_factor)
			end
		end

	fit_to_window
			-- Translate and scale so that the map fits into `pixmap'
			-- if its size is within range of minimum and maximum scale.
		local
			x_scale, y_scale: REAL_64
		do
			x_scale := (pixmap.width - 2 * Frame_width) / city.size_ew
			x_scale := x_scale.min (Max_scale).max (Min_scale)
			y_scale := (pixmap.height - 2 * Frame_width) / city.size_ns
			y_scale := y_scale.min (Max_scale).max (Min_scale)
			scale_by (x_scale.min (y_scale) / scale_factor)
			translate ((pixmap.width - ((city.east + city.west) * scale_factor).rounded) // 2 - center_x,
					(pixmap.height + ((city.north + city.south) * scale_factor).rounded) // 2 - center_y)
		end

feature -- Animation

	time_speedup: REAL_64
			-- How much city time is faster than real-world time?

	set_time_speedup (a_speedup: REAL_64)
			-- Set `time_speedup' ro `a_speedup'.
		require
			a_speedup_positive: a_speedup > 0.0
		do
			time_speedup := a_speedup
		ensure
			speedup_set: time_speedup = a_speedup
		end

feature {NONE} -- Animation

	move_mobile (dt: INTEGER)
			-- Move all mobile objects in the city and update their views.
		do
			city.move_all ((dt * time_speedup).rounded)
			update_mobile
		end

feature -- Parameters

	Max_scale: REAL_64 = 5.0
			-- Maximum scale factor.

	Min_scale: REAL_64 = 0.2
			-- Minimum scale factor.

	Zoom_in_factor: REAL_64 = 1.1
			-- Default factor by which the map is zoomed in.

	Zoom_out_factor: REAL_64 = 0.9
			-- Default factor by which the map is zoomed out.			

	Frame_width: INTEGER = 20
			-- Minimum space left between the outer city object and the edge of the map in the default view.		

feature -- Graphics

	world: EV_MODEL_WORLD
			-- World that contains graphical representations of city objects.

	pixmap: EV_PIXMAP
			-- Generated map.

feature {NONE} -- Implementation

	projector: EV_MODEL_PIXMAP_PROJECTOR
			-- Projector used to generate `pixmap' from `world'.			

	scale_by (ds: REAL_64)
			-- Scale map by `ds' times.
		require
			scale_factor_in_bounds: Min_scale <= scale_factor * ds and scale_factor * ds <= Max_scale
		do
			scale_factor := scale_factor * ds
			world.scale (ds)
			-- This translation is here because we want to scale around the center of the city, not the center of `world'
			world.set_x_y (world.x + ((center_x - world.x) * (1.0 - ds)).rounded, world.y + ((center_y - world.y) * (1.0 - ds)).rounded)
			projector.project
		end

invariant
	city_exists: city /= Void
	pixmap_exists: pixmap /= Void
	views_exists: views /= Void
	views_indexed_by_models: across views as i all i.key = i.item.model end
	world_exists: world /= Void
	projector_exists: projector /= Void
	scale_factor_in_bounds: Min_scale <= scale_factor and scale_factor <= Max_scale
	time_speedup_positive: time_speedup > 0
end
