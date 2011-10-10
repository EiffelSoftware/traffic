note
	description : "Graphical Traffic application"

class
	APPLICATION

inherit
	KL_SHARED_FILE_SYSTEM

create
	execute

feature {NONE} -- Initialization

	execute
			-- Run application.
		local
			icon: EV_PIXMAP
			box: EV_VERTICAL_BOX
			map_cell: EV_CELL
		do
			create gui_application
			create window
			window.set_size (1200, 1000)
			window.set_title ("Interface")
			if file_system.file_exists (file_system.pathname_to_string (icon_path)) then
				create icon
				icon.set_with_named_file (file_system.pathname_to_string (icon_path))
				window.set_icon_pixmap (icon)
			end
			window.close_request_actions.extend (agent on_close)
			window.show

			create preview
			create map_cell
			create box
			box.extend (map_cell)
			box.extend (preview.console.text_area)
			box.disable_item_expand (preview.console.text_area)
			window.extend (box)

			map := preview.zurich_map
			if map /= Void then
				map.pixmap.set_size (window.client_width, window.client_height - preview.console.text_area.height)
				map.fit_to_window
				map_cell.extend (map.pixmap)
				map.pixmap.set_focus

				map.pixmap.resize_actions.extend (agent on_resize)
				map.on_scroll.extend_back (agent zoom)
				map.on_drag.extend_back (agent map.translate)

				gui_application.post_launch_actions.extend (agent preview.explore)
				gui_application.post_launch_actions.extend (agent map.update)
			end
			gui_application.launch
		end

feature {NONE} -- Implementation

	preview: QUERIES_AND_COMMANDS

	map: MAP

	gui_application: EV_APPLICATION
			-- Graphical application.

	window: EV_TITLED_WINDOW
			-- Main window.

	icon_path: KL_PATHNAME
			-- Path to application icon.
		once
			create Result.make
			Result.set_relative (True)
			Result.append_parent
			Result.append_name ("image")
			Result.append_name ("traffic_icon.png")
		end

feature {NONE} -- Map manipulation

	zoom (up: BOOLEAN)
			-- Scale `map'.
		do
			if up then
				map.zoom_in
			else
				map.zoom_out
			end
		end

feature {NONE} -- Event handling

	on_close
			-- Close `window' and exit.
		do
			window.destroy
			gui_application.destroy
		end

	on_resize (x: INTEGER; y: INTEGER; width: INTEGER; height: INTEGER)
			-- Resize `map'.
		do
			if map /= Void and then map.pixmap /= Void then
				map.pixmap.set_size (width, height)
				map.refresh
			end
		end

end
