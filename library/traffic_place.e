indexing
	description: "Place."
	author: "Sibylle Aregger, ETH Zurich"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_PLACE
	
inherit
	HASHABLE
		rename 
			out as hashable_out
		end

create
	make, make_with_position
	
feature {NONE} -- Initialize

	make (a_name: STRING) is
			-- Initilize `Current'.
		require
			a_name_exists: a_name /= Void
			a_name_not_empty: not a_name.is_empty
		do
			name := a_name
			create position.make (0.0, 0.0)
		ensure
			name_set: equal (a_name, name)
			position_exists: position /= Void
		end
		
	make_with_position (a_name: STRING; a_x, a_y: INTEGER) is
			-- Initialize `Current' with name `a_name' and position `a_x', `a_y'.
		require
			a_name_exists: a_name /= Void
			a_name_not_empty: not a_name.is_empty
			a_x_exists: a_x /= Void
			a_y_exists: a_y /= Void
		do
			name := a_name
			create position.make (a_x, a_y)
		ensure
			name_set: equal (a_name, name)
			position_exists: position /= Void
			position_set: position.x = a_x and position.y = a_y
		end
		
feature -- Access

	name: STRING
			-- Name of place.	
			
	position: ESDL_VECTOR_2D
			-- Position on map.
			
	information: TRAFFIC_PLACE_INFORMATION
			-- Additional information.
			
feature -- Element change

	set_information (a_information: TRAFFIC_PLACE_INFORMATION) is
			-- Set information to `a_information'.
		require
			a_information_exists: a_information /= Void
		do
			information := a_information
		ensure
			information_set: information = a_information
		end
		
	set_position (a_position: ESDL_VECTOR_2D) is
			-- Set position to `a_position'.
		require
			a_position_exists: a_position /= Void
		do
			position := a_position
		ensure
			position_set: position = a_position
		end

feature -- Measurement

	hash_code: INTEGER is
			-- Hash code value.
		do
			Result := name.hash_code
		end
		
feature -- Basic operation

	out: STRING is
			-- Textual representation of place.
		local
			information_string: STRING
		do
			if information /= Void then
				information_string := ", "
				if information.pictures.count > 0 then
					information_string := information_string + " pictures: "
					from
						information.pictures.start
					until
						information.pictures.after
					loop
						information_string := information_string + information.pictures.item
						information.pictures.forth
						if not information.pictures.after then
							information_string := information_string + ", "
						end
					end
				end
				if information.description /= Void and information.pictures.count > 0 then
					information_string := information_string + ","
				end
				if information.description /= Void then
					information_string := information_string + " description: " + information.description
				end
			else
				information_string := ""
			end
			Result := "Traffic place " + name + " at position " + position.out + information_string
		end

invariant
	name_not_void: name /= Void -- Name exists.
	name_not_empty: not name.is_empty -- Name not empty.
	position_not_void: position /= Void -- Position exists.

end -- class TRAFFIC_PLACE
