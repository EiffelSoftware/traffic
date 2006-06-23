indexing
	description: "Taxi used for taxi dispatcher application using event based communication"
	date: "$Date: 6/6/2006$"
	revision: "$Revision$"

class
	TRAFFIC_EVENT_TAXI
	inherit TRAFFIC_TAXI
	redefine
		take_tour end
create
	make_random

feature -- Creation procedure
			
		make_random (taxi_office: TRAFFIC_EVENT_TAXI_OFFICE; a_seed: INTEGER; stops: INTEGER) is		
			-- create a taxi which stops at 'stops' random positions.
			-- a_seed is used as seed for the random generator.
			require
				taxi_office /= void
				a_seed >= 0
				stops >= 2
			do
				traffic_type := create {TRAFFIC_TYPE_TAXI}.make
				create polypoints.make (stops)
				create random_direction.set_seed(a_seed)
				add_random_polypoints (stops)
				
				office := taxi_office
				office.taxi_available.publish([Current])
				
				set_coordinates
				set_angle
				virtual_speed := maximum_virtual_speed
				--TODO if needed random_speed: virtual_speed := random_direction.double_item
				
				end

feature --Access
	
	office : TRAFFIC_EVENT_TAXI_OFFICE
					-- the associated taxi office		
	
feature -- Basic operations
	take(from_location: EM_VECTOR_2D; to_location: EM_VECTOR_2D) is
			-- take and serve a request. Pick up somebody at from_location and
			-- bring him or her to  to_location
			do
				if not busy then
				--set taxi busy and publish the taxi busy event.
					set_request_information(from_location, to_location)
					busy := True
					office.taxi_busy.publish([Current])
				else
					office.reject(Current, from_location, to_location)
				end
			end


				
			take_tour is
			-- take a tour on the map
				do
					Precursor
					if has_finished and busy then
						-- taxi has fullfilled a request
						-- first: prepare for available state of the taxi:
						-- add new random directions
							polypoints.wipe_out
							add_random_polypoints (7)
						-- set new random  destination
							origin := position
							destination := map_to_gl_coords (polypoints.first)
							has_finished := false
							set_reiterate (true)
						-- second: taxi is available again, that must be published
							busy := false
							office.taxi_available.publish ([Current])
					end
				end
			
feature --Constants
		maximum_virtual_speed: REAL is 1.5	
			--the maximum speed a taxi is allowed to drive	
invariant
	random_direction_not_void: random_direction /= void
	speed_limitation: virtual_speed <= maximum_virtual_speed
end
