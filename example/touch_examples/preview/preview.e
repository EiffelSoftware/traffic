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
--			Paris.display
--			Louvre.spotlight


--			map.set_single_line_highlighted(Line9)

			Line8.highlight

--			Line8.highlight
--			Route1.animate
--			Passenger.move_route (Route2)
		end
end -- class PREVIEW
