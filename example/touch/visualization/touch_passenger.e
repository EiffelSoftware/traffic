indexing
	description: 	"[
					The TOUCH_PASSENGER class extends the MAP_WIDGET_PASSENGER, to be able
					to walk a given route.
					]"
	date: "2005/07/12"
	revision: "1.0"

class
	TOUCH_PASSENGER

inherit
	MAP_WIDGET_PASSENGER

create 
	make_on_map_place

feature -- Basic operations	
	move_route (a_route: TRAFFIC_ROUTE) is
			-- move a given route, which starts at the place, where the passenger is on.
		require
			a_route_correct: a_route /= Void and then a_route.places_on_route.first = place
		do
			from
				a_route.places_on_route.start
				a_route.places_on_route.forth
			until
				a_route.places_on_route.after
			loop
				-- Sometimes a Place is listed twice, but we cannot move from place_x to place_x
				if place /= a_route.places_on_route.item then
					move_to (a_route.places_on_route.item)					
				end
				a_route.places_on_route.forth
			end
		end

end -- class TOUCH_PASSENGER
