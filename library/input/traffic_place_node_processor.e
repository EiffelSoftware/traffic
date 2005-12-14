indexing
	description: "XML processors for <place> nodes."

	status:	"See notice at end of class"
	author: "Patrick Schoenbach, Michela Pedroni, Sibylle Aregger"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_PLACE_NODE_PROCESSOR
	
inherit
	TRAFFIC_NODE_PROCESSOR
		redefine
			process_subnodes
		end

create
	make

feature -- Access

	Name: STRING is "place"
			-- Name of node to process
			
	place: TRAFFIC_PLACE
			-- Reference to node

	Mandatory_attributes: ARRAY [STRING] is
			-- Table of mandatory attributes
		once
			Result := << "name" >>
			Result.compare_objects
		end

feature -- Basic operations

	process is
			-- Process node.
		do
			if not has_attribute ("name") then
				set_error (Mandatory_attribute_missing, << "name" >>)
			elseif map_factory.map.has_place (attribute ("name")) then
				set_error (Duplicate_name, << attribute ("name") >>)
			else
				map_factory.build_place (attribute ("name"), map)
				set_target (map_factory.place)
			end

			if has_subnodes then
				process_subnodes
			end
		end
		
	process_subnodes is
			-- Process subnodes.
		local
			n: XM_ELEMENT
			p: TRAFFIC_NODE_PROCESSOR
			f: TRAFFIC_FILE_NODE_PROCESSOR
			files: LINKED_LIST [STRING]
			description: STRING
			info: TRAFFIC_PLACE_INFORMATION
		do
			create files.make
			from
				subnodes.start
			until
				has_error or subnodes.after
			loop
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
						-- Has a file been generated?
						f ?= p
						if f /= Void then
							files.extend (f.file)
						end
						description ?= data
					else
						set_error (p.error_code, p.slots)
					end
				end
				subnodes.forth
			end
			if files.count > 0 or description /= Void then
				create info.make 
				info.set_description (description)
				from
					files.start
				until
					files.after
				loop
					info.extend_picture (files.item)
					files.forth
				end
				map_factory.place.set_information (info)
			end
		end
		
end -- class TRAFFIC_PLACE_NODE_PROCESSOR

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
