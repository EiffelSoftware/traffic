indexing
	description: "Predefined objects of the city Paris"
	date: "$Date$"
	revision: "$Revision$"

deferred class TOUCH_PARIS_OBJECTS

inherit

	KL_SHARED_FILE_SYSTEM
		export {NONE} all
		end

feature -- Access

	Paris: TRAFFIC_MAP is
			-- Map of Paris
		deferred
		ensure
			is_paris_loaded
		end

feature -- Status report

	is_paris_loaded: BOOLEAN
			-- Is the Paris map loaded?

feature -- Access (Lines)

	Empty_line: TRAFFIC_LINE is
			-- Line 1 of the Paris map
		require
			Paris_exists: is_paris_loaded
		once
			Result ?= Paris.lines.item ("Empty_line")
		end

	Line1: TRAFFIC_LINE is
			-- Line 1 of the Paris map
		require
			Paris_exists: is_paris_loaded
		once
			Result ?= Paris.lines.item ("tram 1")
		end

	Line2: TRAFFIC_LINE is
			-- Line 2 of the Paris map
		require
			Paris_exists: is_paris_loaded
		once
			Result ?= Paris.lines.item ("tram 2")
		end

	Line3: TRAFFIC_LINE is
			-- Line 3 of the Paris map
		require
			Paris_exists: is_paris_loaded
		once
			Result ?= Paris.lines.item ("tram 3")
		end

	Line6: TRAFFIC_LINE is
			-- Line 6 of the Paris map
		require
			Paris_exists: is_paris_loaded
		once
			Result ?= Paris.lines.item ("tram 6")
		end

	Line7_a: TRAFFIC_LINE is
			-- Line 7 of the Paris map
		require
			Paris_exists: is_paris_loaded
		once
			Result ?= Paris.lines.item ("tram 7(a)")
		end

	Line8: TRAFFIC_LINE is
			-- Line 8 of the Paris map
		require
			Paris_exists: is_paris_loaded
		once
			Result ?= Paris.lines.item ("tram 8")
		end

	Line9: TRAFFIC_LINE is
			-- Line 9 of the Paris map
		require
			Paris_exists: is_paris_loaded
		once
			Result ?= Paris.lines.item ("tram 9")
		end

	Line11: TRAFFIC_LINE is
			-- Line 11 of the Paris map
		require
			Paris_exists: is_paris_loaded
		once
			Result ?= Paris.lines.item ("tram 11")
		end

	RER_A: TRAFFIC_LINE is
			-- Line 11 of the Paris map
		require
			Paris_exists: is_paris_loaded
		once
			Result ?= Paris.lines.item ("RER A")
		end

	RER_B: TRAFFIC_LINE is
			-- Line 11 of the Paris map
		require
			Paris_exists: is_paris_loaded
		once
			Result ?= Paris.lines.item ("RER B")
		end

	RER_C_a: TRAFFIC_LINE is
			-- Line 11 of the Paris map
		require
			Paris_exists: is_paris_loaded
		once
			Result ?= Paris.lines.item ("RER C(a)")
		end

feature  -- Predefined objects (Stations)

	Station_Balard: TRAFFIC_STATION is
			-- Station
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.stations.item ("place Balard")
		ensure
			Result_exists: Result /= Void
		end

