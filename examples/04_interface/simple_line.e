note
	description: "[
		Public transportation line.
		The line always has a least one station.
		The lines goes through the same stations in both directions
		and only once through each station.
		]"

class
	SIMPLE_LINE

create
	make

feature {NONE} -- Initialization

	make (a_line: LINE)
			-- Create a simplified line representing `a_line'.
		require
			a_line_exists: a_line /= Void
			a_line_not_empty: not a_line.is_empty
		do
			line := a_line
		end

feature -- Access

	i_th (i: INTEGER): STATION
			-- Station with index `i' on this line.
		require
			not_too_small: i >= 1
			not_too_large: i <= count
		do
			Result := line.i_th (i)
		end

	first: STATION
			-- First station.
		do
			Result := line.first
		end

	last: STATION
			-- Last station.
		do
			Result := line.last
		end

feature -- Measurement

	count: INTEGER
			-- Number of stations on this line.
		do
			Result := line.count
		end

feature -- Modification

	append (s: STATION)
			-- Add `s' to the end of the line.
		do
			line.append (s)
		ensure
			new_station_is_last: last = s
			one_more_station: count = old count + 1
		end

	remove_all_segments
			-- Remove all stations except the first.
		local
			s: STATION
		do
			s := first
			line.remove_all
			line.append (s)
		ensure
			only_one_left: count = 1
			equal_terminals: first = last
		end

feature {NONE} -- Implementation

	line: LINE
			-- Real line represented by this simplified line.

invariant
	count_positive: count > 0
	first_definition: first = i_th (1)
	last_definition: last = i_th (count)
end
