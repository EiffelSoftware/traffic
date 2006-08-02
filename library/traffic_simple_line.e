indexing
	description: "[
					Line with undirected line sections.
					TODO: The cursor does not work, if there's only one place, because the first
					place is not in the `stops_one_direction' nor in the `stops_other_direction'.
					]"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_SIMPLE_LINE

inherit
	TRAFFIC_LINE
		rename
			make as make_line,
			start as start_line,
			finish as finish_line,
			before as before_line,
			after as after_line,
			off as off_line,
			forth as forth_line,
			back as back_line,
			item as item_line,
			count as count_line,
			i_th as i_th_line,
			wipe_out as wipe_out_line,
			has as has_line
		redefine
			start_to_terminal,
			extend
		end

create
	make

feature {NONE} -- Initialization
	make (a_name: STRING; a_type: TRAFFIC_TYPE_LINE; a_map: TRAFFIC_MAP) is
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
			count_line_section_not_void: count_line >= 0 -- List is initilalized.
			stops_one_direction_exists: stops_one_direction /= Void
			stops_other_direction_exists: stops_other_direction /= Void
			map_set: map = a_map
		end

feature -- Access

	one_end: TRAFFIC_STOP is
			-- One end of the line
		do
			if start_stop /= Void then
				Result:= start_stop
			else
				if stops_one_direction.count > 0  then
					Result := stops_one_direction.first
				else
					Result := Void
				end
			end
		end

	other_end: TRAFFIC_STOP is
			-- Other end of the line
		do
			if start_stop /= Void then
				Result:= start_stop
			else
				if stops_one_direction.count > 0  then
					Result := stops_one_direction.last
				else
					Result := Void
				end
			end
		end

	start_to_terminal (a_terminal: TRAFFIC_PLACE): TRAFFIC_PLACE is
			-- The start place to existing terminal `a_terminal'.
		do
			if equal (a_terminal, terminal_1) then -- terminal of one direction
				Result := terminal_2
			else -- terminal of other direction
				Result := terminal_1
			end
		end

	has (a_stop: TRAFFIC_STOP): BOOLEAN is
			-- Does line include `a_stop'?
		do
			Result := stops_one_direction.has (a_stop)
		end

	i_th (i: INTEGER): TRAFFIC_STOP is
			-- Place at `i'-th position
		require
			i_correct_index: i >= 1 and then i <= count
		do
			if start_stop /= Void then
				Result := start_stop
			else
				Result := stops_one_direction.i_th (i)
			end
		ensure
			result_not_void: Result /= Void
		end

	item: TRAFFIC_STOP is
			-- Current place
		do
			Result := stops_one_direction.item
		end

feature -- Status report

	after: BOOLEAN is
			-- Is there no valid cursor position to the right of cursor?
		do
			Result := stops_one_direction.after
		end

	before: BOOLEAN is
			-- Is there no valid cursor position to the left of cursor?
		do
			Result := stops_one_direction.before
		end

	off: BOOLEAN is
			-- Is there no current item?
		do
			Result := stops_one_direction.off
		end

feature -- Measurement

	count: INTEGER is
			-- Number of places
		do
			if start_stop /= Void then
				Result := 1
			else
				Result := stops_one_direction.count
			end
		end

feature -- Cursor movement

	forth is
			-- Move cursor to next position.
		do
			stops_one_direction.forth
		end

	back is
			-- Move to previous item.
		do
			stops_one_direction.back
		end

	start is
			-- Move cursor to first position.
		do
			stops_one_direction.start
		end

	finish is
			-- Move cursor to last position.
			-- (Go before if empty)
		do
			stops_one_direction.finish
		end

feature -- Basic operations

	extend (a_line_section: TRAFFIC_LINE_SECTION) is
			-- Add `a_line_section' at beginning or end of existing direction(s).
		local
			origin, destination: TRAFFIC_PLACE
			origin_stop, destination_stop: TRAFFIC_STOP
			other_line_section: TRAFFIC_LINE_SECTION
			pp, polypoints:  ARRAYED_LIST [EM_VECTOR_2D]
		do
			start_stop := Void

			origin_stop := a_line_section.origin_impl
			destination_stop := a_line_section.destination_impl
			origin := origin_stop.place
			destination := destination_stop.place


			-- Copy polypoints reversed for other direction
			polypoints := a_line_section.polypoints
			if polypoints.count >= 2 then
				create pp.make (0)
				from
					polypoints.finish
				until
					polypoints.before
				loop
					pp.extend (polypoints.item.twin)
					polypoints.back
				end
				create other_line_section.make (destination_stop, origin_stop, a_line_section.type, Void)
				other_line_section.set_polypoints (pp)
			else
				create other_line_section.make (destination_stop, origin_stop, a_line_section.type, Void)
			end

			a_line_section.set_line (Current)

			other_line_section.set_line (Current)
			map.add_line_section (other_line_section)

			if terminal_1 = Void then -- no direction exists yet
				put_front (a_line_section)
				terminal_1 := destination
				stops_one_direction.extend (origin_stop)
				stops_one_direction.extend (destination_stop)

				put_end (other_line_section)
				start_other_direction := other_line_section
				terminal_2 := origin
				stops_other_direction.extend (destination_stop)
				stops_other_direction.extend (origin_stop)
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
		end

	remove_all_sections is
			-- Remove all line sections but keep the first place
		do
			from
				start_line
			until
				off_line
			loop
				if map.line_sections.has (item_line) then
					map.remove_line_section (item_line)
				end
				forth_line
			end

			wipe_out_line

			if stops_one_direction.count > 0 then
				start_stop := stops_one_direction.first

				--remove all places		
				stops_one_direction.wipe_out
				stops_other_direction.wipe_out


				terminal_1 := Void
				terminal_2 := Void

				start_other_direction := Void
			end
		end

