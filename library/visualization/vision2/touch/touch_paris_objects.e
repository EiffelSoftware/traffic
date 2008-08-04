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

feature  -- Predefined objects (Places)

	Place_Balard: TRAFFIC_STATION is
			-- Place Balard
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.places.item ("place Balard")
		ensure
			Result_exists: Result /= Void
		end

	Place_Issy: TRAFFIC_STATION is
			-- Place Issy
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.places.item ("place Mairie d'Issy")
		ensure
			Result_exists: Result /= Void
		end

	Place_Montrouge: TRAFFIC_STATION is
			-- Place Montrouge
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.places.item ("place Chatillon - Montrouge")
		ensure
			Result_exists: Result /= Void
		end

	Place_Gare_de_Lyon: TRAFFIC_STATION is
			-- PLACE Gare de Lyon
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.places.item ("place Gare de Lyon")
		ensure
			Result_exists: Result /= Void
		end

	Place_Invalides: TRAFFIC_STATION is
			-- Place Invalides
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.places.item ("place Invalides")
		ensure
			Result_exists: Result /= Void
		end

	Place_Madeleine: TRAFFIC_STATION is
			-- Place Madeleine
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.places.item ("place Madeleine")
		ensure
			Result_exists: Result /= Void
		end

	Place_Bobigny_Pablo_Picasso: TRAFFIC_STATION is
			-- Place Bobigny - Pablo Picasso
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.places.item ("place Bobigny - Pablo Picasso")
		ensure
			Result_exists: Result /= Void
		end

	Place_La_Fourche: TRAFFIC_STATION is
			-- Place La Fourche
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.places.item ("place La Fourche")
		ensure
			Result_exists: Result /= Void
		end

	Place_Bastille: TRAFFIC_STATION is
			-- Place Bastille
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.places.item ("place Bastille")
		ensure
			Result_exists: Result /= Void
		end

	Place_Concorde: TRAFFIC_STATION is
			-- Place Concorde
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.places.item ("place Concorde")
		ensure
			Result_exists: Result /= Void
		end

	Place_Republique: TRAFFIC_STATION is
			-- Place Republique
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.places.item ("place Republique")
		ensure
			Result_exists: Result /= Void
		end

	Place_La_Motte_Picquet_Grenelle: TRAFFIC_STATION is
			-- Place La Motte - Picquet - Grenelle
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.places.item ("place La Motte - Picquet - Grenelle")
		ensure
			Result_exists: Result /= Void
		end

