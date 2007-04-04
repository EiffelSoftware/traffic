indexing
	description: "Build Traffic Roads out of a list of Touch Places. Colored or not"
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TOUCH_ROAD

inherit
	TOUCH_SHARED_MAP_WIDGET

create
	make_road, make_colored_road

feature -- Access

	make_road(a_place: TOUCH_PLACE) is
		-- Creates a road out of a list of Touch places
	local
		temp_road: TRAFFIC_ROAD
	do
		if
			a_place.next /= Void
		then
			create temp_road.make (a_place.t_node, a_place.next.t_node, create {TRAFFIC_TYPE_STREET}.make, 1, "directed")
			map_widget.map.roads.put (temp_road, temp_road.id)
			make_road (a_place.next)
		end
	end


	make_colored_road(a_place: TOUCH_PLACE; x: INTEGER; y: INTEGER; z: INTEGER) is
			-- Creates a road out of a list of Touch places using x,y,z for coloring of places
		local
			temp_road : TRAFFIC_ROAD
			i: INTEGER
			found: BOOLEAN
		do
			if
				a_place.next /= Void
			then
				from
					i := 1
				until
					found
				loop
					if not map_widget.map.roads.has (i) then
						found := True
					else
						i := i + 1
					end
				end
				create temp_road.make (a_place.t_node, a_place.next.t_node, create {TRAFFIC_TYPE_STREET}.make, i, "directed")
				map_widget.map.roads.put (temp_road, temp_road.id)
				map_widget.places_representation.highlight_place (a_place.t_place, create {EM_COLOR}.make_with_rgb (x,y,z))
				make_colored_road(a_place.next, x+5, y+10, z+25)
			end
		end


invariant
	invariant_clause: True -- Your invariant here

end
