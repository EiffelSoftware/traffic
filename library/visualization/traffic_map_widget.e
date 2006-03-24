indexing
	description: "Widgets that display a map"
	date: "$Date$"
	revision: "$Revision$"

deferred class TRAFFIC_MAP_WIDGET

feature -- Status setting 

	set_map (a_map: TRAFFIC_MAP) is
			-- Set map that is displayed to `a_map'.
		deferred
		ensure
			map_set: map = a_map
		end

feature -- Access

	map: TRAFFIC_MAP
			-- Map that is displayed
		
end
