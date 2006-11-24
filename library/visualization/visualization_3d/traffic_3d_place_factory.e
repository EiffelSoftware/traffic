indexing
	description: "Factory for places"
	date: "$Date: 2005/09/26 11:22:45 $"
	revision: "$Revision: 1.23 $"

deferred class
	TRAFFIC_3D_PLACE_FACTORY_OBSOLETE

inherit
	EM_3D_OBJECT_FACTORY

	EM_SHARED_BITMAP_FACTORY
		export {NONE} all end

feature -- Access

	object_width: DOUBLE
			-- The size of the bounding box in x direction of created objects.

	object_height: DOUBLE
			-- The size of the bounding box in y direction of created objects.

	object_depth: DOUBLE
			-- The size of the bounding box in z direction of created objects.

	place: TRAFFIC_PLACE
			-- Place for which the 3d object is created

	collision_polygon: EM_POLYGON_CONVEX_COLLIDABLE
			-- Collision polygon for the generated object

	color: EM_COLOR
			-- Color used for drawing places

feature -- Element change

	set_place (a_place: TRAFFIC_PLACE) is
			-- Set the place to generate a representation for to `a_place'.
		require
			a_place_exists: a_place /= Void
		do
			place := a_place
			unchanged := False
		ensure
			place_set: a_place = place
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

feature -- Basic operations

	specify_object is
			-- Specify an object.
		deferred
		ensure then
			collision_polygon_exists: collision_polygon /= Void
		end

end
