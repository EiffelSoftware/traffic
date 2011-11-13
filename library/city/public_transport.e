note
	description: "Vehicles that move along public transportation lines."

class
	PUBLIC_TRANSPORT

inherit
	MOBILE
		redefine
			hash_code,
			out
		end

create
	make

feature {NONE} -- Initialization
	make (a_line: LINE)
			-- Create transport on line `a_line'.
		require
			a_line_exists: a_line /= Void
			at_least_two_stations: a_line.stations.count >= 2
		do
			line := a_line
			reset_position
		ensure
			line_set: line = a_line
		end

feature -- Access

	position: VECTOR
			-- Current position in the city.

	line: LINE
			-- Line that the transport moves along.

	name: STRING
			-- Name (might not be unique withing the city).
		do
			Result := line.kind.name + " " + line.number.out
		end

	departed: STATION
			-- The last station visited by the transport.

	arriving: STATION
			-- The next station to be visited by the transport.
		do
			Result := line.next_station (departed, destination)
		end

	destination: STATION
			-- The terminal station that the transport is moving towards.
		do
			if is_towards_last then
				Result := line.last
			else
				Result := line.first
			end
		end

	speed: REAL_64
			-- Motion speed (meters/second).
		do
			Result := line.kind.speed
		end

feature -- Status report

	is_towards_last: BOOLEAN
			-- Is transport currently heading towards the last station of `line'?

	is_going_to (s: STATION): BOOLEAN
			-- Will transport pass `s' on its way to `destination'?
		local
			i, j: INTEGER
		do
			if line.has_station (s) then
				i := line.stations.index_of (departed)
				j := line.stations.index_of (s)
				Result := position ~ departed.position or
					(is_towards_last and j > i) or
					(not is_towards_last and j < i)
			end
		end

feature -- Measurement

	distance_to_station (s: STATION): REAL_64
			-- Distance (meters) the transport has to go until it reaches `s' next time.
		require
			s_on_line: line.has_station (s)
		do
			if is_going_to (s) then
				Result := line.distance (departed, s) - departed.position.distance (position)
			else
				Result := line.distance (departed, destination) * 2 - departed.position.distance (position) +
					line.distance (departed, s)
			end
		ensure
			non_negative: Result >= 0
		end

	time_to_station (s: STATION): INTEGER
			-- Time (seconds) until the transport reaches `s' next time.
		require
			s_on_line: line.has_station (s)
		do
			Result := (distance_to_station (s) / line.kind.speed).rounded
		ensure
			non_negative: Result >= 0
		end

feature -- Movement

	go_to_station (s: STATION)
			-- Start moving from station `s'.
			-- Keep the direction unless `s' is the current destination.
		require
			belongs_to_line: line.stations.has (s)
		do
			if s = destination then
				is_towards_last := not is_towards_last
			end
			departed := s
			position := s.position
		ensure
			station_set: departed = s
		end

	reset_position
			-- Go to the default position.
		do
			is_towards_last := True
			departed := line.first
			position := departed.position
		end

	turn_around
			-- Reverse direction.
		do
			departed := arriving
			is_towards_last := not is_towards_last
		end

feature {NONE} -- Movement

	move_distance (d: REAL_64)
			-- Move by `d' meters.
		local
			segment, proposed: VECTOR
			extra_length: REAL_64
		do
			segment := arriving.position - departed.position
			proposed := position + segment.normalized * d
			extra_length := proposed.distance (departed.position) - segment.length

			if extra_length > 0 then
				go_to_station (arriving)
				move_distance (extra_length)
			else
				position := proposed
			end
		end

feature -- Output

	out: STRING
			-- Textual representation.
		do
			Result := name.out + " towards " + destination.name
		end

feature {CITY, CITY_ITEM} -- Implementation

	hash_code: INTEGER
			-- Hash code value.
		do
			Result := name.hash_code
		end

invariant
	line_exists: line /= Void
	departed_exists: departed /= Void
	cannot_depart_from_destination: departed /= destination
end
