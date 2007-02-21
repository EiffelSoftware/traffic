indexing
	description: "Represents a path from one TRAFFIC_PLACE to another"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_PATH

create
	make

feature {NONE} -- Creation

	make (a_scale_factor: DOUBLE) is
			-- Initialize `Current'
		do
			scale_factor := a_scale_factor
		end

feature -- Access

	origin: TRAFFIC_PLACE is
			-- Origin of the path
		require
			first /= Void
		do
			Result := first.origin
		end

	destination: TRAFFIC_PLACE is
			-- Destination of the path
		require
			first /= Void
		local
			ps: TRAFFIC_PATH_SECTION
		do
			if first.next = Void then
				Result := first.destination
			else
				from
					ps := first
				until
					ps.next = Void
				loop
					ps := ps.next
				end
				Result := ps.destination
			end
		end

	connections: LIST[TRAFFIC_CONNECTION] is
			-- gives all traffic_connection
		require
			first /= Void
		local
			ps: TRAFFIC_PATH_SECTION
			c: LIST[TRAFFIC_CONNECTION]
		do
			if first.next = Void then
				Result := first.connections
			else
				from
					ps := first
				until
					ps = Void
				loop
					from
						ps.connections.start
					until
						ps.connections.after
					loop
						c.extend(ps.connections.item)
						ps.connections.forth
					end
					ps := ps.next
				end
					RESULT := c
			end
		end



feature -- Status report

	is_valid_for_insertion (a_connection: TRAFFIC_CONNECTION): BOOLEAN is
			-- Is `a_connection' valid for insertion?
		require
			a_connection /= Void
		do
			Result := last = Void or else last.connections.last.destination = a_connection.origin
		end


feature -- Output

	textual_description: STRING is
			-- Description providing information about the path
		require
			first /= Void
		local
			section: TRAFFIC_PATH_SECTION
			i: INTEGER
			walking_length: DOUBLE
			tram_length: DOUBLE
			bus_length: DOUBLE
			train_length: DOUBLE
			tram_type: STRING
			train_type: STRING
			bus_type: STRING

		do
			create Result.make_empty
			Result.append ("Starting at: " + origin.name + "%N")

			tram_type := (create {TRAFFIC_TYPE_TRAM}.make).name
			train_type := (create {TRAFFIC_TYPE_RAIL}.make).name
			bus_type := (create {TRAFFIC_TYPE_BUS}.make).name

			from
				section := first
			 until
			 	section = Void
			 loop
				-- if the sections start and end are the same, it's a switch unless it's the first or last section

				if section.has_line then
					Result.append ("Take " + section.line.type.name + " no. " + section.line.name + " to " + section.destination.name + "%N")

					if section.line.type.name.is_equal (tram_type) then
						tram_length := tram_length + section.length
					elseif section.line.type.name.is_equal (train_type) then
						train_length := train_length + section.length
					elseif section.line.type.name.is_equal (bus_type) then
						bus_length := bus_length + section.length
					end
				else
					Result.append ("Walk to " + section.destination.name + "%N")
					walking_length := walking_length + section.length
				end

				section := section.next
			end

			Result.append ("Arriving at: " + destination.name + "%N%NTotal:")
			if walking_length > 0 then
				Result.append ("%NWalking: " + scale (walking_length).rounded.out + " m")
			end
			if tram_length > 0 then
				Result.append ("%NTram: " + scale (tram_length).rounded.out + " m")
			end
			if bus_length > 0 then
				Result.append ("%NBus: " + scale (bus_length).rounded.out + " m")
			end
			if train_length > 0 then
				Result.append ("%NTrain: " + scale (train_length).rounded.out + " m")
			end
		end

feature -- Basic operations

	append_a_path(a_path: TRAFFIC_PATH) is
			-- append a TRAFFIC_PATH 'a_path' at the end of the actual path
		require
			a_path /= VOID
			is_valid_for_insertion(a_path.first.connections.first)
		do
			if first = Void then
				set_first(a_path.first)
				set_last
			else
				set_last
				if last.is_insertable(a_path.first) then
						--extend the last path section with the first path section of 'a_path'
					last.extend (a_path.first)
				else
					last.set_next (a_path.first)
					set_last
				end
			end
		end

	set_first(a_path_section: TRAFFIC_PATH_SECTION) is
			-- sets pointer 'first' to the 'a_path_section'
		require
			a_path_section /= Void
		do
			if not(a_path_section.origin.name.is_equal (a_path_section.destination.name)) then
					--don't make intra-place sections
				first := a_path_section
			end
		end

	set_last is
			-- sets the pointer 'last' to the last path_section of the path
		require
			first /= Void
		local
			ps: TRAFFIC_PATH_SECTION
		do
			if first.next = Void then
				last := first
			else
				from
					ps := first
				until
					ps = Void
				loop
					last := ps
					ps := ps.next
				end
			end
		end



feature --{TRAFFIC_PATH} -- Implementation

	first: TRAFFIC_PATH_SECTION
			--pointer to the first traffic_path_section of the path

	last: TRAFFIC_PATH_SECTION
			--pointer to the last traffic_path_section of the path

	scale_factor: DOUBLE
			-- Scale factor for real world distances

	scale (a_distance: DOUBLE): DOUBLE is
			-- Real-world distance
		do
			Result := a_distance * scale_factor
		end

end
