indexing
	description: "Variables, Assignment and References (Chapter 9, Touch of Class)"
	author: "Corinne Mueller"
	date: "10.01.2008"
	revision: "1.0.0"

class
	CONTROL

inherit

	TOURISM

feature -- Path building

	explore_on_click is

		do
			paris.display
			console.show (highest_name (line8))
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
