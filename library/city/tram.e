note
	description: "Summary description for {TRAM}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAM

inherit
	MOBILE

create
	make_for_line

feature
	make_for_line (a_line: LINE)
		do
			line := a_line

			first_stop := line.north_terminal
			final_stop := line.south_terminal

			departed := first_stop
			arriving := line.next_station (departed, final_stop)

			make_with_position ("Tram " + line.name.out, departed.position)
		end

	line: LINE
	departed: STATION
	arriving: STATION
	first_stop: STATION
	final_stop: STATION

	update_with_dt (dt: INTEGER)
		do
			update_with_length ((dt / 1000.0) * speed)
		end

	update_with_length (length: REAL_64)
		require
			length >= 0
		local
			dir: VECTOR
			proposed: VECTOR
			line_length: REAL_64
			move_length: REAL_64
		do
			dir      := arriving.position - departed.position
			proposed := initial_position + dir.normalized.product (length)

			line_length := dir.length
			move_length := (proposed - departed.position).length

			if move_length > line_length then
				initial_position := arriving.position
				station_step
				update_with_length (move_length - line_length)
			else
				initial_position := proposed
			end
		end

	station_step
		local
			station: STATION
		do
			station := line.next_station (arriving, final_stop)

			if station = Void then
				station := first_stop
				first_stop := final_stop
				final_stop := station

				departed := first_stop
			else
				departed := arriving
			end

			arriving := line.next_station (departed, final_stop)
		ensure
			new_stations: arriving /= old arriving and departed /= old departed
		end

	speed: REAL_64
		do
			Result := 500
		end

	position: VECTOR
		do
			Result := initial_position
		end

end
