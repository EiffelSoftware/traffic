indexing
	description: "Class to fill in example 'commands'"
	date: "$Date$"
	revision: "$Revision$"

class COMMANDS

inherit

	TOURISM

feature -- Example

	explore_on_click is
			-- Try some commands.
		do
			Paris.display
			Line8.highlight
			line8.remove_all_sections
			line8.extend_place (place_la_motte_picquet_grenelle)
			line8.extend_place (place_invalides)
			Line8.highlight
		end

end
