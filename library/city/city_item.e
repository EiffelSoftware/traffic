note
	description: "Object in a city."

deferred class
	CITY_ITEM

inherit
	HASHABLE

inherit {NONE}
	DOUBLE_COMPARISON
		export {NONE}
			all
		end

feature -- Access

	hash_code: INTEGER
			-- Hash code value.
			-- Should not change after creation
			-- (used to connect city item to its view).
		deferred
		end

end
