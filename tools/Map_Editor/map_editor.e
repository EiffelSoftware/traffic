	indexing
	description: "Creates objects for editing Traffic maps. This object is created with a Traffic map and provides various features for editing and modifying it. Upgraded version of class TRAFFIC_MAP required!"
	index: ""
	author: "Fabio Maninchedda and Daniel Saner"
	date: "$Date$"
	revision: "$Revision$"

class
	MAP_EDITOR
	
create
	make_with_map_file
	
feature			-- Initialisation

	make_with_map_file(a_filename: STRING) is
			-- Create a new object loading a map file `a_filename'
		require
			a_filename_exists: a_filename /= Void
		do
			create map_file.make (a_filename)
			map_file.load_map
			map := map_file.map													-- Create a reference to the actual TRAFFIC_MAP object
			if map=Void then
				io.put_string ("map is Void!")
			end
			update_hash_arrays													-- Directly create the hash arrays for place and line access.
		ensure
			map_file_loaded: map_file.map.name.is_equal (a_filename)
			map_object_created: map = map_file.map
		end
		
		
feature			-- Actions on places [INCOMPLETE]

	place_add (a_place_name: STRING; a_x, a_y: INTEGER) is
			-- Add a place by name and coordinates to the map.
		require
			a_place_name_exists: a_place_name /= Void
			coordinates_ok: a_x >= 0 and a_y >= 0
		do
			create traffic_place.make_with_position (a_place_name, a_x, a_y)
			map.add_place (traffic_place)
			update_hash_arrays
		ensure
			place_created: map.has_place (a_place_name)
			attributes_set: map.places.item (a_place_name).name.is_equal (a_place_name)	
							and map.places.item (a_place_name).position.x = a_x.as_integer_32
							and map.places.item (a_place_name).position.y = a_y.as_integer_32
		end

	place_rename (a_place: TRAFFIC_PLACE; a_new_name: STRING) is
			-- Rename place `a_place' in map to `a_new_name'
			-- -==|TODO|==-
		require
 			a_place_exists: a_place /= Void
			a_place_is_in_map: map.has_place (a_place.name)						-- Hell knows why this doesn't work. The place disappears from the map as soon as this feature is called. Gay.
			a_new_name_exists: a_new_name /= Void								-- The place is already being renamed between the call and execution of this feature.
		do
--			map.rename_place(a_place, a_new_name)
----			map.place (a_place).
--			update_hash_arrays
		ensure
