indexing
	description: "Factory for paths"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_3D_PATH_FACTORY

inherit
	EM_3D_OBJECT_FACTORY

	EM_SHARED_BITMAP_FACTORY
		export {NONE} all end

	EM_CONSTANTS
		export {NONE} all end

create
	make

feature -- Creation
	make is
			-- set up the factory
			do
				create path_templates.make(1)
				create gaugers.make(1)
			end

	object_width: DOUBLE is 2.0
			-- The size of the bounding box in x direction of created objects.

	object_height: DOUBLE is 2.0
			-- The size of the bounding box in y direction of created objects.

	object_depth: DOUBLE is 2.0
			-- The size of the bounding box in z direction of created objects.

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

	add_path_type (procedure: PROCEDURE[ANY,TUPLE]; key: STRING) is
			-- Add a type of line to `line_templates'.
		require
			procedure_valid: procedure /= void
			key_valid: key /= void and then not key.is_empty
		do
			path_templates.force (procedure, key)
		ensure
			path_templates.item (key) = procedure
		end

	remove_path_type (key: STRING) is
			-- Remove a type of line from `line_templates'.
		require
			key_valid: key /= void and then not key.is_empty
		do
			path_templates.remove (key)
		ensure
			path_templates.removed
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
			-- Helps to decide the kind of line to draw.

	path_templates: HASH_TABLE[PROCEDURE[ANY,TUPLE], STRING]
			-- Containter of all types of lines.

feature {EM_3D_OBJECT_FACTORY} -- Deferred features that should not be accessible from the outside

	specify_object is
			-- Specify an object that can be drawn in the origin
			-- (front, left, lower corner of bounding box = 0,0,0)
		do
			path_templates.item(decision).apply
		end

end
