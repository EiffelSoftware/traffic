indexing
	description: "Passenger in a TRAFFIC_MAP, for exercises"
	note: "Prototype, needs reviewing and developing."
	author: "Rolf Bruderer"	
	date: "2005/03/10"
	revision: "0.3"

class
	MAP_WIDGET_PASSENGER
	
inherit
	ESDL_TIME_SINGLETON
		export
			{NONE} all
		end
	
create
	make_on_map_place
	
feature -- Iniitialization

	make_on_map_place (a_map: TRAFFIC_MAP; a_place: TRAFFIC_PLACE) is
			-- Initialize passenger standing on `a_place' in `a_map'.
		require
			a_place_in_map: a_map.has_place (a_place.name)
		do
			place := a_place
			map := a_map
			create position.make (place.position.x, place.position.y)
		end	

feature -- Access

feature -- Measurement

feature -- Status report

	map: TRAFFIC_MAP
			-- Map where player is inside.

	position: ESDL_VECTOR_2D
			-- Position on the map.
	
	place: TRAFFIC_PLACE
			-- Place currently standing on	
			
	move_to (a_place: TRAFFIC_PLACE) is
			-- 
		require
			a_place_is_different: place /= a_place
			a_place_is_reachable: map.has_line_section_between (place.name, a_place.name)
		local
			last_time, now_time, delta_time: INTEGER
			links: LIST [TRAFFIC_LINE_SECTION]
			shared_scene: ESDL_SHARED_SCENE			
			polypoints: ARRAYED_LIST [ESDL_VECTOR_2D]
			point_index: INTEGER
			length, speed, pos, point_pos: DOUBLE
			p1, p2, dist: ESDL_VECTOR_2D
		do
			-- Get time when move started (used for animation)
			now_time := time.ticks
			
			-- Get running scene.
			create shared_scene
			
			-- Animate if there is a running scene.
			if shared_scene.running_scene /= Void then	
				
				-- Get link to move over.
				links := map.line_sections_of_place (place.name)
			
				from
					links.start
				until
					links.after or else links.item.destination = a_place					
				loop
					links.forth										
				end
				
				if not links.after then
					
					polypoints := links.item.polypoints
					
					if polypoints = Void or else polypoints.count < 2 then  -- TODO: Only necessary because of bug in TRAFFIC_LINE_SECTION ??
						create polypoints.make (2)
						polypoints.extend (links.item.origin.position)						
						polypoints.extend (links.item.destination.position)						
					end
				
					-- Set parmeter for animation			
					length := links.item.length
					speed := 100 -- meter per second
				
					-- Perform move animation.
					from
						pos := 0
						point_index := 1
						point_pos := 0
					until
						pos > length or else point_index > polypoints.count
					loop
									
						-- Calculate `delta_time' to perform move step.
						last_time := now_time
						now_time := time.ticks
						delta_time := now_time - last_time
						if delta_time < 0 then
							delta_time := 0	
						end
						
						-- Calculate new `pos' inbetween the two places
						pos := pos + delta_time * speed / 1000
						
						-- Calculate `position' from polypoints.
						from					
							p1 := polypoints.i_th (point_index)
							p2 := polypoints.i_th (point_index + 1)
							dist := p2 - p1					
						until
							pos > length or else pos < point_pos + dist.length
						loop					
							point_pos := point_pos + dist.length
							point_index := point_index + 1			
							p1 := polypoints.i_th (point_index)
							p2 := polypoints.i_th (point_index + 1)
							dist := p2 - p1				
						end		
						dist.scale_to (pos - point_pos)
						position := p1 + dist
						
						
						-- Give system some time to redraw views.
						shared_scene.running_scene.event_loop.process_events
					end					
				end			
			end
			
			-- Update new `place' and `position'.
			place := a_place
			position := place.position.twin
		
			-- Update position on screen.
			if shared_scene.running_scene /= Void then
				shared_scene.running_scene.event_loop.process_events
			end
			
		ensure
			place_set: place = a_place
		end

invariant
	is_on_a_place: place /= Void

end
