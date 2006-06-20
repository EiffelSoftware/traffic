indexing
	description: "Objects that ..."
	date: "$Date: 6/6/2006$"
	revision: "$Revision$"

class
	TRAFFIC_EVENT_TAXI
	inherit TRAFFIC_TRANSPORTATION
	redefine
		take_tour end
create
	make_random

feature -- Creation procedure
			
		make_random (taxi_office: TRAFFIC_EVENT_TAXI_OFFICE; a_seed: INTEGER; stops: INTEGER) is
		
			-- create a taxi that communicates with the taxioffice through events
			-- stops at random positions
			require
				taxi_office /= void
				a_seed >= 0
				stops >= 2
			do
				office := taxi_office
				create polypoints.make (stops)
				traffic_type := create {TRAFFIC_TYPE_TAXI}.make
				create random_direction.set_seed(a_seed)
				give_random_polypoints (stops)
				set_coordinates
				set_angle
				virtual_speed := 1.5
				--TODO if needed random_speed: virtual_speed := random_direction.double_item
				random_direction.forth
				office.taxi_available.publish([Current])
			end
			
feature -- Status report
	busy: BOOLEAN
		--is taxi busy
	
feature -- Basic operations

	take(address: EM_VECTOR_2D; dest: EM_VECTOR_2D) is
			-- take and serve a request.
			require
				valid_address: address /= void
			local
				new_polypoints: ARRAYED_LIST [EM_VECTOR_2D]
			do
				if not busy then
					
				--set taxi busy and publish event to inform taxi_office
					busy := True
					office.taxi_busy.publish([Current])
				
				--new polypoint to travel through from address to dest
					create new_polypoints.make(3)
				--wait so that passenger can board
					new_polypoints.extend(address)
					new_polypoints.extend(address)
					new_polypoints.extend(address)
					new_polypoints.extend(address)
					new_polypoints.extend(address)
					new_polypoints.extend(address)
					new_polypoints.extend(address)
				--wait so that passenger can deboard
					new_polypoints.extend(dest)
					new_polypoints.extend(dest)
					new_polypoints.extend(dest)
					new_polypoints.extend(dest)
					new_polypoints.extend(dest)
					new_polypoints.extend(dest)
					new_polypoints.extend(dest)
					polypoints := new_polypoints
					polypoints.start
				--set the new origin and destination
					origin := position
					destination := map_to_gl_coords (address)
					set_reiterate (false)
					
				else
					office.reject(Current, address, dest)
				end
			end
			
			take_tour is
			-- take a tour on the map
				do
					Precursor
					if has_finished and busy then
						-- if taxi has fullfilled a request
							busy := false
							office.taxi_available.publish ([Current])
						-- add new random directions
							polypoints.wipe_out
							give_random_polypoints (7)
						-- set new random  destination
							origin := position
							destination := map_to_gl_coords (polypoints.first)
							has_finished := false
							set_reiterate (true)
					end
				end
			
	feature {NONE} --Implementation
	
		office : TRAFFIC_EVENT_TAXI_OFFICE
			-- the associated taxi office
		
		give_random_polypoints(num: INTEGER) is
				-- sets polypoints to random destinations with num stops.
				local 
				i: INTEGER
				do
				random_direction.forth
				from
					i := 1
				until
					i >= num
				loop
					random_direction.forth
					give_random_direction
					polypoints.force (destination)
					random_direction.forth
					polypoints.force (destination)	
					i := i+1
				end
				polypoints.start
			end
			
invariant
	office_not_void: office /= void
	random_direction_not_void: random_direction /= void
end
