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
			-- create a traveler who travels on 'a_line'.
			require
				a_line /= Void
			do
				line_count := 0
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
					line_count := line_count + 1
					line.forth
				end
				line_count := line_count + 1
				polypoints.force (polypoints.last)
				polypoints.force (polypoints.last)
				polypoints.force (polypoints.last)
				-- same as in the loop
				
				polypoints.start
				polypoints.forth
				polypoints.forth
				polypoints.forth
				set_coordinates
				set_angle
				-- future implementations should tae care of this
--				traffic_type := line.type
				traffic_type := create {TRAFFIC_TYPE_TRAM}.make
				virtual_speed := 0.8
			end
		
		
feature {NONE} -- Journey


	set_coordinates is
			-- set the positions to the corresponding ones of the line section.
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
		

feature -- Commands

	set_to_place (a_place: TRAFFIC_PLACE) is
			-- set the tram to 'a_place'.
			require
				a_place_not_void: a_place /= Void
			local
				was_found: BOOLEAN
			do
				from
					line.start
				until
					was_found or line.after
				loop
					if line.item.origin.position = a_place.position then
						from
							polypoints.start
						until
							polypoints.after or was_found
						loop
							if polypoints.item = line.item.polypoints.first then
								polypoints.forth
								polypoints.forth
								polypoints.forth	
								was_found := True
								set_coordinates
								set_angle	
							else
								polypoints.forth
							end
						end
					else
						line.forth
					end
					
				end
			end
		
	line_count: INTEGER
		-- count for the number of stops.
		
	get_place (stop: INTEGER) is
			-- return the stop at number 'stop'
		require
			stop <= line_count
		local
			i: INTEGER
		do
			from
				i := 1
				line.start
			until
				i = stop or
				line.after
			loop
				line.forth
				i := i + 1
			end
			if i < stop then
				line.back
				last_place := line.item.destination
			else				
				last_place := line.item.origin
			end
		end

	last_place: TRAFFIC_PLACE
		-- place which is returned by get_place
		
invariant
	TR_LINE_TR_line_set: line /= Void

end
