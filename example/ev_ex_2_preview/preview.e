indexing
	description: "Preview class (Chapter 2, Touch of Class)"
	date: "$Date$"
	revision: "$Revision$"

class
	PREVIEW

inherit

	TOURISM

feature -- Explore Paris

	explore is
			-- Show city info and route.
		do
			Paris.display
			wait
			Louvre.spotlight
			wait
			Line8.highlight
			wait
			Route1.animate
			wait
			Console.show (Line8)
			Console.show (Route1)
		end

end
