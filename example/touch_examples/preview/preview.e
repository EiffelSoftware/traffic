indexing
	description: "The first example from TOUCH"
	date: "2005/08/31"
	revision: "1.0"
	
class PREVIEW inherit
	TOURISM
feature	
	explore is
		-- Show some city info.
		-- Note that the objects are not of the type you may think
		-- See 'TOURSIM' for the predefined objects and classes
		do
			Paris.display
			
--			Louvre.spotlight			

			Line8.highlight_for_5_seconds

		--	Paris.display

--			Route1.animate
--			Passenger.move_route (Route2)
		end
end -- class PREVIEW
