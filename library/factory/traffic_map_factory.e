indexing
	description: "Factory for traffic elements like TRAFFIC_PLACE, TRAFFIC_LINE etc."
	author: "Sibylle Aregger, ETH Zurich"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_MAP_FACTORY
	
inherit
	TRAFFIC_TYPE_FACTORY
		rename
			make as make_type_factory,
			build as build_traffic_type
		end

create
	make

feature {NONE} -- Initialization

	make is
			-- Initialize `Current'.
		do
			make_type_factory
			reset_factory
		ensure then
			everything_void: internal_map = Void and 
							 internal_place = Void and 
							 internal_line_section = Void and 
							 internal_line = Void
		end
		
feature -- Initialization

	reset_factory is
			-- Reset traffic map factory.
		do
			internal_map := Void
			internal_place := Void
			internal_line_section := Void
			internal_line := Void
		ensure
			everything_void: internal_map = Void and 
							 internal_place = Void and 
							 internal_line_section = Void and 
							 internal_line = Void
		end

feature -- Traffic map building

	build_map (a_name: STRING) is
			-- Generate new map object with name `a_name'.
			-- (Access generated object through feature `map')
		require
			a_name_exists: a_name /= Void
			a_name_not_empty: not a_name.is_empty
		do
			create internal_map.make (a_name)
		ensure
			map_created: map /= Void
			map_has_name: equal (map.name, a_name)
		end

	map: TRAFFIC_MAP is
			-- Generated traffic map object.
		require
			map_available: has_map
		do
			Result := internal_map
		ensure
			Result_exists: Result /= Void
		end
	
	has_map: BOOLEAN is
			-- Is traffic map object available?
		do
			Result := internal_map /= Void
		end
		
feature -- Traffic place building

	build_place (a_name: STRING; a_map: TRAFFIC_MAP) is
			-- Generate new traffic place object with name `a_name' belonging to traffic map `a_map'.
			-- (Access generated object through feature `place')
		require
			a_name_exists: a_name /= Void
			a_name_not_empty: not a_name.is_empty
			map_exists: has_map
			unique_name: not a_map.has_place (a_name)
		do
			create internal_place.make (a_name)
			a_map.add_place (internal_place)			
		ensure
			place_created: place /= Void
			place_has_name: equal (place.name, a_name)
			place_in_map: a_map.has_place (a_name)
		end
		
	build_place_with_position (a_name: STRING; a_x, a_y: INTEGER; a_map: TRAFFIC_MAP) is
			-- Generate new traffic place object with name `a_name' and 
			-- position (`a_x', `a_y') belonging to traffic map `a_map'.
			-- (Access generated object through feature `place')
		require
			a_name_exists: a_name /= Void
			a_name_not_empty: not a_name.is_empty
			a_x_exists: a_x /= Void
			a_y_exists: a_y /= Void
			map_exists: has_map
			unique_name: not a_map.has_place (a_name)
		do
			create internal_place.make_with_position (a_name, a_x, a_y)
			a_map.add_place (internal_place)			
		ensure
			place_created: place /= Void
			place_has_name: equal (place.name, a_name)
			place_in_map: a_map.has_place (a_name)
		end
		
	place: TRAFFIC_PLACE is
			-- Generated traffic place object.
		require
			place_available: has_place
		do
			Result := internal_place
		ensure
			Result_exists: Result /= Void
		end

	has_place: BOOLEAN is
			-- Is traffic place object available?
		do
			Result := internal_place /= Void
		end

feature -- Line section building

	build_line_section (a_origin, a_destination:STRING; a_polypoints: ARRAYED_LIST [ESDL_VECTOR_2D]; a_map: TRAFFIC_MAP; a_line: TRAFFIC_LINE) is
			-- Generate new traffic line section object going from origin `a_origin' to place named `a_destination'
			-- belonging to line `a_line' in map `a_map'.
			-- (Access the generated object through feature `line_section')
		require
			a_map_exists: a_map /= Void
			a_origin_exists: a_map.has_place (a_origin)
			a_destination_exists: a_map.has_place (a_destination)
--			a_polypoints_exists: a_polypoints /= Void
			a_line_exists: a_line /= Void
		do
			internal_line_section := create_line_section (a_origin, a_destination, a_polypoints, a_line, a_map)
			a_map.add_line_section (internal_line_section)
		ensure
			line_section_created: line_section /= Void
			line_section_has_line: line_section.line = a_line
			line_section_has_type: equal (line_section.type, a_line.type)
			line_section_has_origin: line_section.origin = a_map.place (a_origin)
			line_section_has_destination: line_section.destination = a_map.place (a_destination)
			line_section_in_map: map.has_line_section (a_origin, a_destination, a_line.type, a_line)
		end

	line_section: TRAFFIC_LINE_SECTION is
			-- Generated traffic line section object.
		require
			line_section_available: has_line_section
		do
			Result := internal_line_section
		ensure
			Result_exists: Result /= Void
		end

	has_line_section: BOOLEAN is
			-- Is there a line section object available?
		do
			Result := internal_line_section /= Void
		end
		
feature -- Traffic line building

	build_line (a_name: STRING; a_type_name: STRING; a_map: TRAFFIC_MAP) is
			-- Generate new traffic line object with name `name' and type `type'
			-- belonging to map `a_map'.
			-- (Access the generated object through feature `line')
		require
			a_name_exists: a_name /= Void
			a_name_not_empty: not a_name.is_empty
			a_map_exists: a_map /= Void
			type_name_is_valid: valid_name (a_type_name)
		local
			actual_traffic_type: TRAFFIC_TYPE
		do
			build_traffic_type (a_type_name)
			actual_traffic_type := internal_traffic_type
			internal_line := create_line (a_name, actual_traffic_type)
			a_map.add_line (internal_line)
		ensure
			line_created: line /= Void
			line_has_name: equal (line.name, a_name)
			line_has_type: equal (line.type.name, a_type_name)
			line_in_map: map.has_line (a_name)
		end

	line: TRAFFIC_LINE is
			-- Generated traffic line object.
		require
			line_available: has_line
		do
			Result := internal_line
		ensure
			Result_exists: Result /= Void
		end

	has_line: BOOLEAN is
			-- Is there a traffic line object available?
		do
			Result := internal_line /= Void
		end

feature -- Traffic simples line building

	build_simple_line (a_name: STRING; a_type_name: STRING; a_map: TRAFFIC_MAP) is
			-- Generate new traffic simple line object with name `name' and type `type'
			-- belonging to map `a_map'.
			-- (Access the generated object through feature `simple_line')
		require
			a_name_exists: a_name /= Void
			a_name_not_empty: not a_name.is_empty
			a_map_exists: a_map /= Void
			type_name_is_valid: valid_name (a_type_name)
		local
			actual_traffic_type: TRAFFIC_TYPE
		do
			build_traffic_type (a_type_name)
			actual_traffic_type := internal_traffic_type
			internal_simple_line := create_simple_line (a_name, actual_traffic_type, a_map)
			a_map.add_line (internal_simple_line)
		ensure
			simple_line_created: simple_line /= Void
			simple_line_has_name: equal (simple_line.name, a_name)
			simple_line_has_type: equal (simple_line.type.name, a_type_name)
			simple_line_in_map: map.has_line (a_name)
		end

	simple_line: TRAFFIC_LINE is
			-- Generated traffic simple line object.
		require
			simple_line_available: has_line
		do
			Result := internal_simple_line
		ensure
			Result_exists: Result /= Void
		end

	has_simple_line: BOOLEAN is
			-- Is there a traffic simple line object available?
		do
			Result := internal_simple_line /= Void
		end

feature {NONE} -- Implementation

	traffic_type_factory: TRAFFIC_TYPE_FACTORY
			-- Traffic type factory.

	internal_place: TRAFFIC_PLACE
			-- Internal representation of last created traffic place.
	
	internal_line_section: TRAFFIC_LINE_SECTION
			-- Internal representation of last created traffic line section.
	
	internal_line: TRAFFIC_LINE
			-- Internal representation of last created traffic line.
	
	internal_simple_line: TRAFFIC_SIMPLE_LINE
			-- Internal representation of last created traffic simple line.
	
	internal_map: TRAFFIC_MAP
			-- Internal representation of last created traffic map.
			
	create_line_section (a_origin, a_destination: STRING; a_polypoints: ARRAYED_LIST [ESDL_VECTOR_2D]; a_line: TRAFFIC_LINE; a_map: TRAFFIC_MAP): TRAFFIC_LINE_SECTION is
			-- Create line section with type `a_type', origin `a_origin', destination `a_destination' belonging to line `a_line'.
		require
			a_origin_exists: a_origin /= Void
			a_origin_not_empty: not a_origin.is_empty
			a_origin_in_map: a_map.has_place (a_origin)
			a_destination_exists: a_destination /= Void
			a_destination_not_empty: not a_destination.is_empty
			a_destination_in_map: a_map.has_place (a_destination)
			a_line_exists: a_line /= Void
			a_line_in_map: a_map.has_line (a_line.name)
		local
			typed_line_section: TRAFFIC_LINE_SECTION
			origin: TRAFFIC_PLACE
			destination: TRAFFIC_PLACE
		do
			origin := a_map.place (a_origin)
			destination := a_map.place (a_destination)
			create typed_line_section.make (origin, destination, a_line.type, a_polypoints)
			a_line.extend (typed_line_section) -- typed_line_section.set_line (a_line)
			Result := typed_line_section
		ensure
			result_exists: Result /= Void
		end
		
	create_line (a_name: STRING; a_type: TRAFFIC_TYPE): TRAFFIC_LINE is
			-- Create line named `a_name'.
		require
			a_name_exists: a_name /= Void
			a_name_not_empty: not a_name.is_empty
			a_type_exists: a_type /= Void
		do
			create Result.make (a_name, a_type)
		ensure
			result_exists: Result /= Void
		end		

	create_simple_line (a_name: STRING; a_type: TRAFFIC_TYPE; a_map: TRAFFIC_MAP): TRAFFIC_SIMPLE_LINE is
			-- Create line named `a_name'.
		require
			a_name_exists: a_name /= Void
			a_name_not_empty: not a_name.is_empty
			a_type_exists: a_type /= Void
		do
			create Result.make (a_name, a_type, a_map)
		ensure
			result_exists: Result /= Void
		end		

end