indexing
	description:
		"[
			XML processors for <polygon> elements.
		 ]"

	date: "$Date$"
	revision: "$Revision$"

class TRAFFIC_POLYGON_NODE_PROCESSOR inherit

	TRAFFIC_NODE_PROCESSOR
		redefine
			process_subnodes
		end
		
	DISPLAYER_ACCESSOR

create
	make

feature -- Access

	Name: STRING is
			-- Name of node to process
		once
			Result := "polygon"
		end
			
	Mandatory_attributes: ARRAY [STRING] is
			-- Table of mandatory attributes
		once
			Result := << >>
			Result.compare_objects
		end

feature -- Basic operations

	process is
			-- Process node.
		local
			polygon: DRAWABLE_POLYGON
			cd: CITY_DISPLAYER
		do
			if has_subnodes then
				process_subnodes
			end
			if not has_error then
				if polypoints.count < 2 then
					set_error (Too_few_points, << "polygon" >>)
				elseif color = Void then
					set_error (Mandatory_subnode_missing, << "color" >>)
				end
			end
			if not has_error and polypoints.count >= 2 and color /= Void then
				if not city_factory.city.has_displayer then
					create cd.make (city_factory.city)
					city_factory.city.set_displayer (cd)
				else
					set_city_displayer (city_factory.city)
					cd := city_displayer
				end
				create polygon.make (polypoints)
				polygon.set_color (color)				
				cd.background_polygon_list.extend (polygon)
			else
				set_error (Too_few_points, << "polygon" >>)
			end
		end	

	process_subnodes is
			-- Process subnodes.
		local
			n: XM_ELEMENT
			p: TRAFFIC_NODE_PROCESSOR
			a_position: COORDINATE
			position: REAL_COORDINATE
			a_color: EV_COLOR
			i: INTEGER
			a_polypoints: ARRAY [REAL_COORDINATE]
		do
			create a_polypoints.make (1,100)
			from
				subnodes.start
				i := 1
			until
				has_error or subnodes.after or i > 100
			loop
				a_position := Void
				a_color := Void
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
						-- Either a point or a color has been generated
						a_position ?= data
						a_color ?= data
						if a_position /= Void then
							create position.make (a_position.x, a_position.y)
							a_polypoints.put (position, i)
							i := i + 1
						elseif a_color /= Void then
							color := a_color
						end
					else
						set_error (p.error_code, p.slots)
					end
				end
				subnodes.forth
			end
			create polypoints.make (1, i-1)
			polypoints := a_polypoints.subarray (1, i-1)
		end

feature {NONE} -- Implementation
		
	polypoints: ARRAY [REAL_COORDINATE]
			-- Polypoints for the polygon
			
	color: EV_COLOR
			-- Color of the polygon

end