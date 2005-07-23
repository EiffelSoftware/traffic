indexing
	description: "XML processors for <line section> nodes."

	status:	"See notice at end of class"
	author: "Patrick Schoenbach, Michela Pedroni, Sibylle Aregger"
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
			pp: ARRAYED_LIST [EM_VECTOR_2D]
			line_section_one_direction, line_section_other_direction: TRAFFIC_LINE_SECTION
		do
			line ?= parent.target
			if not has_attribute ("from") then
				set_error (Mandatory_attribute_missing, <<"from">>)
			elseif not has_attribute ("to") then
				set_error (Mandatory_attribute_missing, <<"to">>)
			elseif not map.has_place (attribute ("from")) then
				set_error (Unknown_source, <<attribute ("from")>>)
			elseif not map.has_place (attribute ("to")) then
				set_error (Unknown_destination, << attribute ("to")>> )
			elseif line = Void then
				set_error (Missing_line, << >> )
			elseif not map.lines.has (line.name) then
				set_error (Unknown_line, << line.name >>)
			else
				if has_attribute ("direction") and then attribute ("direction").is_equal ("undirected") then
					if not map_factory.line.is_valid_insertion (map_factory.map.places.item (attribute ("from")), map_factory.map.places.item (attribute ("to"))) then
						set_error (Invalid_line_section, << map_factory.line.name, attribute ("from"), attribute ("to") >>)
					else
						map_factory.build_line_section (( attribute ("from")), ( attribute ("to")), polypoints, map, line)					
						line_section_one_direction := map_factory.line_section
					end
					if not map_factory.line.is_valid_insertion (map_factory.map.places.item (attribute ("to")), map_factory.map.places.item (attribute ("from"))) then
						set_error (Invalid_line_section, << map_factory.line.name, attribute ("to"), attribute ("from") >>)
					else
						map_factory.build_line_section (( attribute ("to")), ( attribute ("from")), pp, map, line)
						line_section_other_direction := map_factory.line_section
					end
				else -- directed
					if not map_factory.line.is_valid_insertion (map_factory.map.places.item (attribute ("from")), map_factory.map.places.item (attribute ("to"))) then
						set_error (Invalid_line_section, << map_factory.line.name, attribute ("from"), attribute ("to") >>)
					else
						map_factory.build_line_section (( attribute ("from")), ( attribute ("to")), polypoints, map, line)
						line_section_one_direction := map_factory.line_section
					end
				end	
				set_target (line_section_one_direction)
			end
			if not has_error and has_subnodes then
				process_subnodes
			end
			if not has_error and polypoints.count >= 2 then
				line_section_one_direction.set_polypoints (polypoints)
				if line_section_other_direction /= Void then
					create pp.make (0)
					from
						polypoints.finish
					until
						polypoints.before
					loop
						pp.extend (polypoints.item.twin)
						polypoints.back
					end
					line_section_other_direction.set_polypoints (pp)
				end
				
				-- adjust the positions of the start and end place of this link
				adjust_position (line_section_one_direction, polypoints)
				adjust_position (line_section_other_direction, pp)
			end
		end
		
	adjust_position (a_line_section: TRAFFIC_LINE_SECTION; a_polypoints: LIST [EM_VECTOR_2D]) is
			-- Adjust positions
		do
			if a_line_section.origin.position = Void then
				a_line_section.origin.set_position 
					(create {EM_VECTOR_2D}.make (a_polypoints.first.x, a_polypoints.first.y))
			else
				a_line_section.origin.set_position
--						(create {EM_VECTOR_2D}.make (	(map_factory.line_section.origin.position.x + polypoints.first.x)// 2,
--													(map_factory.line_section.origin.position.y + polypoints.first.y)// 2))
					(create {EM_VECTOR_2D}.make (	(a_line_section.origin.position.x + a_polypoints.first.x)/ 2.0,
												(a_line_section.origin.position.y + a_polypoints.first.y)/ 2.0))
			end
			if a_line_section.destination.position = Void then
				a_line_section.destination.set_position 
					(create {EM_VECTOR_2D}.make (a_polypoints.last.x, a_polypoints.last.y))
			else
				a_line_section.destination.set_position
--					(create {EM_VECTOR_2D}.make (	(map_factory.line_section.destination.position.x + polypoints.last.x)// 2,
--												(map_factory.line_section.destination.position.y + polypoints.last.y)// 2))
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
						set_error (p.error_code, << >>)
					end
				end
				subnodes.forth
			end
		end

	polypoints: ARRAYED_LIST [EM_VECTOR_2D]
			-- Polypoints of this link
		
end -- class TRAFFIC_LINE_SECTION_NODE_PROCESSOR

--|--------------------------------------------------------
--| This file is Copyright (C) 2003 by ETH Zurich.
--|
--| For questions, comments, additions or suggestions on
--| how to improve this package, please write to:
--|
--|     Patrick Schoenbach <pschoenb@gmx.de>
--|		Michela Pedroni <pedronim@inf.ethz.ch>
--|
--|--------------------------------------------------------
