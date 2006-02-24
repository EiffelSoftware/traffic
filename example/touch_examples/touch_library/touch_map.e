indexing
	description: "Objects that forwards calls to TRAFFIC_MAP and TOUCH_3D_MAP_WIDGET."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TOUCH_MAP

create make

feature -- Initialisation
	make(a_widget: TOUCH_3D_MAP_WIDGET; map_file_name: STRING) is
		do
			internal_map_widget := a_widget
			internal_map_file_name := map_file_name
		ensure
			internal_map_widget /= Void
			internal_map_file_name /=Void
		end
		
feature -- Access

feature -- 
	display is
		do
			internal_map_widget.load_map(internal_map_file_name)
		end

feature {NONE} -- Implementation
	internal_map : TRAFFIC_MAP is 
		do
			Result := internal_map_widget.map
		end
		
	internal_map_widget: TOUCH_3D_MAP_WIDGET
	
	internal_map_file_name: STRING

invariant
	invariant_clause: True -- Your invariant here

end
