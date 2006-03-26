indexing
	description: "Objects that forward calls to touch_3d_map_widget."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class TOUCH_PLACE

inherit
	
	ANY
		redefine 
			out
		end
		
create make_with_place_and_map_widget

feature -- Initialization
	make_with_place_and_map_widget(a_place: TRAFFIC_PLACE; a_building_rep: TRAFFIC_BUILDING_REPRESENTATION; a_map: TOUCH_3D_MAP_WIDGET) is
		-- Set 'internal_map' to 'a_map' and 'internal_place' to 'a_place'.
	require
		a_place /= Void
		a_building_rep /= Void
		a_map /= Void
		do 
			internal_place := a_place			
			internal_building_rep := a_building_rep
			internal_map := a_map
		ensure
			internal_place /= Void
			internal_building_rep /= Void
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
			internal_map.draw
		end
		
	prepare_drawing is
			-- 
		do
			internal_map.prepare_drawing
		end
		
	highlight_building(a_building: TRAFFIC_BUILDING) is
			-- highlight `a_building'	
		do	
			internal_building_rep.highlight_building (a_building)
		end
		
	un_highlight_building(a_building: TRAFFIC_BUILDING) is
			-- unhighlight `a_building'
		do		
			internal_building_rep.un_highlight_building (a_building)
		end
		
feature -- Status setting

	enable_map_hidden is			
			-- Set `is_map_hidden' to True.
		do
			internal_map.enable_map_hidden
		end
		
	disable_map_hidden is			
			-- Set `is_map_hidden' to False.
		do
			internal_map.disable_map_hidden
		end	
		
feature -- Options

	add_building (a_building: TRAFFIC_BUILDING) is
			-- add `a_building' to representation
		do		
			internal_building_rep.add_building (a_building)
		end
		
	add_building_at_place(a_place: TRAFFIC_PLACE) is --:TRAFFIC_BUILDING is
			-- To spotlight a special place. 
		do		
			internal_building_rep.add_building_at_place (a_place)
		end
		
	delete_buildings is
			-- Delete buildings from representation.
		do		
			internal_building_rep.delete_buildings
		end
		
			
	set_building_number (n: INTEGER) is
			-- Set the number of buildings that are shown.
		do
			internal_building_rep.set_building_number (n)
		end
		
	set_map (a_map: TRAFFIC_MAP) is
			-- set map to `a_map'
		do	
			internal_building_rep.set_map (a_map)
		end
		
		
	set_zoom (d: DOUBLE) is
			-- Set the focus.
		do
			internal_map.set_zoom (d)
		end

	set_coordinates_shown (b: BOOLEAN) is
			-- Set `coordinates_shown'.
		do
			internal_map.set_coordinates_shown (b)
		end

	set_sun_shown (b: BOOLEAN) is
			-- Set `sun_shown'.
		do
			internal_map.set_sun_shown (b)
		end

	set_buildings_shown (b: BOOLEAN) is
			-- Set `buildings_shown'.
		do	
			internal_map.set_buildings_shown (b)
		end
		
	set_number_of_buildings (n: INTEGER) is
			-- Set `n' buildings and add them randomly to the map.
		do	
			internal_map.set_number_of_buildings (n)
		end
		
	set_buildings_transparent (b: BOOLEAN) is
			-- Set `buildings_transparent'.
		do	
			internal_map.set_buildings_transparent (b)
		end

	set_lines_highlighted (b: BOOLEAN) is
			-- If `b' then all traffic lines are highlighted.
		do	
			internal_map.set_lines_highlighted (b)
		end

	set_single_line_highlighted(a_line: TRAFFIC_LINE) is
			-- a_line is highlighted
		do	
			internal_map.set_single_line_highlighted (a_line)
		end
		
	set_single_line_unhighlighted(a_line: TRAFFIC_LINE) is
			-- a_line is unhighlighted
		do	
			internal_map.set_single_line_unhighlighted (a_line)
		end
		
	set_single_line_highlighted_5sec(a_line: TRAFFIC_LINE) is
			-- a_line is highlighted
		do	
			internal_map.set_single_line_highlighted_5sec (a_line)
		end
		
	set_show_shortest_path (b: BOOLEAN) is
			-- Set `show_shortest_path'.
		do	
			internal_map.set_show_shortest_path (b)
		end
		
	add_buildings_randomly(n: INTEGER) is
			-- Adds randomly `n' buildings to map.
		do	
			internal_map.add_buildings_randomly (n)
		end

	add_buildings_along_lines is	
			-- Add buildings along all lines (expect railway).
		do	
			internal_map.add_buildings_along_lines
		end

		
	add_traveler (a_traveler: TRAFFIC_TRAVELER) is
			-- Add a traveler to the map.
		do	
			internal_map.add_traveler (a_traveler)
		end

feature -- Mousevents

	publish_mouse_event (event: EM_MOUSEBUTTON_EVENT) is
			-- 	Event queue for building clicked event.
		do	
			internal_map.publish_mouse_event (event)
		end
			
	publish_building_events (a_point: GL_VECTOR_3D[DOUBLE]; event: EM_MOUSEBUTTON_EVENT) is
			-- Publish mouse event if a building was clicked.
		do	
			internal_map.publish_building_events (a_point, event)
		end
		
	publish_place_events (a_point: GL_VECTOR_3D[DOUBLE]; event: EM_MOUSEBUTTON_EVENT) is
			-- Publish mouse event if a place was clicked.			
		do	
			internal_map.publish_place_events (a_point, event)
		end

		
feature -- Zoom options

	zoom_in is
			-- Zoom in.
		do	
			internal_map.zoom_in
		end

	zoom_out is
			-- Zoom in.
		do
			internal_map.zoom_out
		end	
		
feature -- Element change

	spotlight is
			-- Spotlight the place.
		do
			internal_map.set_buildings_shown (true)
			internal_building_rep.add_building_at_place (internal_place)
			internal_map.draw
		end
		
	set_information (a_information: TRAFFIC_PLACE_INFORMATION) is
			-- Set information to 'a_information'.
		do
			internal_place.set_information (a_information)
		end
		
	set_position (a_position: EM_VECTOR_2D) is
			-- Set position to `a_position'.	
		do
			internal_place.set_position (a_position)
		end
		
feature -- Measurement

	hash_code: INTEGER is
			-- Hash code value.
		do
			Result := internal_place.name.hash_code
		end
				
feature -- Basic operation

	out: STRING is
			-- Textual representation of place.
		do		
			Result := internal_place.out
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
