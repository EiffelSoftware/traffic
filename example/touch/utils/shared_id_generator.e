indexing
	description: "A simple shared ID Generator"
	date: "2005/06/20"
	revision: "1.0"


class SHARED_ID_GENERATOR

feature -- Access
	id_generator: ID_GENERATOR is
    	once
        	Result := create {ID_GENERATOR}
		end
end

