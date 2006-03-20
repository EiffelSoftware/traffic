indexing
	description: "Factory for TRAFFIC_BUILDINGS"
	author: "Fabian Wüest"
	date: "22.01.2006"
	revision: "0.1"

class
	TRAFFIC_BUILDING_FACTORY

inherit
	EM_3D_OBJECT_FACTORY
	
creation
	make
	
feature
	make(a_representation: PROCEDURE[ANY,TUPLE]) is
			-- Create a new objec
		require
			representation_valid: a_representation /= void
		do
			representation := a_representation
		ensure
			representation_set: representation = a_representation
		end
		
	
feature --status
	
	changed is
			-- Set the model information to changed so that the displaylist is recompiled.
		do
			unchanged:= False
		ensure
			changed: unchanged = False
		end
		
	object_width: DOUBLE is 2.0
			-- The size of the bounding box in x direction of created objects
			
	object_height: DOUBLE is 2.0
			-- The size of the bounding box in y direction of created objects
			
	object_depth: DOUBLE is 2.0
			-- The size of the bounding box in z direction of created objects

	representation: PROCEDURE[ANY,TUPLE]
			-- Representation procedure for displaylist
	
	set_representation (a_representation: PROCEDURE[ANY,TUPLE]) is
			-- Change representation to `a_representation'.
			-- Set `unchanged' to false so that displaylist is recompiled
		require
			representation_valid: a_representation /= void
		do
			representation := a_representation
			unchanged:= false
		ensure
			representation_set: representation = a_representation
			changed: unchanged = false
		end
		

feature {EM_3D_OBJECT_FACTORY} --Implementation
	
	specify_object is
			-- Defines the object.
		do
			representation.apply
		end
		
invariant
	representation_valid: representation /= void
	
end
