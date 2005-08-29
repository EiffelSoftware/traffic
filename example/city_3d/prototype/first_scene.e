indexing
	description: "W�rfel in OpenGL"
	date: "$Date$"
	revision: "$Revision$"


class FIRST_SCENE

inherit

	EM_SCENE
		redefine
			redraw
		end
		
	EM_CONSTANTS
		export {NONE} all end
		
	EM_SHARED_SUBSYSTEMS
		export {NONE} all end
		
	GL_FUNCTIONS
		export {NONE} all end
		
	GLU_FUNCTIONS
		export {NONE} all end
		
	SDL_VIDEO_FUNCTIONS
		export {NONE} all end

create
	make_scene

feature -- Initialization

	initialize_scene is
			-- Initialize the scene.
		do
			gl_enable (em_gl_depth_test)
			angle := 0

			-- Setup the projection matrix
			gl_matrix_mode (Em_gl_projection)
			gl_load_identity
			glu_perspective (45, width/height, 0.1, 100)

			-- Setup the model view matrix
			gl_matrix_mode (Em_gl_modelview)
			gl_load_identity
			
			-- Initialize normalized speed for rotation of pyramid
			create speed
			speed.set_speed (100)			
		end
		
feature {NONE} -- Implementation

	redraw is
			-- Draw all
		do
			-- Clear the screen
			gl_clear (Em_gl_color_buffer_bit | Em_gl_depth_buffer_bit)
			gl_load_identity
			gl_clear_color (1, 1, 1, 0)

			-- Move the cube into the screen and rotate it
			gl_translatef( 0, 0, -9 )
			gl_rotatef(angle, 0, 1, 0)

			gl_begin (em_gl_quads)
			
				-- Front
				gl_color3f(1, 0, 0) -- Red
				gl_vertex3d (-1, 1, 1)
				gl_vertex3d (-1, -1, 1)
				gl_vertex3d (1, -1, 1)
				gl_vertex3d (1, 1, 1)

				-- Right
				gl_color3f(0, 1, 0) -- Green
				gl_vertex3d (1, -1, 1)
				gl_vertex3d (1, 1, 1)
				gl_vertex3d (1, 1, -1)
				gl_vertex3d (1, -1, -1)
				
				-- Back
				gl_color3f (0, 0, 1) -- Blue
				gl_vertex3d (1, 1, -1)
				gl_vertex3d (1, -1, -1)
				gl_vertex3d (-1, -1, -1)
				gl_vertex3d (-1, 1, -1)

				-- Left
				gl_color3f (1, 1, 0) -- Yellow
				gl_vertex3d (-1, -1, -1)
				gl_vertex3d (-1, 1, -1)
				gl_vertex3d (-1, 1, 1)
				gl_vertex3d (-1, -1, 1)

			gl_end
			
			-- Increment the angle
			if
				angle < 360	
			then
				angle := angle + speed.get_delta
			else
				angle := 0
			end
			screen.redraw
		end
		
	angle: DOUBLE
		-- The angle of the rotation in degrees
		
	speed: EM_NORMALIZED_SPEED
		-- Rotation speed for cube

feature {NONE} -- Implementation
	-- TODO: Find a better solution than repeating this
		
	width: INTEGER is 1024
		-- The width of the surface
		
	height: INTEGER is 768
		-- The height of the surface
		
	resolution: INTEGER is 24
		-- The resolution of the surface

end
