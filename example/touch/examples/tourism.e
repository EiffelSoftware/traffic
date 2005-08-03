indexing
	description: "Implementation of the TOURISM class from The Textbook TOUCH"
	author: "Roger Kueng"
	date: "2005/07/22"
	revision: "1.0"

deferred class
	TOURISM

inherit
	TOUCH_EXAMPLE
		redefine
			run_with_scene,
			pictures,
			default_create
		end
	EM_SHARED_BITMAP_FACTORY
		undefine
			copy,
			is_equal,
			default_create
		end
		
--create 
--	make
	
feature -- Initialization
	default_create is
			-- 
		do
			--default_create
			Precursor {TOUCH_EXAMPLE}
			Precursor {EM_SHARED_BITMAP_FACTORY}
			
			create pictures.make_default
			
			bitmap_factory.create_bitmap_from_image ("images/examples/example_1.png")
			if bitmap_factory.last_bitmap /= Void then
				pictures.force_last (bitmap_factory.last_bitmap) 
			end
		end
		
feature -- Access
	description: STRING is
			-- 
		once
			Result := "Implementation of the PREVIEW example class from the TOUCH Textbook"
		end

	pictures: DS_LINKED_LIST [EM_BITMAP]

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
		do
--			example_scene.hide (example_scene.map_widget)

			--Set new default place renderer			
			a_runtime.map_widget.set_default_place_renderer (create {TOUCH_PLACE_RENDERER}.make_with_map (a_runtime.map))


			create Louvre.make_with_place_and_map_widget (a_runtime.map.place ("Musee du Louvre"), a_runtime.map_widget)
			
			create Line8.make_with_line_and_map_widget (a_runtime.map.line ("tram 8"), a_runtime.map_widget)
			
			
			
			--Create Passenger
--			create Passenger.make_on_map_place (a_runtime.map, a_runtime.map.place ("Tour Eiffel"))
--			create passenger_drawable.make_from_passenger (Passenger)
			
--			bitmap_factory.create_bitmap_from_image ("images/star.png")
--			passenger_drawable.set_picture (bitmap_factory.last_bitmap)
--			example_scene.start_animating (passenger_drawable)
			
--			a_runtime.map_widget.extend (passenger_drawable)
			
			create Route1.make_with_scene_and_map_widget (example_scene, a_runtime.map_widget)
			
			Route1.extend (a_runtime.map.place ("Tour Eiffel"))
			Route1.extend (a_runtime.map.place ("Musee du Louvre"))
			Route1.extend (a_runtime.map.place ("Notre Dame"))
			Route1.calculate_shortest_path
			
			explore
			
		end

feature  -- Deferred
	explore is
		deferred
		end
		
feature {NONE} -- implementation

	example_scene: TOUCH_SIMPLE_TRAFFIC_SCENE

	Louvre: TOUCH_GRAPHICAL_TRAFFIC_PLACE
	
	Line8: TOUCH_GRAPHICAL_TRAFFIC_LINE
	
--	Passenger: TOUCH_PASSENGER
--	passenger_drawable: MAP_WIDGET_PASSENGER_DRAWABLE
	
	Route1: TOUCH_GRAPHICAL_TRAFFIC_ROUTE
invariant
	invariant_clause: True -- Your invariant here

end -- class EXAMPLE_1
