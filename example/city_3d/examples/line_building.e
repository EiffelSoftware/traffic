indexing
	description: "Implementation of LINE_BUILDING from The TOUCH Textbook"
	author: "Roger Kueng"
	date: "2005/07/12"
	revision: "1.1"

class
	LINE_BUILDING

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
		end
	
feature -- Access
	description: STRING is
			-- 
		once
			Result := "Implementation of the LINE_BUILDING example from the Textbook TOUCH"
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
		local
			fancy_line: TRAFFIC_LINE
		do
			map := a_runtime.map
			runtime := a_runtime
			Paris := map

			--Set new default place renderer	
			a_runtime.map_widget.set_default_place_renderer (create {TOUCH_PLACE_RENDERER}.make_with_map (a_runtime.map))
			
			line_building
			
			fancy_line := map.line ("fancy line")
			
			a_runtime.console.show (fancy_line.terminal_2.name)
			a_runtime.console.show (fancy_line.terminal_1.name)
			
		end
		

feature {NONE} -- Implementation
	line_building is
		-- build a fancy new line
		local
			-- Note that our 'fancy_line' is of the type 'TRAFFIC_SIMPLE_LINE'
			fancy_line: TRAFFIC_SIMPLE_LINE
			fancy_line_section: TRAFFIC_LINE_SECTION
		do

			-- 'tram_type' is inherited from TRAFFIC_TYPE_FACTORY
			create fancy_line.make ("fancy line", tram_type, Paris)

			-- Extend the fancy_line by three stations
			fancy_line.extend_place (Place_Balard)
			fancy_line.extend_place (Place_Issy)
			fancy_line.extend_place (Place_Montrouge)

			-- Add the fancy line to the map
			Paris.add_line(fancy_line)
		end
	
	line_building_2 is
		-- another way of building a fancy new line using the TRAFFIC_MAP_FACTORY class
		local
			fancy_line: TRAFFIC_LINE
			map_factory: TRAFFIC_MAP_FACTORY
		do
			-- Create the map factory
			create map_factory.make
			-- Build a simple line in the factory
			map_factory.build_line ("fancy line", "tram", Paris)
			-- Get the created line
			fancy_line := map_factory.line

			--Build the line sections
			map_factory.build_line_section (Place_Balard.name, Place_Issy.name ,Void, Paris, fancy_line)
			map_factory.build_line_section (Place_Issy.name, Place_Montrouge.name ,Void, Paris, fancy_line)
			map_factory.build_line_section (Place_Montrouge.name, Place_Issy.name ,Void, Paris, fancy_line)
			map_factory.build_line_section (Place_Issy.name, Place_Balard.name ,Void, Paris, fancy_line)
		end
		
	line_building_3 is
		-- another way of building a fancy new line using no factory at all
		local
			fancy_line: TRAFFIC_LINE
			fancy_line_type: TRAFFIC_TYPE
			fancy_line_section: TRAFFIC_LINE_SECTION
		do
			-- Create the type 
			fancy_line_type := create {TRAFFIC_TYPE_TRAM}.make
			
			-- Create our fancy line
			create fancy_line.make ("fancy line", fancy_line_type)
			-- Add fancy line to the map 
			Paris.add_line (fancy_line)
			
			-- Create the first line section			
			-- If we leave out the Polypoints (Parameter 4) the line section connects
			-- the two places with a direct connection
			create fancy_line_section.make (Place_Balard, Place_Issy, fancy_line_type, Void)
			-- Add the line section to the map
			Paris.add_line_section (fancy_line_section)
			-- Add the line_section to the fancy line
			fancy_line.extend (fancy_line_section)

			-- Create the other line sections

			create fancy_line_section.make (Place_Issy, Place_Montrouge, fancy_line_type, Void)
			Paris.add_line_section (fancy_line_section)			
			fancy_line.extend (fancy_line_section)

			create fancy_line_section.make (Place_Montrouge, Place_Issy, fancy_line_type, Void)
			Paris.add_line_section (fancy_line_section)			
			fancy_line.extend (fancy_line_section)
			
			create fancy_line_section.make (Place_Issy, Place_Balard, fancy_line_type, Void)
			Paris.add_line_section (fancy_line_section)			
			fancy_line.extend (fancy_line_section)			
			
		end
		
		
	print_out_line (a_line: TRAFFIC_LINE) is
			-- 
		local
			line_sections: ARRAYED_LIST [TRAFFIC_LINE_SECTION]
		do
			line_sections := Paris.line_sections
			from
				line_sections.start
			until
				line_sections.after
			loop
				runtime.console_out ("line: " + line_sections.item.line.name)
				if line_sections.item.line = a_line then
					runtime.console_out ("destination: " + line_sections.item.destination.name)
					runtime.console_out ("origin: " + line_sections.item.origin.name)			
				end
				line_sections.forth
			end
		end
		
feature {NONE} -- implementation

	example_scene: TOUCH_SIMPLE_TRAFFIC_SCENE
	
	map: TRAFFIC_MAP
	Paris: TRAFFIC_MAP
	
	runtime: TOUCH_EXAMPLE_RUNTIME
	
invariant
	invariant_clause: True -- Your invariant here

end -- class LINE_BUILDING
