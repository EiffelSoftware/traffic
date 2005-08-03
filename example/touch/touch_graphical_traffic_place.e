indexing
	description: "[
				class to visualize a TRAFFIC_PLACE
				]"
	author: "Roger Kueng"
	date: "2005/07/12"
	revision: "1.0"

class
	TOUCH_GRAPHICAL_TRAFFIC_PLACE
inherit
	TOUCH_TIMING

create
	make_with_place_and_map_widget
	
feature -- Initialization
	
	make_with_place_and_map_widget (a_place: TRAFFIC_PLACE; a_map_widget: TRAFFIC_MAP_WIDGET) is
			-- 
		require
			a_place_not_void: a_place /= Void
			a_map_widget_not_void: a_map_widget /= Void
		do
			place := a_place
			map_widget := a_map_widget
			
			wait_time := 5000
		ensure
			place_set: place = a_place
			map_widget_set: map_widget = a_map_widget
		end

feature -- Access

	wait_time: INTEGER
	
	place: TRAFFIC_PLACE

	map_widget: TRAFFIC_MAP_WIDGET

feature -- Basic operations
	feature spotlight is
			-- 
		local
			place_renderer: TRAFFIC_PLACE_RENDERER	
		do				
			
			create place_renderer.make_with_map (map_widget.map)
			place_renderer.set_place_color( create {EM_COLOR}.make_with_rgb (255, 255, 255))
			place_renderer.set_size_extension (20)

			map_widget.set_place_special_renderer (place_renderer, place)
			map_widget.render
			
			wait (wait_time)

			map_widget.reset_place_special_renderer (place)
			map_widget.render
			
		end

invariant
	invariant_clause: True -- Your invariant here

end -- class TOUCH_GRAPHICAL_TRAFFIC_PLACE
