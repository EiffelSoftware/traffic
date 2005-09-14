indexing
	description: "Contains all the predefines and classes to run 'build_line_8'."
	date: "2005/08/25"
	revision: "1.0"

deferred class
	COMMANDS_PREDEFINES

inherit
	TOUCH_EXAMPLE
		redefine
			run_with_scene,
			default_create
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
			bitmap_factory.create_bitmap_from_image ("images/examples/example_commands.png")
			if bitmap_factory.last_bitmap /= Void then
				pictures.force_last (bitmap_factory.last_bitmap) 
			end
		end
		
feature -- Access
	description: STRING is
			-- 
		once
			Result := "Remove the sections from line 8 and rebuild a part of it."
		end


feature -- Basic operation
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
			runtime := a_runtime
			map := a_runtime.map
			Console := a_runtime.console
			
			Simple_Line_8 ?= map.line ("tram 8")
			
			
			if Simple_Line_8 /= Void then
				build_line_8
			else
				a_runtime.console.put_text ("ERROR: Could not find the simple_line 'tram 8'")
			end			
		end


feature -- Example Main feature
	build_line_8 is
		deferred
		end

	build_line_8_full (a_runtime: TOUCH_EXAMPLE_RUNTIME) is
		deferred
		end

feature {NONE} -- Implementation
	example_scene: TOUCH_SIMPLE_TRAFFIC_SCENE

feature {NONE} -- Predefines
	map: TRAFFIC_MAP
	
	runtime: TOUCH_EXAMPLE_RUNTIME
	
	Console: TOUCH_CONSOLE
	
	Simple_Line_8: TRAFFIC_SIMPLE_LINE

end -- class COMMANDS_PREDEFINES
