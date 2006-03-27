indexing
	description: "[		
						Container which contains drawable objects.
						Needs some TRAFFIC_2D_ITEM_RENDERER's to render the map model
						element items (ELEMENT) to appropriate drawable objects (EM_DRAWABLE) 
						for drawing them. Use `set_renderer_for_item' to customize the renderer used 
						to render an item.
					]"
	note: "This class needs some improvement (bad performance of some implementations)"
	date: "2005/07/20"
	revision: "1.4"	

deferred class TRAFFIC_2D_DRAWABLE_CONTAINER [ELEMENT -> HASHABLE]
	
inherit

	EM_DRAWABLE_CONTAINER [EM_DRAWABLE]
		redefine
			initialize_events, 
			publish_mouse_event
		end
	
feature {NONE} -- Initialization

	initialize_events is
			-- Build events.
		do
			Precursor
			create mouse_motion_on_map_item_event
			create mouse_button_down_on_map_item_event
			create mouse_button_up_on_map_item_event
		end	
		
	make_with_map_and_default_renderer (a_map: TRAFFIC_MAP; a_renderer: TRAFFIC_2D_ITEM_RENDERER [ELEMENT]) is
			-- Initialize with `a_map' to visualize.
		require
			a_list_not_void: a_map /= Void
		do
			make
			map := a_map
			subscribe_for_map
			update_list
			default_renderer := a_renderer
			create item_renderers.make (100)
			create item_views.make (list.count * 2)
--			create views_array.make (a_list.count)
		end
		
feature -- Access

	map: TRAFFIC_MAP

	list: ARRAYED_LIST [ELEMENT] 
			-- Model of the map visualized by `Current'
			
	item_view (an_item: ELEMENT): EM_DRAWABLE is
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
	set_default_renderer (a_renderer: TRAFFIC_2D_ITEM_RENDERER [ELEMENT]) is
			-- Set 'default_renderer'
		require
			a_renderer_not_null: a_renderer /= Void
		do
			default_renderer := a_renderer	
		end
		
	set_renderer_for_item (a_renderer: TRAFFIC_2D_ITEM_RENDERER [ELEMENT]; an_item: ELEMENT) is
			-- Set `a_renderer' as renderer for item at position `a_index'
		require
			a_renderer_not_null: a_renderer /= Void
			an_item_not_null: an_item /= Void
		do
			-- Replace existing renderer if any
			if item_renderers.has (an_item) then
				item_renderers.replace (a_renderer, an_item)
			else
				--Resize if necessary 
				if item_renderers.count >= item_renderers.capacity*0.7 then
					item_renderers.resize (item_renderers.capacity * 2)
				end	
				item_renderers.put (a_renderer, an_item)
			end
		ensure
			item_has_the_new_renderer: item_renderers.item (an_item) = a_renderer
		end
	
	reset_renderer_for_item (an_item: ELEMENT) is
			-- 
		do
			if item_renderers.has (an_item) then
				item_renderers.remove (an_item)			
			end
		end
		
feature -- Basic operations

	render is
			-- Create all drawable objects to represent `map'
			-- inside `Current'.
			-- (wipe out before)
		local
			i: INTEGER
		do
			wipe_out
			item_views.wipe_out
			from 
				list.start
			until
				list.off
			loop
				render_item (list.item)
				list.forth
			end			
		end
		
	rerender_element (an_element: ELEMENT) is
			-- Rerender `an_item' that already has a view. 
		do
			-- Render the item
			if item_view (an_element) /= Void then
					render_item (an_element)
			end			
		end
		
		
feature -- Mouse Events

	publish_mouse_event (a_mouse_event: EM_MOUSE_EVENT) is
			-- Publish mouse event when `a_mouse_event' occured on `Current'.
			-- Descendants should redefine this feature 
			-- for only publishing their mouse events when mouse pointer
			-- is realy inside (non-composite) object or for 
			-- distributing mouse events to child objects of composite objects.
		local
			cursor: CURSOR
			transformed_mouse_event: EM_MOUSE_EVENT
			translation: EM_VECTOR_2D
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
--				cursor := item_views.
				from
					item_views.finish
				until
					item_views.off or transformed_mouse_event.caught
				loop
					if item_views.item_for_iteration /= Void then
						item_views.item_for_iteration.publish_mouse_event (transformed_mouse_event)						
					end
					item_views.back
				end
				
				-- Publish item mouse event with drawable object that caught the event.
				-- Also publish mouse event with map item.
				if transformed_mouse_event.caught then
					
					if not item_views.off then
						item_views.forth
						dispatch_mouse_on_item_event (item_views.item_for_iteration, transformed_mouse_event)
						dispatch_mouse_on_map_item_event (item_views.key_for_iteration, transformed_mouse_event)
					end
							
					-- Propagate to caller if event was caught.
					a_mouse_event.set_caught (True)					
				end
				
			end			
		end	

	mouse_motion_on_map_item_event: EM_EVENT_CHANNEL [TUPLE [ELEMENT]]
			-- Mouse motion over map item event,
			-- gets published when mouse is moved over drawable item,
			-- map element is passed as first argument to subscribers,
			-- as optional second argument the appropriate EM_MOUSE_EVENT is passed
	
	mouse_button_up_on_map_item_event: EM_EVENT_CHANNEL [TUPLE [ELEMENT]]
			-- Mouse button pressed over map item event,
			-- gets published when mouse is pressed over item,
			-- map element is passed as first argument to subscribers,
			-- as optional second argument the appropriate EM_MOUSE_EVENT is passed
	
	mouse_button_down_on_map_item_event: EM_EVENT_CHANNEL [TUPLE [ELEMENT]]
			-- Mouse button released over map item event,
			-- gets published when mouse is released over item,
			-- map element is passed as first argument to subscribers,
			-- as optional second argument the appropriate EM_MOUSE_EVENT is passed
			
