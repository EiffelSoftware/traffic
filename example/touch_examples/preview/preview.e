indexing
	description: "The first example from TOUCH"
	date: "$Date: 2006/03/02 18:57:05 $"
	revision: "$Revision: 1.26 $"
	
class PREVIEW 

inherit

	TOURISM

feature	 -- Example

	explore is
			-- Show some city info.
			-- Note that the objects are not of the type you may think
			-- See 'TOURSIM' for the predefined objects and classes
		do
			Paris.display
			
--			Louvre.spotlight			

			Line8.highlight_for_5_seconds
			
--			Route1.animate
--			Passenger.move_route (Route2)
		end
		
	explore_on_button_click is
			-- Do nothing. 
		do
		end
		
end -- class PREVIEW
