indexing
	description: "Implementation of COMMANDS from The Textbook TOUCH"
	date: "2005/08/25"
	revision: "1.0"

class
	COMMANDS

inherit
	COMMANDS_PREDEFINES
feature -- Basic Operations

	build_line_8 is
		-- Recreate part of Line 8
		do
			Simple_Line_8.remove_all_sections

			-- No need to add Station_Balard, since
			-- remove_all_sections retains the 'one_end'.
			Simple_Line_8.extend_place (Place_La_Motte_Picquet_Grenelle)
			Simple_Line_8.extend_place (Place_Invalides)

			-- We stop adding stations, to display some results:
			Console.show (Simple_Line_8.count)
			Console.show (Simple_Line_8.other_end.name)
			Console.show (Simple_Line_8.one_end.name)
			
		end
		
		
	build_line_8_full (a_runtime: TOUCH_EXAMPLE_RUNTIME) is
			-- Recreate part of Line 8 without using any predefined objects
		local
			line: TRAFFIC_LINE
			simple_line: TRAFFIC_SIMPLE_LINE
		do
			-- Get Line 8 from map
			line := a_runtime.map.line ("tram 8")

			-- Assignment attempt
			simple_line ?= line
			
			if simple_line /= Void then
				simple_line.remove_all_sections
				simple_line.extend_place ( a_runtime.map.place ("place La Motte - Picquet - Grenelle"))
				simple_line.extend_place ( a_runtime.map.place ("place Invalides"))
			end	
			
			-- Remove commentary-symbols to have line 8 highlighted
			--show_line_8
			
		end

feature -- Additional features
	show_line_8 (a_runtime: TOUCH_EXAMPLE_RUNTIME) is
			-- Highlight the "tram 8" line
		local
			line_section_renderer: TRAFFIC_LINE_SECTION_RENDERER
			line: TRAFFIC_LINE
		do
			line := a_runtime.map.line("tram8")
			
			-- Create the line section renderer and set color to black and width to 4
			create line_section_renderer.make_with_map (a_runtime.map)
			line_section_renderer.set_line_color (create {EM_COLOR}.make_black)
			line_section_renderer.set_line_width (4)
			
			-- Set special renderer
			a_runtime.map_widget.set_line_special_renderer (line_section_renderer, line)
		end
		
end -- class COMMANDS
