indexing
	description: "XML processors for <line> nodes."
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_LINE_NODE_PROCESSOR

inherit
	TRAFFIC_NODE_PROCESSOR
		redefine
			reset, process_subnodes
		end

create
	make

feature -- Access

	Name: STRING is "line"
			-- Name of element to process

	Mandatory_attributes: ARRAY [STRING] is
			-- Table of mandatory attributes
		do
			Result := << "name", "type" >>
			Result.compare_objects
		end

	color: ?TRAFFIC_COLOR
			-- Color of line

feature -- Basic operations

	process is
			-- Process node.
		do
			if not has_attribute ("name") then
				set_error (Mandatory_attribute_missing, << "name" >>)
			elseif not has_attribute ("type") then
				set_error (Mandatory_attribute_missing, << "type" >>)
			else
				if has_attribute ("simple") and then equal (xml_attribute ("simple"), "true") then
					map_factory.build_line (xml_attribute ("name"), xml_attribute ("type"), city)
					set_target (map_factory.line)
				else
					map_factory.build_line (xml_attribute ("name"), xml_attribute ("type"), city)
					set_target (map_factory.line)
				end
			end
			if not has_error and has_subnodes then
				process_subnodes
			end
			if not has_error and color /= Void then
				if has_attribute ("simple") and then equal (xml_attribute ("simple"), "true") then
					map_factory.line.set_color (color)
				else
					map_factory.line.set_color (color)
				end
			end
		end

	process_subnodes is
			-- Process subnodes.
		local
			n: XM_ELEMENT
			p: TRAFFIC_NODE_PROCESSOR
		do
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
						-- Has a color been generated?
						if {c: TRAFFIC_COLOR} data then
							create color.make_with_rgb (c.red, c.green, c.blue)
						end
					else
						set_error (p.error_code, p.slots)
					end
				end
				subnodes.forth
			end
		end

	reset is
			-- Reset processor.
		do
			source := Void
			target := Void
			parent := Void
			subnodes.wipe_out
			set_error (0, << >>)
			color := Void
		end

end
