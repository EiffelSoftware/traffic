indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_GRAPH

inherit
	LINKED_WEIGHTED_GRAPH [TRAFFIC_NODE, TRAFFIC_CONNECTION]
	redefine
		find_shortest_path,
		writable
	end

create
	make_multi_graph

feature -- Basic operations

	find_shortest_path (a_start_node, a_end_node: like item) is
			-- Remember start and end
		do
			sp_origin := a_start_node
			sp_destination := a_end_node
			Precursor (a_start_node, a_end_node)
		end

feature -- Status Setting

	set_normal_distance is
			-- Set shortest path mode to regular distance
		do
			shortest_path_mode := regular_distance
		end

	set_minimum_switches is
			-- Set shortest path mode to minimum amount of switches
		do
			shortest_path_mode := minimum_switches
		end

feature -- Status Report

	writable: BOOLEAN is
			-- Is there a current item that may be modified?
		do
			Result := not off
		end
		
feature {NONE} -- Implementation

	calculate_weight (a_edge: WEIGHTED_EDGE [TRAFFIC_PLACE, TRAFFIC_LINE_SECTION]): DOUBLE is
			-- calculate the edge based on the current status
		local
			section: TRAFFIC_LINE_SECTION
		do
			inspect shortest_path_mode
			when regular_distance then
				Result := a_edge.label.length
			when minimum_switches then

				section := a_edge.label
				if section.origin = sp_origin or else section.destination = sp_destination then
					Result := 0
				else
					if section.line.name = "dummy" then
						Result := 50000
					else
						Result := a_edge.label.length
					end
				end
			else
				(create {EXCEPTIONS}).raise ("Unknown shortest path mode in graph!")
			end
		end

	shortest_path_mode: INTEGER

	regular_distance: INTEGER is 0
	minimum_switches: INTEGER is 1

	sp_origin: TRAFFIC_NODE
	sp_destination: TRAFFIC_NODE

invariant
	invariant_clause: True -- Your invariant here

end
