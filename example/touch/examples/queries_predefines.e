indexing
	description: "Contains all the predefines and classes to run 'queries'"
	date: "2005/08/25"
	revision: "1.0"

deferred class
	QUERIES_PREDEFINES

inherit
	TOUCH_EXAMPLE
		undefine
			default_create	
		redefine
			run_with_scene
		end
	PREDEFINED_OBJECTS_PARIS
		undefine
			copy,
			is_equal,
			default_create
		end
	EM_SHARED_BITMAP_FACTORY
		undefine
			copy,
			is_equal,
			default_create
		end
		

feature -- Initialization
	default_create is
			-- 
		do
			-- default_create
			Precursor {TOUCH_EXAMPLE}
			Precursor {EM_SHARED_BITMAP_FACTORY}
			
			create pictures.make_default
			-- Load example picture
			bitmap_factory.create_bitmap_from_image ("images/examples/example_queries.png")
			if bitmap_factory.last_bitmap /= Void then
				pictures.force_last (bitmap_factory.last_bitmap) 
			end
		end
	
feature -- Access
	description: STRING is
		once
			Result := "Do some queries. (Add your own queries to the code)"
		end

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
			-- Assign some predefines
			map := a_runtime.map
			runtime := a_runtime
			
			Console := a_runtime.console
			Paris := map

			-- Enlarge Console
			example_scene.big_console

			-- Set new default place renderer	
			a_runtime.map_widget.set_default_place_renderer (create {TOUCH_PLACE_RENDERER}.make_with_map (a_runtime.map))

			Line_8 := map.line ("tram 8")
			
			Simple_Line_8 ?= Line_8
			
			if Simple_Line_8 /= Void then
				-- Run the Example Code
				queries
			else
				
			end
			
		end
		

feature -- Main Example Features
	queries is
		deferred
		end

		
feature {NONE} -- implementation
	example_scene: TOUCH_SIMPLE_TRAFFIC_SCENE

	runtime: TOUCH_EXAMPLE_RUNTIME

	map: TRAFFIC_MAP

feature -- Predefines
	Line_8: TRAFFIC_LINE
	
	Simple_Line_8: TRAFFIC_SIMPLE_LINE
	
	Paris: TRAFFIC_MAP
	
	Console: TOUCH_CONSOLE

end -- class QUERIES_PREDEFINES
