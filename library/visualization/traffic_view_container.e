indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_VIEW_CONTAINER [G, H->TRAFFIC_VIEW [G]]

inherit

	DS_LINKED_LIST [H]

create

	make

feature -- Access

	view_for_item (a_item: G): H is
			-- View for `a_item' if it exists
			-- (Result may be Void!)
		local
			cursor: DS_LINKED_LIST_CURSOR [H]
		do
			from
				cursor := new_cursor
				cursor.start
			until
				cursor.item.item = a_item or cursor.off
			loop
				cursor.forth
			end
			if not cursor.off then
				Result := cursor.item
			end
		end

feature -- Status report

	has_view_for_item (a_item: G): BOOLEAN is
			-- Is there a view for `a_item'?
			-- (Result may be Void!)
		local
			cursor: DS_LINKED_LIST_CURSOR [H]
		do
			from
				cursor := new_cursor
				cursor.start
			until
				cursor.item.item = a_item or cursor.off
			loop
				cursor.forth
			end
			if not cursor.off then
				Result := True
			end
		end

feature -- Basic operations

	hide is
			-- Hide all elements.
		local
			cursor: DS_LINKED_LIST_CURSOR [TRAFFIC_VIEW [G]]
		do
			from
				cursor := new_cursor
				cursor.start
			until
				cursor.off
			loop
				cursor.item.hide
				cursor.forth
			end
		end

	show is
			-- Show all elements.
		local
			cursor: DS_LINKED_LIST_CURSOR [TRAFFIC_VIEW [G]]
		do
			from
				cursor := new_cursor
				cursor.start
			until
				cursor.off
			loop
				cursor.item.show
				cursor.forth
			end
		end


end
