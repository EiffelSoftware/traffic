note
	description: "Introduction to Traffic."

class
	PREVIEW

inherit
	ZURICH_OBJECTS

feature -- Explore Zurich

	explore
			-- Explore the city.
		do
			Central_view.highlight
			Polyterrasse_view.highlight
 			Polybahn.add_transport
 			Zurich_map.animate
 		end

end
