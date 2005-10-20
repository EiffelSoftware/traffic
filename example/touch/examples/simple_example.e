
class
	SIMPLE_EXAMPLE

inherit
	TOUCH_EXAMPLE
		redefine
			run_with_scene
		end

feature -- Access
	description: STRING is
		once
			Result := "Hello World Example"
		end

feature -- Basic operations
	run_with_scene (exit_scene: EM_SCENE): EM_SCENE is
		local
			example_scene: TOUCH_SIMPLE_TRAFFIC_SCENE
		do
			-- Create the scene we want our example to run
			create example_scene.make_with_zurich (Current)
			-- Set the exit_scene
			example_scene.set_next_scene (exit_scene)
			-- Return scene
			Result := example_scene
		end
		
	run (a_runtime: TOUCH_EXAMPLE_RUNTIME) is
		do
			-- Ouptut Hello World
			a_runtime.console_out ("Hello World")
		end
		
end -- class SIMPLE_EXAMPLE








