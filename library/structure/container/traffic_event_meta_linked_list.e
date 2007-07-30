indexing
	description: "List that throws events if items are inserted and whose items are event containers as well"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_EVENT_META_LINKED_LIST [G, H -> TRAFFIC_EVENT_CONTAINER [G]]

inherit

	TRAFFIC_EVENT_LINKED_LIST [H]
		export {NONE}
			copy, deep_copy, standard_copy
		redefine
			make, make_equal
		end

create
	make, make_equal

feature {NONE} -- Initialization

	make
			-- Create an empty list.
			-- Use `=' as comparison criterion.
		do
			Precursor
			-- Create event channels
			create sub_element_inserted_event
			create sub_element_removed_event
			sub_inserted_agent := agent publish_sub_element_inserted (?)
			sub_removed_agent := agent publish_sub_element_removed (?)
			element_inserted_event.subscribe (agent subscribe_to_item_changes)
		ensure then
			sub_inserted_initialized: sub_element_inserted_event /= Void
			sub_removed_initialized: sub_element_removed_event /= Void
		end

	make_equal
			-- Create an empty list.
			-- Use equal as comparison criterion.
		do
			Precursor
			-- Create event channels
			create sub_element_inserted_event
			create sub_element_removed_event
			sub_inserted_agent := agent publish_sub_element_inserted (?)
			sub_removed_agent := agent publish_sub_element_removed (?)
		ensure then
			sub_inserted_initialized: sub_element_inserted_event /= Void
			sub_removed_initialized: sub_element_removed_event /= Void
		end

feature {NONE} -- Implementation

	subscribe_to_item_changes (a_element: H) is
			-- If a list is added to `Current', we subscribe to its event channels.
		do
			a_element.element_inserted_event.subscribe (sub_inserted_agent)
			a_element.element_removed_event.subscribe (sub_removed_agent)
		end

	unsubscribe_to_item_changes (a_element: H) is
			-- If a list is removed from `Current', we unsubscribe to its event channels.
		do
			a_element.element_inserted_event.unsubscribe (sub_inserted_agent)
			a_element.element_removed_event.unsubscribe (sub_removed_agent)
		end

	publish_sub_element_inserted (a_element: G) is
			--
		do
			sub_element_inserted_event.publish ([a_element])
		end

	publish_sub_element_removed (a_element: G) is
			--
		do
			sub_element_removed_event.publish ([a_element])
		end

feature -- Access

	sub_element_inserted_event: TRAFFIC_EVENT_CHANNEL [TUPLE [G]]

	sub_element_removed_event: TRAFFIC_EVENT_CHANNEL [TUPLE [G]]

feature {NONE} -- Implementation

	sub_removed_agent: PROCEDURE [ANY, TUPLE [G] ]
			-- Event channel for the insertion of sub elements

	sub_inserted_agent: PROCEDURE [ANY, TUPLE [G] ]
			-- Event channel for the removal of sub elements
end
