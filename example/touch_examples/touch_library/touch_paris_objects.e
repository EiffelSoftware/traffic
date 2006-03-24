indexing
	description: "Predefined objects of the city Paris"
	date: "$Date$"
	revision: "$Revision$"

deferred class TOUCH_PARIS_OBJECTS

feature -- Access
	
	Paris: TOUCH_MAP is
			-- Map of Paris
		deferred
		ensure
			is_paris_loaded
		end

feature -- Status report

	is_paris_loaded: BOOLEAN
			-- Is the Paris map loaded?
					
feature -- Access (Lines)

	Line1: TOUCH_SIMPLE_LINE is 
			-- Line 1 of the Paris map
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.simple_line("tram 1")  
		end
	
	Line2: TOUCH_SIMPLE_LINE is 
			-- Line 2 of the Paris map
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.simple_line("tram 2")  
		end
	
	Line3: TOUCH_SIMPLE_LINE is 
			-- Line 3 of the Paris map
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.simple_line("tram 3")  
		end

	Line7_a: TOUCH_SIMPLE_LINE is 
			-- Line 7 of the Paris map
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.simple_line("tram 7(a)")  
		end
							
	Line8: TOUCH_SIMPLE_LINE is 
			-- Line 8 of the Paris map
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.simple_line("tram 8")  
		end
				
feature  -- Predefined objects (Places)

	Place_Balard: TRAFFIC_PLACE is
			-- Place Balard
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.place ("place Balard")
		ensure
			Result_exists: Result /= Void
		end
		
	Place_Issy: TRAFFIC_PLACE is
			-- Place Issy
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.place ("place Mairie d'Issy")
		ensure
			Result_exists: Result /= Void
		end
		
	Place_Montrouge: TRAFFIC_PLACE is
			-- Place Montrouge
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.place ("place Chatillon - Montrouge")
		ensure
			Result_exists: Result /= Void
		end		
		
	Place_Gare_de_Lyon: TRAFFIC_PLACE is
			-- PLACE Gare de Lyon
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.place ("place Gare de Lyon")
		ensure
			Result_exists: Result /= Void
		end
		
	Place_Invalides: TRAFFIC_PLACE is
			-- Place Invalides
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.place ("place Invalides")
		ensure
			Result_exists: Result /= Void
		end

	Place_Madeleine: TRAFFIC_PLACE is
			-- Place Madeleine
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.place ("place Madeleine")
		ensure
			Result_exists: Result /= Void
		end

	Place_Bobigny_Pablo_Picasso: TRAFFIC_PLACE is
			-- Place Bobigny - Pablo Picasso
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.place ("place Bobigny - Pablo Picasso")
		ensure
			Result_exists: Result /= Void
		end

	Place_La_Fourche: TRAFFIC_PLACE is
			-- Place La Fourche
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.place ("place La Fourche")
		ensure
			Result_exists: Result /= Void
		end

	Place_Bastille: TRAFFIC_PLACE is
			-- Place Bastille
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.place ("place Bastille")
		ensure
			Result_exists: Result /= Void
		end
		
	Place_Concorde: TRAFFIC_PLACE is
			-- Place Concorde
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.place ("place Concorde")
		ensure
			Result_exists: Result /= Void
		end
		
	Place_Republique: TRAFFIC_PLACE is
			-- Place Republique
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.place ("place Republique")
		ensure
			Result_exists: Result /= Void
		end

	Place_La_Motte_Picquet_Grenelle: TRAFFIC_PLACE is
			-- Place La Motte - Picquet - Grenelle
		require
			Paris_exists: is_paris_loaded
		once
			Result := Paris.place ("place La Motte - Picquet - Grenelle")
		ensure
			Result_exists: Result /= Void
		end

end
