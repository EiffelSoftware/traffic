indexing
	description: "Vehicles of type cablecar"
	date: "$Date: 6/6/2006$"
	revision: "$Revision$"

class
	TRAFFIC_CABLECAR

inherit
	TRAFFIC_TRAM

--feature -- Basic operations (map)

--	add_to_map (a_map: TRAFFIC_MAP) is
--			-- Add `Current' to `a_map'.
--		do
--			a_map.trams.put_last (Current)
--			is_in_map := True
--			map := a_map
--		ensure then
--			map_has: a_map.trams.has (name)
--		end

--	remove_from_map is
--			-- Remove Current from `a_map'.
--		do
--			is_in_map := False
--			map := Void
--		end

--feature -- Status report

--	is_insertable (a_map: TRAFFIC_MAP): BOOLEAN is
--			-- Is `Current' insertable into `a_map'?
--		do
--			Result := True
--		end

invariant

	wagon_limited: wagon_limitation = 0

end

