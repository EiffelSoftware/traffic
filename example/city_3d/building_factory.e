indexing
	description: "Factory for buildings"
	date: "$Date$"
	revision: "$Revision$"

class
	BUILDING_FACTORY

inherit

	EM_3D_OBJECT_FACTORY

	EM_SHARED_BITMAP_FACTORY
		export {NONE} all end	

creation

	make

feature -- Interface

	make is
			-- Creation procedure
		do
--			bitmap_factory.create_bitmap_from_image ("building.gif")
--				check
--					todo_proper_error_handling: bitmap_factory.last_bitmap /= Void
--				end
--			bitmap_factory.last_bitmap.do_not_free_gl_textures
--			texture := bitmap_factory.last_bitmap.gl_texture_mipmap
			create building_templates.make (1)
			create gaugers.make (1)
		end
			
	object_width: DOUBLE is 2.0
			-- The size of the bounding box in x direction of created objects
	object_height: DOUBLE is 2.0
			-- The size of the bounding box in y direction of created objects
	object_depth: DOUBLE is 2.0
			-- The size of the bounding box in z direction of created objects

feature -- Decision process

	add_gauger(procedure: FUNCTION [ANY, TUPLE, STRING]; key: STRING) is
			-- Add a gauger to list
		require procedure_valid: procedure /= void 
				key_valid: key /= void and then not key.is_empty
		do
			gaugers.force (procedure, key)
		ensure procedure = gaugers.item (key)
		end
		
	remove_gauger(key: STRING) is
			-- Remove a gauger from the list
		require key_valid: key /= void and then not key.is_empty
		do
			gaugers.remove (key)
		ensure gaugers.removed
		end

	add_building_type(procedure:PROCEDURE[ANY,TUPLE] ;key: STRING) is
			-- Add a type of building to list
		require procedure_valid: procedure /= void 
				key_valid: key /= void and then not key.is_empty
		do
			building_templates.force (procedure, key)
		ensure building_templates.item (key) = procedure
		end
		
	remove_building_type (key: STRING) is
			-- Remove a type of building from the list
		require key_valid: key /= void and then not key.is_empty
		do
				building_templates.remove (key)
		ensure building_templates.removed	
		end

	take_decision(gauger: STRING; args: TUPLE) is
					-- Let `gauger' decide
		require gauger_valid: gauger /= void and then not gauger.is_empty
				args_valid: args /= void
		do
			decision := gaugers.item(gauger).item (args)
			unchanged := false
		end
			
feature {NONE} -- Implementation
			
	decision: STRING
		-- The decision the gauger has taken.
	gaugers: HASH_TABLE[FUNCTION [ANY, TUPLE, STRING], STRING]
		-- Decides the kind of building to draw.
	building_templates: HASH_TABLE[PROCEDURE[ANY,TUPLE], STRING]
			-- Containter of all types of buildings.
	texture: INTEGER
			-- Texture of the buildings
			
	specify_object is
			-- Defines the object.		
		do
			building_templates.item (decision).apply
		end

end -- class BUILDING_FACTORY
