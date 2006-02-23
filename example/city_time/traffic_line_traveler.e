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
		take_tour
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
					polypoints.append (line.item.polypoints)
					line.forth
				end
				polypoints.start
				set_coordinates
				set_traffic_info ("tram")
				virtual_speed := 0.5
			end
		
		
feature -- Journey


	set_coordinates is
			-- set the positions to the corresponding ones of the line section
--			require
--				not polypoints.after
--				not polypoints.before
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
			ensure
				origin /= Void
				position /= Void
				destination /= Void
			end
		

	take_tour is
			-- take a tour on the map
			local
				direction: EM_VECTOR_2D
			do
				direction := destination - origin
				
				if ((position.x - destination.x).abs < speed) and ((position.y - destination.y).abs < speed) then
					set_coordinates
				else

					position := position + (direction / direction.length) * speed
					
				end
			end
		
feature {TRAFFIC_MAP} -- Status

	line: TRAFFIC_LINE
		-- line on which 'current' will travel.	
		
	polypoints: ARRAYED_LIST [EM_VECTOR_2D]
		-- all points to be traveled through.

	
invariant
	TR_LINE_TR_line_set: line /= Void

end
