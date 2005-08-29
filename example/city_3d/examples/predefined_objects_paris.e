indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	PREDEFINED_OBJECTS_PARIS
	
feature -- Access
	map: TRAFFIC_MAP is
			-- 
		deferred
		end
		
feature  -- Predefined objects (Places)

	Place_Balard: TRAFFIC_PLACE is
			-- Place Balard
		once
			Result := map.place ("place Balard")
		ensure
			Result_exists: Result /= Void
		end
		
	Place_Issy: TRAFFIC_PLACE is
			-- Place Issy
		once
			Result := map.place ("place Mairie d'Issy")
		ensure
			Result_exists: Result /= Void
		end
		
	Place_Montrouge: TRAFFIC_PLACE is
			-- Place Montrouge
		once
			Result := map.place ("place Chatillon - Montrouge")
		ensure
			Result_exists: Result /= Void
		end		
		
	Place_Gare_de_Lyon: TRAFFIC_PLACE is
			-- PLACE Gare de Lyon
		once
			Result := map.place ("place Gare de Lyon")
		ensure
			Result_exists: Result /= Void
		end
		
	Place_Invalides: TRAFFIC_PLACE is
			-- Place Invalides
		once
			Result := map.place ("place Invalides")
		ensure
			Result_exists: Result /= Void
		end

	Place_Madeleine: TRAFFIC_PLACE is
			-- Place Madeleine
		once
			Result := map.place ("place Madeleine")
		ensure
			Result_exists: Result /= Void
		end

	Place_Bobigny_Pablo_Picasso: TRAFFIC_PLACE is
			-- Place Bobigny - Pablo Picasso
		once
			Result := map.place ("place Bobigny - Pablo Picasso")
		ensure
			Result_exists: Result /= Void
		end

	Place_La_Fourche: TRAFFIC_PLACE is
			-- Place La Fourche
		once
			Result := map.place ("place La Fourche")
		ensure
			Result_exists: Result /= Void
		end

	Place_Bastille: TRAFFIC_PLACE is
			-- Place Bastille
		once
			Result := map.place ("place Bastille")
		ensure
			Result_exists: Result /= Void
		end
		
	Place_Concorde: TRAFFIC_PLACE is
			-- Place Concorde
		once
			Result := map.place ("place Concorde")
		ensure
			Result_exists: Result /= Void
		end
		
	Place_Republique: TRAFFIC_PLACE is
			-- Place Republique
		once
			Result := map.place ("place Republique")
		ensure
			Result_exists: Result /= Void
		end

	Place_La_Motte_Picquet_Grenelle: TRAFFIC_PLACE is
			-- Place La Motte - Picquet - Grenelle
		once
			Result := map.place ("place La Motte - Picquet - Grenelle")
		ensure
			Result_exists: Result /= Void
		end
		
invariant
	invariant_clause: True -- Your invariant here

end -- class PREDEFINED_OBJECTS
