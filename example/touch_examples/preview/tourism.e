indexing
	description: "[
					Contains all the predefines and classes to run 'explore'.
					NOTE: 'Paris', 'Line8', 'Louvre' are not of the type of any TRAFFIC class.
					]"
	date: "2005/08/25"
	revision: "1.0"

deferred class
	TOURISM

inherit
--	PREVIEW_3D_APPLICATION
	--TOUCH_EXAMPLE
--		redefine
--		--	run_with_scene,--
--			default_create
--		end
	EM_SHARED_BITMAP_FACTORY
		undefine
		--	copy,
		--	is_equal,
		--	default_create
		end
		
feature -- Initialization
--	default_create is
--			-- 
--		do
--			-- default_create
--			Precursor {TOUCH_EXAMPLE}
--			Precursor {EM_SHARED_BITMAP_FACTORY}
--			
--			
			-- Load example picture
--			bitmap_factory.create_bitmap_from_image ("images/examples/example_preview.png")
--			if bitmap_factory.last_bitmap /= Void then
--				pictures.force_last (bitmap_factory.last_bitmap) 
--			end
--		end
		
feature -- Access
	description: STRING is
			-- 
		once
			Result := "The First example of TOUCH"
		end

--feature -- Basic operation
----	run_with_scene (exit_scene: EM_SCENE): EM_SCENE is
----			-- 
----		do
----			example_scene := create {TOUCH_SIMPLE_TRAFFIC_SCENE}.make_with_paris (Current)
----			example_scene.set_next_scene (exit_scene)
----			Result := example_scene	
----		end
----		
--	run (a_runtime: TOUCH_EXAMPLE_RUNTIME) is
--			-- 
--		do			
--			-- Set new default place renderer			
--			a_runtime.map_widget.set_default_place_renderer (create {TOUCH_PLACE_RENDERER}.make_with_map (a_runtime.map))
--
--			-- Create the 'Louvre' object
--			create Louvre.make_with_place_and_map_widget (a_runtime.map.place ("Musee du Louvre"), a_runtime.map_widget)

	run (a_runtime: TOUCH_3D_MAP_WIDGET) is
			-- 
		
		do  		
			-- Create Paris
			create Paris.make (a_runtime, "../map/paris.xml")

			-- Creation of 'Line8' object as once 


--			-- Create Passenger
--			create Passenger.make_on_map_place (a_runtime.map, a_runtime.map.place ("place Madeleine"))
--			create passenger_drawable.make_from_passenger (Passenger)
--
--			-- Add some simple sprite containing an animation and animate it.
--			create animation.make_from_file ("./pics/person.anim")
--			create sprite.make_from_animation (animation, 20000, 100)
--			sprite.set_do_loop (True)
--			sprite.start
----			example_scene.start_animating (sprite)
--			passenger_drawable.set_picture (sprite)
--			example_scene.start_animating (passenger_drawable)
--			
--			a_runtime.map_widget.extend (passenger_drawable)
--			
--			-- Create Route1
--			create Route1.make_with_scene_and_map_widget (example_scene, a_runtime.map_widget)			
--			Route1.extend (a_runtime.map.place ("Tour Eiffel"))
--			Route1.extend (a_runtime.map.place ("Musee du Louvre"))
--			Route1.extend (a_runtime.map.place ("Notre Dame"))
--			Route1.calculate_shortest_path
--
--			-- Create Route2
--			create Route2.make_with_scene_and_map_widget (example_scene, a_runtime.map_widget)			
--			Route2.extend (a_runtime.map.place ("place Madeleine"))
--			Route2.extend (a_runtime.map.place ("Musee du Louvre"))
--			Route2.extend (a_runtime.map.place ("Tour Eiffel"))
--			Route2.calculate_shortest_path
--			
			explore
--			
		end

feature  -- Example main feature
	explore is
		deferred
		end
		
--feature {NONE} -- Implementation
--	example_scene: TOUCH_SIMPLE_TRAFFIC_SCENE
--	passenger_drawable: MAP_WIDGET_PASSENGER_DRAWABLE
--
--	image: EM_BITMAP
--	sprite: EM_SPRITE
--	animation: EM_ANIMATION

feature -- Predefines
--	Louvre: TOUCH_GRAPHICAL_TRAFFIC_PLACE
	
	Louvre_Label: EM_LABEL
	
	Line8: TOUCH_LINE is 
		once
			Result := Paris.get_line("tram 8")  
		end
	
--	Passenger: TOUCH_PASSENGER

--	Paris: TRAFFIC_MAP_WIDGET
	
	Paris: TOUCH_MAP 		

--	Route1: TOUCH_GRAPHICAL_TRAFFIC_ROUTE
--	
--	Route2: TOUCH_GRAPHICAL_TRAFFIC_ROUTE
--	
	a_rep: TRAFFIC_LINE_REPRESENTATION
		

end -- class TOURISM
