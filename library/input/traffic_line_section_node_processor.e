indexing
	description: "XML processors for <line section> nodes."

	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_LINE_SECTION_NODE_PROCESSOR

inherit
	TRAFFIC_NODE_PROCESSOR
		redefine
			process_subnodes
		end

create
	make

feature -- Access

	Name: STRING is "line_section"
			-- Name of element to process

	Mandatory_attributes: ARRAY [STRING] is
			-- Table of mandatory attributes
		do
			Result := << "from", "to", "direction" >>
			Result.compare_objects
		end

feature -- Basic operations

	process is
			-- Process node.
		local
			line: TRAFFIC_LINE
			simple_line: TRAFFIC_SIMPLE_LINE
			polypoints_other_direction: DS_ARRAYED_LIST [EM_VECTOR_2D]
			line_section_one_direction, line_section_other_direction: TRAFFIC_LINE_SECTION

			sections: LIST [TRAFFIC_LINE_SECTION]
		do
			if not has_error then
				line ?= parent.target
				if not has_attribute ("from") then
					set_error (Mandatory_attribute_missing, <<"from">>)
				elseif not has_attribute ("to") then
					set_error (Mandatory_attribute_missing, <<"to">>)
				elseif not map.places.has (attribute ("from")) then
					set_error (Unknown_source, <<attribute ("from")>>)
				elseif not map.places.has (attribute ("to")) then
					set_error (Unknown_destination, << attribute ("to")>> )
				elseif line = Void then
					set_error (Missing_line, << >> )
				elseif not map.lines.has (line.name) then
					set_error (Unknown_line, << line.name >>)
				else
					if not has_error and has_subnodes then
						process_subnodes
					end
					if polypoints.count >= 2 then
						create polypoints_other_direction.make (0)
						from
							polypoints.finish
						until
							polypoints.before
						loop
							polypoints_other_direction.force_last (polypoints.item_for_iteration.twin)
							polypoints.back
						end
					else
						polypoints := Void
						polypoints_other_direction := Void
					end
					simple_line ?= line
					if simple_line /= Void then
						if has_attribute ("direction") and then attribute ("direction").is_equal ("undirected") then
							if not line.is_valid_insertion (map.places.item (attribute ("from")), map.places.item (attribute ("to"))) then
								set_error (Invalid_line_section, << line.name, attribute ("from"), attribute ("to") >>)
							else
								map_factory.build_line_section (( attribute ("from")), ( attribute ("to")), polypoints, map, line)
								line_section_one_direction := map_factory.line_section
								-- line_section_other_direction is generated but not accessible
								-- search for line section other direction
								sections := map.line_sections_of_stop ( (attribute("to")), line)
								from
									sections.start
								until
									sections.after or else line_section_other_direction /= Void
								loop
									if sections.item.origin.name.is_equal (( attribute ("to"))) and then
									   sections.item.destination.name.is_equal (( attribute ("from"))) then -- and then
										line_section_other_direction := sections.item
									end
									sections.forth
								end
							end
						else -- directed
							set_error (Invalid_line_section, << line.name, attribute ("from"), attribute ("to") >>)
						end
						set_target (line_section_one_direction)
					else
						if has_attribute ("direction") and then attribute ("direction").is_equal ("undirected") then
							if not line.is_valid_insertion (map.places.item (attribute ("from")), map.places.item (attribute ("to"))) then
								set_error (Invalid_line_section, << line.name, attribute ("from"), attribute ("to") >>)
							else
								map_factory.build_line_section (( attribute ("from")), ( attribute ("to")), polypoints, map, line)
								line_section_one_direction := map_factory.line_section
							end
							if not line.is_valid_insertion (map.places.item ( attribute ("to")), map.places.item (attribute ("from"))) then
								set_error (Invalid_line_section, << line.name, attribute ("to"), attribute ("from") >>)
							else
								map_factory.build_line_section (( attribute ("to")), (attribute ("from")), polypoints_other_direction, map, line)
								line_section_other_direction := map_factory.line_section
							end
						else -- directed
							if not line.is_valid_insertion (map.places.item (attribute ("from")), map.places.item (attribute ("to"))) then
								set_error (Invalid_line_section, << line.name, attribute ("from"), attribute ("to") >>)
							else
								map_factory.build_line_section (( attribute ("from")), ( attribute ("to")), polypoints, map, line)
								line_section_one_direction := map_factory.line_section
							end
						end
						set_target (line_section_one_direction)
					end

					--adjust_position (line_section_one_direction, polypoints)

--					if line_section_other_direction /= Void then
--						adjust_position (line_section_other_direction, polypoints)
--					end

				end


				if not has_error and roads.count >= 1 then
					line_section_one_direction.set_roads(roads)
					if line_section_other_direction /= Void then
						line_section_other_direction.set_roads(roads)
					end
				end
			end
		end

	zero_vector: EM_VECTOR_2D is
	once
		Result := create {EM_VECTOR_2D}.make (0, 0)
	end

	adjust_position (a_line_section: TRAFFIC_LINE_SECTION; a_polypoints: LIST [EM_VECTOR_2D]) is
			-- Adjust positions.
		do
			if a_line_section.origin.position = Void or equal(a_line_section.origin.position, zero_vector) then
				a_line_section.origin.set_position
					(create {EM_VECTOR_2D}.make (a_polypoints.first.x, a_polypoints.first.y))
			else
				a_line_section.origin.set_position
					(create {EM_VECTOR_2D}.make (	(a_line_section.origin.position.x + a_polypoints.first.x)/ 2.0,
												(a_line_section.origin.position.y + a_polypoints.first.y)/ 2.0))
			end
			if a_line_section.destination.position = Void or equal(a_line_section.destination.position, zero_vector) then
				a_line_section.destination.set_position
					(create {EM_VECTOR_2D}.make (a_polypoints.last.x, a_polypoints.last.y))
			else
				a_line_section.destination.set_position
					(create {EM_VECTOR_2D}.make (	(a_line_section.destination.position.x + a_polypoints.last.x)/ 2.0,
												(a_line_section.destination.position.y + a_polypoints.last.y)/ 2.0))
			end
		end


	process_subnodes is
			-- Process subnodes.
		local
			n: XM_ELEMENT
			p: TRAFFIC_NODE_PROCESSOR
			position: EM_VECTOR_2D
			road: TRAFFIC_ROAD
		do
			create polypoints.make (0)
			create roads.make(0)
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
						-- Has a road been generated?
						road ?= data
						if road /= Void then
							roads.extend (road)
						end
					else
						set_error (p.error_code, p.slots)
					end
				end
				subnodes.forth
			end
		end

	polypoints: DS_ARRAYED_LIST [EM_VECTOR_2D]
			-- Polypoints of this link

	roads: ARRAYED_LIST[TRAFFIC_ROAD]
		-- Roads of this line_section

end
