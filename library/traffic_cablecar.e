indexing
	description: "cablecar"
	date: "$Date: 6/6/2006$"
	revision: "$Revision$"

class
	TRAFFIC_CABLECAR

inherit
	TRAFFIC_TRAM
redefine
	reroute end
	
feature -- Basic operations 

reroute(newPoints: ARRAYED_LIST [EM_VECTOR_2D]; start: TRAFFIC_PLACE) is
			-- Reroute the tram when the line is interrupted.
			do
				--ensure start is on cablecars line
				--ensure polypoints lay on cablecars line
				--cablecar travels back on his line to start.
				--from start uses new points.
				--polypoint follows strict only points on his line.
			end


invariant
	waggon_limitation = 0
end

