indexing
	description: "Test the map and it's objects"
	author: "Sibylle Aregger, ETH Zurich"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_TEST_MAP

create
	make

feature -- Initialization

	make (a_text: EV_TEXT) is
			-- Create test map instance.
		require
			a_text_exists: a_text /= Void
		do
			text := a_text
			create factory.make
		ensure
			text_exists: text /= Void
			text_set: text = a_text
			factory_exists: factory /= Void
		end

feature -- Test

	test is
			-- Test map generate output to text.
		do
			fill_map
			visit_places
			text.append_text (map.out)
			text.append_text ("%N%N")
			text.append_text (route.out)
		end

	fill_map is
			-- Fill map.
		do
			factory.build_map ("test map") -- create test map
			map := factory.map
			add_places
			add_lines
		end
		
	visit_places is
			-- Visit places.
		local
			l_places: LINKED_LIST [TRAFFIC_PLACE]
		do
			create l_places.make
			l_places.extend (map.place ("Hauptbahnhof"))
			l_places.extend (map.place ("Kunsthaus"))
			create route.make (l_places, map)
			route.calculate_shortest_path
		end
		
	add_places is
			-- Add places into map.
		do
			factory.build_place_with_position ("Bahnhof Stadelhofen", 910, 495,  map)
			factory.build_place_with_position ("Bellevue", 843, 495, map)
			factory.build_place_with_position ("Börsenstrasse", 810, 520,  map)
			factory.build_place_with_position ("Bürkliplatz", 750, 495, map)
			factory.build_place_with_position ("Central", 810, 780, map)
			factory.build_place_with_position ("Hauptbahnhof", 705, 835, map)
			factory.build_place_with_position ("Helmhaus", 810, 583, map)
			factory.build_place_with_position ("Kunsthaus", 940, 638, map)
			factory.build_place_with_position ("Neumarkt", 880, 671, map)
			factory.build_place_with_position ("Paradeplatz", 660, 570, map)
			factory.build_place_with_position ("Rennweg", 705, 655, map)
			factory.build_place_with_position ("Rathaus", 810, 620, map)
			factory.build_place_with_position ("Rudolf-Brun-Brücke", 810, 655, map)
		end
		
	add_lines is
			-- Add lines into map.
		local
			l_polypoints: ARRAYED_LIST [VECTOR_2D]
			l_position_1, l_position_2, l_position_3: VECTOR_2D
			l_color: TRAFFIC_COLOR
		do
			create l_polypoints.make (0)
			create l_position_1.make (0.0, 0.0)
			create l_position_2.make (0.0, 0.0)
			create l_position_3.make (0.0, 0.0)
			create l_color.make(255, 0, 0)

			factory.build_line ("line 11", "tram", map)
			factory.line.set_color (l_color)

			l_position_1.set_x_y (910, 495)
			l_position_2.set_x_y (843, 495)
			l_polypoints.extend (l_position_1)
			l_polypoints.extend (l_position_2)
			factory.build_line_section ("Bahnhof Stadelhofen", "Bellevue", l_polypoints, map, factory.line)
			l_polypoints.wipe_out
			
			l_position_1.set_x_y (843, 495)
			l_position_2.set_x_y (750, 495)
			l_polypoints.extend (l_position_1)
			l_polypoints.extend (l_position_2)
			factory.build_line_section ("Bellevue", "Bürkliplatz", l_polypoints, map, factory.line)
			l_polypoints.wipe_out
			
			l_position_1.set_x_y (750, 495)
			l_position_2.set_x_y (735, 495)
			l_position_3.set_x_y (710, 520)
			l_polypoints.extend (l_position_1)
			l_polypoints.extend (l_position_2)
			l_polypoints.extend (l_position_3)
			factory.build_line_section ("Bürkliplatz", "Börsenstrasse", l_polypoints, map, factory.line)
			l_polypoints.wipe_out
			
			l_position_1.set_x_y (710, 520)
			l_position_2.set_x_y (660, 570)
			l_polypoints.extend (l_position_1)
			l_polypoints.extend (l_position_2)
			factory.build_line_section ("Börsenstrasse", "Paradeplatz", l_polypoints, map, factory.line)
			l_polypoints.wipe_out
			
			l_position_1.set_x_y (660, 570)
			l_position_2.set_x_y (705, 615)
			l_position_3.set_x_y (705, 655)
			l_polypoints.extend (l_position_1)
			l_polypoints.extend (l_position_2)
			l_polypoints.extend (l_position_3)
			factory.build_line_section ("Paradeplatz", "Rennweg", l_polypoints, map, factory.line)
			l_polypoints.wipe_out
			
			l_position_1.set_x_y (705, 655)
			l_position_2.set_x_y (705, 835)
			l_polypoints.extend (l_position_1)
			l_polypoints.extend (l_position_2)
			factory.build_line_section ("Rennweg", "Hauptbahnhof", l_polypoints, map, factory.line)
			l_polypoints.wipe_out
			
			factory.build_line_section ("Hauptbahnhof", "Rennweg", l_polypoints, map, factory.line)
			factory.build_line_section ("Rennweg", "Paradeplatz", l_polypoints, map, factory.line)
			factory.build_line_section ("Paradeplatz", "Börsenstrasse", l_polypoints, map, factory.line)
			factory.build_line_section ("Börsenstrasse", "Bürkliplatz", l_polypoints, map, factory.line)
			factory.build_line_section ("Bürkliplatz", "Bellevue", l_polypoints, map, factory.line)
			factory.build_line_section ("Bellevue", "Bahnhof Stadelhofen", l_polypoints, map, factory.line)

			
			factory.build_line ("line 9", "tram", map)
			
			factory.build_line_section ("Paradeplatz", "Börsenstrasse", l_polypoints, map, factory.line)
			factory.build_line_section ("Börsenstrasse", "Paradeplatz", l_polypoints, map, factory.line)
			factory.build_line_section ("Börsenstrasse", "Bürkliplatz", l_polypoints, map, factory.line)
			factory.build_line_section ("Bürkliplatz", "Börsenstrasse", l_polypoints, map, factory.line)
			factory.build_line_section ("Bürkliplatz", "Bellevue", l_polypoints, map, factory.line)
			factory.build_line_section ("Bellevue", "Bürkliplatz", l_polypoints, map, factory.line)
			factory.build_line_section ("Bellevue", "Kunsthaus", l_polypoints, map, factory.line)
			factory.build_line_section ("Kunsthaus", "Bellevue", l_polypoints, map, factory.line)

			factory.build_line ("Line 4", "tram", map)
			
			factory.build_line_section ("Hauptbahnhof", "Central", l_polypoints, map, factory.line)
			factory.build_line_section ("Central", "Hauptbahnhof", l_polypoints, map, factory.line)
			factory.build_line_section ("Central", "Rudolf-Brun-Brücke", l_polypoints, map, factory.line)
			factory.build_line_section ("Rudolf-Brun-Brücke", "Central", l_polypoints, map, factory.line)
			factory.build_line_section ("Rudolf-Brun-Brücke", "Rathaus", l_polypoints, map, factory.line)
			factory.build_line_section ("Rathaus", "Rudolf-Brun-Brücke", l_polypoints, map, factory.line)
			factory.build_line_section ("Rathaus", "Helmhaus", l_polypoints, map, factory.line)
			factory.build_line_section ("Helmhaus", "Rathaus", l_polypoints, map, factory.line)
			factory.build_line_section ("Helmhaus", "Bellevue", l_polypoints, map, factory.line)
			factory.build_line_section ("Bellevue", "Helmhaus", l_polypoints, map, factory.line)

			factory.build_line ("Linie 31", "bus", map)

			factory.build_line_section ("Kunsthaus", "Neumarkt", l_polypoints, map, factory.line)
			factory.build_line_section ("Neumarkt", "Kunsthaus", l_polypoints, map, factory.line)
			factory.build_line_section ("Neumarkt", "Central", l_polypoints, map, factory.line)
			factory.build_line_section ("Central", "Neumarkt", l_polypoints, map, factory.line)
			factory.build_line_section ("Central", "Hauptbahnhof", l_polypoints, map, factory.line)
			factory.build_line_section ("Hauptbahnhof", "Central", l_polypoints, map, factory.line)

			factory.build_line ("S7", "rail", map)
			
			factory.build_line_section ("Hauptbahnhof", "Bahnhof Stadelhofen", l_polypoints, map, factory.line)
			factory.build_line_section ("Bahnhof Stadelhofen", "Hauptbahnhof", l_polypoints, map, factory.line)			
		end
		
feature {NONE} -- Implementation 

	text: EV_TEXT 
			-- Text window to write to.

	factory: TRAFFIC_MAP_FACTORY
			-- Factory.
			
	map: TRAFFIC_MAP
			-- Map.
			
	route: TRAFFIC_ROUTE
			-- Route.

invariant
	text_exists: text /= Void
	factory_exists: factory /= Void

end -- class TRAFFIC_TEST_MAP
