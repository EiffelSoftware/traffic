indexing
	description: "Drawables for simple moving objects"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_3D_MOVING_NODE

inherit

	TE_3D_NODE
		redefine
			draw,
			render_node
		end

	EM_GL_CONSTANTS
		export {NONE} all end

	TRAFFIC_3D_CONSTANTS


create
	make_with_moving

feature -- Initialization

	make_with_moving (a_moving: TRAFFIC_MOVING; a_3d_graphical: TE_3D_NODE) is
			-- Initialize.
		require
			a_moving_not_void: a_moving /= Void
			a_3d_graphical_not_empty: a_3d_graphical /= Void
		do
			set_moving (a_moving)
			make
			graphical := a_3d_graphical
			graphical.make_child_of (Current)
		end

feature -- Access

	moving: TRAFFIC_MOVING

	color: EM_COLOR

	graphical: TE_3D_NODE

feature -- Element change

	set_color (a_color: EM_COLOR) is
			-- Set `color' to `a_color'. May also be Void.
			-- TODO: Does not work yet.
		do
			color := a_color
		ensure
			color_set: color = a_color
		end

	set_moving (a_moving: TRAFFIC_MOVING) is
			-- Set `moving' to `a_moving'.
		require
			a_moving_not_void: a_moving /= Void
		do
			moving := a_moving
		end

feature -- Basic operations

	draw is
			-- calls draw feature of all children
		local
			color_3d: GL_VECTOR_3D [REAL]
		do
			if color /= Void then
				create color_3d.make_xyz (color.red/255, color.green/255, color.blue/255)
				gl_enable_external (em_gl_color_material)
				gl_color3fv_external(color_3d.pointer)
			end
			Precursor
			gl_disable_external (em_gl_color_material)
		end

	render_node is
			-- Update the position before the node is rendered.
		local
			p: EM_VECTOR_2D
		do
			graphical.transform.reset
			p := map_to_gl_coords (moving.position)
			graphical.transform.set_position (p.x, 0, p.y)
			graphical.transform.rotate(0.0,1.0,0.0,moving.angle_x)
			Precursor
		end

invariant

	moving_not_void: moving /= Void

end
