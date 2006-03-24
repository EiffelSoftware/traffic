indexing
	description: "Container for line section representations"
	date: "$Date$"
	revision: "$Revision$"

class TRAFFIC_2D_LINE_SECTIONS_CONTAINER

inherit
	
	TRAFFIC_2D_DRAWABLE_CONTAINER [TRAFFIC_LINE_SECTION]

create
	make_with_map_and_default_renderer
		
feature -- Update

	update_list is
			-- Get an updated list of line sections from the map.
		do
			list := map.line_sections
		end
		
end
