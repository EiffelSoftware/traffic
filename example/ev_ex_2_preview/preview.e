class PREVIEW inherit
	TOURISM

feature -- Explore Paris

	explore is
			-- Show city info and a route.
		do
			Paris.display
			Timer.wait
			Louvre.spotlight
			Timer.wait
			Line8.highlight
			Timer.wait
			Route1.animate
			Timer.wait
--			Console.show (Line8)
			Console.show (Route1.origin)
		end

end