--	Station_Invalides: TRAFFIC_STATION is
--			-- Station
--		require
--			Paris_exists: is_paris_loaded
--		once
--			Result := Paris.stations.item ("place Invalides")
--		ensure
--			Result_exists: Result /= Void
--		end

	Station_St_Michel_Notre_Dame: TRAFFIC_STATION is
			-- Station
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.stations.item ("place St Michel - Notre Dame")
		ensure
			Result_exists: Result /= Void
		end

	Station_Cergy: TRAFFIC_STATION is
			-- Station
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.stations.item ("place Cergy")
		ensure
			Result_exists: Result /= Void
		end

	Station_Opera: TRAFFIC_STATION is
			-- Station
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.stations.item ("place Opera")
		ensure
			Result_exists: Result /= Void
		end

	Station_Champs_de_Mars_Tour_Eiffel_Bir_Hakeim: TRAFFIC_STATION is
			-- Station
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.stations.item ("place Champs de Mars, Tour Eiffel, Bir-Hakeim")
		ensure
			Result_exists: Result /= Void
		end

	Station_Trocadero: TRAFFIC_STATION is
			-- Station
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.stations.item ("place Trocadero")
		ensure
			Result_exists: Result /= Void
		end

	Station_Hotel_de_Ville: TRAFFIC_STATION is
			-- Station
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.stations.item ("place Hotel de Ville")
		ensure
			Result_exists: Result /= Void
		end

	Station_Charles_de_Gaulle_Etoile: TRAFFIC_STATION is
			-- Station
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.stations.item ("place Charles de Gaulle - Etoile")
		ensure
			Result_exists: Result /= Void
		end

	Station_Chatelet: TRAFFIC_STATION is
			-- Station
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.stations.item ("place Chatelet")
		ensure
			Result_exists: Result /= Void
		end

	Station_Nation: TRAFFIC_STATION is
			-- Station
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.stations.item ("place Nation")
		ensure
			Result_exists: Result /= Void
		end

	Station_Palais_Royal_Musee_du_Louvre: TRAFFIC_STATION is
			-- Place Balard
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.stations.item ("place Palais Royal Musee du Louvre")
		ensure
			Result_exists: Result /= Void
		end

	Station_Mairie_d_Issy: TRAFFIC_STATION is
			-- Place Issy
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.stations.item ("place Mairie d'Issy")
		ensure
			Result_exists: Result /= Void
		end

	Station_Chatillon_Montrouge: TRAFFIC_STATION is
			-- Place Montrouge
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.stations.item ("place Chatillon - Montrouge")
		ensure
			Result_exists: Result /= Void
		end

	Station_Gare_de_Lyon: TRAFFIC_STATION is
			-- PLACE Gare de Lyon
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.stations.item ("place Gare de Lyon")
		ensure
			Result_exists: Result /= Void
		end

	Station_Invalides: TRAFFIC_STATION is
			-- Place Invalides
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.stations.item ("place Invalides")
		ensure
			Result_exists: Result /= Void
		end

	Station_Madeleine: TRAFFIC_STATION is
			-- Place Madeleine
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.stations.item ("place Madeleine")
		ensure
			Result_exists: Result /= Void
		end

	Station_Bobigny_Pablo_Picasso: TRAFFIC_STATION is
			-- Place Bobigny - Pablo Picasso
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.stations.item ("place Bobigny - Pablo Picasso")
		ensure
			Result_exists: Result /= Void
		end

	Station_La_Fourche: TRAFFIC_STATION is
			-- Place La Fourche
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.stations.item ("place La Fourche")
		ensure
			Result_exists: Result /= Void
		end

	Station_Bastille: TRAFFIC_STATION is
			-- Place Bastille
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.stations.item ("place Bastille")
		ensure
			Result_exists: Result /= Void
		end

	Station_Concorde: TRAFFIC_STATION is
			-- Place Concorde
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.stations.item ("place Concorde")
		ensure
			Result_exists: Result /= Void
		end

	Station_Republique: TRAFFIC_STATION is
			-- Place Republique
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.stations.item ("place Republique")
		ensure
			Result_exists: Result /= Void
		end

	Station_La_Motte_Picquet_Grenelle: TRAFFIC_STATION is
			-- Place La Motte - Picquet - Grenelle
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.stations.item ("place La Motte - Picquet - Grenelle")
		ensure
			Result_exists: Result /= Void
		end

	Place_Musee_du_Louvre: TRAFFIC_STATION is
			-- Place
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.stations.item ("Musee du Louvre")
		ensure
			Result_exists: Result /= Void
		end

	Place_Tour_Eiffel: TRAFFIC_STATION is
			-- Place
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.stations.item ("Tour Eiffel")
		ensure
			Result_exists: Result /= Void
		end

	Place_Champs_Elysee: TRAFFIC_STATION is
			-- Place
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.stations.item ("Champs Elysee - Etoile")
		ensure
			Result_exists: Result /= Void
		end

feature -- Predefined objects (Buildings)

	Louvre: TRAFFIC_LANDMARK is
			-- The building at the place of Louvre
		require
			Paris_exists: is_paris_loaded
		once
			create Result.make (Place_Musee_du_Louvre.position,
				File_system.absolute_pathname (File_system.pathname_from_file_system ("..\map\paris\louvre.png", Windows_file_system)))
			Paris.buildings.put_last (Result)
		end

	Eiffel_tower: TRAFFIC_LANDMARK is
			-- The Eiffel tower building
		require
			Paris_exists: is_paris_loaded
		once
			create Result.make (Place_Tour_Eiffel.position,
				File_system.absolute_pathname (File_system.pathname_from_file_system ("..\map\paris\eiffel.png", Windows_file_system)))
			Paris.buildings.put_last (Result)
		end

	Elysee_palace: TRAFFIC_LANDMARK is
			-- The Elysee_palace building
		require
			Paris_exists: is_paris_loaded
		once

			create Result.make (Place_Champs_Elysee.position,
				File_system.absolute_pathname (File_system.pathname_from_file_system ("..\map\paris\triomphe.png", Windows_file_system)))
			Paris.buildings.put_last (Result)
		end

