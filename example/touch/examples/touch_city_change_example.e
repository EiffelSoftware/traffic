indexing
	description: "Simple Traffic-Map Example"
	author: "Roger Kueng"
	date: "2005/06/20"
	revision: "alpha"

class
	TOUCH_CITY_CHANGE_EXAMPLE

inherit
	TOUCH_EXAMPLE
		redefine
			name,
			run_with_scene
		end

feature -- Access

	name: STRING is
		once
			Result := Current.generating_type
		end
		
	description: STRING is
		once
			Result := "An Example Text Output whichisverylong. This Example just plantsanewplace called 'Treasure'. Hunt The Treasure to get it. WordSpanningMoreThanOneLinehahahaah"
		end
		
	example_scene: TOUCH_SIMPLE_TRAFFIC_SCENE

feature -- Basic operations
	run_with_scene (exit_scene: EM_SCENE): EM_SCENE is
			-- 
		do
			example_scene := create {TOUCH_SIMPLE_TRAFFIC_SCENE}.make_with_zurich_big (Current)
			example_scene.set_next_scene (exit_scene)
			Result := example_scene
		end
		
	run (a_runtime: TOUCH_EXAMPLE_RUNTIME) is
			-- 
		local 
			new_place: TRAFFIC_PLACE
		do
			a_runtime.console_out ("Example Start");
			
			create new_place.make_with_position ("Treasure", 900, 800)

			a_runtime.map.add_place (new_place)
			
			a_runtime.console_out ("Example Done")
			example_scene.map_widget.subscribe_to_clicked_place_event (agent process_clicked_place)
		end
		


feature {NONE} -- Implementation

	process_clicked_place (place: TRAFFIC_PLACE; m_event: EM_MOUSEBUTTON_EVENT) is
			-- User clicked on a place in the map
		do
			if m_event.is_left_button then
				if place.information /= Void then				
					example_scene.console.put_text (place.information.description)
				end
				example_scene.console.put_line (place.name)
			end			
		end

invariant
	invariant_clause: True -- Your invariant here

end -- class TOUCH_CITY_CHANGE_EXAMPLE
