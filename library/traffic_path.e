indexing
	description: "Represents a path from one TRAFFIC_PLACE to another"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_PATH

inherit

	TRAFFIC_MAP_ITEM
		redefine
			out,
			default_create
		end

feature -- Initialization

	default_create is
			-- Initialize `scale_factor'.
		do
			scale_factor := 1
			create changed_event
		ensure then
			scale_factor_set: scale_factor = 1
		end

feature -- Access

	first: TRAFFIC_PATH_SECTION
			-- First path section

	origin: TRAFFIC_PLACE is
			-- Origin of the path
		require
			first_exists: first /= Void
		do
			Result := first.origin
		end

	destination: TRAFFIC_PLACE is
			-- Destination of the path
		require
			first_exists: first /= Void
		do
			Result := connections.last.destination
		end

	connections: DS_LINKED_LIST [TRAFFIC_CONNECTION] is
			-- All connections traveled by the path
		require
			first_exists: first /= Void
		local
			ps: TRAFFIC_PATH_SECTION
		do
			from
				ps := first
				create Result.make
			until
				ps = Void
			loop
				from
					ps.connections.start
				until
					ps.connections.after
				loop
					Result.force_last (ps.connections.item_for_iteration)
					ps.connections.forth
				end
				ps := ps.next
			end
		end

feature -- Status report

	is_insertable (a_map: TRAFFIC_MAP): BOOLEAN is
			-- Is `Current' insertable into `a_map'?
		do
			Result := True
		end

	is_valid_for_insertion (a_connection: TRAFFIC_CONNECTION): BOOLEAN is
			-- Is `a_connection' valid for insertion?
		require
			connection_exists: a_connection /= Void
		local
			l: TRAFFIC_PATH_SECTION
		do
			if first = Void then
				Result := True
			else
				from
					l := first
				until
					l.next = Void
				loop
					l := l.next
				end
				Result := l.destination = a_connection.origin
			end
		end

feature -- Output

	out: STRING is
			-- Description providing information about the path
		local
			section: TRAFFIC_PATH_SECTION
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

			Result.append ("Arriving at: " + destination.name + "%NTotal:")
			if walking_length > 0 then
				Result.append ("%NWalking: " + (walking_length* scale_factor).rounded.out + " m")
			end
			if tram_length > 0 then
				Result.append ("%NTram: " + (tram_length * scale_factor).rounded.out + " m")
			end
			if bus_length > 0 then
				Result.append ("%NBus: " + (bus_length * scale_factor).rounded.out + " m")
			end
			if train_length > 0 then
				Result.append ("%NTrain: " + (train_length * scale_factor).rounded.out + " m")
			end
		end

feature -- Basic operations

	append (a_path: TRAFFIC_PATH) is
			-- append a TRAFFIC_PATH `a_path' at the end of the actual path
		require
			path_exists: a_path /= VOID
			path_valid_for_insertion: is_valid_for_insertion(a_path.first.connections.first)
		local
			l: TRAFFIC_PATH_SECTION
		do
			if first = Void then
				set_first (a_path.first)
			else
				from
					l := first
				until
					l.next = Void
				loop
					l := l.next
				end
				if l.is_joinable (a_path.first) then
					l.join (a_path.first)
				else
					l.set_next (a_path.first)
				end
			end
		end

	set_first(a_path_section: TRAFFIC_PATH_SECTION) is
			-- sets pointer 'first' to the 'a_path_section'
		require
			a_path_section_exists: a_path_section /= Void
		do
			if not(a_path_section.origin.name.is_equal (a_path_section.destination.name)) then
					--don't make intra-place sections
				first := a_path_section
			end
		end

	set_scale_factor (a_scale_factor: DOUBLE) is
			-- sets the scale factor
		require
			a_scale_factor_exists: a_scale_factor /= Void
		do
			scale_factor := a_scale_factor
		end

feature {NONE} -- Implementation

	scale_factor: DOUBLE
			-- Scale factor for real world distances

invariant

	scale_factor_valid: scale_factor > 0

end