feature -- Passengers

	Michela: TRAFFIC_PASSENGER is
			-- Michela
		require
			Paris_exists: is_paris_loaded
		local
			s: TRAFFIC_PATH_SECTION
			p: TRAFFIC_PATH
		once
			create p
			create s.make_tram (Line11_Republique_to_Hotel_de_Ville)
			s.extend (Line11_Hotel_de_Ville_to_Chatelet)
			p.set_first (s)
			create s.make_rail (rer_a_chatelet_to_opera)
			p.first.set_next (s)
			create Result.make_with_path (p, 10.0)
			Paris.passengers.put_last (Result)
		end

feature -- Predefined objects (Routes)

	Route1: TRAFFIC_PATH is
			-- Route one
		require
			Paris_exists: is_paris_loaded
		local
			s, t: TRAFFIC_PATH_SECTION
		once
			create Result
			create s.make_tram (Line7a_louvre_to_chatelet)
			Result.set_first (s)
			create t.make_rail (rer_B_Chatelet_to_Notre_Dame)
			s.set_next (t)
			Paris.paths.put_last (Result)
		end

	Route2: TRAFFIC_PATH is
			-- Route 2
		require
			Paris_exists: is_paris_loaded
		local
			s: TRAFFIC_PATH_SECTION
		once
			create Result
			create s.make_tram (Line11_Republique_to_Hotel_de_Ville)
			s.extend (Line11_Hotel_de_Ville_to_Chatelet)
			Result.set_first (s)
			create s.make_rail (rer_a_chatelet_to_opera)
			Result.first.set_next (s)
			Paris.paths.put_last (Result)
		end

	Route3: TRAFFIC_PATH is
			-- Route one
		require
			Paris_exists: is_paris_loaded
		local
			s: TRAFFIC_PATH_SECTION
		once
			create Result
			create s.make_tram (line9_nation_to_republique)
			Result.set_first (s)
			Paris.paths.put_last (Result)
		end

