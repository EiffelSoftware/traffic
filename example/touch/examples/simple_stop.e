indexing
	description: "Class Simple Stop. Create a linked list of places and build a line from it."
	date: "2005/09/22"
	revision: "1.0"

class SIMPLE_STOP 

feature -- Access
	place: TRAFFIC_PLACE
		-- Station which this stop represents
	next: SIMPLE_STOP
		-- Next stop on same line
		
feature -- Basic Operatioions
	set_place (a_place: TRAFFIC_PLACE) is
			-- Associate this stop with s.
		require
			place_exists: a_place /= Void
		do
			place := a_place	
		ensure
			place_set: place = a_place
		end
		
	link (a_stop: SIMPLE_STOP) is
			-- Make `a_stop' the next stop on the line.
		do
			next := a_stop
		ensure
			next_set: next = a_stop
		end
		
	build_line (a_line_name: STRING; a_line_type: STRING; a_map: TRAFFIC_MAP): TRAFFIC_SIMPLE_LINE is
			-- Convert the linked List to a Line
		require
			a_line_type_exists: a_line_type /= Void
			a_line_name_exists: a_line_name /= Void
			a_map_exitst: a_map /= Void
		local
			simple_line: TRAFFIC_SIMPLE_LINE
			stop: SIMPLE_STOP
			factory: TRAFFIC_MAP_FACTORY
		do
			-- Create factory
			create factory.make
	
			-- Build simple line
			factory.build_simple_line (a_line_name, a_line_type, a_map)
			-- Get created simple line
			simple_line := factory.simple_line
			
			-- Convert linked list of SIMPLE_STOPs to simple_line
			from
				stop := Current
			until
				stop = Void
			loop
				-- If Place is set then 
				if stop.place /= Void then
					simple_line.extend_place (stop.place)
				end
				-- Go to the next item in the list
				stop := stop.next
			end
			
			-- Save Result and return
			Result := simple_line
		end
		
end -- class SIMPLE_STOP
