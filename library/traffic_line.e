indexing
	description: "Public transportation line where objects of a given type move along."
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_LINE 

inherit
	HASHABLE
		undefine
			copy,
			is_equal
		redefine 
		 	out 
		select 
			out
		end
		
	LINKED_LIST [TRAFFIC_LINE_SECTION]
		rename 
			make as make_linked_list,
			out as linked_list_out,
			extend as put_end
		export 
		{ANY} start, finish, after, before, off, forth, back, item, count, i_th, wipe_out, has
		end

create
	make

feature {NONE} -- Initialization

	make (a_name: STRING; a_type: TRAFFIC_TYPE) is 
			-- Create a line with name `a_name' of type `a_type'.
		require
			a_name_exists: a_name /= Void
			a_name_not_empty: not a_name.is_empty
			a_type_exists: a_type /= Void
		do
			make_linked_list -- create empty line_sections list
			name := a_name
			type := a_type
			create places_one_direction.make -- create empty line_sections list for one direction
			create places_other_direction.make -- create empty line_sections list for other direction
		ensure
			name_set: equal (name, a_name)
			type_set: type = a_type -- have to be same object
			count_line_section_not_void: count >= 0 -- List is initilalized.
			places_one_direction_exists: places_one_direction /= Void
			places_other_direction_exists: places_other_direction /= Void
		end
		
feature -- Access

	name: STRING
			-- Name of line.
		
	type: TRAFFIC_TYPE
			-- Type of line.

	terminal_1: TRAFFIC_PLACE
		-- Terminal of line in one direction.
		
	terminal_2: TRAFFIC_PLACE
		-- Terminal of line in other direction.
		
	color: TRAFFIC_COLOR
		-- Line color.
		-- Used as color represenation.
		
	start_to_terminal (a_terminal: TRAFFIC_PLACE): TRAFFIC_PLACE is
			-- The start place to existing terminal `a_terminal'.
		require
			a_terminal_exists: a_terminal /= Void
			a_terminal_valid: is_terminal (a_terminal)
		do
			if equal (a_terminal, terminal_1) then -- terminal of one direction
				Result := first.origin
			else -- terminal of other direction
				Result := start_other_direction.origin
			end
		ensure
			result_exists: Result /= Void
		end
		
feature -- Element change

	set_color (a_color: TRAFFIC_COLOR) is
			-- Set color to `a_color'.
		require
			a_color_exists: a_color /= Void
		do
			if color = Void then
				create color.make (a_color.red, a_color.green, a_color.blue)
			else
				color.copy (a_color)
			end
		ensure
			color_set: equal(color, a_color)
		end
		
feature -- Removal

	remove_color is
			-- Remove color.
		do
			color := Void
		ensure
			color_removed: color = Void
		end
		

feature -- Status report

	is_terminal (a_terminal: TRAFFIC_PLACE): BOOLEAN is
			-- Is `a_terminal' a terminal of line?
		require
			a_terminal_exists: a_terminal /= Void
		do
			Result := equal (a_terminal, terminal_1) or equal (a_terminal, terminal_2)
		end

	one_direction_exists: BOOLEAN is
			-- Does line have line section(s) in one direction?
		do
			Result := terminal_1 /= Void
		end
		
	other_direction_exists: BOOLEAN is
			-- Does line have line section(s) in other direction?
		do
			Result := terminal_2 /= Void
		end

	is_valid_for_insertion (a_line_section: TRAFFIC_LINE_SECTION): BOOLEAN is
			-- Can `a_line_section' be added to line?
			--
			-- This is the case if it can be added in front or back of an existing direction,
			-- or at least one direction does not yet exists.
			-- The destination of `a_line_section' is
			-- not place allready use in this direction (circle).
			-- A line section can not be added twice to the same line.
			-- A line section can not be added to two lines at the same time.
		require
			a_line_section_exists: a_line_section /= Void
		do
			if a_line_section.line /= Void or has (a_line_section) then -- `a_line_section' is in other line or in this
				Result := False
			else
				Result := is_valid_insertion_one_direction (a_line_section.origin, a_line_section.destination) or
						is_valid_insertion_other_direction (a_line_section.origin, a_line_section.destination)
			end
		end
	
	is_valid_insertion (a_origin, a_destination: TRAFFIC_PLACE): BOOLEAN is
			-- Can a line_section from `a_origin' to `a_destination' be added 
			-- in front or back of this line?
		require
			a_origin_exists: a_origin /= Void
			a_destination_exists: a_destination /= Void
		do
			Result := is_valid_insertion_one_direction (a_origin, a_destination) or
					is_valid_insertion_other_direction (a_origin, a_destination)
		end

