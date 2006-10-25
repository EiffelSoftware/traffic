indexing
	description: "Objects that store information about buildings"
	date: "$Date: 2006-03-27 19:42:12 +0200 (Mon, 27 Mar 2006) $"
	revision: "$Revision: 601 $"

class
	TRAFFIC_BUILDING_INFORMATION

feature -- Element change

	set_street (a_street: STRING) is
			-- Set street to `a_street'.
		require
			a_street_exists: a_street /= void
		do
			street := a_street
		ensure
			street_set: street = a_street
		end

	set_house_number (a_number: INTEGER) is
			-- Set house_number to `a_number'.
		require
			a_number_valid: a_number >= 1
		do
			house_number := a_number
		ensure
			number_set: house_number = a_number
		end

	set_description (a_description: STRING) is
			-- Set description to `a_description'.
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
