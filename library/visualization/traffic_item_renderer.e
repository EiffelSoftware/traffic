indexing
	description: "Objects that renders ITEMS from a TRAFFIC_MAP_MODEL"
	author: "Roger Kueng"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	TRAFFIC_ITEM_RENDERER [ITEM -> HASHABLE]

feature -- Basic operations
	render(an_object: ITEM ): EM_DRAWABLE is
			--function for drawing the object
		require
			an_object_not_void: an_object /= Void
			--an_object_is_right_type: an_object.generating_type = render_type
		deferred		
		end
		
feature {NONE} -- Implementation

invariant
	invariant_clause: True -- Your invariant here

end -- class TRAFFIC_ITEM_RENDERER
