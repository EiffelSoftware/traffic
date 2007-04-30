indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_EVENT_CONTAINER [G]

feature -- Access

	element_inserted_event: EM_EVENT_CHANNEL [TUPLE [G]]
			-- Insertion event (1: New element, 2: Position)

	element_removed_event: EM_EVENT_CHANNEL [TUPLE [G]]
			-- Deletion event (Removed element)

invariant

	inserted_initialized: element_inserted_event /= Void
	removed_initialized: element_removed_event /= Void

end
