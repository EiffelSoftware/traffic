
indexing
	description: "Factory that creates TE_3D_NODE Buildings from various fileformats"
	author: "Matthias Bühlmann"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_3D_TRAVELER_FACTORY

	create
		make

feature -- Initialization

	make is
		-- create the factory
		do
		end

feature -- Access

	taxi_template: TE_3D_NODE
			-- template to create a taxi traveler

	taxi_night_template: TE_3D_NODE
			-- template to create a taxi traveler

	tram_template: TE_3D_NODE
			-- template to create a tram traveler

	tram_night_template: TE_3D_NODE
			-- template to create a tram traveler

	man_template: TE_3D_NODE
			-- template to create a man traveler

	woman_template: TE_3D_NODE
			-- template to create a woman traveler

	error_template: TE_3D_NODE
			-- template which is returned when a wrong name is passed

	loaded:BOOLEAN

feature -- Building Creation

	create_traveler(name:STRING): TE_3D_NODE is
			-- Produce a new traveler model
		do
			if not loaded then
				load_travelers
			end
			if name.is_equal("taxi") then
				Result := taxi_template.create_deep_instance
			elseif name.is_equal("taxi_night") then
				Result := taxi_night_template.create_deep_instance
			elseif name.is_equal("tram") then
				Result := tram_template.create_deep_instance
			elseif name.is_equal("tram_night") then
				Result := tram_night_template.create_deep_instance
			elseif name.is_equal("man") then
				Result := man_template.create_deep_instance
			elseif name.is_equal("woman") then
				Result := woman_template.create_deep_instance
			else
				Result := error_template.create_deep_instance
			end
		end

feature -- Status report

feature -- Status setting

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

feature -- Inapplicable

feature {NONE} -- Implementation

	load_travelers is
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
		s := fs.pathname (s, "taxi.obj")
		taxi_template := scene_importer.import_3d_scene(s)
		taxi_template.calculate_hierarchy_bounding_box

		s := fs.pathname ("..", "objects")
		s := fs.pathname (s, "taxi_night.obj")
		taxi_night_template := scene_importer.import_3d_scene(s)
		taxi_night_template.calculate_hierarchy_bounding_box

		s := fs.pathname ("..", "objects")
		s := fs.pathname (s, "tram2000_small.obj")
		tram_template := scene_importer.import_3d_scene(s)
		tram_template.calculate_hierarchy_bounding_box

		s := fs.pathname ("..", "objects")
		s := fs.pathname (s, "tram2000_small_night.obj")
		tram_night_template := scene_importer.import_3d_scene(s)
		tram_night_template.calculate_hierarchy_bounding_box

		s := fs.pathname ("..", "objects")
		s := fs.pathname (s, "man.obj")
		man_template := scene_importer.import_3d_scene(s)
		man_template.calculate_hierarchy_bounding_box

		s := fs.pathname ("..", "objects")
		s := fs.pathname (s, "woman.obj")
		woman_template := scene_importer.import_3d_scene(s)
		woman_template.calculate_hierarchy_bounding_box

		s := fs.pathname ("..", "objects")
		s := fs.pathname (s, "error.obj")
		woman_template := scene_importer.import_3d_scene(s)
		woman_template.calculate_hierarchy_bounding_box

		loaded := true
	end


invariant
	invariant_clause: True -- Your invariant here

end
