indexing
	description: "Factory for TRAFFIC_BUILDINGS"
	date: "$Date$"
	revision: "$Revision"

class
	NEW_TRAFFIC_BUILDING_FACTORY

inherit
	TRAFFIC_3D_OBJ_LOADER

creation
	make

feature -- Initialization

	make is
			-- Set up the factory.
			do
				default_create
				create building_templates.make(1)
				create gaugers.make(1)
			end

--	object_width: DOUBLE is 2.0
--			-- The size of the bounding box in x direction of created objects
--			
--	object_height: DOUBLE is 2.0
--			-- The size of the bounding box in y direction of created objects
--			
--	object_depth: DOUBLE is 2.0
--			-- The size of the bounding box in z direction of created objects		


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

	add_building_type (procedure: PROCEDURE[ANY,TUPLE]; key: STRING) is
			-- Add a type of building to `building_templates'.
		require
			procedure_valid: procedure /= void
			key_valid: key /= void and then not key.is_empty
		do
			building_templates.force (procedure, key)
		ensure
			building_templates.item (key) = procedure
		end

	remove_building_type (key: STRING) is
			-- Remove a type of building from `building_templates'.
		require
			key_valid: key /= void and then not key.is_empty
		do
			building_templates.remove (key)
		ensure
			building_templates.removed
		end

	take_decision (gauger: STRING) is
			-- Let `gauger' decide.
		require
			gauger_valid: gauger /= void and then not gauger.is_empty
		do
			decision := gaugers.item(gauger).item([1])
			unchanged := False
		end

feature {NONE} -- Implementation

	decision: STRING
			-- The decision the gauger has taken

	gaugers: HASH_TABLE[FUNCTION [ANY, TUPLE, STRING], STRING]
			-- Helps to decide the kind of place to draw		

	building_templates: HASH_TABLE[PROCEDURE[ANY,TUPLE], STRING]
			-- Containter of all types of places

feature {EM_3D_OBJECT_FACTORY} -- Deferred features that should not be accessible from the outside

--	specify_object is
--			-- Specify an object that can be drawn in the origin
--			-- (front, left, lower corner of bounding box = 0,0,0)
--		do
--			building_templates.item(decision).apply
--		end

invariant
	building_templates_valid: building_templates /= void
	gaugers_valid: gaugers /= void

end

