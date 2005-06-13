indexing
	description: "Specialization of TRAFFIC_MAP_MODEL for TRAFFIC_PLACE"
	author: "Roger Kueng"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_PLACE_MODEL

inherit
	TRAFFIC_MAP_MODEL [TRAFFIC_PLACE]

create
	make_with_map
	
feature -- Creation

	make_with_map( a_map: TRAFFIC_MAP) is
			-- 
		do
			make_with_events (a_map.place_events);
			map := a_map;
		end

feature -- Basic operations

	item (index: INTEGER): TRAFFIC_PLACE is
			-- 
		do
			Result := map.map_places.i_th (index)
		end	

	count: INTEGER is
			-- 
		do
			Result := map.map_places.count
		end

feature {NONE} -- Implementation
	map: TRAFFIC_MAP

end -- class TRAFFIC_PLACE_MODEL
