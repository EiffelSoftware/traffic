indexing
	description: "Map widget to visualize a TRAFFIC_MAP with TRAFFIC_MAP_RENDERER."
	author: "Rolf Bruderer"
	date: "2005/03/10"
	revision: "1.0"

class
	TRAFFIC_MAP_WIDGET

inherit	
	ESDL_DRAWABLE_CONTAINER [ESDL_DRAWABLE]
	
--	TRAFFIC_WIDGET [HASHABLE]
--		redefine
--			make_with_map, map	
--		end

create
	make_with_map
	
feature -- Initialization

	make_with_map (a_map: TRAFFIC_MAP) is
			-- Initialize with `a_map' to visualize.
--		local
		require
			map_not_void: a_map /= Void
		do
			make
--			Precursor {TRAFFIC_WIDGET} (a_map)
			map := a_map;
			create line_sections_model.make_with_map (a_map)
			create places_model.make_with_map (a_map)
			
			create line_renderer.make_with_map (a_map)
			create place_renderer.make_with_map (a_map)
			
			create place_widget.make_with_map_and_default_renderer (places_model, place_renderer)
			create line_section_widget.make_with_map_and_default_renderer (line_sections_model, line_renderer)
			
--			set_default_renderer( place_renderer)
--			set_default_renderer( line_renderer)
			
			render
			
			extend (line_section_widget)
			extend (place_widget)
		end
		
feature -- Access
		
	map: TRAFFIC_MAP
			-- Model of the map visualized by `Current'	

	line_renderer: TRAFFIC_LINE_SECTION_RENDERER
			--standard renderer for the TRAFFIC_LINE_SECTIONs
			
	place_renderer: TRAFFIC_PLACE_RENDERER
			--standard renderer for the TRAFFIC_PLACEs
			
feature -- Input

	subscribe_to_clicked_place_event (an_action: PROCEDURE [ANY, TUPLE [TRAFFIC_PLACE]]) is
		require
			an_action_not_void: an_action /= Void
		do
			place_widget.mouse_button_down_on_map_item_event.subscribe (an_action)
		end
		
	subscribe_to_clicked_line_section_event (an_action: PROCEDURE [ANY, TUPLE [TRAFFIC_LINE_SECTION]]) is
		require
			an_action_not_void: an_action /= Void
		do
			line_section_widget.mouse_button_down_on_map_item_event.subscribe (an_action)
		end
		
feature --Status

	set_place_special_renderer ( a_renderer: TRAFFIC_ITEM_RENDERER [TRAFFIC_PLACE]; a_place: TRAFFIC_PLACE) is
		--set a proprietary renderer for a place
		--does not re-render the scene. call render to see the changes
	require
		a_place_not_void: a_place /= Void
	do
		place_widget.set_renderer_for_item (a_renderer, a_place)

	end

	set_line_special_renderer ( a_renderer: TRAFFIC_ITEM_RENDERER [TRAFFIC_LINE_SECTION]; a_line: TRAFFIC_LINE) is
		--set a proprietary renderer for a line, if it exists
		--does not re-render the scene. call render to see the changes
	local
		line: LINKED_LIST [TRAFFIC_LINE_SECTION]
		line_section: TRAFFIC_LINE_SECTION
	do
		line := a_line
		from
			line.start
		until
		 	line.off
		loop
			line_section := line.item
			line_section_widget.set_renderer_for_item (a_renderer, line_section)
		 	line.forth
		end
	end	
	
feature -- Basic Operation
	render is
			-- 
		do
			line_section_widget.render
			place_widget.render
		end

feature {NONE} -- Implementation
	
	line_sections_model: TRAFFIC_LINE_SECTION_MODEL
	
	places_model: TRAFFIC_PLACE_MODEL
			
	line_section_widget: TRAFFIC_WIDGET [TRAFFIC_LINE_SECTION]
	
	place_widget: TRAFFIC_WIDGET [TRAFFIC_PLACE]

invariant
	map_not_void: map /= void
end