feature {NONE} -- Dispatching
			
	dispatch_mouse_on_map_item_event (a_map_item: ELEMENT; a_mouse_event: EM_MOUSE_EVENT) is
			-- Dispatch mouse on map item event.
		do
			-- Only dispatch when events are initialized.
			if events_initialized then
				inspect
					a_mouse_event.type			
				when Em_mousemotion_event then
					mouse_motion_on_map_item_event.publish ([a_map_item, a_mouse_event])
				when Em_mouse_button_down_event then
					mouse_button_down_on_map_item_event.publish ([a_map_item, a_mouse_event])
				when Em_mouse_button_up_event	then
					mouse_button_up_on_map_item_event.publish ([a_map_item, a_mouse_event])
				end				
			end											
		end		
			
feature -- Update Mechanism

	update_list is
			-- Update the list of all map items.
		deferred
		end
		
	process_changed_map is
			-- Render map again to update all changes.
		do
			-- Just render everything.
			update_list
			render
		end		
		
	process_changed_item (an_element: ELEMENT) is
			-- Change view for item at index `i'.
			-- (Render it again)
		require
			an_element_exists: an_element /= Void
		do
			-- TODO: Rerender i-th item and replace it in `Current'.
			update_list
			render_item (an_element)			
		end
			
	process_inserted_item (an_element: ELEMENT) is
			-- Insert view for item at index `i'.
		require
			an_element_exists: an_element /= Void
		do
			-- TODO: Rerender i-th item and replace it in `Current'.
--			list.start
--			list.search (an_element)
			update_list
			render			
		end
			
	process_removed_item (an_element: ELEMENT) is
			-- Remove view for item at index `i'.
		require
			an_element_exists: an_element /= Void
		do
			update_list
			if item_renderers.has (an_element) then
				item_renderers.remove (an_element)
			end			
			if item_views.has (an_element) then
				item_views.remove (an_element)
			end
			-- TODO: Only remove item at position i in container.
			render			
		end	


feature {NONE} -- Implementation




	default_renderer: TRAFFIC_2D_ITEM_RENDERER [ELEMENT]
	-- Renderer used to render an item
				
	item_renderers: DS_HASH_TABLE [TRAFFIC_2D_ITEM_RENDERER [ELEMENT], ELEMENT]
			-- Renderers used to render items that use a proprietary renderer
			
	item_views: DS_HASH_TABLE [EM_DRAWABLE, ELEMENT]
			-- Drawable objects that represent a map item
			
--	views_array: ARRAYED_LIST [EM_DRAWABLE]
--			-- Views per item index.
--
	render_item (an_element: ELEMENT) is
			-- Render item `i' of `map'
			-- and extend `Current' with its view
			-- (discard any existing view).
		require
			an_element_exists: an_element /= Void
		local
			item_renderer: TRAFFIC_2D_ITEM_RENDERER [ELEMENT]
			view: EM_DRAWABLE
		do
			--Check for specialized renderer for this item
			if item_renderers.has (an_element) then
				item_renderer := item_renderers.item (an_element)
			else
				--If none available take the default_renderer	
				item_renderer := default_renderer				
			end

			-- Remove exisiting view for this item (if any).
			if item_views.has (an_element) then
				view := item_views.item (an_element)
				if view /= Void then
					delete (view)
				end
			end

			-- Ensure that `views_array' has enough capacity.
--			if views_array.count < list.count then
--				resize_views_array
--			end		
			
			-- Add new view if there is a renderer.			
			if item_renderer /= Void then				
				view := item_renderer.render (an_element)
				if item_views.capacity < list.count then
					item_views.resize (list.count * 2)
				end		
				extend (view)
				item_views.put (view, an_element)					
--				views_array.put_i_th (view, i)
--			else
--				views_array.put_i_th (Void, i)
			end
		end
		
--	resize_views_array is
--			-- Ensure that `views_array' is big enough to contain as much item as in `map'.
--		do
--			if list.count > views_array.count then
--				from
--				until
--					views_array.count = list.count					
--				loop
--					views_array.force (Void)					
--				end
--			end
--		end
		
		
	subscribe_for_map is 
			--  Subscribe `Current' to observe `map'.
		do
-- todo!!!
--			map.events.changed_event.subscribe (agent process_changed_map)
--			map.events.item_changed_event.subscribe (agent process_changed_item)
--			map.events.item_removed_event.subscribe (agent process_removed_item)
--			map.events.item_inserted_event.subscribe (agent process_inserted_item)
		end	
		
invariant
	map_not_void: list /= Void
	renderers_not_void: default_renderer /= Void and item_renderers /= Void
	item_views_not_void: item_views /= Void

end
