indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TE_RENDERPASS inherit

		TE_3D_SHARED_GLOBALS

		GL_FUNCTIONS export {NONE} all end

		EM_GL_CONSTANTS export {NONE} all end

	create
		make

feature {TE_RENDERPASS_MANAGER} -- Initialization

	make is
			-- create renderpass with
	do
		create camera.make_as_child(root)
		create light_sources.make
		background_color.set(0.1, 0.4, 0.5, 0.0)
	end

feature -- Access

	camera: TE_3D_CAMERA

	name: STRING

	light_sources: LINKED_LIST[TE_3D_LIGHT_SOURCE]

	background_color: EM_VECTOR4D

feature -- Measurement

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

	add_light_source(new_light_source: TE_3D_LIGHT_SOURCE) is
			-- adds a light source to the light sources which will influence to the lighting equation of this renderpass
		require
			is_in_hierarchy: new_light_source.parent /= Void
		do
			light_sources.extend (new_light_source)
		end


feature -- Obsolete

feature -- Inapplicable

	set_camera (a_camera:TE_3D_CAMERA) is
			-- sets the camera of the current renderpass
		require
			is_in_hierarchy: camera.parent /= Void
		do
			camera := a_camera
		end


feature {TE_RENDERPASS_MANAGER} -- Implementation

	render is
			-- renders the current pass
		local
		i:INTEGER
		do
			-- Reset depth buffer
			gl_clear_external (Em_gl_depth_buffer_bit)

			-- Opengl settings
			gl_enable_external (Em_gl_depth_test)

			-- Enable antialiasing
			gl_enable_external (Em_gl_line_smooth)
			gl_hint_external (Em_gl_line_smooth, Em_gl_nicest)

			-- Clearing background color to background_color
			gl_clear_color_external (background_color.x, background_color.y, background_color.z, background_color.w)
			gl_clear_external (em_gl_color_buffer_bit)


			--specify the camera for this pass
			camera.specify
			--enable and specify lightsources of the current pass
			gl_matrix_mode(em_GL_MODELVIEW)
			gl_load_identity

			from
				light_sources.start
				i:=0
			until
				light_sources.after
			loop
				gl_enable(em_GL_LIGHT0 + i)
				light_sources.item.specify(i)
				light_sources.forth
				i := i+1
			end
			--disable unused lightsources
			from
			until
				i > 7
			loop
				gl_disable(em_GL_LIGHT0 + i)
				i := i+1
			end

			root.draw
		end

	output_gl_states is
			-- outputs some gl states for debugging
		local
			output_string:STRING
			output_int: EM_VECTOR4D
		do
			--create output_string.make_empty

			io.put_string("%N %N %N %N %N %N %N %N %N %N %N %N %N %N %N %N %N %N %N %N %N %N %N %N %N %N %N %N %N %N %N")
			--gl_get_booleanv(em_GL_BLEND, output_string)
			--io.put_string ("blending: " + output_string +"%N")
			--gl_get_booleanv(em_GL_CULL_FACE,output_string)
			--io.put_string ("polygon culling: " +output_string +"%N")
			--gl_get_integerv(em_GL_CULL_FACE_MODE,output_int.to_pointer)
			--io.put_string ("culling mode: " +output_int.x.out + "%N")

			io.put_string("lightsources: " + light_sources.count.out +"%N")
			io.put_string("lightsource1 position: " + light_sources.first.transform.position.x.floor.out + " "+ light_sources.first.transform.position.y.floor.out + " " + light_sources.first.transform.position.z.floor.out)
		end



invariant
	invariant_clause: True -- Your invariant here
	valid_number_of_lightsources: light_sources.count <= 8

end
