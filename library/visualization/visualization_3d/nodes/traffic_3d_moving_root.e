indexing
	description: "Collection of all moving drawables"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_3D_MOVING_ROOT

inherit

	TE_3D_NODE
		redefine
			children
		end

create
	make_as_child

feature -- Access

	children: ARRAYED_LIST [TRAFFIC_3D_MOVING_NODE]

	child_for_moving (a_moving: TRAFFIC_MOVING): TRAFFIC_3D_MOVING_NODE is
			-- Graphical representation for `a_moving'
		require
			a_moving_not_void: a_moving /= Void
			has_child: has_child (a_moving)
		do
			from
				children.start
			until
				children.off or Result /= Void
			loop
				if children.item.moving = a_moving then
					Result := children.item
				end
				children.forth
			end
		ensure
			Result_not_void: Result /= Void
			same_moving: Result.moving = a_moving
		end

feature -- Status report

	has_child (a_moving: TRAFFIC_MOVING): BOOLEAN is
			-- Does `a_moving' have a graphical representation?
		require
			a_moving_not_void: a_moving /= Void
		do
			from
				children.start
			until
				children.off or Result
			loop
				if children.item.moving = a_moving then
					Result := True
				end
				children.forth
			end
		end

end
