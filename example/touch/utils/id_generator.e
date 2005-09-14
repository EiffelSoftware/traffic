indexing
	description: "A simple ID Generator"
	date: "2005/06/20"
	revision: "1.0"

class
	ID_GENERATOR

feature -- Access
    new_id: INTEGER is
        do
       		internal_counter := internal_counter + 1
            Result := internal_counter
        end

feature {NONE} -- Implementation
    internal_counter: INTEGER

end
