indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TE_RENDERPASS_MANAGER inherit

		GL_FUNCTIONS export {NONE} all end

		EM_GL_CONSTANTS export {NONE} all end

		GLEXT_FUNCTIONS export {NONE} all end

		EM_GLEXT_CONSTANTS export {NONE} all end

		--DEBUG
		MEMORY
		--/DEBUG

	create
		make

feature {TE_3D_SHARED_GLOBALS} -- Initialization

	make is
			-- creates the renderpass manager, sets default global render settings and creates the first render pass
		local
			beauty_renderpass: TE_RENDERPASS_BEAUTY
			s:STRING
			i:INTEGER
		do
			enable_culling

			create renderpasses.make(1)
			create beauty_renderpass.make
			current_renderpass := beauty_renderpass
			current_renderpass_index := 1
			renderpasses.extend(beauty_renderpass)

			--DEBUG
				io.put_string("OpenGL Info: %N")
				create s.make_from_c (gl_get_string(em_GL_VENDOR))
				io.put_string("GL_VENDOR: " + s +"%N")
				create s.make_from_c (gl_get_string(em_GL_RENDERER))
				io.put_string("GL_RENDERER: " + s +"%N")
--				create s.make_from_c (gl_get_string(em_GL_EXTENSIONS))
--				io.put_string("GL_EXTENSIONS: " + s + "%N")
				gl_get_integerv(em_GL_MAX_TEXTURE_UNITS_ARB, $i)
				io.put_string ("supported number of Textures for Multitexturing: " + i.out + "%N")

				io.put_string("garbage collection: " + collecting.out + "%N")

				io.put_string("%N %N")
			--/DEBUG
		end


feature -- Access

	current_renderpass: TE_RENDERPASS

	current_renderpass_index: INTEGER

	renderpasses: ARRAYED_LIST[TE_RENDERPASS]

feature -- Global Render Settings

	enable_culling is
			-- enables gobal culling
		do
			gl_enable(em_gl_cull_face)
		end

	disable_culling is
			-- disables global culling
		do
			gl_disable(em_gl_cull_face)
		end

	enable_anti_aliasing is
			-- enables global antialiasing
		do

		end

	disable_anti_aliasing is
			-- disables global anti_aliasing
		do

		end

feature -- Renderpass handling

	add_renderpass(new_render_pass: TE_RENDERPASS) is
			-- adds a renderpass to the queue
		do
			renderpasses.extend (new_render_pass)
		end

feature -- Implementation

	render is
			-- renders all renderpasses
		local
			i:INTEGER
			ambient_color: GL_VECTOR_4D[REAL]
			--debug_var: SPECIAL[ANY]
		do
			-- DEBUG

				--full_collect

				--debug_var := objects_instance_of(create{LINKED_LIST[LINKED_LIST[EM_VECTOR3D]]}.make)
			--/DEBUG


			from
				renderpasses.start
				i := 1
			until
				renderpasses.after
			loop
				if renderpasses[i].enabled then
					current_renderpass := renderpasses[i]
					current_renderpass_index := i
					renderpasses.item.render
				end
				renderpasses.forth
				i := i+1
			end

			--DEBUG
				--ps.stop_profiling
			--/DEBUG
		end


invariant
	invariant_clause: True -- Your invariant here

end
