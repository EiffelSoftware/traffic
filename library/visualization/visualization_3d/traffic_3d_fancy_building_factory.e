indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_3D_BUILDING_FANCY_FACTORY

inherit

	TRAFFIC_3D_BUILDING_FACTORY
		redefine
			default_create,
			create_object,
			template_count
		end

	EM_SHARED_BITMAP_FACTORY
		export
			{NONE} all
		undefine
			default_create
		end

feature -- Initialization


	default_create is
			-- Initialize
		local
			fs: KL_FILE_SYSTEM
			i: INTEGER
			s: STRING
			bitmap: EM_BITMAP
			traffic_model: TRAFFIC_3D_TEXTURE_OBJECT
			texture_ids: ARRAY [INTEGER]
			building: EM_3D_OBJECT
			itm: TUPLE [TRAFFIC_3D_TEXTURE_OBJECT, DOUBLE, DOUBLE, DOUBLE]
		do
			create obj_loader
			template := 1

			fs := (create {KL_SHARED_FILE_SYSTEM}).file_system

			create building_templates.make (template_count)

			from
				i := 1
			until
				i > template_count
			loop
				s := fs.pathname ("..", "buildings")
				s := fs.pathname (s, "building" + i.out + ".tga")
				bitmap_factory.create_bitmap_from_image(s)
				bitmap := bitmap_factory.last_bitmap
				create texture_ids.make (0,0)
				texture_ids.force (bitmap.texture.id, 0)

				s := fs.pathname ("..", "buildings")
				s := fs.pathname (s, "building" + i.out + ".obj")
				obj_loader.load_file(s)
				building := obj_loader.create_object

				create traffic_model.make
				traffic_model.set_model(building)
				traffic_model.set_bounding_box (building.width, building.height, building.depth)
				traffic_model.set_texture_id (texture_ids)
				traffic_model.add_texture (bitmap)

				create itm
				itm.put (traffic_model, 1)
				itm.put_double (obj_loader.object_width, 2)
				itm.put_double (obj_loader.object_depth, 3)
				itm.put_double (obj_loader.object_height, 4)
				building_templates.put (itm, i)

				i := i + 1
			end
			traffic_model ?= building_templates.item (1).item (1)
			traffic_model.set_scale (0.9, 0.7, 0.7)
			traffic_model ?= building_templates.item (2).item (1)
			traffic_model.set_scale (0.6, 0.3, 0.3)
			traffic_model ?= building_templates.item (3).item (1)
			traffic_model.set_scale (0.4, 0.2, 0.2)
			traffic_model ?= building_templates.item (4).item (1)
			traffic_model.set_scale (1.2, 1.0, 1.0)
			traffic_model ?= building_templates.item (5).item (1)
			traffic_model.set_scale (0.4, 0.2, 0.2)
		end

feature -- Access

	object_width: DOUBLE
			-- The size of the bounding box in x direction of created objects

	object_height: DOUBLE
			-- The size of the bounding box in y direction of created objects

	object_depth: DOUBLE
			-- The size of the bounding box in z direction of created objects

	obj_loader: TRAFFIC_3D_OBJ_LOADER
			-- Factory to use for file reading

	template_count: INTEGER is 5

	building_templates: DS_ARRAYED_LIST [TUPLE [TRAFFIC_3D_TEXTURE_OBJECT, DOUBLE, DOUBLE, DOUBLE]]
			-- Containter of all types of places containing also object_width, object_depth and object_height

feature -- Basic operations

	create_object: EM_3D_OBJECT is
			-- Create a new object
		local
			poly_points: DS_LINKED_LIST[EM_VECTOR_2D]
		do
			Result ?= building_templates.item (template).item (1).twin
			object_width := building_templates.item (template).double_item (2)
			object_depth := building_templates.item (template).double_item (3)
			object_height := building_templates.item (template).double_item (4)
			unchanged := True
			create poly_points.make
			poly_points.force (create {EM_VECTOR_2D}.make (0-object_width/2, 0-object_depth/2), 1) -- left bottom corner
			poly_points.force (create {EM_VECTOR_2D}.make (0-object_width/2, 0+object_depth/2), 2) -- left upper corner
			poly_points.force (create {EM_VECTOR_2D}.make (0+object_width/2, 0+object_depth/2), 3) -- right upper corner
			poly_points.force (create {EM_VECTOR_2D}.make (0+object_width/2, 0-object_depth/2), 4) -- right bottom corner

			create collision_polygon.make_from_absolute_list (create {EM_VECTOR_2D}.make (0, 0), poly_points)
		end

	specify_object is
			-- Get object
		do
			-- Do nothing
		end

end
