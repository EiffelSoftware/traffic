indexing
	description: "Preview class (Chapter 2, Touch of Class)"
	date: "$Date$"
	revision: "$Revision$"

class
	PREVIEW

inherit

	TOURISM

feature -- Explore Paris

	explore_on_click is
			-- Explore Paris!
		do
			Paris.display
			wait
			Line8.highlight
			wait
			Route1.illuminate
			wait
			Michela.go
			wait
			Louvre.spotlight
			Console.show (Line8)
			Console.show (Route1)
		end

end
