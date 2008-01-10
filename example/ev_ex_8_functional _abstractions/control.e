indexing
	description: "Control class (Chapter 7, Touch of Class)"
	date: "$Date$"
	revision: "$Revision$"

class
	CONTROL

inherit

	TOURISM

feature -- Path building

	explore_on_click is
			-- Build a new path.
		do
			Paris.display

			wait
			console.show ("Chapter 8")

			from
				line8.start
			until
				line8.after
			loop
				Console.show (line8.item.name)
				show_station(line8.item)
				line8.forth
			end


			console.show ("Chapter 8 End")


		end

	show_station(s:TRAFFIC_PLACE) is
			-- Highlist s in a form adapted to its satus
		require
			station_exists: s /= Void

		do
			if line8.item.is_exchange then
				Console.show ("is_exchange")
				show_blinking_spot(Line8.item.position)
			elseif line8.item.is_railway_connection	then
				Console.show ("is_railway")
				show_big_red_spot(line8.item.position)
			else
				show_spot(line8.item.position)
			end

		end


feature -- Access

end
