note
	description: "Graphical representation of a city."

class
	MAP

inherit
	MAP_WIDGET

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

			make_item_views
			projector.project
			subscribe_widget (pixmap)
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
			-- Graphical representations of transportation units.
			-- (Same order as city.transports).

	route_views: V_LIST [ROUTE_VIEW]
			-- Graphical representations of known routes.
			-- (Same order as city.routes).

	building_views: V_TABLE [STRING, BUILDING_VIEW]
			-- Graphical representations of city buildings.

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
			-- Syncronize view with `city'.
		local
			bvi: V_TABLE_ITERATOR [STRING, BUILDING_VIEW]
			svi: V_TABLE_ITERATOR [STRING, STATION_VIEW]
			lvi: V_TABLE_ITERATOR [INTEGER, LINE_VIEW]
			tvi: V_LIST_ITERATOR [TRANSPORT_VIEW]
			rvi: V_LIST_ITERATOR [ROUTE_VIEW]
		do
			-- Remove objects that do not exists anymore
			from
				bvi := building_views.new_cursor
			until
				bvi.after
			loop
				if not city.buildings.has_key (bvi.key) then
					bvi.value.remove_from_map
					bvi.remove
				else
					bvi.forth
				end
			end
			from
				lvi := line_views.new_cursor
			until
				lvi.after
			loop
				if not city.lines.has_key (lvi.key) then
					lvi.value.remove_from_map
					lvi.remove
				else
					lvi.forth
				end
			end
			from
				svi := station_views.new_cursor
			until
				svi.after
			loop
				if not city.stations.has_key (svi.key) then
					svi.value.remove_from_map
					svi.remove
				else
					svi.forth
				end
			end
			from
				tvi := transport_views.new_cursor
			until
				tvi.after
			loop
				if not city.transports.has (tvi.item.transport) then
					tvi.item.remove_from_map
					tvi.remove
				else
					tvi.forth
				end
			end
			from
				rvi := route_views.new_cursor
			until
				rvi.after
			loop
				if not city.routes.has (rvi.item.route) then
					rvi.item.remove_from_map
					rvi.remove
				else
					rvi.forth
				end
			end
			-- Update existing and add new objects			
			across
				city.buildings as bi
			loop
				bvi.search_key (bi.key)
				if bvi.after then
					building_views [bi.key] := create {BUILDING_VIEW}.make_in_city (bi.value, Current)
				else
					bvi.value.update
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
				city.transports as ti
			loop
				if ti.index > transport_views.count then
					transport_views.extend_back (create {TRANSPORT_VIEW}.make_in_city (ti.item, Current))
				elseif transport_views [ti.index].transport /= ti.item then
					transport_views.extend_at (create {TRANSPORT_VIEW}.make_in_city (ti.item, Current), ti.index)
				else
					transport_views [ti.index].update
				end
			end
			across
				city.routes as ri
			loop
				if ri.index > route_views.count then
					route_views.extend_back (create {ROUTE_VIEW}.make_in_city (ri.item, Current))
				elseif route_views [ri.index].route /= ri.item then
					route_views.extend_at (create {ROUTE_VIEW}.make_in_city (ri.item, Current), ri.index)
				else
					route_views [ri.index].update
				end
			end
			refresh
		ensure
			transport_views_order: across transport_views as i all i.item.transport = city.transports [i.index] end
			route_views_order: across route_views as i all i.item.route = city.routes [i.index] end
		end

	update_mobile
			-- Synchronize only existing mobile object views.
		do
			across
				transport_views as tvi
			loop
				tvi.item.update
			end

			projector.project
		end

	refresh
			-- Refresh `pixmap' without synchronizing with the model.
		do
			world.invalidate
			projector.project
		end

feature -- Transformations

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

	is_animated: BOOLEAN
			-- Is animation running?

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

	animate
			-- Start animation of mobile objects.
		do
			is_animated := True
			last_timeout := 0
			create timeout.make_with_interval (33)
			timeout.actions.extend (agent handle_timeout)
		end

	deanimate
			-- Stop animation of mobile objects.
		do
			is_animated := False
			if timeout /= Void then
				timeout.destroy
			end
		end

feature {NONE} -- Animation

	timeout: EV_TIMEOUT
			-- Object that signals timeout events.

	last_timeout: INTEGER
			-- Time when last timeout event occurred.
			-- Resolution is milliseconds, wraps after 60 seconds.

	handle_timeout
			-- Update model and view in reponse to a timeout.
		local
			date: C_DATE
			new_time: INTEGER
			dt: INTEGER
		do
			create date
			new_time := (date.second_now * 1000) + date.millisecond_now
			if last_timeout > 0 then
				if new_time < last_timeout then
					dt := new_time - last_timeout + 60000
				else
					dt := new_time - last_timeout
				end
				city.move_all ((dt * time_speedup).rounded)
				update_mobile
			end
			last_timeout := new_time
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

feature {NONE} -- Implementation

	projector: EV_MODEL_PIXMAP_PROJECTOR
			-- Projector used to generate `pixmap' from `world'.			

	make_item_views
			-- Initialize views of city items.
		do
			create {V_HASH_TABLE [STRING, STATION_VIEW]} station_views.with_object_equality
			create {V_HASH_TABLE [INTEGER, LINE_VIEW]} line_views
			create {V_ARRAYED_LIST [TRANSPORT_VIEW]} transport_views
			create {V_ARRAYED_LIST [ROUTE_VIEW]} route_views
			create {V_HASH_TABLE [STRING, BUILDING_VIEW]} building_views.with_object_equality

			across
				city.buildings as i
			loop
				building_views [i.key] := create {BUILDING_VIEW}.make_in_city (i.value, Current)
			end
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
			across
				city.routes as i
			loop
				route_views.extend_back (create {ROUTE_VIEW}.make_in_city (i.item, Current))
			end
		end

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
	station_views_exists: station_views /= Void
	line_views_exist: line_views /= Void
	transport_views_exist: transport_views /= Void
	route_views_exist: route_views /= Void
	world_exists: world /= Void
	projector_exists: projector /= Void
	scale_factor_in_bounds: Min_scale <= scale_factor and scale_factor <= Max_scale
	time_speedup_positive: time_speedup > 0
	last_timeout_in_bounds: 0 <= last_timeout and last_timeout <= 60000
end
