indexing
	description: "Implementation of FANCY_LINE from The TOUCH Textbook"
	author: "Roger Kueng"
	date: "2005/07/12"
	revision: "1.1"

class
	COMMANDS

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
			Result := "Implementation of the COMMAND example from the Textbook TOUCH"
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
		local
			map_factory: TRAFFIC_MAP_FACTORY
		do
			map := a_runtime.map
			runtime := a_runtime
			Console := a_runtime.console
			
			create Louvre.make_with_place_and_map_widget (a_runtime.map.place ("Musee du Louvre"), a_runtime.map_widget)
			
			create Line8.make_with_line_and_map_widget (a_runtime.map.line ("tram 8"), a_runtime.map_widget)
			
			
			create map_factory.make
			map_factory.build_traffic_type ("tram")
			
			map_factory.build_simple_line ("simple line with funky name", "tram", map)
			
			Simple_Line8 ?= map_factory.simple_line
			
			Simple_Line8.extend_place (Place_Balard)
			
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
			Simple_Line8.remove_all_sections
			-- No need to add Station_Balard, since
			-- remove_all_sections retains the 'one_end'.
			Simple_Line8.extend_place (Place_La_Fourche)
			Simple_Line8.extend_place (Place_Bastille)
			-- We stop adding stations, to display some results:
			Console.show (Simple_Line8.count)
			Console.show (Simple_Line8.other_end.name)
		end
		
feature {NONE} -- implementation

	example_scene: TOUCH_SIMPLE_TRAFFIC_SCENE

	Louvre: TOUCH_GRAPHICAL_TRAFFIC_PLACE
	
	Line8: TOUCH_GRAPHICAL_TRAFFIC_LINE

	Simple_Line8: TRAFFIC_SIMPLE_LINE

	Route1: TOUCH_GRAPHICAL_TRAFFIC_ROUTE
	
	Console: TOUCH_CONSOLE
	
	map: TRAFFIC_MAP
	
	runtime: TOUCH_EXAMPLE_RUNTIME
	
invariant
	invariant_clause: True -- Your invariant here

end -- class COMMANDS
