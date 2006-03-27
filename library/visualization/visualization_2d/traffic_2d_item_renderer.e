indexing
	description: "[
					Object that renders ITEMS from a TRAFFIC_MAP_MODEL.
					What it exactly does is it converts an ITEM to a EM_DRAWABLE
					]"
	date: "2005/08/31"
	revision: 1.0

deferred class
	TRAFFIC_2D_ITEM_RENDERER [ITEM -> HASHABLE]

feature -- Basic operations
	render(an_object: ITEM ): EM_DRAWABLE is
			--function for drawing the object
		require
			an_object_not_void: an_object /= Void
		deferred		
		end
		
end