--			a_place_renamed: map.places.has (a_new_name)
		end
		
	place_remove (a_place: TRAFFIC_PLACE) is
			-- Remove place `a_place' from the loaded map.
			-- -==|TODO|==-
		require
			a_place_exists: a_place /= Void
			a_place_is_in_map: map.has_place (a_place.name)
		do
--			map.remove_place (a_place)
--			update_hash_arrays
		end
		
		
		
feature			-- Actions on lines [INCOMPLETE]
		
	line_add (a_line_name: STRING; a_line_type: TRAFFIC_TYPE_LINE) is
			-- Add a new line of name `a_line_name' and type `a_line_type' to the map.
		local
			bus_color, rail_color, street_color, taxi_color, tram_color, walking_color: TRAFFIC_COLOR
		do
			create traffic_line.make (a_line_name, a_line_type)
			if a_line_type.name.is_equal ("bus") then
				create bus_color.make (153, 204, 255)
				traffic_line.set_color (bus_color)
			elseif a_line_type.name.is_equal ("rail") then
				create rail_color.make (0, 0, 0)
				traffic_line.set_color (rail_color)
			elseif a_line_type.name.is_equal ("street") then
				create street_color.make (10, 10, 10)
				traffic_line.set_color (street_color)
			elseif a_line_type.name.is_equal ("taxi") then
				create taxi_color.make (100, 100, 0)
				traffic_line.set_color (taxi_color)
			elseif a_line_type.name.is_equal ("tram") then
				create tram_color.make (90, 90, 143)
				traffic_line.set_color (tram_color)	
			elseif a_line_type.name.is_equal ("walking") then
				create walking_color.make (50, 50, 50)
				traffic_line.set_color (walking_color)
			end
			map.add_line (traffic_line)
			update_hash_arrays
		end
		
	line_rename (a_line: TRAFFIC_LINE; a_new_line_name: STRING) is
			-- Rename line `a_line' to `a_new_line_name'.													[INCOMPLETE]
		do
			
		end
	
	line_type_change (a_line: TRAFFIC_LINE; a_new_line_type: TRAFFIC_TYPE) is
			-- Cange the type of line `a_line' to `a_new_line_type'.										[INCOMPLETE]
		do
			
		end
		
	line_remove (a_line: TRAFFIC_LINE) is
			-- Remove line `a_line' from the map.															[INCOMPLETE]
			-- -==|TODO|==-
		do		
--			map.line
--			map.remove_line_and_its_segments (a_line)
		end
		
		
		
feature				-- Actions on line segments [INCOMPLETE]
		
		
		
	line_segment_add (a_origin, a_destination: TRAFFIC_STOP; a_line: TRAFFIC_LINE; a_line_type: TRAFFIC_TYPE_LINE) is
			-- Add a line segment to a line.
			-- -==|DANGER|==- origin, destination: TRAFFIC_STOP or TRAFFIC_PLACE? currently changed to TRAFFIC_STOP;
			-- previously TRAFFIC_PLACE
		local
			line_position: EM_VECTOR_2D
			temp_destination: EM_VECTOR_2D
		do
			-- Create a line_position object
			create line_position.make (0, 0)

			-- Create the traffic line section and
			create traffic_line_section.make (a_origin, a_destination, a_line_type, line_polypoints_list)
			
			-- Save the destination as `temp_destination'
			temp_destination := traffic_line_section.polypoints.last
			
			-- Remove the destination from `traffic_line_section.polypoints' arrayed_list
			traffic_line_section.polypoints.prune (traffic_line_section.polypoints.last)
			
			-- Re-add the destination to the `traffic_line_section.polypoints' arrayed_list
			traffic_line_section.polypoints.extend (temp_destination)
			if a_line.is_valid_for_insertion (traffic_line_section) then
				-- Add `traffic_line_section' to the line
				a_line.extend (traffic_line_section)
			else
				err_not_valid_for_insertion			
			end
			

			-- Add `traffic_line_section' to the map			
			map.add_line_section (traffic_line_section)
		end
		
	line_segment_add_without_display (a_origin, a_destination: TRAFFIC_STOP; a_line: TRAFFIC_LINE; a_line_type: TRAFFIC_TYPE_LINE) is
			-- Add a line segment to a line.
			-- -==|DANGER|==-
			-- origin, destination: TRAFFIC_STOP or TRAFFIC_PLACE? currently changed to TRAFFIC_STOP;
			-- previously TRAFFIC_PLACE
			--
			-- a_line_type: changed from TRAFFIC_TYPE to TRAFFIC_TYPE_LINE
		local
			line_position: EM_VECTOR_2D
			temp_destination: EM_VECTOR_2D
		do
			-- Create a line_position object
			create line_position.make (0, 0)

			-- Create the traffic line section and
			create traffic_line_section.make (a_origin, a_destination, a_line_type, line_polypoints_list)
			
			-- Save the destination as `temp_destination'
			temp_destination := traffic_line_section.polypoints.last
			
			-- Remove the destination from `traffic_line_section.polypoints' arrayed_list
			traffic_line_section.polypoints.prune (traffic_line_section.polypoints.last)
			
			-- Re-add the destination to the `traffic_line_section.polypoints' arrayed_list
			traffic_line_section.polypoints.extend (temp_destination)
			if a_line.is_valid_for_insertion (traffic_line_section) then
				-- Add `traffic_line_section' to the line
				a_line.extend (traffic_line_section)
			else
				err_not_valid_for_insertion			
			end
		end
		
	line_segment_remove_last (a_line: TRAFFIC_LINE) is
			-- Remove the last line segment from line `a_line'.												[INCOMPLETE]
		do
			
		end
		
		
		
		
feature			-- Actions on the map		
		
	update_hash_arrays is
			-- Create/update the hash arrays containing all the hashes of the lines and places hash tables.
			-- This is needed for direct access to all of the map's places and lines. Run this procedure
			-- after any changes made to the map. The editing features of this class already run this procedure
			-- automatically after they have made their changes to the map.
		do
			if place_hashes /= Void and line_hashes /= Void and stop_hashes /= Void then
				place_hashes.clear_all
				line_hashes.clear_all
				stop_hashes.clear_all
			end
			create place_hashes.make_from_array (map.places.current_keys)			-- Create the array with all the hashes, via which other features
			create line_hashes.make_from_array (map.lines.current_keys)				-- can access all the stations and lines of the loaded map.
			create stop_hashes.make_from_array (map.stops.current_keys)				-- create the array with all the hashes of stops
		ensure
			arrays_exist: place_hashes /= Void and line_hashes /= Void and stop_hashes /= Void
		end
		
	change_map_information (a_new_map_name, a_new_map_description: STRING) is
			-- Set name and description of the current map to `a_new_map_name' and `a_new_map_description'.
		require
			new_information_not_void: a_new_map_name /= Void and a_new_map_description /= Void
		do
			map.set_description (a_new_map_description)
			map.name.set (a_new_map_name, 1, a_new_map_name.count)
		ensure
			new_information_set: map.name.is_equal(a_new_map_name) and map.description.is_equal(a_new_map_description)
		end
		
		
		
feature			-- Error messages


	err_not_valid_for_insertion is
			-- The line has no line sections to be removed.
		local
			error_dialog: EM_MESSAGE_DIALOG
		do
			create error_dialog.make_from_error ("The line segment you want to append is not valid%Nfor insertion. Please make sure the destination place%Nis not already a place of the line.")
			error_dialog.set_title ("Error: Not valid for insertion")
			error_dialog.show
		end
		
		

feature			-- Attributes, objects, variables

	map: TRAFFIC_MAP									-- The representation of the traffic map
	map_file: TRAFFIC_MAP_LOADER							-- The map XML file handler
	
	stop_hashes, place_hashes, line_hashes: ARRAY [STRING]			-- Arrays for the hashes of all places and lines of a map
	
	line_list: ARRAYED_LIST [EM_VECTOR_2D]				-- A list of vectors for line turning points
	
	-- A traffic place, line, section objects
	traffic_place: TRAFFIC_PLACE
	traffic_line: TRAFFIC_LINE
	traffic_line_section: TRAFFIC_LINE_SECTION
	
	-- A list of polypoints to build a line segment
	line_polypoints_list: ARRAYED_LIST [EM_VECTOR_2D]

end
