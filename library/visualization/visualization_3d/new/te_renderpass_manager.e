indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TE_RENDERPASS_MANAGER inherit

		GL_FUNCTIONS export {NONE} all end

		EM_GL_CONSTANTS export {NONE} all end

	create
		make

feature {TE_3D_SHARED_GLOBALS} -- Initialization

	make is
			-- creates the renderpass manager, sets default global render settings and creates the first render pass
		local
			first_renderpass: TE_RENDERPASS
			s:STRING
		do
			enable_culling

			create renderpasses.make(1)
			create first_renderpass.make
			current_renderpass := first_renderpass
			current_renderpass_index := 1
			renderpasses.extend(first_renderpass)

			--DEBUG
				create s.make_from_c (gl_get_string(em_GL_VENDOR))
				io.put_string("GL_VENDOR: " + s +"%N")
				create s.make_from_c (gl_get_string(em_GL_RENDERER))
				io.put_string("GL_RENDERER: " + s +"%N")
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

	create_new_renderpass is
			-- creates a new default renderpass and extends it to the renderpasses
		local
			new_renderpass: TE_RENDERPASS
		do
			create new_renderpass.make
			renderpasses.extend(new_renderpass)
		end


feature -- Implementation

	render is
			-- renders all renderpasses
		local
			i:INTEGER
			ps:PROFILING_SETTING
		do
			-- DEBUG
				gl_enable(em_gl_lighting)
				gl_disable(em_gl_color_material)
				gl_enable(em_GL_NORMALIZE)
			--/DEBUG

			--DEBUG
				--create ps.make
				--ps.start_profiling
			--/DEBUG


			from
				renderpasses.start
				i := 1
			until
				renderpasses.after
			loop
				current_renderpass := renderpasses[i]
				current_renderpass_index := i
				renderpasses.item.render
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
