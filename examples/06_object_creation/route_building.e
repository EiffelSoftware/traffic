note
	description: "Creating new objects for Zurich."

class
	ROUTE_BUILDING

inherit
	ZURICH_OBJECTS

feature -- Explore Zurich

	build_route
			-- Create new objects for Zurich.
		do
			create leg1.make (Polyterrasse, Central, Polybahn)
			create leg2.make (Central, Opernhaus, Line4)
			leg1.link (leg2)
			create Opera_route.make (leg1)
			Zurich.add_route (Opera_route)
			Opera_route.reverse
		end

	Opera_route: ROUTE
			-- A route from Polyterrasse to Opernhaus.		

	leg1, leg2: LEG
			-- Leg of `opera_route'.

end
