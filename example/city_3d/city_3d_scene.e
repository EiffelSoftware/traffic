indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	CITY_3D_SCENE
	
inherit
	
	EM_COMPONENT_SCENE
		redefine
--			redraw,
			handle_key_down_event --,
--			handle_mouse_button_down_event,
--			handle_mouse_motion_event
		end
	
creation make

feature -- Interface
	
	make is
			-- Creation procedure.
		local 
			checkbox: EM_CHECKBOX
--			map_panel: EM_PANEL
			toolbar_panel: EM_PANEL
			map: MAP
		do
			make_component_scene
			
			create checkbox.make_from_text ("foo")
			create toolbar_panel.make_from_dimension ((window_width*0.25).rounded,window_height)
--			create map_panel.make_from_dimension ((window_width*0.75).rounded,window_height)
			
			-- Toolbar Panel
			toolbar_panel.set_background_color (create {EM_COLOR}.make_with_rgb (150,255,150))
			toolbar_panel.set_position ((window_width*0.75).rounded ,0)
			add_component (toolbar_panel)
			
--			-- Map Panel
--			map_panel.set_background_color (create {EM_COLOR}.make_with_rgb (150,150,255))
--			map_panel.set_position (0,0)
--			add_component (map_panel)
			
			
			checkbox.set_position (50,50)
			checkbox.set_background_color (create {EM_COLOR}.make_with_rgb (255,255,255))
			checkbox.set_dimension (50,20)
			toolbar_panel.add_widget (checkbox)
			
			
			if video_subsystem.opengl_enabled then
--				create map.make
----				sierpinski.set_position (0, 40)
----				sierpinski.set_dimension (512, 400)
--				add_component (map)
			else
				io.put_string ("OpenGL disabled: Sierpinski pyramid disabled%N")
			end
			
			
			create event_loop.make_poll
			event_loop.key_down_event.subscribe (agent handle_key_down_event (?))
			event_loop.mouse_button_down_event.subscribe (agent handle_mouse_button_down_event (?))
			event_loop.mouse_motion_event.subscribe (agent handle_mouse_motion_event (?))	
		end
		
--	redraw is
--			-- redraw screen
--		do
--			gl_clear_color (1, 0, 1, 0)
--			gl_clear (em_gl_color_buffer_bit | em_gl_depth_buffer_bit)
--		end
--		
		
feature -- Event handling

	handle_key_down_event (event: EM_KEYBOARD_EVENT) is
			-- Handle key down event
			
		do
			if event.key = event.sdlk_escape then
				next_scene := void
				event_loop.stop
				
			end
			
		end
	
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
		
feature{NONE} -- Implementation
		
	Window_width: INTEGER is 800 --1024
			-- Window width
			
	Window_height: INTEGER is 600 -- 768
			-- Window height
		
		

end -- class CITY_3D_SCENE
