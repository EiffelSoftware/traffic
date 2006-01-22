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
	make(a_proc: PROCEDURE[ANY,TUPLE]) is
			-- Create a new objec
		do
			proc:= a_proc
		end
		
	
feature
	
	object_width: DOUBLE is 2.0
			-- The size of the bounding box in x direction of created objects
			
	object_height: DOUBLE is 2.0
			-- The size of the bounding box in y direction of created objects
			
	object_depth: DOUBLE is 2.0
			-- The size of the bounding box in z direction of created objects

	proc: PROCEDURE[ANY,TUPLE]
	
feature
	
	changed is
			-- 
		do
			unchanged:= False
		end
	
	specify_object is
			-- Defines the object.
		do
			proc.apply
		end
		
	

end
