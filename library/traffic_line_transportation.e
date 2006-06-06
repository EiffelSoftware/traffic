indexing
	description: "A deffered class for transportations serving a line and pursuing a schedule."
	date: "$Date: 2006/06/06 12:23:40$"
	revision: "$Revision$"

deferred class
	TRAFFIC_LINE_TRANSPORTATION

inherit
	TRAFFIC_TRANSPORTATION
	
	redefine 
		set_coordinates
	end

		
feature --Access

	line: TRAFFIC_LINE
		-- line on which 'current' will travel.		
	--TODO: schedule: SCHEDULE
		-- the scheme to pursue
	line_count: INTEGER
		-- count for the number of stops.
	last_place: TRAFFIC_PLACE
		-- a place on the line which is returned by get_place		
			
feature -- Basic operations
	
	reroute(newPoints: ARRAYED_LIST [EM_VECTOR_2D]; start:TRAFFIC_PLACE) is
			-- operation to reroute the line transportation in case of a line iterruption.
			deferred
				--go to start and from there use newPoints.
			end
		
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

		
feature{NONE} --Implementation		
		
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
		
invariant
	TR_LINE_TR_line_set: line /= Void	 
	line_set: line /= void
	line_count_non_negative : line_count >= 0
end
