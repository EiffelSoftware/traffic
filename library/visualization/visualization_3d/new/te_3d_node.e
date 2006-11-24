indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TE_3D_NODE inherit

		GL_FUNCTIONS
		export {NONE} all end

create
	make_as_child, make_as_root, make


feature -- initialization

	make_as_child (a_parent: TE_3D_NODE) is
		-- creates the node as child of a_parent
		do
			make
			if a_parent /= Void then
				a_parent.add_child (current)
			end
		ensure
			parent_set: parent = a_parent
			children_not_void: children /= Void
			transform_not_void: transform /= Void
		end

	make is
		-- creates the node without parent. Insert the node into the scene hierarchy to render it!
		do
			create transform.make
			--transform.event_channel.subscribe(agent feature name)
			create children.make(0)
			create hierarchy_bounding_box.make(6)
			enable_hierarchy_renderable
		ensure
			children_not_void: children /= Void
			transform_not_void: transform /= Void
		end

feature {TE_3D_SHARED_GLOBALS} -- initialization as root

	make_as_root is
			-- creates the node as root - this is only open to TE_3D_SHARED_ROOT so that there is only one root
		do
			create transform.make
			create children.make(0)
			create hierarchy_bounding_box.make(6)
			name := "scene_root"
			enable_hierarchy_renderable
		ensure
			parent_is_void: parent = Void
			children_not_void: children /= Void
			transform_not_void: transform /= Void
		end


feature -- Access

	transform : TE_3D_TRANSFORM
		-- transform object, storing the model_matrix of the node

	world_transform : TE_3D_TRANSFORM is
			-- calculates the transform object in worldspace
		do
				if parent.is_root = true then
					Result := transform
				else
					Result := parent.world_transform * transform
				end
		end

	name: STRING

	parent: TE_3D_NODE
		-- the parent node. If this is void, this is the root of the hirarchy.

	children : ARRAYED_LIST[TE_3D_NODE]
		-- list of all children nodes in the hirarchy

	-- key_frame_player

feature -- Status report

	is_root : BOOLEAN is
			-- is this node the root?
		do
			if parent = void then
				result := true
			else
				result := false
			end
		end

	is_parent_of (a_node: TE_3D_NODE): BOOLEAN is
			-- checks wether a_node is child of the actual node
		do
			from
				children.start
			until
				children.after
			loop
				if children.item = a_node then
					Result := true
				end
				children.forth
			end

		end

	hierarchy_renderable: BOOLEAN
			-- is the hierarchy, including this node as root of the hierarchy, renderable

feature -- Status setting

	enable_hierarchy_renderable is
			-- enables hierarchy_renderable
		do
			hierarchy_renderable := true
		end

	disable_hierarchy_renderable is
			-- disables hierarchy_renderable
		do
			hierarchy_renderable := false
		end

feature -- Cloning

	create_deep_instance: TE_3D_NODE is
			-- returns an instance of the 3D member and instances of all childs and subchilds of the 3d member as hirarchy
		do
			create Result.make_as_child(parent)
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

feature -- Element change

	-- both features can be used to get the same result, but they're applied from different points of view

	add_child (a_child: TE_3D_NODE) is
			-- adds a child to that node and sets the parent of this child to the actual node
		--require
			--child_not_yet_added: (is_parent_of(a_child) = false and a_child.parent /= current) --these two conditions should always have the same result!!
		do
			if a_child.parent /= Void then --remove a_child from a_childs' current parents' child list
				a_child.parent.remove_child(a_child)
			end
			--add a_child to the current nodes' childlist
			children.extend (a_child)
			--set the childs parent to the current node
			a_child.set_parent(Current)
		ensure
			child_is_inserted: children.is_inserted(a_child) = true
			child_has_right_parent: a_child.parent = current
		end

	make_child_of (a_parent: TE_3D_NODE) is
			-- ensures that the current node is removed from the old parents childlist, sets the new parent and makes the actual node a child of the new parent
		--require
			--is_not_already_child_of: (parent /= a_parent and a_parent.is_parent_of(current)) --these two conditions should always have the same result!!
		do
			--add the current node to a_parents' childlist
			a_parent.add_child(current)
		ensure
			is_child_of_new_parent: parent.is_parent_of(current)
			has_right_parent: parent = a_parent
		end


