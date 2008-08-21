indexing
	description: "Path building class (Chapter 6, Touch of Class)"
	date: "$Date$"
	revision: "$Revision$"

class PATH_BUILDING inherit

	TOURISM

feature -- Path building

	explore is
			-- Build an imaginary line and highlight it on the map.
		do
			Paris.display

			wait
			create fancy_line.make_with_terminal ("Fancy line", create {TRAFFIC_TYPE_TRAM}.make, Station_Chatillon_Montrouge)
			Paris.lines.force (fancy_line, fancy_line.name)

			create stop1.set_station (Station_Chatillon_Montrouge, fancy_line)
			create stop2.set_station (Station_Issy, fancy_line)
			create stop3.set_station (station_balard, fancy_line)

			stop1.link (stop2)
			stop2.link (stop3)

			fancy_line.highlight
		end

	fancy_line: TRAFFIC_LINE
	stop1, stop2, stop3: TRAFFIC_STOP

end
