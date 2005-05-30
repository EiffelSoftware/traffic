indexing
	description: "Objects that render ITEMS from a TRAFFIC_MAP_MODEL"
	author: "Roger Kueng"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	TRAFFIC_ITEM_RENDERER [DRAWABLE -> ESDL_DRAWABLE]

--	inherit
--		HASHABLE
feature -- Access


feature -- Basic operations
	render(a_object: ANY ): DRAWABLE is
			--function for drawing the object
		require
			a_object_not_void: a_object /= Void
			a_object_is_right_type: a_object.generating_type = render_type
			
		deferred		
		end
		
	render_type: STRING is
			--which object_type will be rendered
		deferred
		end
		
feature {NONE} -- Implementation

invariant
	invariant_clause: True -- Your invariant here

end -- class TRAFFIC_ITEM_RENDERER
