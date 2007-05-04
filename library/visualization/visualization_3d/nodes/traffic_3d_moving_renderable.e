indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_3D_MOVING_RENDERABLE [G -> TRAFFIC_MOVING]

inherit

	TRAFFIC_3D_RENDERABLE [G]
		redefine
			render_node
		end

create
	make_with_item

feature --

	render_node is
			-- Update the position before the node is rendered.
		do
			Precursor
			graphical.transform.set_rotation(0.0, 1.0, 0.0,item.angle_x)
			graphical.transform.set_position (item.position.x, 0, item.position.y)
		end

end
