indexing
	description: "Basic Interface for examples"
	date: "2005/08/25"
	revision: "1.0"

deferred class
	TOUCH_EXAMPLE
	
	inherit
		HASHABLE
			redefine
				default_create,
				hash_code
			end
		SHARED_ID_GENERATOR
			undefine
				copy,
				is_equal,
				default_create
			end
		
feature -- Initialisation
	default_create is
			-- 
		do
			Precursor {HASHABLE}
			hash_code := id_generator.new_id
			create pictures.make_default
			
		end
		
feature -- Access
	description: STRING is
			-- simple and short describtion of the example
		deferred
		end
		
	pictures: DS_LINKED_LIST [EM_BITMAP]
			-- If a simple description is not enough the example can 
			-- put here a list of pictures. 
		
	name: STRING is
			-- the name of the example
		do
			Result := Current.generating_type
		end

feature -- Basic operations
	
	run_with_scene (on_exit_scene: EM_SCENE): EM_SCENE is 
			-- The example can specify it's own scene
			-- The 'on_exit_scene' can be set to get
			-- back to the menu
		do
			Result := Void	
		end
		
	run (an_example_runtime: TOUCH_EXAMPLE_RUNTIME) is
			-- The Entry-Point for the Example
	require
		runtime_not_void: an_example_runtime /= Void
	deferred
	end

feature {NONE} -- From base class HASHABLE
	hash_code : INTEGER 

end -- class TOUCH_EXAMPLE
