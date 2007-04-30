indexing
	description: "Objects that ..."
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_LINE_SECTION_LIST

inherit

	TRAFFIC_EVENT_ARRAYED_LIST [TRAFFIC_LINE_SECTION]

create
	make,
	make_equal,
	make_default,
	make_from_linear,
	make_from_array

feature -- Access

	items_between (a_origin, a_destination: TRAFFIC_PLACE): DS_ARRAYED_LIST [TRAFFIC_LINE_SECTION] is
			-- line sections between places with given names
		require
			a_origin_exists: a_origin /= Void
			a_destination_exists: a_destination /= Void
			has: has_between (a_origin, a_destination)
		do
			create Result.make (2)
			if a_origin /= Void and then a_destination /= Void then
				from
					start
				until
					after or else Result = True
				loop
					if item_for_iteration.origin = a_origin
					  and then item_for_iteration.destination = a_destination then
						Result.force_last (item_for_iteration)
					end
					forth
				end
			end
		end

	items_of_place (a_place: TRAFFIC_PLACE): DS_ARRAYED_LIST[TRAFFIC_LINE_SECTION] is
			-- Line sections with origin or destination place `a_name'
		require
			place_not_void: a_place /= Void
		local
			a_stops: LIST [TRAFFIC_STOP]
			connections: LIST [TRAFFIC_CONNECTION]
			ls: TRAFFIC_LINE_SECTION
		do
			create Result.make (8)
			if a_place /= Void then
				from
					start
				until
					after or else Result = True
				loop
					if item_for_iteration.origin = a_place then
--					  or item_for_iteration.destination = a_place then
						Result.force_last (item_for_iteration)
					end
					forth
				end
			end

--			a_stops := places.item (a_place.name).stops
			-- TODO
--			from a_stops.start until a_stops.after loop
--				graph.search (a_stops.item)
--				connections := graph.incident_edge_labels

--				from connections.start until connections.after loop
--					ls ?= connections.item
--					if ls /= Void then
--						Result.extend (ls)
--					end
--					connections.forth
--				end
--				a_stops.forth
--			end
		end

feature -- Status report

	has_between (a_origin, a_destination: TRAFFIC_PLACE): BOOLEAN is
			-- Does the traffic map have a line section between places with given names?
		require
--			a_origin_exists: a_origin_name /= Void and not a_origin_name.is_empty
--			a_destination_exists: a_destination_name /= Void and not a_destination_name.is_empty
		local
			l_origin, l_destination: TRAFFIC_PLACE
		do
--			l_origin := places.item (a_origin_name)
--			l_destination := places.item (a_destination_name)
			if a_origin /= Void and then a_destination /= Void then
				from start
				until after or else Result = True
				loop
					if item_for_iteration.origin = a_origin
					  and then item_for_iteration.destination = a_destination then
						Result := True
					end
					forth
				end
			end
		end

	has_similar (a_origin, a_destination: TRAFFIC_PLACE; a_traffic_type: TRAFFIC_TYPE; a_line: TRAFFIC_LINE): BOOLEAN is
			-- Has traffic map line section `a_line_section'?
		require
--			a_origin_exists: a_origin_name /= Void and not a_origin_name.is_empty
--			a_destination_exists: a_destination_name /= Void and not a_destination_name.is_empty
			a_traffic_type_exists: a_traffic_type /= Void
		local
			l_line_section: TRAFFIC_LINE_SECTION
			l_origin, l_destination: TRAFFIC_PLACE
			found: BOOLEAN
		do
			found := False
			from
				start
			until
				after or found
			loop
				l_line_section := item_for_iteration
				if equal (l_line_section.origin, a_origin) and
					equal (l_line_section.destination, a_destination) and
					l_line_section.line = a_line then
					found := True
				end
				forth
			end
			Result := found
		end

end
