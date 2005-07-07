indexing
	description: "Basic Interface for examples"
	author: "Roger Kueng"
	date: "2005/06/20"
	revision: "alpha"

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
		end
		
feature -- Access


	description: STRING is
			-- simple and short describtion of the example
		deferred
		end
		
	scene: ESDL_SCENE is
			-- If a simple description is not enough the example can 
			-- emit here it's own describing scene
		do
			Result := Void
		end

	name: STRING is
			-- the name of the example
		do
			Result := Current.generating_type
		end
		
feature -- Measurement

feature -- Status report
	hash_code : INTEGER 
--	is
--			-- 
--		do
--			Result := hash_number
--		end
		
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
	
	run_with_scene : ESDL_SCENE is 
			-- The example can specify it's own scene
		do
			Result := Void	
		end
		
	run ( an_example_runtime: TOUCH_EXAMPLE_RUNTIME) is
			-- The Entry-Point for a traffic_map Example
	require
		runtime_not_void: an_example_runtime /= Void
	deferred
	end
		
feature -- Obsolete

feature -- Inapplicable

feature {NONE} -- Implementation
	hash_number: INTEGER
	
invariant
	invariant_clause: True -- Your invariant here

end -- class TOUCH_EXAMPLE