feature {TE_3D_NODE} -- Element Change

	remove_child (a_child: TE_3D_NODE) is
			-- removes the child from this nodes childrenlist
		require
			actual_node_is_parent: is_parent_of(a_child) = true
		do
			from
				children.start
			until
				children.after
			loop
				if children.item = a_child then
					children.remove
				end
				if not children.after then --TODO: ARGH! optimize this!
					children.forth
				end
			end
		end

	set_parent (new_parent: TE_3D_NODE) is
			-- sets the parent to the new_parent. must be only called by the 'add_child' feature of another TE_3D_NODE
		require
			new_parent_not_void: new_parent /= Void
		do
			parent := new_parent
		ensure
			parent_is_new_parent: parent = new_parent
		end


feature -- Removal

feature -- Measurement

	hierarchy_bounding_box: ARRAYED_LIST[EM_VECTOR3D]
			-- bounding box containing all children and sub-children

	calculate_hierarchy_bounding_box is
			-- updates the hierarchy_bounding_box. DON'T USE THIS EVERY FRAME CAUSE IT'S NOT PERFORMANT!
		local
			max_x, min_x, max_y, min_y, max_z, min_z: DOUBLE
			vec1,vec2,vec3,vec4,vec5,vec6,vec7,vec8: EM_VECTOR3D
			current_node: TE_3D_NODE
			current_vertex: EM_VECTOR3D
		do
			from
				children.start
			until
				children.after
			loop
				current_node := children.item
				current_node.calculate_hierarchy_bounding_box
				from
					current_node.hierarchy_bounding_box.start
				until
					current_node.hierarchy_bounding_box.after
				loop
					current_vertex := worldspace_to_localspace(current_node.localspace_to_worldspace(current_node.hierarchy_bounding_box.item))

					if current_vertex.x > max_x then max_x := current_vertex.x
					elseif current_vertex.x < min_x then min_x := current_vertex.x end
					if current_vertex.y > max_y then max_y := current_vertex.y
					elseif current_vertex.y < min_y then min_y := current_vertex.y end
					if current_vertex.z > max_z then max_z := current_vertex.z
					elseif current_vertex.z < min_z then min_z := current_vertex.z end
					current_node.hierarchy_bounding_box.forth
				end
				children.forth
			end

			--define bounding_box
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

	set_hierarchy_bounding_box(a_bounding_box: ARRAYED_LIST[EM_VECTOR3D]) is
			-- set the hierarchy_bounding_box without calculating it
		require
			must_countain_8_vertices: a_bounding_box.count = 8
		do
			hierarchy_bounding_box := a_bounding_box
		end


	hierarchy_bounding_sphere is
			-- TODO
		do

		end


feature -- Transformation

feature -- Conversion

feature -- Duplication

feature -- Engines

	--key_frame_player: TE_3D_KEY_FRAME_PLAYER
		--keyframe player to use keyframe animations

	--constraints: LINKED_LIST[TE_3D_CONSTRAINT]
		--list of 3d constraints

feature -- Basic operations

	set_name(a_name:STRING) is
			-- sets the name
		do
			name := a_name
		end


feature -- Obsolete

feature -- Inapplicabel

feature -- Space transformation

	worldspace_to_localspace (a_vector: EM_VECTOR3D):EM_VECTOR3D is
			-- converts a worldspace 3d vector to localspace of the current 3D node. a_vector MUST BE IN WORLDSPACE!!
		do
			Result := world_transform.inverse_vectortransform(a_vector)
		end

	localspace_to_worldspace (a_vector: EM_VECTOR3D):EM_VECTOR3D is
			-- converts a localspace 3d vector to worldspace. a_vector MUST BE IN LOCAL SPACE OF THE CURRENT 3D_NODE!!
		do
			Result := world_transform.vectortransform(a_vector)
		end

feature {TE_3D_NODE, TE_RENDERPASS}-- Drawing

	draw is
			-- calls draw feature of all children
		local
			rotation_quat: EM_QUATERNION
			aor: EM_VECTOR3D --axis of rotation
		do
			if hierarchy_renderable then
				gl_push_matrix

				gl_mult_matrixd(transform.to_opengl)

				--render the node
				render_node

				--draw the children
				from
					children.start
				until
					children.after
				loop
					children.item.draw
					children.forth
				end
				gl_pop_matrix
			end
		end

	render_node is
			-- performs openGL commands to display the node on the display
		do
			-- Do nothing, since the simple 3D_node has got no graphical representation
		end


feature {NONE} --Implementation


invariant
	is_true: True -- Your invariant here

end
