indexing
	description: "Route on a map visiting different places of interest."
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_ROUTE
	
inherit
	ANY
		redefine
			out
		end

create
	make, make_empty

feature {NONE} -- Initialization

	make_empty (a_map: TRAFFIC_MAP) is
			-- Create empty route on map `a_map'.
		require
			a_map_exists: a_map /= Void
		do
			create places_to_visit.make
			create places_on_route.make
			create line_sections.make
			map := a_map
		ensure
			places_to_visit_exists: places_to_visit /= Void
			places_on_route_exists: places_on_route /= Void
			line_sections_exists: line_sections /= Void
			map_exists: map /= Void
			map_set: map = a_map
		end
		
	make (a_places_to_visit: LINKED_LIST [TRAFFIC_PLACE]; a_map: TRAFFIC_MAP) is
			-- Create shortest path route through all places in `a_places_to_visit'.
		require
			a_places_to_visit_exists: a_places_to_visit /= Void
			a_places_to_visit_more_than_one_place: a_places_to_visit.count > 1
			a_map_exists: a_map /= Void
			places_exist_on_map: places_on_map (a_places_to_visit, a_map)
		do
			make_empty (a_map)
			if a_places_to_visit /= Void then
				places_to_visit.copy (a_places_to_visit)
				calculate_shortest_path
			end
		ensure
			places_to_visit_exists: places_to_visit /= Void
			places_on_route_exists: places_on_route /= Void
			line_sections_exists: line_sections /= Void
			map_exists: map /= Void
			map_set: map = a_map
		end
		
feature -- Access

	places_to_visit: LINKED_LIST [TRAFFIC_PLACE]
			-- Places to visit on route.
		
	places_on_route: LINKED_LIST [TRAFFIC_PLACE]
			-- All Places on route of last call to `calculate_shortest_path'.
		
	line_sections: LINKED_LIST [TRAFFIC_LINE_SECTION]
			-- Line sections to be used to visit `places_to_visit'
			-- of last call to `calculate_shortest_path'.

feature -- Element change

	extend (a_place: TRAFFIC_PLACE) is
			-- Add `a_place' to the list of places to visit.
			-- Call `calculate_shortest_path' to recalculate the shortest path
			-- of all places to visit.
		require
			a_place_exists: a_place /= Void
			a_place_in_map: place_on_map (a_place)
		do
			places_to_visit.extend (a_place)
		ensure
			a_place_in_places_to_visit: places_to_visit.has (a_place)
		end

feature -- Removal
		
	remove (a_place: TRAFFIC_PLACE) is
			-- Remove `a_place' from list of places to visit.
			-- Call `calculate_shortest_path' to recalculate the shortest path
			-- of all places to visit.
		require
			a_place_exists: a_place /= Void
			a_place_in_places_to_visit: places_to_visit.has (a_place)
		local
			index: INTEGER
		do
			index := places_to_visit.index_of (a_place, 1)
			places_to_visit.go_i_th (index)
			places_to_visit.remove
		ensure
			a_place_not_in_places_to_visit: not places_to_visit.has (a_place)
		end

feature -- Status report

	place_on_map (a_place: TRAFFIC_PLACE): BOOLEAN is
			-- Is a_place on map?
		require
			a_place_exist: a_place /= Void
		do
			Result := map.has_place (a_place.name)
		end

	places_on_map (a_places: LINKED_LIST[TRAFFIC_PLACE]; a_map: TRAFFIC_MAP): BOOLEAN is
			-- Are all places on map?
		require
			a_places_exists: a_places /= Void
			a_map_exists: a_map /= Void
		do
			Result := True
			
			from
				a_places.start
			until
				a_places.after or Result = False
			loop
				Result := Result and a_map.has_place (a_places.item.name)
				a_places.forth
			end
		end
		
feature -- Basic operation

	calculate_shortest_path is
			-- Calculate the shortest path from one place to visit to the next.
		local
			current_place, next_place: TRAFFIC_PLACE
			shortest_path: LIST [ LINKED_GRAPH_WEIGHTED_EDGE [TRAFFIC_PLACE, TRAFFIC_LINE_SECTION]]
			current_line_section: TRAFFIC_LINE_SECTION
		do
			places_on_route.wipe_out
			line_sections.wipe_out
			from
				places_to_visit.start
			until
				places_to_visit.after
			loop
				current_place := places_to_visit.item
				places_to_visit.forth
				
				if not places_to_visit.after then
					next_place := places_to_visit.item
					map.find_shortest_path (current_place, next_place)
					if map.path_found then
						shortest_path := map.shortest_path
						from
							shortest_path.start
						until
							shortest_path.after
						loop
							current_line_section := shortest_path.item.label
							line_sections.extend (current_line_section)
							places_on_route.extend (current_line_section.origin)
							shortest_path.forth
						end		
						if shortest_path.count > 0 then
							places_on_route.extend (current_line_section.destination)							
						end
					end
				end
			end
		end

	out: STRING is
			-- Textual Representation
		local
			line_name, last_destination_name: STRING
			last_line, current_line: TRAFFIC_LINE
			current_line_section: TRAFFIC_LINE_SECTION
		do
			Result := "Places "
			from
				places_to_visit.start
			until
				places_to_visit.after
			loop
				Result := Result + places_to_visit.item.name
				places_to_visit.forth
				if not places_to_visit.after then
					Result := Result + ", "
				end
			end
			Result := Result + "%Nlast calculated route:"
			
			last_line := Void
			from
				line_sections.start
			until
				line_sections.after
			loop
				current_line := line_sections.item.line
				if not equal (current_line, last_line) then
					if current_line /= Void then
						line_name := current_line.name
					else
						line_name := "void"
					end
					if current_line_section /= Void then
						last_destination_name := current_line_section.destination.name
					else
						last_destination_name := ""
					end
					Result := Result + last_destination_name + "%N   " + line_name + ": "
				end
				
				current_line_section := line_sections.item
				Result := Result + current_line_section.origin.name + ", "
				line_sections.forth
				last_line := current_line
			end
			if current_line_section /= Void then
				Result := Result + current_line_section.destination.name	
			end
		end

feature {NONE} -- Implementation
		
		map: TRAFFIC_MAP
				-- Map route is on.

invariant
	map_exists: map /= Void -- map exists

end
