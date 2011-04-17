note
	description: "Finds routes in a city."

class
	ROUTE_FINDER

create
	make

feature {NONE} -- Initialization

	make (a_city: CITY)
			-- Create route finder in `a_city'.
		require
			a_city_exists: a_city /= Void
		do
			city := a_city
		ensure
			city_set: city = a_city
		end

feature -- Access

	city: CITY
			-- City where routes are searched.

feature -- Basic operations
	shortest_route (a_origin, a_destination: STATION): ROUTE
			-- Shortest route from `a_origin' to `a_destination'.
			-- Void if there is no route.
			-- (Uses Dijkstra's algorithm).
		require
			a_origin_in_city: city.stations.has (a_origin)
			a_destination_in_city: city.stations.has (a_destination)
		local
			i, k: INTEGER
			u, v: STATION
			l: LINE
		do
			origin := a_origin
			destination := a_destination
			initialize
			from
				u := origin
			until
				routes [u].origin /= origin or u = destination
			loop
				from
					i := 1
				until
					i > u.lines.count
				loop
					l := u.lines [i]
					v := l.next_station (u, l.north_terminal)
					update_route (u, v, l)
					v := l.next_station (u, l.south_terminal)
					update_route (u, v, l)
					i := i + 1
				end
				k := closest_index
				u := unvisited [k]
				unvisited.remove_at (k)
			end
			if u = destination then
				Result := routes [u]
			end
		ensure
			valid_origin: Result.origin = a_origin
			valid_destination: Result.destination = a_destination
		end


feature {NONE} -- Implementation
	origin: STATION
			-- Origin of the current search.

	destination: STATION
			-- Destination of the current search.

	routes: V_TABLE [STATION, ROUTE]
			-- Shortest routes from `origin' to each station.
			-- If a route for a station does not start at `origin', then the route to this station has not been found yet.

	unvisited: V_LIST [STATION]
			-- Stations for which the sortest path from `origin' has not yet been found.

	distance_from_origin (route: ROUTE): REAL_64
			-- Distance from `origin' to `route.destination' along `route'.
			-- Infinite if `route' does not start at `origin'.
		require
			route_exists: route /= Void
		do
			if route.origin = origin then
				Result := route.length
			else
				Result := {REAL_64}.max_value
			end
		end

	closest_index: INTEGER
			-- Index of the station in `unvisited' that has the shortest route to `origin'.
		require
			something_to_visit: unvisited /= Void and then not unvisited.is_empty
			routes_initialized: routes /= Void
		local
			i: INTEGER
		do
			Result := 1
			from
				i := 2
			until
				i > unvisited.count
			loop
				if distance_from_origin (routes [unvisited [i]]) < distance_from_origin (routes [unvisited [Result]]) then
					Result := i
				end
				i := i + 1
			end
		end

	initialize
			-- Initialize `unvisited' with all stations in `city' but `origin'
			-- and `routes' for each station with a route that consists only of that station.
		local
			si: V_INPUT_ITERATOR [STATION]
		do
			create {V_ARRAYED_LIST [STATION]} unvisited
			create {V_HASH_TABLE [STATION, ROUTE]} routes
			from
				si := city.stations.new_iterator
			until
				si.after
			loop
				routes [si.item] := create {ROUTE}.make (si.item)
				if not (si.item = origin) then
					unvisited.extend_back (si.item)
				end
				si.forth
			end
		ensure
			unvisited_exists: unvisited /= Void
			routes_exists: routes /= Void
		end

	update_route (u, v: STATION; l: LINE)
			-- If `v' is an unvisited station
			-- and the route to `v' through `u' and `l' is shorter than previously known route to `v',
			-- update the route to `v'.
			-- Otherwise do nothing.
		require
			u_exists: u /= Void
			l_exists: l /= Void
		local
			r: ROUTE
		do
			if unvisited.has (v) then
				r := routes [u].twin
				r.append_segment (l, v)
				if distance_from_origin (r) < distance_from_origin (routes [v]) then
					routes [v] := r
				end
			end
		end
end
