indexing
	description: "Factory for TRAFFIC_BUILDINGS"
	date: "$Date$"
	revision: "$Revision"

deferred class
	TRAFFIC_3D_BUILDING_FACTORY

inherit
	EM_3D_OBJECT_FACTORY

feature -- Initialization


	collision_polygon: EM_POLYGON_CONVEX_COLLIDABLE


feature -- Decision process

	template: INTEGER
			-- Template to use for current building

	template_count: INTEGER is
			--
		deferred
		end


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

invariant

	template_valid: template > 0 and template <= template_count


end

