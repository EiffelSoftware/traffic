indexing
	description: "Objects that move along a line"
	author: "Florian Geldmacher"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_LINE_TRAVELER

inherit
	TRAFFIC_TRAVELER 
	redefine 
		set_coordinates
	end
	
	TRAFFIC_3D_CONSTANTS
	
create
	make_with_line
	
feature -- Creation
	
	make_with_line (a_line: TRAFFIC_LINE) is
			-- create a traveler who travels on 'a_line'
			require
				a_line /= Void
			do
				line := a_line
				create polypoints.make (1)
				from 
					line.start
				until
					line.after
				loop
					polypoints.force (line.item.polypoints.first)
					polypoints.force (line.item.polypoints.first)
					polypoints.force (line.item.polypoints.first)
					-- this is that a tram stops for a short time at each place
					polypoints.append (line.item.polypoints)
					line.forth
				end
				polypoints.force (polypoints.last)
				polypoints.force (polypoints.last)
				polypoints.force (polypoints.last)
				-- same as in the loop
				
				polypoints.start
				set_coordinates
				set_angle
				set_traffic_info ("tram")
				virtual_speed := 0.5
			end
		
		
feature {NONE} -- Journey


	set_coordinates is
			-- set the positions to the corresponding ones of the line section
			do
				-- hopefully this will give a bit performance to the journey
				-- otherwise just clear out the map_to_gl_coords
				origin :=  map_to_gl_coords (polypoints.item)
				position := map_to_gl_coords (polypoints.item)

				if is_traveling_back then
					polypoints.back
					if polypoints.before then
						is_traveling_back := False
						polypoints.forth
						set_coordinates
					else
						destination := map_to_gl_coords (polypoints.item)										
					end
				else
					polypoints.forth
					if polypoints.after then
						is_traveling_back := True
						polypoints.back
						set_coordinates
					else
						destination := map_to_gl_coords (polypoints.item)										
					end				
				end
			end

		
feature {TRAFFIC_MAP} -- Status

	line: TRAFFIC_LINE
		-- line on which 'current' will travel.	


	
invariant
	TR_LINE_TR_line_set: line /= Void

end
