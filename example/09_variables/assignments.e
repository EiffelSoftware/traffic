indexing
	description: "Variables, Assignment and References (Chapter 9, Touch of Class)"
	author: "Corinne Mueller"
	date: "10.01.2008"
	revision: "1.0.0"

class
	ASSIGNMENTS

inherit

	TOURISM

feature -- Path building

	startup is

		do
			paris.display
			console.show (highest_name (Line8))
			console.show ("Total travel time on Metro Line 8: "+total_time8.out+" min")
		end


	total_time8 : REAL is
			-- Return the travel time on the Metro Line 8
		do
			from
				line8.stops.start
				Result:=0.0
			invariant
				-- The value of Result is the time to travel from first station
				-- to station at cursor position
			variant
				line8.stops.count-line8.stops.index
			until
				line8.stops.index = line8.stops.count
			loop
				Result := Result + line8.stops.item.time_to_next
				line8.stops.forth
			end
		end

	highest_name(line: TRAFFIC_LINE): STRING is
			-- Alphabetically last of names of stations on line
		require
			line_exists: line /= void
		local
			i: INTEGER
			new: STRING
		do
			from
				Result := line.sw_end.name
				i := 1
			invariant
				-- The value of `Result' is the the alphabetically last station name
				-- from the first station in the list to the current one
			variant
				line.count-i
			until
				i = line.count
			loop
				new := line.i_th (i).name
				if new > Result then
					Result := new
				end
				i := i + 1
			end
		end


end
