indexing
	description: "Factory for connections (either line_sections, roads or connections in a path)"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	TRAFFIC_3D_CONNECTION_FACTORY

inherit

	EM_3D_OBJECT_FACTORY

	EM_SHARED_BITMAP_FACTORY
		export {NONE} all end

	TRAFFIC_3D_CONSTANTS
		export {NONE} all end

	GL_FUNCTIONS
		export {NONE} all end

	GLU_FUNCTIONS
		export {NONE} all end

feature -- Access

	object_width: DOUBLE is 2.0
			-- The size of the bounding box in x direction of created objects

	object_height: DOUBLE is 2.0
			-- The size of the bounding box in y direction of created objects

	object_depth: DOUBLE is 2.0
			-- The size of the bounding box in z direction of created objects

	connection: TRAFFIC_CONNECTION
			-- Connection for which the 3d object is created

	collision_polygons: DS_LINKED_LIST [EM_POLYGON_CONVEX_COLLIDABLE]
			-- Collision polygons for the generated object (one per two polypoints)

	color: EM_COLOR
			-- Color used for drawing the connection

	width: DOUBLE
			-- Width of line that represents the connection

	height: DOUBLE
			-- Height of where the connection is drawn

feature -- Element change

	set_connection (a_connection: TRAFFIC_CONNECTION) is
			-- Set the connection to generate a representation for to `a_connection'.
		require
			a_connection_exists: a_connection /= Void
		do
			connection := a_connection
			unchanged := False
		ensure
			connection_set: a_connection = connection
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

	set_width (a_width: DOUBLE) is
			-- Set the `width' of the drawn connection to `a_width'.
		require
			width_valid: a_width > 0.0
		do
			width := a_width
		ensure
			width_set: width = a_width
		end

	set_height (a_height: DOUBLE) is
			-- Set the level (`height') of where the connection is drawn to `a_height'.
		require
			height_valid: a_height > 0.0
		do
			height := a_height
		ensure
			height_set: height = a_height
		end

feature {EM_3D_OBJECT_FACTORY} -- Deferred features that should not be accessible from the outside

	prepare is
			-- Set up colors, width etc. for drawing the connection
		deferred
		end

	specify_object is
			-- Specify an object that can be drawn in the origin
			-- (front, left, lower corner of bounding box = 0,0,0)
		deferred
		end

feature {NONE} -- Implementation

	drawing_color: GL_VECTOR_3D [DOUBLE]
			-- Color to be used for drawing, overriden by `color' (use `set_color')

	drawing_width: DOUBLE
			-- Width of the line to be drawn, overriden by `width' (use `set_width')

	drawing_height: DOUBLE
			-- Height where the connection is represented, overriden by `height' (use `set_height')

end
