indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_3D_BUILDING_DAYNIGHT_FACTORY

inherit
	TRAFFIC_3D_BUILDING_FACTORY_NEW
		redefine
			new_indexed_building,
			set_template_names
		end

create
	default_create

feature -- Factory method

	new_indexed_building (a_building: TRAFFIC_BUILDING; i: INTEGER): TRAFFIC_3D_RENDERABLE [TRAFFIC_BUILDING] is
			-- New representation for `a_building' using the `i'th template
		local
			dt, nt: TE_3D_NODE
			p: TRAFFIC_3D_DAYNIGHT_RENDERABLE [TRAFFIC_BUILDING]
		do
			if templates.item (i) = Void  then
				-- load the template
				dt := load_template (template_names.item (i*2-1))
				nt := load_template (template_names.item (i*2))
				create p.make_with_item (Void, dt, nt)
				templates.force (p, i)
			end
			Result := templates.item (i).create_deep_instance
			Result.set_item (a_building)
			Result.transform.set_position (a_building.center.x, 0, a_building.center.y)
		end

feature -- Basic operations

	set_template_names (a_directory: STRING; names: ARRAY [STRING]) is
			-- Set `templates' to the ones found in `a_directory' with `names'.
		local
			fs: KL_FILE_SYSTEM
			i: INTEGER
			d,f: STRING
			nt,dt: TE_3D_NODE
			r: DS_PAIR [TE_3D_NODE, TE_3D_NODE]
		do
			create template_names.make (names.count)
			create templates.make (names.count // 2)
			fs := (create {KL_SHARED_FILE_SYSTEM}).file_system
			d := fs.absolute_pathname (a_directory)
			from
				i := 1
			until
				i > names.count
			loop
				f := fs.pathname (d, names.item (i))
				template_names.force (f, i)
				i := i + 1
			end
			count := names.count // 2
		end

end
