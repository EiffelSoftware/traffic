note
	description: "Iterating through stations on a line."

class
	LOOPING

inherit
	ZURICH_OBJECTS

feature -- Explore Zurich

	explore
			-- Check out different ways to iterate through stations.
		do
			highlight_all
--			highlight_exchange
--			highlight_until
--			highlight_section
--			console.output (highest_name)
		end

feature -- Iteration

	highlight_all
			-- Highlight all stations on line 8.
		do
			across
				Line8 as c
			loop
				console.append_line (c.item.name)
				Zurich_map.station_view (c.item.name).highlight
			end
		end

	highlight_exchange
			-- Highlight exchange stations on line 8.
		do
			across
				Line8 as c
			loop
				if c.item.is_exchange then
					console.append_line (c.item.name)
					Zurich_map.station_view (c.item.name).highlight
				end
			end
		end

	highlight_until
			-- Highlight all stations on line 8,
			-- until a station whose name starts with 'S' is found.
		local
			c: like Line8.new_cursor
		do
			from
				c := Line8.new_cursor
			until
				c.after or else c.item.name [1] = 'S'
			loop
				console.append_line (c.item.name)
				Zurich_map.station_view (c.item.name).highlight
				c.forth
			end
		end

	highlight_section
			-- Highlight all stations on line 8 witin 1 km from Bellevue
			-- in the direction of the west terminal.
		local
			start, s: STATION
		do
			start := Zurich.station ("Bellevue")
			from
				s := start
			until
				s = Void or else Line8.distance (start, s) > 1000
			loop
				console.append_line (s.name)
				Zurich_map.station_view (s.name).highlight
				s := Line8.next_station (s, Line8.west_terminal)
			end
		end


feature -- Maximum

	greater (s1, s2: STRING): STRING
			-- The greater of two strings.
		require
			s1_exists: s1 /= Void
			s2_exists: s2 /= Void
		do
			if s1 >= s2 then
				Result := s1
			else
				Result := s2
			end
		ensure
			one_of_two: Result = s1 or Result = s2
			greater: Result >= s1 and Result >= s2
		end

	highest_name: STRING
			-- Alphabetically highest station name on line 8.
		do
			Result := ""
			across
				Line8 as c
			invariant
				c.index >= 1
				c.index <= Line8.count + 1
			loop
				Result := greater (Result, c.item.name)
			variant
				Line8.count - c.index + 1
			end
		end

end
