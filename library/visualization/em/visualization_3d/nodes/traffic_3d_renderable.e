indexing
	description: "Objects that represent a single element of the map (e.g. a vehicle or a place)"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_3D_RENDERABLE [G]

inherit

	TE_3D_NODE
		rename
			make as make_node
		redefine
			draw
		end

	TRAFFIC_VIEW [G]

	EM_GL_CONSTANTS
		export {NONE} all end

	TRAFFIC_CONSTANTS

create
	make_with_item

feature -- Initialization

	make (a_item: G) is
			-- Set `item' to `a_item'.
		do
			-- TODO
			item := a_item
			create color.make_white
			create highlight_color.make_white
			is_highlighted := False
		end

	make_with_item (an_element: G; a_3d_graphical: TE_3D_NODE) is
			-- Initialize.
		require
			an_element_not_void: an_element /= Void
			a_3d_graphical_not_empty: a_3d_graphical /= Void
		do
			make_node
			make (an_element)
			graphical := a_3d_graphical
			graphical.set_as_child_of (Current)
		end

feature -- Access

	graphical: TE_3D_NODE

feature -- Status report

	is_highlighted: BOOLEAN
			-- Is the place view highlighted?

	is_shown: BOOLEAN
			-- Is the place view shown?
		do
			Result := graphical.is_hierarchy_renderable
		end

feature -- Element change

	set_color (a_color: TRAFFIC_COLOR) is
			-- Set `color' to `a_color'. May also be Void.
			-- TODO: Does not work yet.
		do
			color := a_color
			if not is_highlighted then
				set_internal_color (create {EM_COLOR}.make_with_rgb (color.red, color.green, color.blue))
			end
		end

	set_highlight_color (a_color: TRAFFIC_COLOR) is
			-- Set `highlight_color' to `a_color'. May also be Void.
			-- TODO: Does not work yet.
		do
			highlight_color := a_color
			if is_highlighted then
				set_internal_color (create {EM_COLOR}.make_with_rgb (highlight_color.red, highlight_color.green, highlight_color.blue))
			end
		end

	show is
			-- Show the renderable.
		do
			graphical.enable_hierarchy_renderable
		end

	hide is
			-- Hide the renderable.
		do
			graphical.disable_hierarchy_renderable
		end

	highlight is
			-- Highlight the renderable.
		do
			-- TODO
			set_internal_color (create {EM_COLOR}.make_with_rgb (highlight_color.red, highlight_color.green, highlight_color.blue))
			is_highlighted := True
		end

	unhighlight is
			-- Unighlight the renderable.
		do
			set_internal_color (create {EM_COLOR}.make_with_rgb (color.red, color.green, color.blue))
			is_highlighted := False
		end

feature -- Basic operations

	draw is
			-- calls draw feature of all children
		local
			color_3d: GL_VECTOR_3D [REAL]
		do
			if color /= Void then
				create color_3d.make_xyz (color.red/255, color.green/255, color.blue/255)
				gl_enable (em_gl_color_material)
				gl_color3fv(color_3d.pointer)
			end
			Precursor
			gl_disable (em_gl_color_material)
		end

feature {NONE} -- Implementation

	set_internal_color (a_color: EM_COLOR) is
			-- Set `color' to `a_color'. May also be Void.
			-- TODO: Does not work yet.
		do
			internal_color := a_color
		ensure
			color_set: internal_color = a_color
		end

	internal_color: EM_COLOR

invariant

	item_not_void: item /= Void

end
