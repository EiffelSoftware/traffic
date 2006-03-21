indexing
	description: "Objects that store information about buildings"
	author: "Fabian Wüest"
	date: "22.01.2006"
	revision: "0.6"

class
	TRAFFIC_BUILDING_INFORMATION

creation
	make

feature -- Initialization
	
	make is
		-- Create new object.
		do
			
		end

feature -- Options
	
	set_street (a_street: STRING) is
			-- Assign `a_street'.
		require
			a_street /= void
		do
			street := a_street
		ensure
			street = a_street
		end
	
	set_house_number (a_number: INTEGER) is
			-- Assign `a_number'.
		require
			a_number_valid: a_number >= 1
		do
			house_number := a_number
		ensure		
			house_number = a_number
		end
	
	set_description (a_description: STRING) is
			-- Assign `a_description'.
		require
			a_description_valid: a_description /= void
		do
			description := a_description
		ensure
			description_set: description = a_description
		end
	
		
feature  -- Attributes
	
	street: STRING
		-- Street
		
	house_number: INTEGER
		-- House number
	
	description: STRING
		-- Description

end
