indexing
	description: "Factory that creates TE_3D_NODE Buildings from various fileformats"
	author: "Matthias Bühlmann"
	date: "$Date$"
	revision: "$Revision$"

class TRAFFIC_3D_BUILDING_FACTORY_NEW inherit

	ANY
		redefine
			default_create
		end

create
	default_create

feature -- Initialization

	default_create is
			-- Initialize.
		do
			create random.make
			random.start
			create templates.make_default
			create template_names.make_default
		end

feature -- Factory method

	new_random_building (a_building: TRAFFIC_BUILDING): TRAFFIC_3D_RENDERABLE [TRAFFIC_BUILDING] is
			-- New representation for `a_building' using a random template
		require
			a_building_exists: a_building /= Void
			templates_set: templates /= Void and then templates.count /= 0
		local
			r: INTEGER
		do
			random.forth
			r := random.item \\ templates.count + 1
			Result := new_indexed_building (a_building, r)
		end

	new_indexed_building (a_building: TRAFFIC_BUILDING; i: INTEGER): TRAFFIC_3D_RENDERABLE [TRAFFIC_BUILDING] is
			-- New representation for `a_building' using the `i'th template
		require
			templates_exist: templates /= Void
			i_valid: i >= 1 and i <= templates.count
			a_building_exists: a_building /= Void
		local
			t: TE_3D_NODE
			p: TRAFFIC_3D_RENDERABLE [TRAFFIC_BUILDING]
		do
			if templates.item (i) = Void  then
				-- load the template
				t := load_template (template_names.item (i))
				create p.make_with_item (Void, t)
				templates.force (p, i)
			end
			Result := templates.item (i).create_deep_instance
			Result.set_item (a_building)
			Result.transform.set_position (a_building.center.x, 0, a_building.center.y)
		end

feature -- Basic operations

	set_template_names (a_directory: STRING; names: ARRAY [STRING]) is
			-- Set `template_names' to the ones found in `a_directory' with `names'.
		require
			a_directory_exists: a_directory /= Void
			names_exists: names /= Void
		local
			fs: KL_FILE_SYSTEM
			i: INTEGER
			d,f: STRING
		do
			fs := (create {KL_SHARED_FILE_SYSTEM}).file_system
			create template_names.make (names.count)
			create templates.make (names.count)
			d := fs.dirname (a_directory)
			from
				i := 1
			until
				i > names.count
			loop
				f := fs.pathname (d, names.item (i))
				template_names.force (f, i)
				i := i + 1
			end
			count := names.count
		end

feature -- Access

--	template_count: INTEGER
			-- Number of available templates

	templates: DS_ARRAYED_LIST [TRAFFIC_3D_RENDERABLE [TRAFFIC_BUILDING]]
			-- Containter of all types of buildings containing also object_width, object_depth and object_height

	count: INTEGER
			-- Number of templates that are available

--feature -- Building Creation


--	load_buildings is
--			-- loads the buildings
--	local
--		fs: KL_FILE_SYSTEM
--		s: STRING --path string
--		i:INTEGER
--		scene_importer: TE_3D_SCENE_IMPORTER
--		current_building: TE_3D_NODE
--	do
--		fs := (create {KL_SHARED_FILE_SYSTEM}).file_system
--		scene_importer := (create {TE_3D_SHARED_GLOBALS}).scene_importer
--		create building_templates.make(template_count)

--		from
--			i := 1
--		until
--			i > template_count
--		loop
--				s := fs.pathname ("..", "buildings")
--				s := fs.pathname (s, name + i.out + ".obj")
--				current_building := scene_importer.import_3d_scene(s)
--				current_building.calculate_hierarchy_bounding_box
--				building_templates.extend(current_building)
--				i := i + 1
--		end
--	end


--	create_building: TE_3D_NODE is
--			-- Produce a new representation for a building.
--			-- TODO change from EM_VECTOR_2D to the new EM_VECTOR2D
--		local
--			poly_points: DS_LINKED_LIST[EM_VECTOR_2D]
--			hbb: ARRAYED_LIST[EM_VECTOR3D]
--		do
--			if building_templates = Void then
--				load_buildings
--			end

--			Result := building_templates.i_th(template).create_deep_instance

----			create poly_points.make
----			hbb := Result.hierarchy_bounding_box

----			poly_points.force (create {EM_VECTOR_2D}.make (hbb.i_th(1).x,hbb.i_th(1).z), 1) -- XZ corner
----			poly_points.force (create {EM_VECTOR_2D}.make (hbb.i_th(2).x,hbb.i_th(2).z), 2) -- X(-Z) corner
----			poly_points.force (create {EM_VECTOR_2D}.make (hbb.i_th(3).x,hbb.i_th(3).z), 3) -- (-X)(-Z) corner
----			poly_points.force (create {EM_VECTOR_2D}.make (hbb.i_th(4).x,hbb.i_th(4).z), 4) -- (-X)Z corner

----			create collision_polygon.make_from_absolute_list (create {EM_VECTOR_2D}.make (0,0), poly_points)
--		end

--feature -- Status setting

--	randomize_next_building is
--			-- next created building will be a randomly chosen template
--		do
--			random.forth
--			set_template ((random.double_item*(template_count-1).to_double).rounded +1)
--		end

feature {NONE} -- Implementation

	template_names: DS_ARRAYED_LIST [STRING]

	random: RANDOM
		-- random object to use with the randomize_next_building feature

--	internal_factory: TE_3D_MEMBER_FACTORY_FROMFILE_OBJ

	load_template (a_file_name: STRING): TE_3D_NODE is
			-- load the traveler templates
		local
			fs: KL_FILE_SYSTEM
			s: STRING --path string
			i:INTEGER
			scene_importer: TE_3D_SCENE_IMPORTER
			current_building: TE_3D_NODE
		do
			fs := (create {KL_SHARED_FILE_SYSTEM}).file_system
			scene_importer := (create {TE_3D_SHARED_GLOBALS}).scene_importer

			s := fs.pathname ("..", "objects")
			s := fs.pathname (s, a_file_name)
			Result := scene_importer.import_3d_scene (s)
			Result.calculate_hierarchy_bounding_box
		end

end
