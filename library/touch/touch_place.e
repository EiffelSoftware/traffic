indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TOUCH_PLACE

inherit
	TOUCH_SHARED_MAP_WIDGET

creation
	make_with_pos

feature -- Initialisation

	make_with_pos(a_name: STRING; x,y: INTEGER) is
		-- Creates a touch place with postition x,y
	require
		name_set: a_name /= Void
		integer_set: x /= Void and y /= Void
	local
		vector : EM_VECTOR_2D
	do
		create vector.make (x,y)
		create t_place.make_with_position (a_name,x,y)
		create t_node.make (t_place, vector)
		map_widget.map.add_place (t_place)
	ensure
		t_place_exists: t_place /= Void
		t_node_exists: t_node /= Void
	end

	link(a_place: like Current) is
			-- Links Current place with a_place
		do
			next := a_place
		ensure
			next_set: next = a_place
		end




feature -- Acces

	t_place: TRAFFIC_PLACE
	t_node: TRAFFIC_NODE
	next: TOUCH_PLACE

invariant
	invariant_clause: True -- Your invariant here

end
