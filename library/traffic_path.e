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
			create connections_impl .make (10)
			create path_sections.make (5)
			scale_factor := a_scale_factor
		end

feature -- Access

	connections: LIST[TRAFFIC_CONNECTION] is
			-- don't allow them to be changed
		do
			Result := connections_impl.twin
		end

feature -- Status report

	origin: TRAFFIC_PLACE is
			-- get origin
		do
			Result := connections.first.origin
		end

	destination: TRAFFIC_PLACE is
			-- get destination
		do
			Result := connections.last.destination
		end

	is_valid_for_insertion (a_connection: TRAFFIC_CONNECTION): BOOLEAN is
			-- is `a_connection' valid for insertion?
		require
			a_connection /= Void
		do
			Result := last_inserted_node = Void or else last_inserted_node = a_connection.origin_impl
		end

	textual_description: STRING is
			-- a description providing information about the path
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

			from i := 1 until i > path_sections.count loop
				-- if the sections start and end are the same, it's a switch unless it's the first or last section
				section := path_sections.i_th (i)

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

				i := i + 1
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

	extend (a_connection: TRAFFIC_CONNECTION) is
			-- add the connection
		require
			a_connection /= Void
			is_valid_for_insertion (a_connection)
		local
			ls: TRAFFIC_LINE_SECTION
			last_path_section: TRAFFIC_PATH_SECTION
			ps: TRAFFIC_PATH_SECTION
		do
			connections_impl.extend (a_connection)
			last_inserted_node := a_connection.destination_impl

			if a_connection.origin /= a_connection.destination then
				-- don't make sections for intra-place connections
				if not path_sections.is_empty then
					last_path_section := path_sections.last

					if last_path_section.is_insertable (a_connection) then
						last_path_section.extend (a_connection)
					else
						create ps.make (a_connection)
						path_sections.extend (ps)
					end
				else
					create ps.make (a_connection)
					path_sections.extend (ps)
				end
			end
		end

feature {NONE} -- Implementation

	last_inserted_node: TRAFFIC_NODE

	connections_impl: ARRAYED_LIST [TRAFFIC_CONNECTION]

	path_sections: ARRAYED_LIST [TRAFFIC_PATH_SECTION]

	scale_factor: DOUBLE

	scale (a_distance: DOUBLE): DOUBLE is
			-- compute real-world distance
		do
			Result := a_distance * scale_factor
		end

end
