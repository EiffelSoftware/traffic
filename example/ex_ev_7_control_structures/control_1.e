indexing
	description: "Control Structures (Chapter 7, Touch of Class)"
	author: "Corinne Mueller"
	date: "$Date$"
	revision: "$Revision$"

class
	CONTROL_1

inherit

	TOURISM

feature -- Path building

	explore_on_click is
			-- Build a new path.

		do
			Paris.display
		--	make_path
		--	traverse_line(line8)
		--	show_blinking_spots_on_exchanges (line8)
		--	show_red_spots_on_railway (line8)
		end


--	make_path is
--			-- will create a route from a traffic_node to another traffic_node and animate the route
--			local
--				connection_1, connection_2: TRAFFIC_CONNECTION
--				tram_line: TRAFFIC_LINE_CONNECTION
--				walking_path_1, walking_path_2 : TRAFFIC_ROAD_CONNECTION
--				section_1, section_2, section_3: TRAFFIC_PATH_SECTION
--			do
--		  	   create walking_path_2.make (mb, b: TRAFFIC_NODE, a_type: TRAFFIC_TYPE_ROAD, an_id: INTEGER_32)
--               create section_1.make_walk (walking_path_1)
--               create section_2.make_tram (tram_line)
--               create section_3.make_walk (walking_path_2)
--               create full.default_create
--               full.append (section_1)
--               full.append (section_2)
--               full.append (section_3)
--
--               full.illuminate
--			end


	traverse_line(line: TRAFFIC_LINE) is
			-- animate line 8
			do
				from
					line.start
				variant
					line.count - line.index + 1
				until
					line.after
				loop
					show_spot (line.item.position)
					line.forth
				end

				--ensure
				--	at_first: (not line.is_empty) implies (line.index = 1)
				--	empty_convention: line.is_empty implies line.after

			end

	show_red_spots_on_railway(line: TRAFFIC_LINE) is
			-- Show a red spot for a Metro station that connects to the railway network
			do
				from
					line.start
				invariant
					not_before_unless_empty: (not line.is_empty) implies (not line.is_before)
				variant
					line.count - line.index + 1
				until
					line.after
				loop
					if line.item.is_exchange then
						show_blinking_spot (line.item.position)
					else
						if line.item.is_railway_connection then
							show_big_red_spot (line.item.position)
						else
							show_spot (line.item.position)
						end
					end
					line.forth
				end
			end

	show_blinking_spots_on_exchanges(line: TRAFFIC_LINE) is
			-- a blinking spot on every exchange station of the line
			do
				from
					line.start
				invariant
					not_before_unless_empty: (not line.is_empty) implies (not line.is_before)
				variant
					line.count - line.index + 1
				until
					line.after
				loop
					if line.item.is_railway_connection then
						show_big_red_spot (line.item.position)
					else
						show_spot (line.item.position)
					end
					line.forth
				end
			end

end
