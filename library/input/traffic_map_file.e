indexing
	description: "A TRAFFIC map xml file, to read a TRAFFIC map from."
	note: "Under construction ... just a prototype, development has to be continued ..."
	author: "Rolf Bruderer"
	date: "2005/03/15"
	revision: "0.1"

class
	TRAFFIC_MAP_FILE
	
inherit
	KL_SHARED_FILE_SYSTEM
		export
			{NONE} all
		end
		
	EXCEPTIONS
		export
			{NONE} all
		end	
		
create
	make_from_file

feature {NONE} -- Initialization

	make_from_file (a_filename: STRING) is
			-- Initialize with map loaded from file with `a_filename'.
			-- (either `a_filename' is an absolute path 
			--  or relative to current working directory)
		require
			a_filename_not_empty: a_filename /= Void and then not a_filename.is_empty
			file_with_a_filename_exists: File_system.file_exists (a_filename)
		local
			factory: TRAFFIC_MAP_FACTORY
			map_parser: TRAFFIC_MAP_PARSER
		do
			filename := a_filename			
			create factory.make
			create map_parser.make_with_factory (factory)
			map_parser.set_file_name (a_filename)
			map_parser.parse
			if map_parser.can_process then
				map_parser.process
			end			
			if map_parser.has_error then
				raise ("Error while parsing " + a_filename + ": " + map_parser.error_description)				
			else
				traffic_map := factory.map				
			end
		ensure
			traffic_map_loaded: traffic_map /= Void
		end
		
feature -- Access
	
	filename: STRING
			-- Filename
			
	traffic_map: TRAFFIC_MAP
			-- Map in `Current'.		

feature {NONE} -- Implementation

	-- TODO remove
	adopt_old_traffic_position_informations is
			-- Quick fix for wrong old Map Files,
			-- negates all y coordinates and ensures 
			-- that upper left corner is (0,0)
		local
			places: HASH_TABLE [TRAFFIC_PLACE, STRING]
			links: LIST [TRAFFIC_LINE_SECTION]
			points: ARRAYED_LIST [EM_VECTOR_2D]
			minx, maxy: DOUBLE
			firstx: BOOLEAN
			bbox: EM_ORTHOGONAL_RECTANGLE
		do
			-- Determine maximum x and y value of all link polypoints.
			links := traffic_map.line_sections
			firstx := True
			from
				links.start
			until
				links.after					
			loop
				points := links.item.polypoints
				from
					points.start
				until
					points.after					
				loop
					if firstx or else points.item.x < minx then
						firstx := False
						minx := points.item.x						
					end
					if points.item.y > maxy then
						maxy := points.item.y						
					end					
					points.forth							
				end
				links.forth
			end
			
			-- Adopt all link polypoints.
			from
				links.start
			until
				links.after					
			loop
				points := links.item.polypoints
				from
					points.start
				until
					points.after					
				loop
					points.item.set_y (maxy - points.item.y)
					points.item.set_x (points.item.x - minx)							
					points.forth										
				end
				links.forth
			end
			
			-- Calculate all place positions.
			places := traffic_map.places
			from
				places.start				
			until
				places.after				
			loop
				links := traffic_map.line_sections_of_place (places.item_for_iteration.name)
				if links.count > 0 then
					create bbox.make (links.first.polypoints.first, links.first.polypoints.first)
					from
						links.start
						links.forth
					until
						links.after
					loop
						bbox.extend (links.item.polypoints.first)
						links.forth						
					end				
					places.item_for_iteration.set_position (bbox.center)
				end					
				places.forth
			end			
		end
		
invariant
	filename_not_empty: filename /= Void and then not filename.is_empty
	traffic_map_not_void: traffic_map /= Void	

end -- class TRAFFIC_MAP_FILE
