indexing
	description: "Factory for simple building representations"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_3D_BUILDING_SIMPLE_FACTORY

inherit

	TRAFFIC_3D_BUILDING_FACTORY
		redefine
			default_create
		end

feature -- Initialization

	default_create is
			-- Initialize.
		local
			building: EM_3D_OBJECT
		do
			template := 1
		end

feature -- Access

	object_width: DOUBLE
			-- The size of the bounding box in x direction of created objects

	object_height: DOUBLE
			-- The size of the bounding box in y direction of created objects

	object_depth: DOUBLE
			-- The size of the bounding box in z direction of created objects

	template_count: INTEGER is 1
			-- Number of templates available for buildings

feature {NONE} -- Implementation

	create_building_type_1 is
		-- Create a building.
		local
			wall_color: GL_VECTOR_3D[DOUBLE]
			roof_color: GL_VECTOR_3D[DOUBLE]
			poly_points: DS_LINKED_LIST[EM_VECTOR_2D]
		do
			create wall_color.make_xyz (0.5,0.5,0.5)
			create roof_color.make_xyz (1.0,0,0)
			gl_begin(Em_gl_polygon)
				gl_color3dv(wall_color.pointer)
				gl_normal3b(0,0,1)
				gl_vertex3d(0.5,0,-0.5)
				gl_vertex3d(-0.5,0,-0.5)
				gl_vertex3d(-0.5,1,-0.5)
				gl_vertex3d(0,1.25,-0.5)
				gl_vertex3d(0.5,1,-0.5)
			gl_end

			--Back	
			gl_begin(Em_gl_polygon)
				gl_normal3b(0,0,-1)
				gl_vertex3d(0.5,0,0.5)
				gl_vertex3d(-0.5,0,0.5)
				gl_vertex3d(-0.5,1,0.5)
				gl_vertex3d(0,1.25,0.5)
				gl_vertex3d(0.5,1,0.5)
			gl_end

			gl_begin(Em_gl_quads)

				--Left	
				gl_normal3b(1,0,0)
				gl_vertex3d(0.5,0,-0.5)
				gl_vertex3d(0.5,1,-0.5)
				gl_vertex3d(0.5,1,0.5)
				gl_vertex3d(0.5,0,0.5)

				--Right
				gl_normal3b(-1,0,0)
				gl_vertex3d(-0.5,0,-0.5)
				gl_vertex3d(-0.5,1,-0.5)
				gl_vertex3d(-0.5,1,0.5)
				gl_vertex3d(-0.5,0,0.5)

				--Roof right
				gl_color3dv(roof_color.pointer)
				gl_normal3d(-0.5,1,0)
				gl_vertex3d(-0.5,1,-0.5)
				gl_vertex3d(-0.5,1,0.5)
				gl_vertex3d(0,1.25,0.5)
				gl_vertex3d(0,1.25,-0.5)

				-- Roof left
				gl_normal3d(0.5,1,0)
				gl_vertex3d(0.5,1,-0.5)
				gl_vertex3d(0,1.25,-0.5)
				gl_vertex3d(0,1.25,0.5)
				gl_vertex3d(0.5,1,0.5)

			gl_end
			object_width := 1
			object_height := 1.25
			object_depth := 1

			create poly_points.make
			poly_points.force (create {EM_VECTOR_2D}.make (0-object_width/2, 0-object_depth/2), 1) -- left bottom corner
			poly_points.force (create {EM_VECTOR_2D}.make (0-object_width/2, 0+object_depth/2), 2) -- left upper corner
			poly_points.force (create {EM_VECTOR_2D}.make (0+object_width/2, 0+object_depth/2), 3) -- right upper corner
			poly_points.force (create {EM_VECTOR_2D}.make (0+object_width/2, 0-object_depth/2), 4) -- right bottom corner

			create collision_polygon.make_from_absolute_list (create {EM_VECTOR_2D}.make (0, 0), poly_points)
		end

	specify_object is
			-- Create a 3d object using this specification.
		do
			if template = 1 then
				create_building_type_1
			end
		end

end
