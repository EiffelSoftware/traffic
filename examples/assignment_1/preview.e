note
	description: "Introduction to Traffic."

class
	PREVIEW

inherit
	ZURICH_OBJECTS

feature -- Explore Zurich

	explore
			-- Modify the map.
		do
			Central_view.highlight
			Polyterrasse_view.highlight
			Polybahn_view.highlight
			console.output (Polybahn)

			wait (3)

			Zurich.add_public_transport (Polybahn_line_number)
			Zurich_map.update
			Zurich_map.animate
		end

end
