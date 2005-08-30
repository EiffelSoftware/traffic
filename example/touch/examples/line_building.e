indexing
	description: "Implementation of LINE_BUILDING from The TOUCH Textbook"
	author: "Roger Kueng"
	date: "2005/08/25"
	revision: "1.0"

class
	LINE_BUILDING

inherit
	LINE_BUILDING_PREDEFINES

feature -- Basic operation
	build_a_line is
		-- Build a fancy new line
		local
			-- Note that our 'fancy_line' is of the type 'TRAFFIC_SIMPLE_LINE'
			fancy_line: TRAFFIC_SIMPLE_LINE
		do

			-- 'tram_type' is inherited from TRAFFIC_TYPE_FACTORY
			create fancy_line.make ("fancy line", tram_type, Paris)

			-- Extend the fancy_line by three stations
			fancy_line.extend_place (Place_Balard)
			fancy_line.extend_place (Place_Issy)
			fancy_line.extend_place (Place_Montrouge)

			-- Add the fancy line to the map
			Paris.add_line(fancy_line)
		end
	
	build_a_line_with_factory is
		-- Another way of building a fancy new line using the TRAFFIC_MAP_FACTORY class
		local
			fancy_line: TRAFFIC_LINE
			map_factory: TRAFFIC_MAP_FACTORY
		do
			-- Create the map factory
			create map_factory.make
			-- Build a simple line in the factory
			map_factory.build_line ("fancy line", "tram", Paris)
			-- Get the created line7
			fancy_line := map_factory.line

			-- Build the line sections
			map_factory.build_line_section (Place_Balard.name, Place_Issy.name ,Void, Paris, fancy_line)
			map_factory.build_line_section (Place_Issy.name, Place_Montrouge.name ,Void, Paris, fancy_line)
			map_factory.build_line_section (Place_Montrouge.name, Place_Issy.name ,Void, Paris, fancy_line)
			map_factory.build_line_section (Place_Issy.name, Place_Balard.name ,Void, Paris, fancy_line)
		end
		
	build_a_line_independent is
		-- Another way of building a fancy new line using no factory at all
		local
			fancy_line: TRAFFIC_LINE
			fancy_line_type: TRAFFIC_TYPE
			fancy_line_section: TRAFFIC_LINE_SECTION
		do
			-- Create the type 
			fancy_line_type := create {TRAFFIC_TYPE_TRAM}.make
			
			-- Create our fancy line
			create fancy_line.make ("fancy line", fancy_line_type)
			-- Add fancy line to the map 
			Paris.add_line (fancy_line)
			
			-- Create the first line section			
			-- If we leave out the Polypoints (Parameter 4) the line section connects
			-- the two places with a direct connection
			create fancy_line_section.make (Place_Balard, Place_Issy, fancy_line_type, Void)
			-- Add the line section to the map
			Paris.add_line_section (fancy_line_section)
			-- Add the line_section to the fancy line
			fancy_line.extend (fancy_line_section)

			-- Create the other line sections

			create fancy_line_section.make (Place_Issy, Place_Montrouge, fancy_line_type, Void)
			Paris.add_line_section (fancy_line_section)			
			fancy_line.extend (fancy_line_section)

			create fancy_line_section.make (Place_Montrouge, Place_Issy, fancy_line_type, Void)
			Paris.add_line_section (fancy_line_section)			
			fancy_line.extend (fancy_line_section)
			
			create fancy_line_section.make (Place_Issy, Place_Balard, fancy_line_type, Void)
			Paris.add_line_section (fancy_line_section)			
			fancy_line.extend (fancy_line_section)			
			
		end
		
end -- class LINE_BUILDING
