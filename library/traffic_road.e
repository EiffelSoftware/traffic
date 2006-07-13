indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_ROAD
	inherit	
		TRAFFIC_CONNECTION
		
	
create
	make




feature -- Utility

	get_next_road(place_name: STRING; direction: boolean):TRAFFIC_ROAD is
			-- get the road next to the current that end in a_place
		
			require
				name_not_void: place_name/=Void
			
			local
				a_road: TRAFFIC_ROAD
				
				found: boolean
			
			do
				from
					roads.start	
					found:=false
				until
					roads.after and (not found)
				loop
					a_road:=roads.item
					 if (a_road.origin.name=place_name or a_road.destination.name=place_name) then
						Result:=a_road
						found:=true
					end
				end
			ensure
				result_not_void: Result/=Void
			end
		
		
		
	get_random_road(direction: boolean) is
			-- get one random road next to the current
			do
				
			end
		
			
			
feature -- Status setting
		
		






feature{NONE} -- Implementation



	add_road(a_road: TRAFFIC_ROAD) is
			-- add a road to the set of roads next to the current
			require
				not_void: a_road/=Void
			
			do
					roads.extend (a_road)
			ensure
				has_been_added: roads.last=a_road
			end
	
	remove_road(a_road: TRAFFIC_ROAD) is		
			-- remove a_road from roads
			require
				road_not_void: a_road/=Void
				has_road: roads.has (a_road)
			
			do
				from
					roads.start
				until
					roads.after
				loop
					if roads.item=a_road then
						roads.remove
					end			
					roads.forth	
				end
				
			ensure	
				has_been_removed: not roads.has (a_road)
			end
		
		
		

feature{NONE} -- Creation


		make (a_origin, a_destination: TRAFFIC_PLACE; a_list: ARRAYED_LIST [EM_VECTOR_2D]; a_type: TRAFFIC_TYPE; an_id: INTEGER ) is
			-- Initialize `Current'. 
			-- If `a_list' is Void, a list of polypoints with the coordinate of `a_origin' and
			-- `a_destination' are generated.
		require
			a_origin_exists: a_origin /= Void
			a_destination_exists: a_destination /= Void
			a_type_exists: a_type /= Void
			an_id_is_valid: an_id>=0
		do
			origin := a_origin
			destination := a_destination
			id:=an_id
--			create state.make
--			type := a_type
			if a_list /= Void then
				set_polypoints (a_list)
			else
				create polypoints.make (2)
				polypoints.extend (a_origin.position)
				polypoints.extend (a_destination.position)
			end
			
		ensure
			origin_set: origin = a_origin
			destination_set: destination = a_destination
--			state_exists: state /= Void
--			type_set: type = a_type
			polypoints_exists: polypoints /= Void
		end
			

make_with_places (a_origin, a_destination: TRAFFIC_PLACE; a_type: TRAFFIC_TYPE; a_list: ARRAYED_LIST [EM_VECTOR_2D] ) is
			-- Initialize `Current'. 
			-- If `a_list' is Void, a list of polypoints with the coordinate of `a_origin' and
			-- `a_destination' are generated.
		require
			a_origin_exists: a_origin /= Void
			a_destination_exists: a_destination /= Void
			a_type_exists: a_type /= Void
		do
			origin := a_origin
			destination := a_destination
--			create state.make
--			type := a_type
			if a_list /= Void then
				set_polypoints (a_list)
			else
				create polypoints.make (2)
				polypoints.extend (a_origin.position)
				polypoints.extend (a_destination.position)
			end
			
		ensure
			origin_set: origin = a_origin
			destination_set: destination = a_destination
--			state_exists: state /= Void
--			type_set: type = a_type
			polypoints_exists: polypoints /= Void
		end


feature -- Basic operation


	hash_code: INTEGER is
			-- Hash code value
		local
			
		do
		end
	


	



feature -- Access
	
	
	road_type: TRAFFIC_TYPE
	
	roads: ARRAYED_LIST[TRAFFIC_ROAD]
	
	id: INTEGER
	
	
	
end	
