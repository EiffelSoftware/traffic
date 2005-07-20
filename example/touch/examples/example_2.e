indexing
	description: "Implementation of Example 2 from The TOUCH Textbook"
	author: "Roger Kueng"
	date: "2005/07/12"
	revision: "1.1"

class
	EXAMPLE_2

inherit
	TOUCH_EXAMPLE
		redefine
			run_with_scene
		end
	ESDL_SHARED_BITMAP_FACTORY
		undefine
			copy,
			is_equal,
			default_create
		end
		
feature -- Access
	description: STRING is
			-- 
		once
			Result := "Implementation of Example 2 from the TOUCH Textbook"
		end

feature -- Miscellaneous

feature -- Basic operations
	run_with_scene (exit_scene: ESDL_SCENE): ESDL_SCENE is
			-- 
		do
			example_scene := create {TOUCH_SIMPLE_TRAFFIC_SCENE}.make_with_paris (Current)
			example_scene.set_next_scene (exit_scene)
			Result := example_scene	
		end
		
	run (a_runtime: TOUCH_EXAMPLE_RUNTIME) is
			-- 
		do

			create Louvre.make_with_place_and_map_widget (a_runtime.map.place ("Musee du Louvre"), a_runtime.map_widget)
			
			create Line8.make_with_line_and_map_widget (a_runtime.map.line ("tram 8"), a_runtime.map_widget)

			--Set new default place renderer			
			a_runtime.map_widget.set_default_place_renderer (create {TOUCH_PLACE_RENDERER}.make_with_map (a_runtime.map))

			--Create Passenger
			create Passenger.make_on_map_place (a_runtime.map, a_runtime.map.place ("Tour Eiffel"))
			create passenger_drawable.make_from_passenger (Passenger)
			
			bitmap_factory.create_bitmap_from_image ("images/star.png")
			passenger_drawable.set_picture (bitmap_factory.last_bitmap)
			example_scene.start_animating (passenger_drawable)
			
			a_runtime.map_widget.extend (passenger_drawable)
			
			create Route1.make_with_scene_and_map_widget (example_scene, a_runtime.map_widget)
			
			Route1.extend ( a_runtime.map.place ("Tour Eiffel"))
			Route1.extend ( a_runtime.map.place ("Musee du Louvre"))
			Route1.extend ( a_runtime.map.place ("Notre Dame"))
			Route1.calculate_shortest_path
			
			explore
			
		end
		
feature -- Obsolete

feature -- Inapplicable

feature {NONE} -- Implementation
	explore is
		-- Show some city info.
		do
--			Paris.display
			Louvre.spotlight
			Line8.highlight
			Route1.animate
			Passenger.move_route (Route1)
		end
		
feature {NONE} -- implementation

	example_scene: TOUCH_SIMPLE_TRAFFIC_SCENE

	Louvre: TOUCH_GRAPHICAL_TRAFFIC_PLACE
	
	Line8: TOUCH_GRAPHICAL_TRAFFIC_LINE
	
	Passenger: TOUCH_PASSENGER

	passenger_drawable: MAP_WIDGET_PASSENGER_DRAWABLE
	
	Route1: TOUCH_GRAPHICAL_TRAFFIC_ROUTE
invariant
	invariant_clause: True -- Your invariant here

end -- class EXAMPLE_2
