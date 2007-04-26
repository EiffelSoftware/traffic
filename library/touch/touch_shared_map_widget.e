indexing
	description: "Traffic Map widget singleton"
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TOUCH_SHARED_MAP_WIDGET

feature -- Traffic map widget singleton

		map_widget: TOUCH_3D_MAP_WIDGET is
			-- Traffic Map Widget singleton.
		indexing
			once_status: global
		once
			create Result.make (800, 600)
		end

invariant
	invariant_clause: True -- Your invariant here

end
