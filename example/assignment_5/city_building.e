indexing
	description: "Building new city (Assignment 5)"
	date: "$Date$"
	revision: "$Revision$"

class
	CITY_BUILDING

inherit

	TOURISM

feature -- City creation

	explore is
			-- Create the city, central station and other needed objects.
		do

		end

	add_station (x, y: INTEGER)
			-- Add new station at coordinate (x, y) and extend the line.
		do
			Console.show ("Adding new station")
		end

	add_line
			-- Add new line.
		do
			Console.show ("Adding new line")
		end

	random_color: TRAFFIC_COLOR
			-- Generate random color.
		do

		end

end