--	extend_stop (a_stop: TRAFFIC_STOP) is
--			-- Extend the simple line by a place.
--			-- Line sections in both directions are added to the line if there
--			-- is at least one place in the line
--		require
--			a_stop_not_void: a_stop /= Void
--			a_stop_not_last_stop: count > 0 implies a_stop /= i_th (count)
--			a_stop_not_in_stops_of_line: not has (a_stop)
--		local
--			line_section: TRAFFIC_LINE_SECTION
--			origin: TRAFFIC_STOP
--		do
--			if stops_one_direction.count = 0 and then start_stop = Void then
--				start_stop := a_stop
--			else
--				if stops_one_direction.count = 0 then
--					-- No line_section inserted yet
--					origin := start_stop
--					start_stop := Void
--				else
--					origin := stops_one_direction.last
--				end
--
--				create line_section.make (origin, a_stop, type, Void)
--				extend (line_section)
--				map.add_line_section (line_section)
--			end
--		end

feature {NONE} -- Implementation

	start_stop: TRAFFIC_STOP
			-- Used to maintain a station, when remove_all_sections is called
			-- and is used, when a line is built using `extend_stop'

	map: TRAFFIC_MAP
			-- Map this simple line belongs to.

	insert_one_direction_front (a_line_section: TRAFFIC_LINE_SECTION) is
			-- Insert `a_line_section' front of one direction.
		require
			a_line_section_exists: a_line_section /= Void
			not_yet_added: not has_line (a_line_section)
		do
			put_front (a_line_section)
			stops_one_direction.put_front (a_line_section.origin_impl)
		ensure
			a_line_section_in_simple_line: has_line (a_line_section)
			stops_one_direction_set: stops_one_direction.has (a_line_section.origin_impl)
		end

	insert_one_direction_end (a_line_section: TRAFFIC_LINE_SECTION) is
			-- Insert `a_line_section' end of one direction.
		require
			a_line_section_exists: a_line_section /= Void
			not_yet_added: not has_line (a_line_section)
		local
			position: INTEGER
		do
			position := index_of (start_other_direction, 1)
			go_i_th (position)
			put_left (a_line_section)
			terminal_1 := a_line_section.destination
			stops_one_direction.extend (a_line_section.destination_impl)
		ensure
			a_line_section_in_simple_line: has_line (a_line_section)
			terminal_1_set: terminal_1 = a_line_section.destination
			stops_one_direction_set: stops_one_direction.has (a_line_section.destination_impl)
		end

	insert_other_direction_front (a_line_section: TRAFFIC_LINE_SECTION) is
			-- Insert `a_line_section' front of other direction.
		require
			a_line_section_exists: a_line_section /= Void
			not_yet_added: not has_line (a_line_section)
		local
			position: INTEGER
		do
			position := index_of (start_other_direction, 1)
			go_i_th (position)
			put_left (a_line_section)
			start_other_direction := a_line_section
			stops_other_direction.put_front (a_line_section.origin_impl)

		ensure
			a_line_section_in_simple_line: has_line (a_line_section)
			start_other_direction_set: start_other_direction = a_line_section
			stops_other_direction_set: stops_other_direction.has (a_line_section.origin_impl)
		end

	insert_other_direction_end (a_line_section: TRAFFIC_LINE_SECTION) is
			-- Insert `a_line_section' end of other direction.
		require
			a_line_section_exists: a_line_section /= Void
			not_yet_added: not has_line (a_line_section)
		do
			put_end (a_line_section)
			terminal_2 := a_line_section.destination
			stops_other_direction.extend (a_line_section.destination_impl)
		ensure
			a_line_section_in_simple_line: has_line (a_line_section)
			terminal_2_set: terminal_2 = a_line_section.destination
			stops_other_direction_set: stops_other_direction.has (a_line_section.destination_impl)
		end

invariant
	name_not_void: name /= Void -- Line has name.
	name_not_empty: not name.is_empty -- Line has not empty name.
	count_line_section_not_void: count >= 0 -- List is initilalized.
	type_exists: type /= Void -- Line has type.
	stops_one_direction_exists: stops_one_direction /= Void -- List places one direction exists.
	stops_other_direction_exists: stops_other_direction /= Void -- List places other direction exists.
	terminal_1_exists_implies_one_direction_exists: terminal_1 /= Void implies one_direction_exists -- One direction exists if terminal_1 defined.
	terminal_2_exists_implies_other_direction_exists: terminal_2 /= Void implies other_direction_exists -- Other direction exists if terminal_2 defined.
	one_direction_exists_implies_places_in_stops_one_direction: one_direction_exists implies stops_one_direction.count >= 2 -- One direction exists if at least two places in places one direction.
	other_direction_exists_implies_places_in_stops_other_direction: other_direction_exists implies stops_other_direction.count >= 2 -- Other direction exists if at least two places in places other direction.
	terminal_1_exists_implies_start_is_terminal_2: terminal_1 /= Void implies equal (start_to_terminal (terminal_1), terminal_2)
	terminal_2_exists_implies_start_is_terminal_1: terminal_2 /= Void implies equal (start_to_terminal (terminal_2), terminal_1)
	stops_one_direction_same_stops_other_direction: stops_one_direction.count = stops_other_direction.count

	stations_at_right_place: stops_one_direction.count >= 2 implies one_end = i_th(1) and other_end = i_th(count)

end
