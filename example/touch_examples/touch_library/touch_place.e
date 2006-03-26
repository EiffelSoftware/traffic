indexing
	description: "Objects that forward calls to touch_3d_map_widget."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class TOUCH_PLACE

inherit
	
	ANY
--		redefine 
--			out
--		end
		
create make_with_place_and_map_widget

feature -- Initialization
	make_with_place_and_map_widget(a_place: TRAFFIC_PLACE; a_building_rep: TRAFFIC_BUILDING_REPRESENTATION; a_map: TOUCH_3D_MAP_WIDGET) is
		-- Set 'internal_map' to 'a_map' and 'internal_place' to 'a_place'.
	require
		a_place /= Void
		a_map /= Void
		do 
			internal_place := a_place			
			internal_building_rep := a_building_rep
			internal_map := a_map
		ensure
			internal_place /= Void
			internal_map /= Void
		end
	
feature -- Access
	name: STRING is 
		do 
			Result := internal_place.name
		end

	position: EM_VECTOR_2D is
		-- Position of touch_place.
		do
			Result := internal_place.position
		end
		
	information: TRAFFIC_PLACE_INFORMATION is
			-- Additional information.
		do
			Result := internal_place.information
		end
	
feature -- Drawing
	draw is
			-- Draw all buildings. 
		do
			internal_building_rep.draw
		end
		


		
feature -- Element change

	spotlight is
			-- Spotlight the place.
		do
			internal_map.set_buildings_shown (true)
			internal_building_rep.add_building_at_place (internal_place)
			internal_map.draw
			
		--	internal_map.add_building_at_place (internal_place)
		end
		
feature {NONE} -- Implementation

	internal_place: TRAFFIC_PLACE
			-- Traffic place that gets the calls

	internal_map: TOUCH_3D_MAP_WIDGET
			-- Visualization of the map
			
	internal_building_rep: TRAFFIC_BUILDING_REPRESENTATION
			-- The building
				
invariant			
	name_not_void: name /= Void
	position_not_void: position /= Void
end
