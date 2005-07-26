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
		
feature  -- Predefined objects (Stations)

	Station_Balard: TRAFFIC_PLACE is
			-- Station Balard
		once
			Result := map.place ("Station Balard")
		ensure
			Result_exists: Result /= Void
		end
		
	Station_Issy: TRAFFIC_PLACE is
			-- Station Issy
		once
			Result := map.place ("Station Mairie d'Issy")
		ensure
			Result_exists: Result /= Void
		end
		
	Station_Montrouge: TRAFFIC_PLACE is
			-- Station Montrouge
		once
			Result := map.place ("Station Chatillon - Montrouge")
		ensure
			Result_exists: Result /= Void
		end		
		
	Station_Gare_de_Lyon: TRAFFIC_PLACE is
			-- PLACE Gare de Lyon
		once
			Result := map.place ("Station Gare de Lyon")
		ensure
			Result_exists: Result /= Void
		end
		
	Station_Invalides: TRAFFIC_PLACE is
			-- Station Invalides
		once
			Result := map.place ("Station Invalides")
		ensure
			Result_exists: Result /= Void
		end

	Station_Madeleine: TRAFFIC_PLACE is
			-- Station Madeleine
		once
			Result := map.place ("Station Madeleine")
		ensure
			Result_exists: Result /= Void
		end

	Station_Bobigny_Pablo_Picasso: TRAFFIC_PLACE is
			-- Station Bobigny - Pablo Picasso
		once
			Result := map.place ("Station Bobigny - Pablo Picasso")
		ensure
			Result_exists: Result /= Void
		end

	Station_La_Fourche: TRAFFIC_PLACE is
			-- Station La Fourche
		once
			Result := map.place ("Station La Fourche")
		ensure
			Result_exists: Result /= Void
		end

	Station_Bastille: TRAFFIC_PLACE is
			-- Station Bastille
		once
			Result := map.place ("Station Bastille")
		ensure
			Result_exists: Result /= Void
		end
		
	Station_Concorde: TRAFFIC_PLACE is
			-- Station Concorde
		once
			Result := map.place ("Station Concorde")
		ensure
			Result_exists: Result /= Void
		end
		
	Station_Republique: TRAFFIC_PLACE is
			-- Station Republique
		once
			Result := map.place ("Station Republique")
		ensure
			Result_exists: Result /= Void
		end

	Station_La_Motte_Picquet_Grenelle: TRAFFIC_PLACE is
			-- Station La Motte - Picquet - Grenelle
		once
			Result := map.place ("Station La Motte - Picquet - Grenelle")
		ensure
			Result_exists: Result /= Void
		end
		
invariant
	invariant_clause: True -- Your invariant here

end -- class PREDEFINED_OBJECTS
