indexing
	description: "Specialization of TRAFFIC_MAP_MODEL for TRAFFIC_LINE_SECTION"
	date: "2005/08/31"
	revision: "1.0"

class
	TRAFFIC_LINE_SECTION_MODEL

inherit
	TRAFFIC_MAP_MODEL [TRAFFIC_LINE_SECTION]

create
	make_with_map
	
feature --Creation

	make_with_map( a_map: TRAFFIC_MAP) is
			-- 
		require 
			a_map_not_void: a_map /= Void
		do
			make_with_events (a_map.line_section_events);
			map := a_map;
		ensure
			map_set: map = a_map
		end

feature -- Basic operations

	item (index: INTEGER): TRAFFIC_LINE_SECTION is
			-- return the item
		do
			Result := map.map_line_sections.i_th (index)
		end	

	count: INTEGER is
			-- 
		do
			Result := map.map_line_sections.count
		end

feature {NONE} -- Implementation
	map: TRAFFIC_MAP

invariant
	map_not_void: map /= void
end -- class TRAFFIC_LINE_SECTION_MODEL
