indexing
	description: "Specialization of TRAFFIC_MAP_MODEL for TRAFFIC_PLACE"
	date: "2005/08/31"
	revision: "1.0"

class
	TRAFFIC_PLACE_MODEL

inherit
	TRAFFIC_MAP_MODEL [TRAFFIC_PLACE]

create
	make_with_map
	
feature -- Creation
	make_with_map (a_map: TRAFFIC_MAP) is
		require
			a_map_not_void: a_map /= Void
		do
			make_with_events (a_map.place_events)
			map := a_map
		ensure 
			map_set: map = a_map
		end

feature -- Basic operations
	item (index: INTEGER): TRAFFIC_PLACE is
			-- Return the place on place index
		do
			Result := map.map_places.i_th (index)
		end	

	count: INTEGER is
			-- Return the number of places
		do
			Result := map.map_places.count
		end

feature {NONE} -- Implementation
	map: TRAFFIC_MAP

invariant
	map_not_void: map /= Void
	
end -- class TRAFFIC_PLACE_MODEL