feature -- Predefined objects (Buildings)

	Louvre: TRAFFIC_LANDMARK is
			-- The building at the place of Louvre
		require
			Paris_exists: is_paris_loaded
		once
			create Result.make (Paris.places.item ("Musee du Louvre").position,
				File_system.absolute_pathname (File_system.pathname_from_file_system ("..\map\paris\louvre.png", Windows_file_system)))
			Paris.buildings.put_last (Result)
		end

	Eiffel_tower: TRAFFIC_LANDMARK is
			-- The Eiffel tower building
		require
			Paris_exists: is_paris_loaded
		once
			create Result.make (Paris.places.item ("Tour Eiffel").position,
				File_system.absolute_pathname (File_system.pathname_from_file_system ("..\map\paris\eiffel.png", Windows_file_system)))
			Paris.buildings.put_last (Result)
		end

	Elysee_palace: TRAFFIC_LANDMARK is
			-- The Elysee_palace building
		require
			Paris_exists: is_paris_loaded
		once

			create Result.make (Paris.places.item ("Champs Elysee - Etoile").position,
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
			create s.make_tram (tram11_Place_Republique_Place_Hotel_de_Ville)
			s.extend (tram11_Place_Hotel_de_Ville_Place_Chatelet)
			p.set_first (s)
			create s.make_rail (rera_place_chatelet_place_opera)
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
			create s.make_tram (tram7_louvre_chatelet)
			Result.set_first (s)
			create t.make_rail (rerB_Place_Chatelet_Place_Notre_Dame)
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
			create s.make_tram (tram11_Place_Republique_Place_Hotel_de_Ville)
			s.extend (tram11_Place_Hotel_de_Ville_Place_Chatelet)
			Result.set_first (s)
			create s.make_rail (rera_place_chatelet_place_opera)
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
			create s.make_tram (Place_Nation_Place_Republique)
			Result.set_first (s)
			Paris.paths.put_last (Result)
		end

feature --Predefined objects (Line-Sections)

	tram7_Louvre_Chatelet: TRAFFIC_LINE_CONNECTION is
			-- Line section connecting Louvre to Chatelet
		require
			Paris_exists: is_paris_loaded
		local
			p1, p2: TRAFFIC_STATION
			line_sections: DS_ARRAYED_LIST [TRAFFIC_LINE_CONNECTION]
		once
			p1 := Paris.places.item ("place Palais Royal Musee du Louvre")
			p2 := Paris.places.item ("place Chatelet")
			line_sections := p1.outgoing_line_connections --Paris.line_sections.items_between (p1, p2)
			from
				line_sections.start
			until
				line_sections.off or else (	line_sections.item_for_iteration.destination = p2 and
											line_sections.item_for_iteration.type.is_equal (create {TRAFFIC_TYPE_TRAM}.make))
			loop
				line_sections.forth
			end
			Result := line_sections.item_for_iteration
		ensure
			Result_exists: Result /= Void
		end

	Place_Nation_Place_Republique: TRAFFIC_LINE_CONNECTION is
			-- the line section connecting Place Nation and Place Pere Lachaise
		require
			Paris_exists: is_paris_loaded
		local
			p1, p2: TRAFFIC_STATION
			line_sections: DS_ARRAYED_LIST [TRAFFIC_LINE_CONNECTION]
		once
			p1 := Paris.places.item ("place Nation")
			p2 := Paris.places.item ("place Republique")
			line_sections := p1.outgoing_line_connections --Paris.line_sections.items_between (p1, p2)
			from
				line_sections.start
			until
				line_sections.off or else (	line_sections.item_for_iteration.destination = p2 and
											line_sections.item_for_iteration.type.is_equal (create {TRAFFIC_TYPE_TRAM}.make))
			loop
				line_sections.forth
			end
			Result := line_sections.item_for_iteration
		ensure
			Result_exists: Result /= Void
		end

	tram11_Place_Republique_Place_Hotel_de_Ville: TRAFFIC_LINE_CONNECTION is
			-- the line section connecting Place Pere Lachaise and Place Republique
		require
			Paris_exists: is_paris_loaded
		local
			p1, p2: TRAFFIC_STATION
			line_sections: DS_ARRAYED_LIST [TRAFFIC_LINE_CONNECTION]
		once
			p1 := Paris.places.item ("place Republique")
			p2 := Paris.places.item ("place Hotel de Ville")
			line_sections := p1.outgoing_line_connections --Paris.line_sections.items_between (p1, p2)
			from
				line_sections.start
			until
				line_sections.off or else
				(line_sections.item_for_iteration.destination = p2 and line_sections.item_for_iteration.line.name.is_equal ("tram 11"))
			loop
				line_sections.forth
			end
			Result := line_sections.item_for_iteration
		ensure
			Result_exists: Result /= Void
		end

	tram11_Place_Hotel_de_Ville_Place_Chatelet: TRAFFIC_LINE_CONNECTION is
			--the line section connecting Place Republique and Place Opera
		require
			Paris_exists: is_paris_loaded
		local
			p1, p2: TRAFFIC_STATION
			line_sections: DS_ARRAYED_LIST [TRAFFIC_LINE_CONNECTION]
		once
			p1 := Paris.places.item ("place Hotel de Ville")
			p2 := Paris.places.item ("place Chatelet")
			line_sections := p1.outgoing_line_connections --Paris.line_sections.items_between (p1, p2)
			from
				line_sections.start
			until
				line_sections.off or else
				(line_sections.item_for_iteration.destination = p2 and line_sections.item_for_iteration.line.name.is_equal ("tram 11"))
			loop
				line_sections.forth
			end
			Result := line_sections.item_for_iteration
		ensure
			Result_exists: Result /= Void
		end

	tram6_Place_Etoile_Place_Trocadero: TRAFFIC_LINE_CONNECTION is
			-- the line section connecting Place Pere Lachaise and Place Republique
		require
			Paris_exists: is_paris_loaded
		local
			p1, p2: TRAFFIC_STATION
			line_sections: DS_ARRAYED_LIST [TRAFFIC_LINE_CONNECTION]
		once
			p1 := Paris.places.item ("place Charles de Gaulle - Etoile")
			p2 := Paris.places.item ("place Trocadero")
			line_sections := p1.outgoing_line_connections --Paris.line_sections.items_between (p1, p2)
			from
				line_sections.start
			until
				line_sections.off or else
				(line_sections.item_for_iteration.destination = p2 and line_sections.item_for_iteration.line.name.is_equal ("tram 6"))
			loop
				line_sections.forth
			end
			Result := line_sections.item_for_iteration
		ensure
			Result_exists: Result /= Void
		end

	tram6_Place_Trocadero_Place_Champs_De_Mars: TRAFFIC_LINE_CONNECTION is
			-- the line section connecting Place Pere Lachaise and Place Republique
		require
			Paris_exists: is_paris_loaded
		local
			p1, p2: TRAFFIC_STATION
			line_sections: DS_ARRAYED_LIST [TRAFFIC_LINE_CONNECTION]
		once
			p1 := Paris.places.item ("place Trocadero")
			p2 := Paris.places.item ("place Champs de Mars, Tour Eiffel, Bir-Hakeim")
			line_sections := p1.outgoing_line_connections --Paris.line_sections.items_between (p1, p2)
			from
				line_sections.start
			until
				line_sections.off or else
				(line_sections.item_for_iteration.destination = p2 and line_sections.item_for_iteration.line.name.is_equal ("tram 6"))
			loop
				line_sections.forth
			end
			Result := line_sections.item_for_iteration
		ensure
			Result_exists: Result /= Void
		end

	rerA_Place_Chatelet_Place_Opera: TRAFFIC_LINE_CONNECTION is
			--the line section connecting Place Chatelet and Place Opera
		require
			Paris_exists: is_paris_loaded
		local
			p1, p2: TRAFFIC_STATION
			line_sections: DS_ARRAYED_LIST [TRAFFIC_LINE_CONNECTION]
		once
			p1 := Paris.places.item ("place Chatelet")
			p2 := Paris.places.item ("place Opera")
			line_sections := p1.outgoing_line_connections --Paris.line_sections.items_between (p1, p2)
			from
				line_sections.start
			until
				line_sections.off or else
				(line_sections.item_for_iteration.destination = p2 and line_sections.item_for_iteration.line.name.is_equal ("RER A"))
			loop
				line_sections.forth
			end
			Result := line_sections.item_for_iteration
		ensure
			Result_exists: Result /= Void
		end

	rerA_Place_Opera_Place_Etoile: TRAFFIC_LINE_CONNECTION is
			--the line section connecting Place Opera and Place Etoile
		require
			Paris_exists: is_paris_loaded
		local
			p1, p2: TRAFFIC_STATION
			line_sections: DS_ARRAYED_LIST [TRAFFIC_LINE_CONNECTION]
		once
			p1 := Paris.places.item ("place Opera")
			p2 := Paris.places.item ("place Charles de Gaulle - Etoile")
			line_sections := p1.outgoing_line_connections --Paris.line_sections.items_between (p1, p2)
			from
				line_sections.start
			until
				line_sections.off or else
				(line_sections.item_for_iteration.destination = p2 and line_sections.item_for_iteration.line.name.is_equal ("RER A"))
			loop
				line_sections.forth
			end
			Result := line_sections.item_for_iteration
		ensure
			Result_exists: Result /= Void
		end

	rerA_Place_Etoile_Place_Cergy: TRAFFIC_LINE_CONNECTION is
			--the line section connecting Place Etoile and Place Cergy
		require
			Paris_exists: is_paris_loaded
		local
			p1, p2: TRAFFIC_STATION
			line_sections: DS_ARRAYED_LIST [TRAFFIC_LINE_CONNECTION]
		once
			p1 := Paris.places.item ("place Charles de Gaulle - Etoile")
			p2 := Paris.places.item ("place Cergy")
			line_sections := p1.outgoing_line_connections --Paris.line_sections.items_between (p1, p2)
			from
				line_sections.start
			until
				line_sections.off or else
				(line_sections.item_for_iteration.destination = p2 and line_sections.item_for_iteration.line.name.is_equal ("RER A"))
			loop
				line_sections.forth
			end
			Result := line_sections.item_for_iteration
		ensure
			Result_exists: Result /= Void
		end

	rerB_Place_Chatelet_Place_Notre_Dame: TRAFFIC_LINE_CONNECTION is
			--the line section connecting Place Republique and Place Opera
		require
			Paris_exists: is_paris_loaded
		local
			p1, p2: TRAFFIC_STATION
			line_sections: DS_ARRAYED_LIST [TRAFFIC_LINE_CONNECTION]
		once
			p1 := Paris.places.item ("place Chatelet")
			p2 := Paris.places.item ("place St Michel - Notre Dame")
			line_sections := p1.outgoing_line_connections --Paris.line_sections.items_between (p1, p2)
			from
				line_sections.start
			until
				line_sections.off or else
				(line_sections.item_for_iteration.destination = p2 and line_sections.item_for_iteration.line.name.is_equal ("RER B"))
			loop
				line_sections.forth
			end
			Result := line_sections.item_for_iteration
		ensure
			Result_exists: Result /= Void
		end

	rerca_Place_Invalides_Place_Champs_de_Mars: TRAFFIC_LINE_CONNECTION is
			--the line section connecting Place Invalides and Place Champs de Mars
		require
			Paris_exists: is_paris_loaded
		local
			line_sections: DS_ARRAYED_LIST [TRAFFIC_LINE_CONNECTION]
			p1, p2: TRAFFIC_STATION
		once
			p1 := Paris.places.item ("place Invalides")
			p2 := Paris.places.item ("place Champs de Mars, Tour Eiffel, Bir-Hakeim")
			line_sections := p1.outgoing_line_connections --Paris.line_sections.items_between (p1, p2)
			from
				line_sections.start
			until
				line_sections.off or else
				(line_sections.item_for_iteration.destination = p2 and line_sections.item_for_iteration.line.name.is_equal ("RER C(a)"))
			loop
				line_sections.forth
			end
			Result := line_sections.item_for_iteration
		ensure
			Result_exists: Result /= Void
		end

	rerca_Place_Notre_Dame_Place_Invalides: TRAFFIC_LINE_CONNECTION is
			--the line section connecting Place Invalides and Place Champs de Mars
		require
			Paris_exists: is_paris_loaded
		local
			line_sections: DS_ARRAYED_LIST [TRAFFIC_LINE_CONNECTION]
			p1, p2: TRAFFIC_STATION
		once
			p1 := Paris.places.item ("place St Michel - Notre Dame")
			p2 := Paris.places.item ("place Invalides")
			line_sections := p1.outgoing_line_connections --Paris.line_sections.items_between (p1, p2)
			from
				line_sections.start
			until
				line_sections.off or else
				(line_sections.item_for_iteration.destination = p2 and line_sections.item_for_iteration.line.name.is_equal ("RER C(a)"))
			loop
				line_sections.forth
			end
			Result := line_sections.item_for_iteration
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

