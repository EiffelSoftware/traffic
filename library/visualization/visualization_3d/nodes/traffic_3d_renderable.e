indexing
	description: "Objects that represent a single element of the map (e.g. a vehicle or a place)"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_3D_RENDERABLE [G]

inherit

	TE_3D_NODE
		redefine
			draw
		end

	EM_GL_CONSTANTS
		export {NONE} all end

	TRAFFIC_3D_CONSTANTS

create
	make_with_item

feature -- Initialization

	make_with_item (an_element: G; a_3d_graphical: TE_3D_NODE) is
			-- Initialize.
		require
			an_element_not_void: an_element /= Void
			a_3d_graphical_not_empty: a_3d_graphical /= Void
		do
			set_item (an_element)
			make
			graphical := a_3d_graphical
			graphical.set_as_child_of (Current)
			graphical.transform.set_scaling (50, 50, 50)
		end

feature -- Access

	item: G

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

	set_item (an_element: G) is
			-- Set `moving' to `a_moving'.
		require
			an_element_not_void: an_element /= Void
		do
			item := an_element
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

invariant

	item_not_void: item /= Void

end
