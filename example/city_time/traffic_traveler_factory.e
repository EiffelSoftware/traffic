indexing
	description: "Factory for traveler objects"
	author: "Florian Geldmacher"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_TRAVELER_FACTORY
inherit	
--	EM_3D_OBJECT_FACTORY

	EM_SHARED_BITMAP_FACTORY
		export {NONE} all end
		
	EM_3D_OBJ_LOADER
--	rename
--		specify_object as specify_loader
--	export {TRAFFIC_TRAVELER_REPRESENTATION}
--		specify_loader
	redefine
		make
--		, specify_object, load_file
	end

create
	make
	
feature -- Creation

	make is
			-- set up the factory
			do
				Precursor
				loaded_file := ""
				create traveler_templates.make(1)
				create gaugers.make(1)
			end
		
			
--	object_width: DOUBLE is 2.0
--			-- The size of the bounding box in x direction of created objects.
--			
--	object_height: DOUBLE is 2.0
--			-- The size of the bounding box in y direction of created objects.
--			
--	object_depth: DOUBLE is 2.0
--			-- The size of the bounding box in z direction of created objects.
		
	
feature -- Decision process

	add_gauger (procedure: FUNCTION [ANY, TUPLE, STRING]; key: STRING) is
			-- Add a gauger to `gaugers'.
		require
			procedure_valid: procedure /= void 
			key_valid: key /= void and then not key.is_empty
		do
			gaugers.force (procedure, key)
		ensure
			procedure = gaugers.item (key)
		end
		
	remove_gauger (key: STRING) is
			-- Remove a gauger from `gaugers'.
		require
			key_valid: key /= void and then not key.is_empty
		do
			gaugers.remove (key)
		ensure
			gaugers.removed
		end

	add_traveler_type (procedure: PROCEDURE[ANY,TUPLE]; key: STRING) is
			-- Add a type of place to `traveler_templates'.
		require
			procedure_valid: procedure /= void 
			key_valid: key /= void and then not key.is_empty
		do
			traveler_templates.force (procedure, key)
		ensure
			traveler_templates.item (key) = procedure
		end
		
	remove_traveler_type (key: STRING) is
			-- Remove a type of place from `traveler_templates'.
		require
			key_valid: key /= void and then not key.is_empty
		do
			traveler_templates.remove (key)
		ensure
			traveler_templates.removed	
		end

	take_decision (gauger: STRING; args: TUPLE) is
			-- Let `gauger' decide.
		require
			gauger_valid: gauger /= void and then not gauger.is_empty
		do
			decision := gaugers.item(gauger).item(args)
			unchanged := False
		end
	
			
--	load_file (a_filename: STRING) is
--			-- save the name, so that a file is not loaded two times
--			do
--				if loaded_file /= a_filename then
--					loaded_file := a_filename
--					Precursor (a_filename)
--				end
--			end	


feature {NONE} -- Implementation
			
	decision: STRING
			-- The decision the gauger has taken
			
	gaugers: HASH_TABLE[FUNCTION [ANY, TUPLE, STRING], STRING]
			-- Helps to decide the kind of traveler to draw.		
			
	traveler_templates: HASH_TABLE[PROCEDURE[ANY,TUPLE], STRING]
			-- Containter of all types of travelers.
			
	loaded_file: STRING
			
feature {EM_3D_OBJECT_FACTORY} -- Deferred features that should not be accessible from the outside

--	specify_object is
--			-- Specify an object that can be drawn in the origin
--			-- (front, left, lower corner of bounding box = 0,0,0)
--		do
--			traveler_templates.item(decision).apply
--			Precursor
--		end

		
		

		
end -- TRAFFIC_TRAVELER_FACTORY
