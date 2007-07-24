indexing
	description: "XML processors for <road> nodes."


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
			Result := << "id", "from", "to", "direction", "type" >>
			Result.compare_objects
		end

feature -- Basic operations

	process is
			-- Process node.
		local
			road: TRAFFIC_ROAD
			p: DS_ARRAYED_LIST [TRAFFIC_COORDINATE]
		do
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
			elseif not map.places.has (attribute ("from")) then
				set_error (Unknown_source, <<attribute ("from")>>)
			elseif not map.places.has (attribute ("to")) then
				set_error (Unknown_destination, << attribute ("to")>> )
			else
				map_factory.build_road (( attribute ("from")), ( attribute ("to")), map, ( attribute ("type")), ( attribute ("id")),( attribute ("direction")))
				road := map_factory.road
				if not has_error and has_subnodes then
					process_subnodes
				end
				if not has_error and polypoints.count >= 2 then
					road.one_way.set_polypoints (polypoints)
					if attribute ("direction").is_equal ("undirected") then
						create p.make (polypoints.count)
						from
							polypoints.start
						until
							polypoints.off
						loop
							p.put_first (create{ TRAFFIC_COORDINATE}.make_from_other (polypoints.item_for_iteration))
							polypoints.forth
						end
						road.other_way.set_polypoints (p)
					end
					-- adjust the positions of the start and end place of this link
					adjust_position (road.one_way, polypoints)
				end
			end
		end

	zero_vector: TRAFFIC_COORDINATE is
		once
			Result := create {TRAFFIC_COORDINATE}.make (0, 0)
		end

	adjust_position (road: TRAFFIC_ROAD_CONNECTION; a_polypoints: DS_LIST [TRAFFIC_COORDINATE]) is
			-- Adjust positions
		do
			if road.origin.position = Void or equal(road.origin.position, zero_vector) then
				road.origin.set_position
					(create {TRAFFIC_COORDINATE}.make (a_polypoints.first.x, a_polypoints.first.y))
			else
				road.origin.set_position
					(create {TRAFFIC_COORDINATE}.make (	(road.origin.position.x + a_polypoints.first.x)/ 2.0,
												(road.origin.position.y + a_polypoints.first.y)/ 2.0))
			end
			if road.destination.position = Void or equal(road.destination.position, zero_vector) then
				road.destination.set_position
					(create {TRAFFIC_COORDINATE}.make (a_polypoints.last.x, a_polypoints.last.y))
			else
				road.destination.set_position
					(create {TRAFFIC_COORDINATE}.make (	(road.destination.position.x + a_polypoints.last.x)/ 2.0,
												(road.destination.position.y + a_polypoints.last.y)/ 2.0))
			end
		end


	process_subnodes is
			-- Process subnodes.
		local
			n: XM_ELEMENT
			p: TRAFFIC_NODE_PROCESSOR
			position: TRAFFIC_COORDINATE
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
							polypoints.force_last (position)
						end
					else
						set_error (p.error_code, p.slots)
					end
				end
				subnodes.forth
			end
		end

	polypoints: DS_ARRAYED_LIST [TRAFFIC_COORDINATE]
			-- Polypoints of this link



end
