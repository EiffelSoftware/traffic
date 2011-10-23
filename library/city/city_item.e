note
	description: "Object in a city."

deferred class
	CITY_ITEM

inherit
	HASHABLE

feature -- Access

	hash_code: INTEGER
			-- Hash code value.
			-- Should not change after creation
			-- (used to connect city item to its view).
		deferred
		end

end
