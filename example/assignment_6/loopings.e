indexing
	description: "Loopings class (Assignment 6)"
	date: "$Date$"
	revision: "$Revision$"

class
	LOOPINGS

inherit

	TOURISM

feature -- Explore Paris

	equip is
			-- Build trams and connecting lines.
		do
			Paris.display
			wait
			search
			-- To be filled in
		end

	generate_connecting_bus_line (n: INTEGER; start_station, end_station: TRAFFIC_STATION) is
			-- Generate `n' new stations and a bus line.
		require
			stations_exist: start_station /= Void and end_station /= Void
			stations_not_same: start_station /= end_station
			n_positive: n > 0
		do
			-- To be implemented
		end


	generate_trams_for_line (a_line: TRAFFIC_LINE) is
			-- Generate trams for `a_line' on every second station if allowed.
		require
			a_line_exists: a_line /= Void
		do
			-- To be implemented
		end

	search is
			--
		do
			from
				Paris.stations.start
			until
				Paris.stations.after or else Paris.stations.item_for_iteration.name.is_equal ("Cite Universitaire")
			loop
				Paris.stations.forth
			end
			if (not Paris.stations.after) then
				Paris.stations.item_for_iteration.highlight
			end
		end


end
