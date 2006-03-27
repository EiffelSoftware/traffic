indexing
	description: "Container for place representations"
	date: "$Date$"
	revision: "$Revision$"

class TRAFFIC_2D_PLACES_CONTAINER

inherit
	
	TRAFFIC_2D_DRAWABLE_CONTAINER [TRAFFIC_PLACE]

create
	make_with_map_and_default_renderer
		
feature -- Update

	update_list is
			-- Get an updated list of places from the map.
		do
			list := map.places.linear_representation
		end
		

end
