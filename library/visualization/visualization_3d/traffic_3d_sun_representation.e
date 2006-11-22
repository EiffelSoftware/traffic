indexing
	description: "A 3D Representation of the Sun and Sunlight"
	date: "$Date$"
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
		local
			fs: KL_FILE_SYSTEM
			s: STRING
		do
			-- Create the Sun Object and Sunlight
			create traffic_sun.make
			create traffic_sun_light.make_as_child((create{TE_3D_SHARED_GLOBALS}).root);
			(create{TE_3D_SHARED_GLOBALS}).renderpass_manager.renderpasses.i_th(1).add_light_source(traffic_sun_light)

			-- Set Sunight values
			traffic_sun_light.set_diffuse_color (1.0, 1.0, 0.8, 1.0)
			traffic_sun_light.set_name ("sun_light")

			-- Create sun_model
			fs := (create {KL_SHARED_FILE_SYSTEM}).file_system
			s := fs.pathname ("..", "objects")
			s := fs.pathname (s, "sun.obj")
			sun_model := (create{TE_3D_SHARED_GLOBALS}).scene_importer.import_3d_scene(s)
			sun_model.make_child_of((create{TE_3D_SHARED_GLOBALS}).root)
			sun_model.set_name("sun_model")
		ensure
			sun_model_created: sun_model /= Void
			sun_created: traffic_sun /= Void
			sun_light_created: traffic_sun_light /= Void
		end

feature -- Status setting

	enable_sunlight is
			-- Enable the Sunlight.
		do
			--traffic_sun_light.enable
		end

	disable_sunlight is
			-- Disable the Sunlight.
		do
			--traffic_sun_light.disable
		end

feature -- Basic operations

	update is
			-- Draw the sun.
		local
			sun_pos: GL_VECTOR_3D[DOUBLE]
			sun_3d_pos: EM_VECTOR3D
		do
			if time.is_time_running then
				-- If the time is running, then update the Sun Coordinates
				-- using the simulated time				
				traffic_sun.update
			end

			sun_pos := traffic_sun.position

			-- Set Lightposition
			traffic_sun_light.transform.set_position(sun_pos.x,sun_pos.y,sun_pos.z)
			sun_model.transform.set_position(sun_pos.x, sun_pos.y, sun_pos.z)

		end

feature {NONE} -- Implementation

	sun_model: TE_3D_NODE

	traffic_sun: TRAFFIC_SUN
		-- The Sun Object

	traffic_sun_light: TE_3D_INFINITE_LIGHT
		-- The Sun Light
end
