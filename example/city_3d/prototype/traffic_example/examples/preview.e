class PREVIEW inherit
	TOURISM
feature	
	explore is
		-- Show some city info.
		-- Note that the objects are not of the type you may think
		-- See 'TOURSIM' for the predefined objects and classes
		do
			Paris.display
			Louvre.spotlight
			Line8.highlight
			Route1.animate
			Passenger.move_route (Route2)
		end
end