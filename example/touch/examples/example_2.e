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
	EM_SHARED_BITMAP_FACTORY
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
	run_with_scene (exit_scene: EM_SCENE): EM_SCENE is
			-- 
		do
			example_scene := create {TOUCH_SIMPLE_TRAFFIC_SCENE}.make_with_paris (Current)
			example_scene.set_next_scene (exit_scene)
			Result := example_scene	
		end
		
	run (a_runtime: TOUCH_EXAMPLE_RUNTIME) is
			-- 
		local
			map_factory: TRAFFIC_MAP_FACTORY
		do
			map := a_runtime.map
			runtime := a_runtime

			create Louvre.make_with_place_and_map_widget (a_runtime.map.place ("Musee du Louvre"), a_runtime.map_widget)
			
			create Line8.make_with_line_and_map_widget (a_runtime.map.line ("tram 8"), a_runtime.map_widget)
			
			
			create map_factory.make
			map_factory.build_traffic_type ("tram")
			
			map_factory.build_simple_line ("simple line with funky name", "tram", map)
			
			simple_line_8 ?= map_factory.simple_line
			
			--Set new default place renderer			
			a_runtime.map_widget.set_default_place_renderer (create {TOUCH_PLACE_RENDERER}.make_with_map (a_runtime.map))

			--Create Passenger
			create Passenger.make_on_map_place (a_runtime.map, a_runtime.map.place ("Tour Eiffel"))
			create passenger_drawable.make_from_passenger (Passenger)
			
			bitmap_factory.create_bitmap_from_image ("images/star.png")
			passenger_drawable.set_picture (bitmap_factory.last_bitmap)
			example_scene.start_animating (passenger_drawable)
			
			a_runtime.map_widget.extend (passenger_drawable)
			
			change_line
			
		end
		
feature -- Obsolete

feature -- Inapplicable

feature {NONE} -- Implementation
	change_line is
		-- Show some city info.
		local
			line_section_renderer: TRAFFIC_LINE_SECTION_RENDERER
		do
			simple_line_8.remove_all_sections
			
			simple_line_8.extend_place (map.place ("Tour Eiffel"))
			simple_line_8.extend_place (map.place ("Musee du Louvre"))
			simple_line_8.extend_place (map.place ("Notre Dame"))

			simple_line_8.remove_all_sections
			
			simple_line_8.extend_place (map.place ("Sacre Coeur"))
			simple_line_8.extend_place (map.place ("Musee du Louvre"))
			
			
--			map.add_line (simple_line_8)
			
			runtime.console_out ("simple_line_8.count: " + simple_line_8.count.out) 


			create Route1.make_with_scene_and_map_widget (example_scene, runtime.map_widget)			
			Route1.extend (runtime.map.place ("Tour Eiffel"))
			Route1.extend (runtime.map.place ("Musee du Louvre"))
			Route1.extend (runtime.map.place ("Notre Dame"))
			Route1.calculate_shortest_path

			
			create line_section_renderer.make_with_map (map)
			line_section_renderer.set_line_width (10)
			line_section_renderer.set_line_color (create {EM_COLOR}.make_white)
			runtime.map_widget.set_line_special_renderer (line_section_renderer, simple_line_8)
			runtime.map_widget.render
		end
		
feature {NONE} -- implementation

	example_scene: TOUCH_SIMPLE_TRAFFIC_SCENE

	Louvre: TOUCH_GRAPHICAL_TRAFFIC_PLACE
	
	Line8: TOUCH_GRAPHICAL_TRAFFIC_LINE

	simple_line_8: TRAFFIC_SIMPLE_LINE
	
	Passenger: TOUCH_PASSENGER

	passenger_drawable: MAP_WIDGET_PASSENGER_DRAWABLE
	
	Route1: TOUCH_GRAPHICAL_TRAFFIC_ROUTE
	
	map: TRAFFIC_MAP
	runtime: TOUCH_EXAMPLE_RUNTIME
	
invariant
	invariant_clause: True -- Your invariant here

end -- class EXAMPLE_2
