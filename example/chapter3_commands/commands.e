indexing
	description: "Class to fill in example 'commands'"
	date: "$Date$"
	revision: "$Revision$"

class COMMANDS

inherit
	
	TOURISM
	
feature -- Example
	
	explore is
			-- Load paris.
		do
			Paris.display
		end
		
	explore_on_button_click is
			-- Try some commands.
		do	
			line8.remove_all_sections
			line8.extend_place (place_la_motte_picquet_grenelle)
			line8.extend_place (place_invalides)
		end
		
end
