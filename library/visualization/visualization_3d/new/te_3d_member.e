indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TE_3D_MEMBER inherit

		TE_3D_NODE
			rename
				make as make_node,
				make_as_child as make_node_as_child
			redefine
				render_node,
				create_deep_instance,
				calculate_hierarchy_bounding_box
			end

		TE_3D_SHARED_GLOBALS

	create
		make, make_as_child

feature -- Initialization

	make (a_ressource_list:ARRAYED_LIST[TE_3D_RESSOURCE]) is
			-- create 3D member from a list of 3d ressources, calculate bounding_sphere for item 1 and make it child of root
		require
			list_not_empty: a_ressource_list.count > 0
		do
			make_node --call make creation procedure from TRAFFIC_3D_NODE
			ressource_list := a_ressource_list
			create bounding_sphere
			create bounding_box.make(6)
			calculate_boundaries
			create level_of_detail.make(ressource_list.count)
			--enable_frustum_culling
		end

	make_as_child(a_ressource_list:ARRAYED_LIST[TE_3D_RESSOURCE]; a_parent: TE_3D_NODE) is
			-- create 3D member from a list of 3d ressources, calculate bounding_sphere for item 1 and make it child of a_parent
		require
			list_not_empty: a_ressource_list.count > 0
		do
			make_node_as_child(a_parent)
			ressource_list := a_ressource_list
			create bounding_sphere
			create bounding_box.make(6)
			calculate_boundaries
			create level_of_detail.make(ressource_list.count)
			--enable_frustum_culling
		end


feature -- Access

	bounding_sphere: TUPLE[EM_VECTOR3D, DOUBLE]
		-- bounding sphere with pivot and radius, containing all vertices of the first LOD level of the member

	bounding_box: ARRAYED_LIST[EM_VECTOR3D]
		-- arrayed list containing 8 vectors representing the corners of the bounding box with the following order:
		-- X(-Y)Z, (-X)(-Y)Z, (-X)(-Y)(-Z), X(-Y)(-Z), XYZ, XY(-Z), (-X)Y(-Z), (-X)YZ

feature -- Status report

	frustum_culling_enabled: BOOLEAN
		-- is frustum culling enabled?

	level_of_detail_enabled: BOOLEAN
		-- is level of detail enabled?

	is_in_view_frustum: BOOLEAN is
			-- calculates, wetherthe member is within the viewfrustum or not
		local
			worldspace_sphere: TUPLE[EM_VECTOR3D, DOUBLE]
			local_pivot, worldspace_pivot: EM_VECTOR3D
			radius: DOUBLE
		do
			local_pivot ?= bounding_sphere.item(1)
			worldspace_pivot := localspace_to_worldspace(local_pivot)
			radius ?= bounding_sphere.item (2)
			create worldspace_sphere
			worldspace_sphere.put(worldspace_pivot,1)
			worldspace_sphere.put(radius,2)
			Result := renderpass_manager.current_renderpass.camera.sphere_is_within_frustum(worldspace_sphere)
		end

feature -- Engines

	level_of_detail: TE_LEVEL_OF_DETAIL
		-- object to calculate the current LOD state		

feature -- Status setting

	enable_frustum_culling  is
			-- enables frustum culling
		do
			frustum_culling_enabled := true
		end

	disable_frustum_culling is
			-- disables frustum culling
		do
			frustum_culling_enabled := false
		end

	enable_level_of_detail is
			-- enables level of detail
		do
			level_of_detail.enable
			level_of_detail_enabled := true
		end

	disable_level_of_detail is
			-- enables level of detail
		do
			level_of_detail.disable
			level_of_detail_enabled := false
		end

feature -- Cursor movement

feature {NONE} -- Ressources

	ressource_list : ARRAYED_LIST[TE_3D_RESSOURCE]
		-- list of 3D_ressources, each one representing one LOD level

feature -- Removal

feature -- Cloning

	create_instance: TE_3D_MEMBER is
			-- returns an instance of the 3D member. it references the same 3D ressources like current
		do
			create Result.make_as_child(ressource_list, parent)
		end

	create_deep_instance: TE_3D_MEMBER is
			-- returns an instance of the 3D member and instances of all childs and subchilds of the 3d member as hirarchy
		do
			Result := create_instance
			Result.set_hierarchy_bounding_box(hierarchy_bounding_box.twin)
			from
				children.start
			until
				children.after
			loop
				Result.add_child(children.item.create_deep_instance)
				children.forth
			end
		end


feature -- Transformation

