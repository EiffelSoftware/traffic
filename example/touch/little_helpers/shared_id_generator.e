indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"


class SHARED_ID_GENERATOR

feature -- Access

	id_generator: ID_GENERATOR is
    	once
        	Result := create {ID_GENERATOR}
		end
end

