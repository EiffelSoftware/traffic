indexing
	description: "A 3D Representation of the Sun and Sunlight"
	author: "Lars Krapf <lkrapf@student.ethz.ch>"
	date: "30.05.2006"
	revision: "$Revision$"

class
	TRAFFIC_3D_SUN_REPRESENTATION

inherit
	EM_CONSTANTS
		 export {NONE} all end
	
	GL_FUNCTIONS
		export {NONE} all end	
		
	GLU_FUNCTIONS
		export {NONE} all end
	
	MATH_CONST
		export {NONE} all end

	TRAFFIC_SHARED_TIME
		
create
	make

feature {NONE} -- Initialization

	make is
			-- Initialize `Current'.
		do
			-- Create the Sun Object and Sunlight
			create traffic_sun.make
			create traffic_sun_light.make(em_gl_light0)

			-- Set Sunight values
			traffic_sun_light.ambient.set_xyzt (0, 0, 0, 1)
			traffic_sun_light.specular.set_xyzt (0, 0, 0, 1)
			traffic_sun_light.diffuse.set_xyzt (1, 1, 0.8, 1)
			traffic_sun_light.apply_values
			
			-- Create Color
			create traffic_sun_color.make_xyzt (1,1,0.5,1)
			
		ensure
			color_created: traffic_sun_color /= Void
			sun_created: traffic_sun /= Void
			sun_light_created: traffic_sun_light /= Void
		end

feature -- Basic Operation

	
	enable_sunlight is
			-- Enable the Sunlight
		do		
			traffic_sun_light.enable
		end

	disable_sunlight is
			-- Disable the Sunlight
		do
			traffic_sun_light.disable
		end
		
feature -- Drawing
	
	draw is
			-- Draw the Sun
		local
			sun_pos: GL_VECTOR_3D[DOUBLE]
		do
			if time.is_time_running then
				-- If the time is running, then update the Sun Coordinates
				-- using the simulated time				
				traffic_sun.update
			end
			
			sun_pos := traffic_sun.position
			
			-- Set Lightposition
			traffic_sun_light.position.set_xyz (sun_pos.x,sun_pos.y,sun_pos.z)
			traffic_sun_light.apply_values
			
			-- Draw "Sun"
			gl_matrix_mode_external (em_gl_modelview_matrix)
			gl_push_matrix_external
			gl_disable_external(em_gl_lighting)
			gl_color3dv_external(traffic_sun_color.pointer)
			gl_translated_external (sun_pos.x, sun_pos.y, sun_pos.z)
			glu_sphere_external (glu_new_quadric, 1, 72, 100)
			gl_enable_external(em_gl_lighting)
			gl_pop_matrix_external

		end
		
feature {NONE} -- Implementation

	traffic_sun: TRAFFIC_SUN
		-- The Sun Object
		
	traffic_sun_light: GL_LIGHT
		-- The Sun Light

	traffic_sun_color: GL_VECTOR_4D[DOUBLE]
		-- The Color of the Sun

end
