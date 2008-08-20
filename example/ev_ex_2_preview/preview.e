class PREVIEW inherit
	TOURISM

feature -- Explore Paris

	explore is
			-- Show city info and a route.
		do
			Paris.display
			wait
			Louvre.spotlight
			wait
			Line8.highlight
			wait
			Route1.animate
			wait
--			Console.show (Line8)
			Console.show (Route1.origin)
		end

end
