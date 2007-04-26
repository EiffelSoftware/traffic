indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_3D_PLACE_FACTORY inherit

		TE_3D_MEMBER_FACTORY_PRIMITIVE
			redefine
				make
			end

		TRAFFIC_3D_CONSTANTS

create make

feature -- Initialization

	make is
			-- makes factory and sets the color to black
		local
		default_material: TE_MATERIAL_SIMPLE
		do
			create default_material.make_with_color(0.0,0.0,0.0)
			set_material(default_material)
		end

feature -- 3D Member Creation

feature -- Access

	place: TRAFFIC_PLACE
			-- place for which the 3d object is created

	collision_polygon: EM_POLYGON_CONVEX_COLLIDABLE
			-- Collision polygons for the generated place

feature -- Measurement

feature -- Status report

feature -- Status setting

	set_place (a_place: TRAFFIC_PLACE) is
			-- Set the place to generate a representation for `a_place'.
		require
			a_place_exists: a_place /= Void
		do
			place := a_place
		end

	set_color (r,g,b: DOUBLE) is
			-- Set `color' to `a_color'. as unclamped floating point colors
		local
			new_material: TE_MATERIAL_SIMPLE
		do
			create new_material.make_with_color(r, g, b)
			set_material(new_material)
		end

feature -- Cursor movement

feature -- Element change

feature -- Removal

feature -- Resizing

feature -- Transformation

feature -- Conversion

feature -- Duplication

feature -- Miscellaneous

feature -- Basic operations

	create_place is
			-- creates the connection and returns it
		require
			place_not_void: place /= void
		local
			q1, q2, q3, q4, place_position: EM_VECTOR_2D
			poly_points: DS_LINKED_LIST[EM_VECTOR_2D]
			border: DOUBLE
		do
			border := 4.0

--			place_position := map_to_gl_coords(place.position)
			place_position := place.position
			--place_size := map_to_gl_coords(place_size)
			create_simple_plane((place.width+border), (place.breadth+border)) -- /30.0 comes from the map_to_gl coordinate conversation.. TODO: get rid of this coordinate-conversion problem
			last_3d_member.transform.set_position(place_position.x, 0.07, place_position.y)

			-- Collision polygon creation - from old factory
--			q1 := map_to_gl_coords (create {EM_VECTOR_2D}.make (place.position.x - place.width/2 - border, place.position.y - place.breadth/2 - border))
--			q2 := map_to_gl_coords (create {EM_VECTOR_2D}.make (place.position.x - place.width/2 - border, place.position.y + place.breadth/2 + border))
--			q3 := map_to_gl_coords (create {EM_VECTOR_2D}.make (place.position.x + place.width/2 + border, place.position.y + place.breadth/2 + border))
--			q4 := map_to_gl_coords (create {EM_VECTOR_2D}.make (place.position.x + place.width/2 + border, place.position.y - place.breadth/2 - border))
			create q1.make (place.position.x - place.width/2 - border, place.position.y - place.breadth/2 - border)
			create q2.make (place.position.x - place.width/2 - border, place.position.y + place.breadth/2 + border)
			create q3.make (place.position.x + place.width/2 + border, place.position.y + place.breadth/2 + border)
			create q4.make (place.position.x + place.width/2 + border, place.position.y - place.breadth/2 - border)

			create poly_points.make
			poly_points.force (create {EM_VECTOR_2D}.make (q1.x, q1.y), 1) -- left bottom corner
			poly_points.force (create {EM_VECTOR_2D}.make (q2.x, q2.y), 2) -- left upper corner
			poly_points.force (create {EM_VECTOR_2D}.make (q3.x, q3.y), 3) -- right upper corner
			poly_points.force (create {EM_VECTOR_2D}.make (q4.x, q4.y), 4) -- right bottom corner

			create collision_polygon.make_from_absolute_list (place.position, poly_points)
		end

feature -- Obsolete

feature -- Inapplicable

feature {NONE} -- Implementation

invariant
	invariant_clause: True -- Your invariant here

end
