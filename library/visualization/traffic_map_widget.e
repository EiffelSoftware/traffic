indexing
	description: "Map widget to visualize a TRAFFIC_MAP with TRAFFIC_MAP_RENDERER."
	author: "Rolf Bruderer, Roger Kueng"
	date: "2005/07/20"
	revision: "1.1"

class
	TRAFFIC_MAP_WIDGET

inherit	
	ESDL_DRAWABLE_CONTAINER [ESDL_DRAWABLE]

create
	make_with_map
	
feature -- Initialization

	make_with_map (a_map: TRAFFIC_MAP) is
			-- Initialize with `a_map' to visualize.
		require
			map_not_void: a_map /= Void
		do
			make

			map := a_map;
			create line_sections_model.make_with_map (a_map)
			create places_model.make_with_map (a_map)
			
			create line_section_renderer.make_with_map (a_map)
			create place_renderer.make_with_map (a_map)
			
			create place_drawables.make_with_map_and_default_renderer (places_model, place_renderer)
			create line_section_drawables.make_with_map_and_default_renderer (line_sections_model, line_section_renderer)
	
			render
			
			extend (line_section_drawables)
			extend (place_drawables)
		end
		
feature -- Access
		
	map: TRAFFIC_MAP
			-- Model of the map visualized by `Current'	

	line_section_renderer: TRAFFIC_LINE_SECTION_RENDERER
			--standard renderer for the TRAFFIC_LINE_SECTIONs
			
	place_renderer: TRAFFIC_PLACE_RENDERER
			--standard renderer for the TRAFFIC_PLACEs
			
feature -- Input

	subscribe_to_clicked_place_event (an_action: PROCEDURE [ANY, TUPLE [TRAFFIC_PLACE]]) is
		require
			an_action_not_void: an_action /= Void
		do
			place_drawables.mouse_button_down_on_map_item_event.subscribe (an_action)
		end
		
	subscribe_to_clicked_line_section_event (an_action: PROCEDURE [ANY, TUPLE [TRAFFIC_LINE_SECTION]]) is
		require
			an_action_not_void: an_action /= Void
		do
			line_section_drawables.mouse_button_down_on_map_item_event.subscribe (an_action)
		end
		
feature -- Status - Places

	set_default_place_renderer (a_renderer: TRAFFIC_ITEM_RENDERER [TRAFFIC_PLACE]) is
			-- 
		require
			a_renderer_not_void: a_renderer /= Void		
		do
			place_drawables.set_default_renderer (a_renderer)
			place_drawables.render
		end
		
	set_place_special_renderer (a_renderer: TRAFFIC_ITEM_RENDERER [TRAFFIC_PLACE]; a_place: TRAFFIC_PLACE) is
		--set a proprietary renderer for a place
		--does not re-render the scene. call render to see the changes
		require
			a_renderer_not_void: a_renderer /= Void
			a_place_not_void: a_place /= Void
		do
			place_drawables.set_renderer_for_item (a_renderer, a_place)
		end
	
	reset_place_special_renderer (a_place: TRAFFIC_PLACE) is
			-- 
		require
			a_place_not_void: a_place /= Void
		do
			place_drawables.reset_renderer_for_item (a_place)
		end

feature -- Status - Line_Sections

	set_default_line_section_renderer (a_renderer: TRAFFIC_ITEM_RENDERER [TRAFFIC_LINE_SECTION]) is
			-- 
		require
			a_renderer_not_void: a_renderer /= Void		
		do
			line_section_drawables.set_default_renderer (a_renderer)
			line_section_drawables.render
		end

	set_line_section_special_renderer (a_renderer: TRAFFIC_ITEM_RENDERER [TRAFFIC_LINE_SECTION]; a_line_section: TRAFFIC_LINE_SECTION) is
		--set a proprietary renderer for a line_section, if it exists
		--does not re-render the scene. call render to see the changes
		require
			a_renderer_not_void: a_renderer /= Void
			a_line_section_not_void: a_line_section /= Void		
		do
			line_section_drawables.set_renderer_for_item (a_renderer, a_line_section)
		end	
		
	reset_line_section_special_renderer (a_line_section: TRAFFIC_LINE_SECTION) is
		--reset the proprietary renderer for a line, if it exists
		require
			a_line_section_not_void: a_line_section /= Void		
		do
			line_section_drawables.reset_renderer_for_item (a_line_section)
		end	
		
	set_line_special_renderer (a_renderer: TRAFFIC_ITEM_RENDERER [TRAFFIC_LINE_SECTION]; a_line: TRAFFIC_LINE) is
		--set a proprietary renderer for a line, if it exists
		--does not re-render the scene. call render to see the changes
		require
			a_renderer_not_void: a_renderer /= Void
			a_line_not_void: a_line /= Void		
		local
			line: LINKED_LIST [TRAFFIC_LINE_SECTION]
			line_section: TRAFFIC_LINE_SECTION
		do
			line := a_line
			from
				line.start
			until
			 	line.after
			loop
				line_section := line.item
				line_section_drawables.set_renderer_for_item (a_renderer, line_section)
			 	line.forth
			end
		end	
		
	reset_line_special_renderer (a_line: TRAFFIC_LINE) is
		--reset the proprietary renderer for a line, if it exists
		require
			a_line_not_void: a_line /= Void		
		local
			line: LINKED_LIST [TRAFFIC_LINE_SECTION]
			line_section: TRAFFIC_LINE_SECTION
		do
			line := a_line
			from
				line.start
			until
			 	line.after
			loop
				line_section := line.item
				line_section_drawables.reset_renderer_for_item (line_section)
			 	line.forth
			end
		end	
	
feature -- Basic Operation
	render is
			--Render the map: It just updates the drawables 
		do
			line_section_drawables.render
			place_drawables.render
		end

feature {NONE} -- Implementation
	
	line_sections_model: TRAFFIC_LINE_SECTION_MODEL
	
	places_model: TRAFFIC_PLACE_MODEL
			
	line_section_drawables: TRAFFIC_DRAWABLE_CONTAINER [TRAFFIC_LINE_SECTION]
	
	place_drawables: TRAFFIC_DRAWABLE_CONTAINER [TRAFFIC_PLACE]

invariant
	map_not_void: map /= void
end
