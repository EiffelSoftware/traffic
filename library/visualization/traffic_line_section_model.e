indexing
	description: "Specialization of TRAFFIC_MAP_MODEL for TRAFFIC_LINE_SECTION"
	author: "Roger Kueng"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_LINE_SECTION_MODEL

inherit
	TRAFFIC_MAP_MODEL [TRAFFIC_LINE_SECTION]

create
	make_with_map
	
feature --Creation

	make_with_map( a_map: TRAFFIC_MAP) is
			-- 
		do
			make_with_events (a_map.line_section_events);
			map := a_map;
		end

feature -- Basic operations

	item (index: INTEGER): TRAFFIC_LINE_SECTION is
			-- 
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

end -- class TRAFFIC_LINE_SECTION_MODEL
