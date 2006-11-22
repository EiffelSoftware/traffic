
indexing
	description: "Factory that creates TE_3D_NODE Buildings from various fileformats"
	author: "Matthias Bühlmann"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_3D_BUILDING_FACTORY_NEW inherit

		TRAFFIC_3D_BUILDING_FACTORY

	create
		make

feature -- Initialization

	make is
		-- create the factory, load all buildings and store them in the template list
	local
		fs: KL_FILE_SYSTEM
		s: STRING --path string
		i:INTEGER
		scene_importer: TE_3D_SCENE_IMPORTER
		current_building: TE_3D_NODE
	do
		fs := (create {KL_SHARED_FILE_SYSTEM}).file_system
		scene_importer := (create {TE_3D_SHARED_GLOBALS}).scene_importer
		create building_templates.make(template_count)

		template := 1

		create random.make
		random.start

		from
			i := 1
		until
			i > template_count
		loop
				s := fs.pathname ("..", "buildings")
				s := fs.pathname (s, "building" + i.out + ".obj")
				current_building := scene_importer.import_3d_scene(s)
				current_building.calculate_hierarchy_bounding_box
				building_templates.extend(current_building)
				i := i + 1
		end
	end

feature -- Access

	template_count: INTEGER is 4
			-- Number of available templates

	building_templates: ARRAYED_LIST[TE_3D_NODE]
			-- Containter of all types of buildings containing also object_width, object_depth and object_height

feature -- Building Creation

	create_building: TE_3D_NODE is
			-- Produce a new representation for a building.
			-- TODO change from EM_VECTOR_2D to the new EM_VECTOR2D
		local
			poly_points: DS_LINKED_LIST[EM_VECTOR_2D]
			hbb: ARRAYED_LIST[EM_VECTOR3D]
		do
			Result := building_templates.i_th(template).create_deep_instance

			create poly_points.make
			hbb := Result.hierarchy_bounding_box

			poly_points.force (create {EM_VECTOR_2D}.make (hbb.i_th(1).x,hbb.i_th(1).z), 1) -- XZ corner
			poly_points.force (create {EM_VECTOR_2D}.make (hbb.i_th(2).x,hbb.i_th(2).z), 2) -- X(-Z) corner
			poly_points.force (create {EM_VECTOR_2D}.make (hbb.i_th(3).x,hbb.i_th(3).z), 3) -- (-X)(-Z) corner
			poly_points.force (create {EM_VECTOR_2D}.make (hbb.i_th(4).x,hbb.i_th(4).z), 4) -- (-X)Z corner

			create collision_polygon.make_from_absolute_list (create {EM_VECTOR_2D}.make (0,0), poly_points)
		end

feature -- Status report

feature -- Status setting

	randomize_next_building is
			-- next created building will be a randomly chosen template
		do
			random.forth
			set_template ((random.double_item*(template_count-1).to_double).rounded +1)
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

feature -- Obsolete

	specify_object is
			-- NOT USED ANYMORE! REMOVE FROM TRAFFIC_3D_BUILDING_FACTORY!!
		do
			--nothing!
		end

	object_depth: DOUBLE
			-- NOT USED ANYMORE! REMOVE FROM TRAFFIC_3D_BUILDING_FACTORY!!

	object_height: DOUBLE
			-- NOT USED ANYMORE! REMOVE FROM TRAFFIC_3D_BUILDING_FACTORY!!

	object_width: DOUBLE
			-- NOT USED ANYMORE! REMOVE FROM TRAFFIC_3D_BUILDING_FACTORY!!


feature -- Inapplicable

feature {NONE} -- Implementation

	random: RANDOM
		-- random object to use with the randomize_next_building feature

invariant
	invariant_clause: True -- Your invariant here

end
