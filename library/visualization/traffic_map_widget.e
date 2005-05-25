indexing
	description: "Map widget to visualize a TRAFFIC_MAP with TRAFFIC_MAP_RENDERER."
	author: "Rolf Bruderer"
	date: "2005/03/10"
	revision: "1.0"

class
	TRAFFIC_MAP_WIDGET
	
inherit	
	TRAFFIC_WIDGET [ESDL_DRAWABLE, HASHABLE]
		redefine
			make_with_map, map	
		end
	
	TRAFFIC_MAP_RENDERER
		undefine
			copy, is_equal
		redefine
			map, make_with_map
		end
		
create
	make_with_map
	
feature -- Initialization

	make_with_map (a_map: TRAFFIC_MAP) is
			-- Initialize with `a_map' to visualize.
		do
			Precursor {TRAFFIC_MAP_RENDERER} (a_map)
			Precursor {TRAFFIC_WIDGET} (a_map)
			renderers.put (place_renderer, "TRAFFIC_PLACE")
			renderers.put (line_section_renderer, "TRAFFIC_LINE_SECTION")
			render
		end
		
feature -- Access
		
	map: TRAFFIC_MAP
			-- Model of the map visualized by `Current'	

end
