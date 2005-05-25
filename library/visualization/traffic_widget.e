indexing
	description: "[		
						Widget to visualize a TRAFFIC_MAP_MODEL
						
						Needs some renderer functions FUNCTION [ANY, TUPLE [ELEMENT], DRAWABLE] to map 
						the map model element items (ELEMENT) to appropriate drawable objects (DRAWABLE) 
						for drawing them. Use `set_renderer' to customize the renderer used 
						to render a category of map elements.						
					]"
	note: "This class is only a prototype, needs some review and improvement (bad performance of some implementations)"
	author: "Rolf Bruderer"
	date: "2005/03/03"
	revision: "1.3"	

class
	TRAFFIC_WIDGET [DRAWABLE -> ESDL_DRAWABLE, ELEMENT -> HASHABLE]
	
inherit
	ESDL_DRAWABLE_CONTAINER [DRAWABLE]
		redefine
			initialize_events, 
			publish_mouse_event
		end
	
create
	make_with_map	
	
feature {NONE} -- Initialization

	initialize_events is
			-- Build events.
		do
			Precursor
			create mouse_motion_on_map_item_event
			create mouse_button_down_on_map_item_event
			create mouse_button_up_on_map_item_event
		end	
		
	make_with_map (a_map: TRAFFIC_MAP_MODEL [ELEMENT]) is
			-- Initialize with `a_map' to visualize.
		require
			a_map_not_void: a_map /= Void
		do
			make
			map := a_map
			subscribe_for_map
			create renderers.make (100)
			create item_views.make (a_map.count * 2)
			create views_array.make (a_map.count)
		end
		
feature -- Access

	map: TRAFFIC_MAP_MODEL [ELEMENT]
			-- Model of the map visualized by `Current'
			
	item_view (an_item: ELEMENT): DRAWABLE is
			-- Drawable representation of `an_item' inside `Current'
		require
			an_item_not_void: an_item /= Void
			view_for_item_exists: has_view (an_item)
		do
			Result := item_views.item (an_item)					
		end
		
	has_view (an_item: ELEMENT): BOOLEAN is
			-- Is there a view for `an_item' in `Current'?
		require
			an_item_not_void: an_item /= Void	
		do
			Result := item_views.has (an_item)
		end		
		
feature -- Status setting

	set_renderer (a_renderer: FUNCTION [ANY, TUPLE [ELEMENT], DRAWABLE]; a_category: STRING) is
			-- Set `a_renderer' to visualize all items inside `map' with category `a_category'.
			-- Renderer is a function that takes an item of the map that has category `a_category'
			-- and returns a DRAWABLE to visualize the item in the map.
		do
			renderers.put (a_renderer, a_category)		

			-- TODO: only re-render those with `a_category'
			render
		end

feature -- Commands

	render is
			-- Create all drawable objects to represent `map'
			-- inside `Current'.
			-- (wipe out before)
		local
			i: INTEGER
		do
			wipe_out
			item_views.wipe_out
			views_array.wipe_out
			from 
				i := 1
			until
				i > map.count
			loop
				render_item (i)
				i := i + 1
			end			
		end
		
