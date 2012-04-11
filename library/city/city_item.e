note
	description: "Object in a city."

deferred class
	CITY_ITEM

inherit
	V_REFERENCE_HASHABLE
		export {CITY, CITY_ITEM}
			hash_code
		end

inherit {NONE}
	DOUBLE_COMPARISON
		export {NONE}
			all
		end

end
