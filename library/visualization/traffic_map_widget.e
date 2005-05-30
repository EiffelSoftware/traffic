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
create
	make_with_map
	
feature -- Initialization

	make_with_map (a_map: TRAFFIC_MAP) is
			-- Initialize with `a_map' to visualize.		
		do
			Precursor {TRAFFIC_WIDGET} (a_map)

			create place_renderer.make_with_map (a_map)
			create line_renderer.make_with_map (a_map)
			
			set_default_renderer( place_renderer)
			set_default_renderer( line_renderer)
			
			render
		end
		
feature -- Access
		
	map: TRAFFIC_MAP
			-- Model of the map visualized by `Current'	

	line_renderer: TRAFFIC_LINE_RENDERER
			--standard renderer for the TRAFFIC_LINE_SECTIONs
			
	place_renderer: TRAFFIC_PLACE_RENDERER
			--standard renderer for the TRAFFIC_PLACEs
			
feature --Status

--	set_place_special_renderer ( a_renderer: TRAFFIC_PLACE_RENDERER; a_place: STRING) is
--		--set a proprietary renderer for a place, if it exists
--	local
--		position: INTEGER
--	do
--		if map.has_place( a_place) then
--			position := map.place_position( a_place)
--			set_renderer_for_item( a_renderer, position)			
--		end
--	end
--
--	set_line_special_renderer ( a_renderer: TRAFFIC_PLACE_RENDERER; a_line: STRING) is
--		--set a proprietary renderer for a place, if it exists
--	local
--		position: INTEGER
--	do
--		if map.has_line( a_line) then
--			position := map.line_position( a_line)
--			set_renderer_for_item( a_renderer, position)
--		end
--	end
		
end
