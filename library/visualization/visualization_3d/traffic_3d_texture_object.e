indexing
	description: "3D Opengl object with textures"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_3D_TEXTURE_OBJECT

inherit

	EM_3D_OBJECT

	EM_GL_CONSTANTS

--	GLEXT_FUNCTIONS

	EM_GLEXT_CONSTANTS

	DOUBLE_MATH
		export {NONE} all end

create
	make

feature {NONE} -- Initialization

	make is
			-- Initialize with default scale.
		do
			scale.set(1,1,1)
			create textures.make (0)
		ensure
			textures_exist: textures /= Void
		end

feature -- Basic operations

	set_texture_id (a_texture_id: ARRAY[INTEGER])is
			-- Set the texture to `a_texture_id'.
			-- The object will then be drawn with this texture.
		do
			texture_id := a_texture_id
		ensure
			texture_set: texture_id = a_texture_id
		end

	add_texture(a_texture: EM_BITMAP)is
			-- Extend the currently used textures by `a_texture'.
		require
			a_texture_exists: a_texture /= Void
		do
			textures.extend (a_texture)
		ensure
			texture_set: textures.has (a_texture)
		end

	set_model (a_model: EM_3D_OBJECT)is
			-- Set `model' to `a_model'.
		require
			a_model_exists: a_model /= Void
		do
			model := a_model
			set_origin (model.origin.x, model.origin.y, model.origin.z)
			set_scale (model.scale.x, model.scale.y, model.scale.z)
			set_rotation (model.angle_x, model.angle_y, model.angle_z)
		ensure
			model_set: model = a_model
		end

	set_bounding_box(a_width, a_height, a_depth: DOUBLE) is
			-- Set `width', `height', and `depth' to `a_width', `a_height', and `a_depth'.
		do
			width := a_width
			height := a_height
			depth := a_depth
		ensure
			width_set: width = a_width
			height_set: height = a_height
			depth_set: depth = a_depth
		end

feature -- Access

	texture_id: ARRAY [INTEGER]
			-- Texture id currently used

	textures: ARRAYED_LIST [EM_BITMAP]
			-- All textures used for this object

feature {NONE} -- Implementation

	model: EM_3D_OBJECT
			-- 3d model to which the textures are bound

	draw_object	is
			-- Draw current.
		do
			bind_texture
			gl_enable(EM_GL_CULL_FACE)
			gl_enable(EM_GL_ALPHA_TEST)
			gl_alpha_func(EM_GL_GREATER, 0.5)
			model.draw_object
			gl_disable(EM_GL_CULL_FACE)
			gl_disable(EM_GL_ALPHA_TEST)
			unbind_texture
		end

	bind_texture is
			-- Bind the texture to the object.
		do
			if texture_id /= void and then texture_id.item(0) /= 0 then
				gl_enable(Em_gl_texture_2d)
				gl_bind_texture(Em_gl_texture_2d, texture_id.item (0))
			else
				gl_disable(Em_gl_texture_2d)
			end
		end

	unbind_texture is
			-- Deletes the texture so that also objects without texture can be drawn.
		do
			gl_disable(Em_gl_texture_2d)
		end

invariant

	textures_exists: textures /= Void

end


