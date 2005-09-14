indexing
	description: "Implementation of FANCY_LINE from The TOUCH Textbook"
	date: "2005/07/12"
	revision: "1.1"

class
	TOUR

inherit
	TOUCH_EXAMPLE
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
		
feature -- Access
	description: STRING is
			-- 
		once
			Result := "Implementation of the FANCY_LINE example from the Textbook TOUCH"
		end


feature -- Basic operations
	run_with_scene (exit_scene: EM_SCENE): EM_SCENE is
			-- Set the scene where we want our example to be run
		do
			example_scene := create {TOUCH_SIMPLE_TRAFFIC_SCENE}.make_with_paris (Current)
			example_scene.set_next_scene (exit_scene)
			Result := example_scene	
		end
		
	run (a_runtime: TOUCH_EXAMPLE_RUNTIME) is
			-- Entry point for the example
		do
			map := a_runtime.map
			runtime := a_runtime
			Console := a_runtime.console
			
			Paris := map
			
			create Line8.make_with_line_and_map_widget (a_runtime.map.line ("tram 8"), a_runtime.map_widget)

			--Set new default place renderer	
			a_runtime.map_widget.set_default_place_renderer (create {TOUCH_PLACE_RENDERER}.make_with_map (a_runtime.map))
			
			action
			
		end
		
feature -- Obsolete

feature -- Inapplicable

feature {NONE} -- Implementation
	action is
		-- Show some city info.
		do
			Console.show (Line8.line.count)
		end
		
feature {NONE} -- implementation

	example_scene: TOUCH_SIMPLE_TRAFFIC_SCENE

	Console: TOUCH_CONSOLE
	
	Line8: TOUCH_GRAPHICAL_TRAFFIC_LINE
	Paris: TRAFFIC_MAP
	map: TRAFFIC_MAP
	
	runtime: TOUCH_EXAMPLE_RUNTIME
	
invariant
	invariant_clause: True -- Your invariant here

end -- class TOUR