feature -- Measurement

	calculate_hierarchy_bounding_box is
			-- updates the hierarchy_boundingbox. DON'T USE THIS EVERY FRAME SINCE IT IS NOT PERFORMANT!
		local
			max_x, min_x, max_y, min_y, max_z, min_z: DOUBLE
			vec1,vec2,vec3,vec4,vec5,vec6,vec7,vec8: EM_VECTOR3D
			current_vertex: EM_VECTOR3D
		do
			Precursor --create the hierarchy bounding box for all children

			--compare with local bounding box and expand if needed
			from
				hierarchy_bounding_box.start
				bounding_box.start
			until
				hierarchy_bounding_box.after and bounding_box.after
			loop
				current_vertex := hierarchy_bounding_box.item
				if current_vertex.x > max_x then max_x := current_vertex.x
				elseif current_vertex.x < min_x then min_x := current_vertex.x end
				if current_vertex.y > max_y then max_y := current_vertex.y
				elseif current_vertex.y < min_y then min_y := current_vertex.y end
				if current_vertex.z > max_z then max_z := current_vertex.z
				elseif current_vertex.z < min_z then min_z := current_vertex.z end

				current_vertex := bounding_box.item
				if current_vertex.x > max_x then max_x := current_vertex.x
				elseif current_vertex.x < min_x then min_x := current_vertex.x end
				if current_vertex.y > max_y then max_y := current_vertex.y
				elseif current_vertex.y < min_y then min_y := current_vertex.y end
				if current_vertex.z > max_z then max_z := current_vertex.z
				elseif current_vertex.z < min_z then min_z := current_vertex.z end

				hierarchy_bounding_box.forth
				bounding_box.forth
			end
			--define hierarchy_bounding_box
			vec1.set(max_x,min_y,max_z) --bottom quad
			vec2.set(max_x,min_y,min_z) --bottom quad
			vec3.set(min_x,min_y,min_z) --bottom quad
			vec4.set(min_x,min_y,max_z) --bottom quad
			vec5.set(max_x,max_y,max_z) --top quad
			vec6.set(min_x,max_y,max_z) --top quad
			vec7.set(min_x,max_y,min_z) --top quad
			vec8.set(max_x,max_y,min_z) --top quad

			hierarchy_bounding_box.wipe_out --remove all items
			hierarchy_bounding_box.extend(vec1)
			hierarchy_bounding_box.extend(vec2)
			hierarchy_bounding_box.extend(vec3)
			hierarchy_bounding_box.extend(vec4)
			hierarchy_bounding_box.extend(vec5)
			hierarchy_bounding_box.extend(vec6)
			hierarchy_bounding_box.extend(vec7)
			hierarchy_bounding_box.extend(vec8)
		end


feature -- Duplication

feature -- Miscellaneous

feature -- Basic operations

feature -- Obsolete

feature -- Inapplicable

feature {NONE} -- Implementation

	calculate_boundaries is
			-- calculatesa sphere countaining all vertices of the first LOD level
			-- TODO: this is not the minimal enclosing sphere!! try to implement Bernd Gaertner's algorithm to improve this!
		local
			center, current_vertex: EM_VECTOR3D
			radius, distance_to_center: DOUBLE
			vertex_count : INTEGER

			max_x, min_x, max_y, min_y, max_z, min_z: DOUBLE
			vec1,vec2,vec3,vec4,vec5,vec6,vec7,vec8: EM_VECTOR3D
		do
			create center

			-- loop through all vertices of LOD level 1 to find the weighted center and the bounding_box
			from
				ressource_list[1].vertex_list.start
			until
				ressource_list[1].vertex_list.after
			loop
				-- find bounding sphere center
				current_vertex := ressource_list[1].vertex_list.item
				center := center + current_vertex
				vertex_count := vertex_count + 1

				--find bounding box boundaries
				if current_vertex.x > max_x then max_x := current_vertex.x
				elseif current_vertex.x < min_x then min_x := current_vertex.x end
				if current_vertex.y > max_y then max_y := current_vertex.y
				elseif current_vertex.y < min_y then min_y := current_vertex.y end
				if current_vertex.z > max_z then max_z := current_vertex.z
				elseif current_vertex.z < min_z then min_z := current_vertex.z end

				ressource_list[1].vertex_list.forth
			end
			center := center * (1.0/vertex_count)

			-- loop through all vertices to find the radius
			from
				ressource_list[1].vertex_list.start
			until
				ressource_list[1].vertex_list.after
			loop
				current_vertex := ressource_list[1].vertex_list.item
				distance_to_center := (current_vertex-center).length
				if distance_to_center > radius then
					radius:= distance_to_center
				end

				ressource_list[1].vertex_list.forth
			end

			--define bounding sphere
			bounding_sphere.put(center,1)
			bounding_sphere.put(radius,2)

			--define bounding_box
			vec1.set(max_x,min_y,max_z) --bottom quad
			vec2.set(max_x,min_y,min_z) --bottom quad
			vec3.set(min_x,min_y,min_z) --bottom quad
			vec4.set(min_x,min_y,max_z) --bottom quad
			vec5.set(max_x,max_y,max_z) --top quad
			vec6.set(min_x,max_y,max_z) --top quad
			vec7.set(min_x,max_y,min_z) --top quad
			vec8.set(max_x,max_y,min_z) --top quad

			bounding_box.wipe_out --remove all items
			bounding_box.extend(vec1)
			bounding_box.extend(vec2)
			bounding_box.extend(vec3)
			bounding_box.extend(vec4)
			bounding_box.extend(vec5)
			bounding_box.extend(vec6)
			bounding_box.extend(vec7)
			bounding_box.extend(vec8)
		end

	render_node is
			-- renders the 3D_member to display
		local
			lod_level: INTEGER
		do
			--if not frustum_culling_enabled or else is_in_view_frustum then
				--level_of_detail.update_by_bounding_sphere(current)
				--lod_level := level_of_detail.index
				lod_level := 1
				ressource_list[lod_level].draw
			--end
		end

invariant
	invariant_clause: True -- Your invariant here

end
