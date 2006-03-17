indexing
	description: "The 'main scene' for the preview example of touch"
	date: "$Date: 2006/01/17 00:24:59 $"
	revision: "$Revision: 1.57 $"

class
	PREVIEW_3D_SCENE
	
inherit
	
	TOUCH_3D_SCENE
		rename make as make_touch_scene
		end
	
creation
	make

feature -- Interface
	
	make is
			-- Creation procedure
		do
			make_touch_scene

			-- Button to load Paris.xml file
			create load_button.make_from_text ("Load map")			
			
			-- Load Button
			load_button.set_position ((200-load_button.width) // 2, 110)
			load_button.clicked_event.subscribe (agent load_button_clicked)
			load_button.set_background_color (create {EM_COLOR}.make_with_rgb (127, 127, 127))
			toolbar_panel.add_widget (load_button)

			-- Button to start the preview example
			create start_button.make_from_text ("Start Preview")
			
			-- Start Button
			start_button.set_position ((200-start_button.width) // 2, 230)
			start_button.clicked_event.subscribe (agent start_button_clicked)
			start_button.set_background_color (create {EM_COLOR}.make_with_rgb (127, 127, 127))
			toolbar_panel.add_widget (start_button)

			create preview
			preview.run (map, console)			
		end
		
feature -- Event handling

	load_button_clicked is
			-- "Load" button has been clicked.
		require
			load_button /= Void
		do
			load_button.set_pressed (False)

		--	map.load_map ("../map/paris.xml")

		--	map.set_lines_highlighted (True)
		--	map.set_single_line_highlighted(Line8)
		--	console_textarea.set_text ("...")

		rescue
			catch(24)
			catch(8)
--			map_file_name := loaded_file_name
			add_component(create {EM_MESSAGE_DIALOG}.make_from_error(original_tag_name))
			retry
		end
		
-- ## start button (does not yet do anything)		
	start_button_clicked is
			-- "Start" button has been clicked.
		require
			start_button /= Void
		do
			start_button.set_pressed (False)
			
			console.set_text ("Starting the preview example from chapter 2...")

--			console_textarea.set_text ("time")
--			map.draw
--			map.set_single_line_highlighted (Line8)
--			console_textarea.set_text ("timeout")

	--		map.set_single_line_un_highlighted (Line8)
	--		map.set_lines_highlighted (False)
			preview.run(map, console)
		
		rescue
			catch(24)
			catch(8)
--			map_file_name := loaded_file_name
			add_component(create {EM_MESSAGE_DIALOG}.make_from_error(original_tag_name))
			retry
		end
		

feature -- Widgets

	preview: PREVIEW

	load_button: EM_BUTTON
			-- Button to load the xml file
			
	start_button: EM_BUTTON
			-- Button to start the preview exampe		
	
end -- class PREVIEW_3D_SCENE
