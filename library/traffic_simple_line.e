indexing
	description: "Line with undirected line sections."
	author: "Sibylle Aregger, ETH Zurich"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_SIMPLE_LINE
	
inherit
	TRAFFIC_LINE
		rename
			make as make_line
		redefine 
			start_to_terminal,
			extend
		end

create
	make

feature {NONE} -- Initialization

	make (a_name: STRING; a_type: TRAFFIC_TYPE; a_map: TRAFFIC_MAP) is
			-- Create simple line.
		require
			a_name_exists: a_name /= Void
			a_name_not_empty: not a_name.is_empty
			a_type_exists: a_type /= Void
			a_map_exists: a_map /= Void
		do
			make_line (a_name, a_type)
			map := a_map
		ensure
			name_set: equal (name, a_name)
			type_set: type = a_type -- have to be same object
			count_line_section_not_void: count >= 0 -- List is initilalized.
			places_one_direction_exists: places_one_direction /= Void
			places_other_direction_exists: places_other_direction /= Void
			map_set: map = a_map
		end
		
feature -- Access

	start_to_terminal (a_terminal: TRAFFIC_PLACE): TRAFFIC_PLACE is
			-- The start place to existing terminal `a_terminal'.
		do
			if equal (a_terminal, terminal_1) then -- terminal of one direction
				Result := terminal_2
			else -- terminal of other direction
				Result := terminal_1
			end
		end
		
feature -- Basic operations

	extend (a_line_section: TRAFFIC_LINE_SECTION) is
			-- Add `a_line_section' at beginning or end of existing direction(s).
		local
			origin, destination: TRAFFIC_PLACE
			other_line_section: TRAFFIC_LINE_SECTION
		do
			origin := a_line_section.origin
			destination := a_line_section.destination
			create other_line_section.make (a_line_section.destination, a_line_section.origin, a_line_section.type, Void)
			map.add_line_section (other_line_section)
			
			if terminal_1 = Void then -- no direction exists yet
				put_front (a_line_section)
				terminal_1 := destination
				places_one_direction.extend (origin)
				places_one_direction.extend (destination)
				
				put_end (other_line_section)
				start_other_direction := other_line_section
				terminal_2 := origin
				places_other_direction.extend (destination)
				places_other_direction.extend (origin)
			else
				if is_valid_insertion_one_direction_end (origin, destination) then
					insert_one_direction_end (a_line_section)
					insert_other_direction_front (other_line_section)
				else
					if is_valid_insertion_one_direction_front (origin, destination) then -- put front of list
						insert_one_direction_front (a_line_section)
						insert_other_direction_end (other_line_section)
					else
						if is_valid_insertion_other_direction_end (origin, destination) then -- put end of list	
							insert_other_direction_end (a_line_section)
							insert_one_direction_front (other_line_section)
						else --is_valid_insertion_other_direction_front
							insert_other_direction_front (a_line_section)
							insert_one_direction_end (other_line_section)
						end
					end
				end
			end
			a_line_section.set_line (Current)
			other_line_section.set_line (Current)
		end

feature {NONE} -- Implementation

	map: TRAFFIC_MAP
			-- Map this simple line belongs to.
		
	insert_one_direction_front (a_line_section: TRAFFIC_LINE_SECTION) is
			-- Insert `a_line_section' front of one direction.
		require
			a_line_section_exists: a_line_section /= Void
			not_yet_added: not has (a_line_section)
		do
			put_front (a_line_section)
			places_one_direction.extend (a_line_section.origin)
		ensure
			a_line_section_in_simple_line: has (a_line_section)
			places_one_direction_set: places_one_direction.has (a_line_section.origin)
		end
			
	insert_one_direction_end (a_line_section: TRAFFIC_LINE_SECTION) is
			-- Insert `a_line_section' end of one direction.
		require
			a_line_section_exists: a_line_section /= Void
			not_yet_added: not has (a_line_section)
		local
			position: INTEGER
		do
			position := index_of (start_other_direction, 1)
			go_i_th (position)
			put_left (a_line_section)
			terminal_1 := a_line_section.destination
			places_one_direction.extend (a_line_section.destination)
		ensure
			a_line_section_in_simple_line: has (a_line_section)
			terminal_1_set: terminal_1 = a_line_section.destination
			places_one_direction_set: places_one_direction.has (a_line_section.destination)
		end
		
	insert_other_direction_front (a_line_section: TRAFFIC_LINE_SECTION) is
			-- Insert `a_line_section' front of other direction.
		require
			a_line_section_exists: a_line_section /= Void
			not_yet_added: not has (a_line_section)
		local
			position: INTEGER
		do
			position := index_of (start_other_direction, 1)
			go_i_th (position)
			put_left (a_line_section)
			start_other_direction := a_line_section
			places_other_direction.extend (a_line_section.origin)
		ensure
			a_line_section_in_simple_line: has (a_line_section)
			start_other_direction_set: start_other_direction = a_line_section
			places_other_direction_set: places_other_direction.has (a_line_section.origin)
		end
		
	insert_other_direction_end (a_line_section: TRAFFIC_LINE_SECTION) is
			-- Insert `a_line_section' end of other direction.
		require
			a_line_section_exists: a_line_section /= Void
			not_yet_added: not has (a_line_section)
		do
			put_end (a_line_section)
			terminal_2 := a_line_section.destination
			places_other_direction.extend (a_line_section.destination)
		ensure
			a_line_section_in_simple_line: has (a_line_section)
			terminal_2_set: terminal_2 = a_line_section.destination
			places_other_direction_set: places_other_direction.has (a_line_section.destination)
		end	
		
invariant
	name_not_void: name /= Void -- Line has name.
	name_not_empty: not name.is_empty -- Line has not empty name.
	count_line_section_not_void: count >= 0 -- List is initilalized.
	type_exists: type /= Void -- Line has type.
	places_one_direction_exists: places_one_direction /= Void -- List places one direction exists.
	places_other_direction_exists: places_other_direction /= Void -- List places other direction exists.
	terminal_1_exists_implies_one_direction_exists: terminal_1 /= Void implies one_direction_exists -- One direction exists if terminal_1 defined.
	terminal_2_exists_implies_other_direction_exists: terminal_2 /= Void implies other_direction_exists -- Other direction exists if terminal_2 defined.
	one_direction_exists_implies_places_in_places_one_direction: one_direction_exists implies places_one_direction.count >= 2 -- One direction exists if at least two places in places one direction.
	other_direction_exists_implies_places_in_places_other_direction: other_direction_exists implies places_other_direction.count >= 2 -- Other direction exists if at least two places in places other direction.
	terminal_1_exists_implies_start_is_terminal_2: terminal_1 /= Void implies equal (start_to_terminal (terminal_1), terminal_2)
	terminal_2_exists_implies_start_is_terminal_1: terminal_2 /= Void implies equal (start_to_terminal (terminal_2), terminal_1)
	places_one_direction_same_places_other_direction: places_one_direction.count = places_other_direction.count

end -- class TRAFFIC_SIMPLE_LINE
