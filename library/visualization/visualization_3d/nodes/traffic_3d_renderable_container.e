indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_3D_RENDERABLE_CONTAINER [G]

inherit

	TE_3D_NODE

create
	make_as_child

feature -- Access

	child_for_item (an_item: G): TRAFFIC_3D_RENDERABLE [G] is
			-- Graphical representation for `an_item'
		require
			an_item_not_void: an_item /= Void
			has_child: has_child (an_item)
		local
			r: TRAFFIC_3D_RENDERABLE [G]
		do
			from
				children.start
			until
				children.off or Result /= Void
			loop
				r ?= children.item
				if r /= Void and then r.item = an_item then
					Result := r
				end
				children.forth
			end
		ensure
			Result_not_void: Result /= Void
			same_moving: Result.item = an_item
		end

feature -- Status report

	has_child (an_item: G): BOOLEAN is
			-- Does `an_item' have a graphical representation?
		require
			an_item_not_void: an_item /= Void
		local
			r: TRAFFIC_3D_RENDERABLE [G]
		do
			from
				children.start
			until
				children.off or Result
			loop
				r ?= children.item
				if r /= Void and then r.item = an_item then
					Result := True
				end
				children.forth
			end
		end

end