feature --Predefined objects (Line-Sections)

	line_section (a_line: TRAFFIC_LINE; o, d: TRAFFIC_STATION):TRAFFIC_LINE_CONNECTION is
			-- Find the line section of `a_line' between `o' and `d'.
		local
			line_sections: DS_ARRAYED_LIST [TRAFFIC_LINE_CONNECTION]
		do
			line_sections := o.outgoing_line_connections --Paris.line_sections.items_between (p1, p2)
			from
				line_sections.start
			until
				line_sections.off or else (line_sections.item_for_iteration.destination = d and line_sections.item_for_iteration.line = a_line)
			loop
				line_sections.forth
			end
			Result := line_sections.item_for_iteration
		end

	Line7a_Louvre_to_Chatelet: TRAFFIC_LINE_CONNECTION is
			-- Line section
		require
			Paris_exists: is_paris_loaded
		once
			Result := line_section (Line7_a , Station_Palais_Royal_Musee_du_Louvre, Station_Chatelet)
		ensure
			Result_exists: Result /= Void
		end

	Line9_Nation_to_Republique: TRAFFIC_LINE_CONNECTION is
			-- Line section
		require
			Paris_exists: is_paris_loaded
		once
			Result := line_section (Line9, Station_Nation, Station_Republique)
		ensure
			Result_exists: Result /= Void
		end

	Line11_Republique_to_Hotel_de_Ville: TRAFFIC_LINE_CONNECTION is
			-- Line section
		require
			Paris_exists: is_paris_loaded
		once
			Result := line_section (Line11, Station_Republique, Station_Hotel_de_Ville)
		ensure
			Result_exists: Result /= Void
		end

	Line11_Hotel_de_Ville_to_Chatelet: TRAFFIC_LINE_CONNECTION is
			-- Line section
		require
			Paris_exists: is_paris_loaded
		once
			Result := line_section (Line11, station_hotel_de_ville, Station_chatelet)
		ensure
			Result_exists: Result /= Void
		end

	Line6_Etoile_to_Trocadero: TRAFFIC_LINE_CONNECTION is
			-- Line section
		require
			Paris_exists: is_paris_loaded
		once
			Result := line_section (Line6, station_charles_de_gaulle_etoile, Station_Trocadero)
		ensure
			Result_exists: Result /= Void
		end

	Line6_Trocadero_to_Champs_De_Mars: TRAFFIC_LINE_CONNECTION is
			-- Line section
		require
			Paris_exists: is_paris_loaded
		once
			Result := line_section (Line6, Station_Trocadero, station_champs_de_mars_tour_eiffel_bir_hakeim)
		ensure
			Result_exists: Result /= Void
		end

	rer_A_Chatelet_to_Opera: TRAFFIC_LINE_CONNECTION is
			-- Line section
		require
			Paris_exists: is_paris_loaded
		once
			Result := line_section (RER_A, station_chatelet, Station_Opera)
		ensure
			Result_exists: Result /= Void
		end

	rer_A_Opera_to_Etoile: TRAFFIC_LINE_CONNECTION is
			-- Line section
		require
			Paris_exists: is_paris_loaded
		once
			Result := line_section (RER_A, Station_Opera, station_charles_de_gaulle_etoile)
		ensure
			Result_exists: Result /= Void
		end

	rer_A_Etoile_to_Cergy: TRAFFIC_LINE_CONNECTION is
			-- Line section
		require
			Paris_exists: is_paris_loaded
		once
			Result := line_section (RER_A, station_charles_de_gaulle_etoile, Station_Cergy)
		ensure
			Result_exists: Result /= Void
		end

	rer_B_Chatelet_to_Notre_Dame: TRAFFIC_LINE_CONNECTION is
			-- Line section
		require
			Paris_exists: is_paris_loaded
		once
			Result := line_section (RER_B, Station_Chatelet, Station_st_michel_notre_dame)
		ensure
			Result_exists: Result /= Void
		end

	rer_c_a_Invalides_to_Champs_de_Mars: TRAFFIC_LINE_CONNECTION is
			-- Line section
		require
			Paris_exists: is_paris_loaded
		once
			Result := line_section (RER_C_a, Station_Invalides, station_champs_de_mars_tour_eiffel_bir_hakeim)
		ensure
			Result_exists: Result /= Void
		end

	rer_c_a_Notre_Dame_to_Invalides: TRAFFIC_LINE_CONNECTION is
			-- Line section
		require
			Paris_exists: is_paris_loaded
		once
			Result := line_section (RER_C_a, station_st_michel_notre_dame, station_invalides)
		ensure
			Result_exists: Result /= Void
		end

feature --Predefined Objects (Roads)

	Road_Place_Etoile: TRAFFIC_ROAD_CONNECTION is
			-- the road from Etoile to place Etoile
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.roads.item (93).one_way
		ensure
			Result_exists: Result /= Void
		end

	Road_Place_de_la_Nation: TRAFFIC_ROAD_CONNECTION is
			-- the road from Place de la Opera to place Opera
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.roads.item (94).one_way
		ensure
			Result_exists: Result /= Void
		end

	Road_pere_la_chaise_to_station_pere_la_chaise: TRAFFIC_ROAD_CONNECTION is
			-- Road from Pere La Chaise to the metro station Pere La Chaise
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.roads.item (108).one_way
		ensure
			Result_exists: Result /= Void
		end

	Road_Hotel_de_Ville_to_station_Hotel_de_Ville: TRAFFIC_ROAD_CONNECTION is
			-- Road from Hotel de Ville to the metro station Hotel de Ville
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.roads.item (107).one_way
		ensure
			Result_exists: Result /= Void
		end

	Road_station_Champs_de_Mars_to_Tour_Eiffel: TRAFFIC_ROAD_CONNECTION is
			-- Road from Tour Eiffel to the metro station Champs de Mars
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.roads.item (91).other_way
		ensure
			Result_exists: Result /= Void
		end

	Road_Champs_Elysee_Etoile_to_place_Charles_de_Gaulle_Etoile: TRAFFIC_ROAD_CONNECTION is
			-- Road from Champs Elysee-Etoile to the metro station place Charles de Gaulle
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.roads.item (93).other_way
		ensure
			Result_exists: Result /= Void
		end

	Road_Invalides_to_station_Invalides: TRAFFIC_ROAD_CONNECTION is
			-- Road from Invalides to the metro station Invalides
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.roads.item (98).one_way
		ensure
			Result_exists: Result /= Void
		end
end

