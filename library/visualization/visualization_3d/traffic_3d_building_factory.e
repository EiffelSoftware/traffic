indexing
	description: "Factory for TRAFFIC_BUILDINGS"
	date: "$Date$"
	revision: "$Revision"

deferred class
	TRAFFIC_3D_BUILDING_FACTORY

inherit
	EM_3D_OBJECT_FACTORY

feature -- Access

	collision_polygon: EM_POLYGON_CONVEX_COLLIDABLE
			-- Collision polygon of last created building representation

	template: INTEGER
			-- Template to use for current building

	template_count: INTEGER is
			-- Number of templates available from the factory
		deferred
		end

	color: EM_COLOR
			-- Color used for drawing places

feature -- Element change

	set_template (a_id: INTEGER) is
			-- Set `template' to the number `a_id'.
		require
			a_id_valid: a_id > 0 and a_id <= template_count
		do
			template := a_id
		ensure
			template_set: template = a_id
		end

	set_color (a_color: EM_COLOR) is
			-- Set `color' to `a_color'.
		require
			a_color_exists: a_color /= Void
		do
			color := a_color
			unchanged := False
		ensure
			color_set: color = a_color
		end

invariant

	template_valid: template > 0 and template <= template_count

end

