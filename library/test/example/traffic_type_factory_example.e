indexing
	description: "Example use of TRAFFIC_TYPE_FACTORY class."
	author: "Sibylle Aregger, ETH Zurich"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_TYPE_FACTORY_EXAMPLE

create
	make
	
feature -- Initialization

	make is
			-- Create `Current'.
		do
			create text.make_empty -- emty text
		ensure
			text_exists: text /= Void
		end
		
feature -- Basic operation

	run is
			-- Run example demonstration.
	local
		type_factory: TRAFFIC_TYPE_FACTORY
		type_name: STRINg
		type: TRAFFIC_TYPE
 	do
	 	-- create type_factory
		create type_factory.make

 		-- build type tram
 		type_name := "tram"
 		if type_factory.valid_name (type_name) then
 			type_factory.build (type_name)
 		end
 		
		-- if successful build assign result to type variable
 		if type_factory.has_type then
 			type := type_factory.traffic_type
 			-- display type
			text := "built type: " + type.out
		else
			-- no successful build
			-- disply informaition
			text := "no type built."
 		end
	end
	
feature -- Access

	text: STRING
			-- Text output of test.
invariant
	text_exists: text /= Void
			
end -- class TRAFFIC_TYPE_FACTORY_EXAMPLE
