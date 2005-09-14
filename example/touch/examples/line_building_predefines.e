indexing
	description: "Contains all the predefines and classes to run 'build_a_line'"
	date: "2005/08/25"
	revision: "1.0"

deferred class
	LINE_BUILDING_PREDEFINES

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
	TRAFFIC_TYPE_FACTORY
		undefine
			copy,
			is_equal,
			default_create
		end
		
feature -- Initialization
	default_create is
			-- 
		do
			make
			-- default_create
			Precursor {TOUCH_EXAMPLE}
			Precursor {EM_SHARED_BITMAP_FACTORY}
			
			create pictures.make_default
			-- Load example picture
			bitmap_factory.create_bitmap_from_image ("images/examples/example_line_building.png")
			if bitmap_factory.last_bitmap /= Void then
				pictures.force_last (bitmap_factory.last_bitmap) 
			end
		end
		
feature -- Access
	description: STRING is
		once
			Result := "Build a fancy new line"
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

			-- Set new default place renderer	
			a_runtime.map_widget.set_default_place_renderer (create {TOUCH_PLACE_RENDERER}.make_with_map (a_runtime.map))
			
			-- Run the Example Code
			build_a_line
			
		end
		

feature -- Main Example Features
	build_a_line is
		deferred
		end
	
	build_a_line_with_factory is
		deferred
		end
		
	build_a_line_independent is
		deferred
		end		
		
feature {NONE} -- implementation
	example_scene: TOUCH_SIMPLE_TRAFFIC_SCENE

feature -- Predefines
	map: TRAFFIC_MAP

	runtime: TOUCH_EXAMPLE_RUNTIME

	Paris: TRAFFIC_MAP
	
	Console: TOUCH_CONSOLE

end -- class LINE_BUILDING_PREDEFINES
