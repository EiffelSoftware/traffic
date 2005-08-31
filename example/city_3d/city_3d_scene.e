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
		end
	
	SHARED_CONSTANTS
		export {NONE} all end
	
creation make

feature -- Interface
	
	make is
			-- Creation procedure.
		local 
			checkbox: EM_CHECKBOX
			toolbar_panel: EM_PANEL
			combo_box: EM_COMBOBOX[STRING]
			button: EM_BUTTON
		do
			make_component_scene
			create checkbox.make_from_text ("Highlight lines")
			create toolbar_panel.make_from_dimension ((window_width*0.25).rounded,window_height)
			create combo_box.make_from_list (search_for_xml)
			create button.make_from_text ("Load map")
			
			-- Has to be defined before toolpanel, because otherwise
			-- gl_clear_color cleans whole screen
			if video_subsystem.opengl_enabled then
				create map.make
				map.set_position (0,0)
				add_component (map)
			else
				io.put_string ("OpenGL disabled: Map not loaded%N")
			end
			
			-- Toolbar Panel
			toolbar_panel.set_background_color (create {EM_COLOR}.make_with_rgb (150,255,150))
			toolbar_panel.set_position ((window_width*0.75).rounded ,0)
			add_component (toolbar_panel)
			
			-- Button
			button.set_position (50, 80)
--			button.set_dimension (50, 20)
			button.clicked_event.subscribe (agent button_clicked (button))
			button.set_background_color (create {EM_COLOR}.make_with_rgb (127,127,127))
			toolbar_panel.add_widget (button)

			-- Combobox
			combo_box.set_position (10,50)
			combo_box.set_dimension (150,20)
			combo_box.set_background_color (create {EM_COLOR}.make_with_rgb (255,255,255))
			combo_box.set_selected_index (1)
			combo_box.selection_change_event.subscribe (agent combo_selection_changed(?))
			toolbar_panel.add_widget (combo_box)
			
			-- Checkbox
			checkbox.set_position (10,350)
			checkbox.set_background_color (create {EM_COLOR}.make_with_rgb (255,255,255))
			checkbox.set_dimension (110,20)
			checkbox.checked_event.subscribe (agent checkbox_checked)
			checkbox.unchecked_event.subscribe (agent checkbox_unchecked)
			toolbar_panel.add_widget (checkbox)
			
--			create event_loop.make_poll
--			event_loop.key_down_event.subscribe (agent handle_key_down_event (?))
--			event_loop.mouse_button_down_event.subscribe (agent handle_mouse_button_down_event (?))
--			event_loop.mouse_motion_event.subscribe (agent handle_mouse_motion_event (?))
		end

		
feature -- Event handling
	
	checkbox_checked is
			-- Checkbox has been clicked
		do
			map.set_highlighted (true)
		end
		
	checkbox_unchecked is
			-- Checkbox has been clicked
		do
			map.set_highlighted (false)
		end

	button_clicked (button: EM_BUTTON) is
			-- Checkbox has been clicked
		do
			button.set_pressed (false)
			if map_file_name = void then
				map.load_map ("./zurich_little.xml")
			else
				map.load_map (map_file_name)
			end
		end
		
		combo_selection_changed (name: STRING) is
				-- Combo Box selection has been changed
			require
				name_exists: name /= void and then not name.is_empty
			do
				map_file_name := name
			ensure 
				map_file_name = name
			end

feature{NONE} -- Implementation

	map_file_name: STRING
		
	map: MAP
	
	search_for_xml: DS_LINKED_LIST[STRING] is
			-- Search for xml files
		local 	directory: DIRECTORY
		do
			create Result.make
			
			create directory.make_open_read ("./map")
			if directory.is_readable and not directory.is_empty then
				from directory.start
					directory.readentry
				until directory.lastentry = void
				loop
					if directory.lastentry.has_substring (".xml") then
						Result.force_last (directory.lastentry)
					end
					directory.readentry
				end
			end
		end

--	handle_key_down_event (event: EM_KEYBOARD_EVENT) is
--			-- Handle key down event
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
