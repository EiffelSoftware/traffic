indexing
	description: "Objects that store information about buildings"
	author: "Fabian W�est"
	date: "22.01.2006"
	revision: "0.6"

class
	TRAFFIC_BUILDING_INFORMATION

creation
	make

feature -- Creation
	
	make is
		-- Initialize
		do
			
		end
	
	set_street (a_street: STRING) is
			-- assign `a_street'
		require
			a_street /= void
		do
			street := a_street
		ensure
			street = a_street
		end
	
	set_house_number (a_number: INTEGER) is
			-- assign `a_number'
		do
			house_number := a_number
		ensure		
			house_number = a_number
		end
		
		
		
feature {NONE} -- Internal
	
	street: STRING
	house_number: INTEGER

end