feature -- Mouse Events

	publish_mouse_event (a_mouse_event: ESDL_MOUSE_EVENT) is
			-- Publish mouse event when `a_mouse_event' occured on `Current'.
			-- Descendants should redefine this feature 
			-- for only publishing their mouse events when mouse pointer
			-- is realy inside (non-composite) object or for 
			-- distributing mouse events to child objects of composite objects.
		local
			cursor: CURSOR
			transformed_mouse_event: ESDL_MOUSE_EVENT
			translation: ESDL_VECTOR_2D
		do
			if bounding_box.has (a_mouse_event.proportional_position) then
				
				-- Transform `a_mouse_event' into `Current' coordinate system.
				--transformed_mouse_event := a_mouse_event
				transformed_mouse_event := a_mouse_event.twin
				transformed_mouse_event.set_caught (False)
				create translation.make (x, y)
				transformed_mouse_event.set_proportional_position (a_mouse_event.proportional_position - translation)
				
				-- First publish mouse events of `Current'.
				dispatch_mouse_event (transformed_mouse_event)
			
				-- Publish `transformed_mouse_event' to all children.
				-- (in top to bottom order until `caught')
				cursor := views_array.cursor
				from
					views_array.finish
				until
					views_array.before or transformed_mouse_event.caught
				loop
					if views_array.item /= Void then
						views_array.item.publish_mouse_event (transformed_mouse_event)						
					end
					views_array.back
				end
				
				-- Publish item mouse event with drawable object that caught the event.
				-- Also publish mouse event with map item.
				if transformed_mouse_event.caught then
					
					if not views_array.after then
						views_array.forth
						dispatch_mouse_on_item_event (views_array.item, transformed_mouse_event)
						dispatch_mouse_on_map_item_event (map.item (views_array.index), transformed_mouse_event)
					end
							
					-- Propagate to caller if event was caught.
					a_mouse_event.set_caught (True)					
				end
				
			end			
		end	

	mouse_motion_on_map_item_event: EVENT_TYPE [TUPLE [ELEMENT]]
			-- Mouse motion over map item event,
			-- gets published when mouse is moved over drawable item,
			-- map element is passed as first argument to subscribers,
			-- as optional second argument the appropriate ESDL_MOUSE_EVENT is passed
	
	mouse_button_up_on_map_item_event: EVENT_TYPE [TUPLE [ELEMENT]]
			-- Mouse button pressed over map item event,
			-- gets published when mouse is pressed over item,
			-- map element is passed as first argument to subscribers,
			-- as optional second argument the appropriate ESDL_MOUSE_EVENT is passed
	
	mouse_button_down_on_map_item_event: EVENT_TYPE [TUPLE [ELEMENT]]
			-- Mouse button released over map item event,
			-- gets published when mouse is released over item,
			-- map element is passed as first argument to subscribers,
			-- as optional second argument the appropriate ESDL_MOUSE_EVENT is passed
			
feature {NONE} -- Dispatching
			
	dispatch_mouse_on_map_item_event (a_map_item: ELEMENT; a_mouse_event: ESDL_MOUSE_EVENT) is
			-- Dispatch mouse on map item event.
		do
			-- Only dispatch when events are initialized.
			if events_initialized then
				inspect
					a_mouse_event.type			
				when Esdl_mousemotion_event then
					mouse_motion_on_map_item_event.publish ([a_map_item, a_mouse_event])
				when Esdl_mouse_button_down_event then
					mouse_button_down_on_map_item_event.publish ([a_map_item, a_mouse_event])
				when Esdl_mouse_button_up_event	then
					mouse_button_up_on_map_item_event.publish ([a_map_item, a_mouse_event])
				end				
			end											
		end		
			
feature {NONE} -- Update Mechanism
		
	process_changed_map is
			-- Render map again to update all changes.
		do
			-- Just render everything.
			render
		end		
		
	process_changed_item (i: INTEGER) is
			-- Change view for item at index `i'.
			-- (Render it again)
		require
			i_is_valid_index: 1 <= i and then i <= map.count
		do
			-- TODO: Rerender i-th item and replace it in `Current'.
			render			
		end
			
	process_inserted_item (i: INTEGER) is
			-- Insert view for item at index `i'.
		require
			i_is_valid_index: 1 <= i and then i <= map.count
		do
			-- TODO: Only insert item at position i in container.
			render			
		end
			
	process_removed_item (i: INTEGER) is
			-- Remove view for item at index `i'.
		require
			i_is_valid_index: 1 <= i and then i <= count
		do
			-- TODO: Only remove item at position i in container.
			render			
		end	


feature {NONE} -- Implementation


	renderers: DS_HASH_TABLE [FUNCTION [ANY, TUPLE [ELEMENT], DRAWABLE], STRING]
			-- Renderers used to render the different item categories
			
	item_views: DS_HASH_TABLE [DRAWABLE, ELEMENT]
			-- Drawable objects that represent a map item
			
	views_array: ARRAYED_LIST [DRAWABLE]
			-- Views per item index.

	render_item (i: INTEGER) is
			-- Render item `i' of `map'
			-- and extend `Current' with its view
			-- (discard any existing view).
		require
			i_is_valid_index: 1 <= i and then i <= map.count
		local
			item_renderer: FUNCTION [ANY, TUPLE [ELEMENT], DRAWABLE]
			view: DRAWABLE
			map_item: ELEMENT			
		do
			item_renderer := renderers.item (map.category (i))
			map_item := map.item (i)

			-- Remove exisitng view for this item (if any).
			if item_views.has (map_item) then
				view := item_views.item (map_item)
				if view /= Void then
					delete (view)
				end
			end

			-- Ensure that `views_array' has enough capacity.
			if views_array.count < map.count then
				resize_views_array
			end		
			
			-- Add new view if there is a renderer.			
			if item_renderer /= Void then				
				view := item_renderer.item ([map_item])
				if item_views.capacity < map.count then
					item_views.resize (map.count * 2)
				end		
				extend (view)
				item_views.put (view, map_item)					
				views_array.put_i_th (view, i)
			else
				views_array.put_i_th (Void, i)
			end
		end
		
	resize_views_array is
			-- Ensure that `views_array' is big enough to contain as much item as in `map'.
		do
			if map.count > views_array.count then
				from
				until
					views_array.count = map.count					
				loop
					views_array.force (Void)					
				end
			end
		end
		
		
	subscribe_for_map is 
			--  Subscribe `Current' to observe `map'.
		do
			map.changed_event.subscribe (agent process_changed_map)
			map.item_changed_event.subscribe (agent process_changed_item)
			map.item_removed_event.subscribe (agent process_removed_item)
			map.item_inserted_event.subscribe (agent process_inserted_item)
		end	
		
invariant
	map_not_void: map /= Void
	renderers_not_void: renderers /= Void	
	item_views_not_void: item_views /= Void

end
