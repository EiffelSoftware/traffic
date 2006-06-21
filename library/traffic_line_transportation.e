indexing
	description: "A deferred class for transportations serving a line and pursuing a schedule."
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
		-- line on which 'Current' will travel.
			
	--TODO: schedule: SCHEDULE
		-- the scheme to pursue
		
	line_count: INTEGER is
			-- returns the 'Current's number of stops.
			do
				Result := line.count
			end
		
	
feature -- Basic operations
				
	set_to_place (a_place: TRAFFIC_PLACE) is
			-- set the line transportation to 'a_place'.
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
		
		
get_place (stop: INTEGER): TRAFFIC_PLACE is
			-- returns the place at number 'stop' in line.
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
				Result := line.item.destination
			else				
				Result := line.item.origin
			end
		end

		
feature{NONE} --Implementation		
		
		set_line_route(a_line: TRAFFIC_LINE) is
				-- set the points of the line in the polypoints to follow the route given by the line.
			require
				line_not_void: a_line /= void
			do
				from 
					a_line.start
				until
					a_line.after
				loop
					-- add the first polypoint of the line item as a line item is a section
					-- containing a origin polypoint and a destination polypoint.
					-- the repetition is done that a tram stops for a short time at each place
					polypoints.extend (a_line.item.polypoints.first)
					polypoints.extend (a_line.item.polypoints.first)
					polypoints.extend (a_line.item.polypoints.first)
					-- add the whole section item (origin and destination)
					polypoints.append (a_line.item.polypoints)
					line.forth
				end
				-- repetition of the las polypoint to stop also there for a short time.
				polypoints.extend (polypoints.last)
				polypoints.extend (polypoints.last)
				polypoints.extend (polypoints.last)	
				
				polypoints.start
				-- not wait at starting point therefore omit first three points
				polypoints.forth
				polypoints.forth
				polypoints.forth
				
			ensure
				valid_polypoints: polypoints.count >= old polypoints.count
		end
		
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
	line_set: line /= void
	correct_line_count: line_count = line.count
end