feature -- Measurement

	hash_code: INTEGER is
			-- Hash code value.
		do
			Result := (name + type.name).hash_code
		end

feature -- Basic operations

	extend (a_line_section: TRAFFIC_LINE_SECTION) is
			-- Add `a_line_section' at beginning or end of existing direction(s).
		require else
			a_line_section_exists: a_line_section /= Void
			a_line_section_valid_for_insertion: is_valid_for_insertion (a_line_section)
		local
			position: INTEGER
			origin, destination: TRAFFIC_PLACE
		do
			origin := a_line_section.origin
			destination := a_line_section.destination
			if terminal_1 = Void then -- no direction exists yet
				put_front (a_line_section)
				terminal_1 := destination
				places_one_direction.extend (origin)
				places_one_direction.extend (destination)
			else
				if is_valid_insertion_one_direction_end (origin, destination) then
					if other_direction_exists then -- put left of other direction
						position := index_of (start_other_direction, 1)
						go_i_th (position)
						put_left (a_line_section)
					else -- put at end of list
						put_end (a_line_section)
					end
					terminal_1 := destination
					places_one_direction.extend (destination)
				else
					if is_valid_insertion_one_direction_front (origin, destination) then -- put front of list
						put_front (a_line_section)
						places_one_direction.extend (origin)
					else
						if terminal_2 = Void then -- start other direction
							put_end (a_line_section)
							start_other_direction := a_line_section
							terminal_2 := destination
							places_other_direction.extend (origin)
							places_other_direction.extend (destination)
						else
							if is_valid_insertion_other_direction_end (origin, destination) then -- put end of list
								put_end (a_line_section)
								terminal_2 := destination
								places_other_direction.extend (destination)
							else --is_valid_insertion_other_direction_front
								position := index_of (start_other_direction, 1)
								go_i_th (position)
								put_left (a_line_section)
								start_other_direction := a_line_section
								places_other_direction.extend (origin)
							end
						end
					end
				end
			end
			a_line_section.set_line (Current)
		ensure
			a_line_section_in_line: has (a_line_section)
			line_added_to_line_section: a_line_section.line = Current
		end
		
	out: STRING is
			-- Textual representation
		local
			color_text: STRING
		do
			if color /= Void then
				color_text := color.out
			else
				color_text := ""
			end
			Result := "Traffic " + type.out + " line: " + name + ", " + color_text +
				"%N   one direction: " + one_direction_out +
				"%N   other direction: " + other_direction_out
		end
		
	road_points: ARRAYED_LIST[EM_VECTOR_2D] is
			-- returns the polypoints retrieve by the roads
			-- that belongs to this line
			local
				roads:ARRAYED_LIST[TRAFFIC_ROAD]
				pp: ARRAYED_LIST[EM_VECTOR_2D]
				invert: BOOLEAN
			do
				create Result.make(1)
				-- loop on all the line sections
				from
					start
				until
					after
				loop
					roads:=item.roads
					-- loop on all the roads
					
					if item.origin=roads.first.origin and item.destination=roads.last.destination then
						invert:=false
					elseif item.origin=roads.last.destination and item.destination=roads.first.origin then
						
						invert:=true
					else
						-- problema!
						io.putstring ("Error%N")
					end
					if invert then
						from
							roads.finish
						until
							roads.before				
						loop
							pp:=roads.item.polypoints
							-- loop on all the polypoints
							from
								pp.finish
							until
								pp.before
							loop
								Result.extend(pp.item)
								pp.back
							end
						
							roads.back
						end
					else
						from
							roads.start
						until
							roads.after				
						loop
							pp:=roads.item.polypoints
							-- loop on all the polypoints
							from
								pp.start
							until
								pp.after
							loop
								Result.extend(pp.item)
								pp.forth
							end
						
							roads.forth
						end
					end
					
					forth
				end
			end
		
		
feature {NONE} -- Implementation

	places_one_direction, places_other_direction: LINKED_LIST [TRAFFIC_PLACE]
			-- Places in each direction.
			-- Used to omit circles.

	start_other_direction: TRAFFIC_LINE_SECTION
			-- Starting line section other direction.
			-- Starting line section one direction is first element in list.
			
	is_valid_insertion_one_direction (a_origin, a_destination: TRAFFIC_PLACE): BOOLEAN is
			-- Can line section from `a_origin' to `a_destination' be added in one direction?
		require
			a_origin_exists: a_origin /= Void
			a_destination_exists: a_destination /= Void
		do
			if terminal_1 = Void then -- no line sections added so far
				Result := True
			else
				Result := is_valid_insertion_one_direction_front (a_origin, a_destination) or
						is_valid_insertion_one_direction_end (a_origin, a_destination)
			end
		end

	is_valid_insertion_one_direction_front (a_origin, a_destination: TRAFFIC_PLACE): BOOLEAN is
			-- Can line section from `a_origin' to `a_destination' be added in front of one direction?
		require
			a_origin_exists: a_origin /= Void
			a_destination_exists: a_destination /= Void
			terminal_1_exists: terminal_1 /= Void
		do
			Result := False
			if equal (a_destination, start_to_terminal (terminal_1)) then
				if not places_one_direction.has (a_origin) then -- no circle
					Result := True
				end	
			end
		end
		
	is_valid_insertion_one_direction_end (a_origin, a_destination: TRAFFIC_PLACE): BOOLEAN is
			-- Can line section from `a_origin' to `a_destination' be added at end of one direction?
		require
			a_origin_exists: a_origin /= Void
			a_destination_exists: a_destination /= Void
			terminal_1_exists: terminal_1 /= Void
		do
			Result := False
			if equal (a_origin, terminal_1) then
				if not places_one_direction.has (a_destination) then
					Result := True
				end
			end
		end
		
	is_valid_insertion_other_direction (a_origin, a_destination: TRAFFIC_PLACE): BOOLEAN is
			-- Can line section from `a_origin' to `a_destination' be added in other direction?
		require
			a_origin_exists: a_origin /= Void
			a_destination_exists: a_destination /= Void
		do
			if terminal_2 = Void then
				Result := True
			else
				Result := is_valid_insertion_other_direction_front (a_origin, a_destination) or
						is_valid_insertion_other_direction_end (a_origin, a_destination)
			end
		end

	is_valid_insertion_other_direction_front (a_origin, a_destination: TRAFFIC_PLACE): BOOLEAN is
			-- Can line section from `a_origin' to `a_destination' be added in front of other direction?
		require
			a_origin_exists: a_origin /= Void
			a_destination_exists: a_destination /= Void
			terminal_2_exists: terminal_2 /= Void
		do
			Result := False
			if equal (a_destination, start_to_terminal (terminal_2)) then
				if not places_other_direction.has (a_origin) then
					Result := True
				end
			end
		end
		
	is_valid_insertion_other_direction_end (a_origin, a_destination: TRAFFIC_PLACE): BOOLEAN is
			-- Can line section from `a_origin' to `a_destination' be added at end of other direction?
		require
			a_origin_exists: a_origin /= Void
			a_destination_exists: a_destination /= Void
			terminal_2_exists: terminal_2 /= Void
		do
			Result := False
			if equal (a_origin, terminal_2) then
				if not places_other_direction.has (a_destination) then
					Result := True
				end
			end
		end

	one_direction_out: STRING is
			-- Textual representation of one direction.
		local
			l_line_section: TRAFFIC_LINE_SECTION
		do
			if terminal_1 = Void then
				Result := ""
			else
				Result := first.origin.name
				from
					start
				until
					after or equal (item, start_other_direction)
				loop
					l_line_section := item
					Result := Result + ", " + l_line_section.destination.name
					forth
				end
			end
		end

	other_direction_out: STRING is
			-- Textual representation of other direction.
		local
			position: INTEGER
			l_line_section: TRAFFIC_LINE_SECTION
		do
			if terminal_2 = Void then
				Result := ""
			else
				Result := start_other_direction.origin.name
				position := index_of (start_other_direction, 1)
				from
					go_i_th (position)
				until
					after
				loop
					l_line_section := item
					Result := Result + ", " + l_line_section.destination.name
					forth
				end
			end
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

end
