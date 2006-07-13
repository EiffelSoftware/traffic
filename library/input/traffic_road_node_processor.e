indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_ROAD_NODE_PROCESSOR


inherit
	TRAFFIC_NODE_PROCESSOR
		redefine 
			process_subnodes
		end

create
	make

feature -- Access

	Name: STRING is "road"
			-- Name of element to process
		
	Mandatory_attributes: ARRAY [STRING] is
			-- Table of mandatory attributes
		do
			Result := << "id">>
			-- , "from", "to", "direction", "type" 
			Result.compare_objects
		end

feature -- Basic operations

	process is
			-- Process node.
		local
			road: TRAFFIC_ROAD
			a_map: TRAFFIC_MAP
		do
			if (has_attribute ("id") and not has_attribute("from") and not has_attribute("to") and not has_attribute("direction") and not has_attribute("type")) then
				a_map:=map_factory.map
				-- retrieve the corresponding instance of TRAFFIC_ROAD
				if (a_map.has_road_with_id(attribute("id").to_integer)) then
					parent.send_data (a_map.retrieve_road(attribute("id").to_integer))
				end
			else
				if not has_attribute ("id") then
					set_error (Mandatory_attribute_missing, <<"id">>)
				elseif not has_attribute ("from") then
					set_error (Mandatory_attribute_missing, <<"from">>)
				elseif not has_attribute ("to") then
					set_error (Mandatory_attribute_missing, <<"to">>)
				elseif not has_attribute ("direction") then
					set_error (Mandatory_attribute_missing, <<"direction">>)
				elseif not has_attribute ("type") then
					set_error (Mandatory_attribute_missing, <<"type">>)	
				elseif not map.has_place (attribute ("from")) then
					set_error (Unknown_source, <<attribute ("from")>>)
				elseif not map.has_place (attribute ("to")) then
					set_error (Unknown_destination, << attribute ("to")>> )
				else
				--	if has_attribute ("direction") and then attribute ("direction").is_equal ("undirected") then
						if attribute ("direction").is_equal ("undirected") then
								map_factory.build_road (( attribute ("from")), ( attribute ("to")),Void, map, ( attribute ("type")), ( attribute ("id")))
								road := map_factory.road
							--	map_factory.build_road (( attribute ("to")), ( attribute ("from")),Void, map,( attribute ("type")))
							--	road := map_factory.road
						else -- directed
							--	map_factory.build_road (( attribute ("from")), ( attribute ("to")),Void, map, ( attribute ("type")), ( attribute ("to")))
							--	road := map_factory.road
						end	
	--				end
				if not has_error and has_subnodes then
					process_subnodes
				end
				if not has_error and polypoints.count >= 2 then
					road.set_polypoints (polypoints)
	--				if line_section_other_direction /= Void then
	--					create pp.make (0)
	--					from
	--						polypoints.finish
	--					until
	--						polypoints.before
	--					loop
	--						pp.extend (polypoints.item.twin)
	--						polypoints.back
	--					end
	--					line_section_other_direction.set_polypoints (pp)
	--				end
					
					-- adjust the positions of the start and end place of this link
					 adjust_position (road, polypoints)
	--				if line_section_other_direction /= Void then
	--					adjust_position (line_section_other_direction, pp)				
	--				end
				end
			end
		end	
	end
		
	zero_vector: EM_VECTOR_2D is
	once
		Result := create {EM_VECTOR_2D}.make (0, 0)
	end
	
	adjust_position (road: TRAFFIC_ROAD; a_polypoints: LIST [EM_VECTOR_2D]) is
			-- Adjust positions
		do
			if road.origin.position = Void or equal(road.origin.position, zero_vector) then
				road.origin.set_position 
					(create {EM_VECTOR_2D}.make (a_polypoints.first.x, a_polypoints.first.y))
			else
				road.origin.set_position
					(create {EM_VECTOR_2D}.make (	(road.origin.position.x + a_polypoints.first.x)/ 2.0,
												(road.origin.position.y + a_polypoints.first.y)/ 2.0))
			end
			if road.destination.position = Void or equal(road.destination.position, zero_vector) then
				road.destination.set_position 
					(create {EM_VECTOR_2D}.make (a_polypoints.last.x, a_polypoints.last.y))
			else
				road.destination.set_position
					(create {EM_VECTOR_2D}.make (	(road.destination.position.x + a_polypoints.last.x)/ 2.0,
												(road.destination.position.y + a_polypoints.last.y)/ 2.0))
			end
		end
		

	process_subnodes is
			-- Process subnodes.
		local
			n: XM_ELEMENT
			p: TRAFFIC_NODE_PROCESSOR
			position: EM_VECTOR_2D
		do
			create polypoints.make (0)
			from
				subnodes.start
			until
				has_error or subnodes.after
			loop
				position := Void
				n := subnodes.item
				if has_processor (n.name) then
					p := processor (n.name)
				else
					set_error (Unknown_subnode, << p.name >>)
				end
				if not has_error then
					p.set_source (n)
					p.set_parent (Current)
					if has_target then
						p.set_target (target)
					end
					if not p.has_error then
						p.process
						-- Has a point been generated?
						position ?= data
						if position /= Void then
							polypoints.extend (position)
						end
					else
						set_error (p.error_code, p.slots)
					end
				end
				subnodes.forth
			end
		end

	polypoints: ARRAYED_LIST [EM_VECTOR_2D]
			-- Polypoints of this link
			

		
end
