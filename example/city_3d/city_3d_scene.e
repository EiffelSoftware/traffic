indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	CITY_3D_SCENE
	
inherit
	
	EM_COMPONENT_SCENE
--		redefine
--			redraw,
--			handle_key_down_event --,
--			handle_mouse_button_down_event,
--			handle_mouse_motion_event
--		end
	
	SHARED_CONSTANTS
		export {NONE} all end
	
creation make

feature -- Interface
	
	make is
			-- Creation procedure.
		local 
			checkbox: EM_CHECKBOX
			toolbar_panel: EM_PANEL
			map: MAP
		do
			make_component_scene
			create checkbox.make_from_text ("foo")
			create toolbar_panel.make_from_dimension ((window_width*0.25).rounded,window_height)
			
			-- Has to be defined before toolpanel, because otherwise
			-- gl_clear_color cleans whole screen
			if video_subsystem.opengl_enabled then
				create map.make
				map.set_position (0,0)

				add_component (map)
			else
				io.put_string ("OpenGL disabled: Sierpinski pyramid disabled%N")
			end
			
			map.load_map ("./zurich_little.xml")
			
			-- Toolbar Panel
			toolbar_panel.set_background_color (create {EM_COLOR}.make_with_rgb (150,255,150))
			toolbar_panel.set_position ((window_width*0.75).rounded ,0)
			add_component (toolbar_panel)

			
			
			checkbox.set_position (50,50)
			checkbox.set_background_color (create {EM_COLOR}.make_with_rgb (255,255,255))
			checkbox.set_dimension (50,20)
			toolbar_panel.add_widget (checkbox)
			
			
--			create map_file.make_from_file ("./zurich_little.xml")
			
			
--			create event_loop.make_poll
------			event_loop.key_down_event.subscribe (agent handle_key_down_event (?))
----			event_loop.mouse_button_down_event.subscribe (agent handle_mouse_button_down_event (?))
----			event_loop.mouse_motion_event.subscribe (agent handle_mouse_motion_event (?))	
		end
		
--	redraw is
--			-- redraw screen
--		do
--			gl_clear_color (1, 0, 1, 0)
--			gl_clear (em_gl_color_buffer_bit | em_gl_depth_buffer_bit)
--		end
--		
		
feature -- Event handling

--	handle_key_down_event (event: EM_KEYBOARD_EVENT) is
--			-- Handle key down event
--			
--		do
--			if event.key = event.sdlk_escape then
--				next_scene := void
--				event_loop.stop
--				
--			end
--			
--		end
--	
--	handle_mouse_motion_event (event: EM_MOUSEMOTION_EVENT) is
--			-- Handle mouse motion event
--		do
--			
--		end
--		
--	handle_mouse_button_down_event (event: EM_MOUSEBUTTON_EVENT) is
--			-- Handle mouse down event
--		do
--			
--		end
--		
			
end -- class CITY_3D_SCENE
