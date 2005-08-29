indexing
	description: "[

		An OpenGL light.
		Note: this is a simple implementation which doesn't allow to set directional lights.
	
	]"
	date: "$Date$"
	revision: "$Revision$"

class
	GL_LIGHT
	
inherit
	GL_FUNCTIONS
		export {NONE} all end
	
	EM_CONSTANTS
		export {NONE} all end
		
create
	make

feature {NONE} -- Initialisation

	make (an_id: INTEGER) is
			-- Initialise light with `an_od'.
		require
			an_id_valid: an_id = Em_gl_light0 or an_id = Em_gl_light1 or an_id = Em_gl_light2 or an_id = Em_gl_light3
		do
			id := an_id
			create ambient.make_xyzt (0, 0, 0, 1)
			create specular.make_xyzt (0, 0, 0, 1)
			create diffuse.make_xyzt (0, 0, 0, 1)
			create position.make_xyz (0, 0, 0)
		end

feature -- Access

	id: INTEGER
			-- OpenGL light id
	
	ambient: GL_VECTOR_4D [REAL]
			-- Ambient aspect
	
	specular: GL_VECTOR_4D [REAL]
			-- Specular aspect
			
	diffuse: GL_VECTOR_4D [REAL]
			-- Diffuse aspect

	position: GL_VECTOR_3D [REAL]
			-- Light position

feature -- Basic operations

	apply_values is
			-- Aplly lighting values to opengl.
		do
			gl_lightfv (id, Em_gl_diffuse, diffuse.pointer)
			gl_lightfv (id, Em_gl_ambient, ambient.pointer)
			gl_lightfv (id, Em_gl_specular, specular.pointer)
			gl_lightfv (id, Em_gl_position, position.pointer)
		end

	enable is
			-- Enable light.
		do
			gl_enable (id)
		end
	
	disable is
			-- Disable light.
		do
			gl_disable (id)
		end

invariant
	valid_light_id: id = Em_gl_light0 or id = Em_gl_light1 or id = Em_gl_light2 or id = Em_gl_light3

end
