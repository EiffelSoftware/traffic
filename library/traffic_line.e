indexing
	description: "Public transportation line where objects of a given type move along."
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_LINE

inherit

	HASHABLE
		redefine
		 	out
		select
			out,
			copy,
			is_equal
		end

	TRAFFIC_EVENT_CONTAINER [TRAFFIC_LINE_CONNECTION]
		undefine
			out
		end

	DOUBLE_MATH
		rename copy as math_copy,
				is_equal as math_equal,
				out as math_out
		end

	TRAFFIC_MAP_ITEM
		undefine
			is_equal,
			copy,
			out
		redefine
			highlight,
			unhighlight,
			add_to_map,
			remove_from_map
		end
create
	make, make_with_terminal

feature {NONE} -- Initialization

	make (a_name: STRING; a_type: TRAFFIC_TYPE_LINE) is
			-- Create a line with name `a_name' of type `a_type'.
		require
			a_name_exists: a_name /= Void
			a_name_not_empty: not a_name.is_empty
			a_type_exists: a_type /= Void
		local
			temp_type: TRAFFIC_TYPE_LINE
		do
			name := a_name
			temp_type ?= a_type
			if a_type/=Void then
				type:= temp_type
			end
			create one_direction.make
			create other_direction.make

			create changed_event
			create element_inserted_event
			create element_removed_event
			index := 1
		ensure
			name_set: equal (name, a_name)
			has_type_set: type /=Void -- have to be same object
			type_set: type=a_type
			count_line_section_not_void: connection_count >= 0 -- List is initilalized.
			element_inserted_event_exists: element_inserted_event /= Void
			element_removed_event_exists: element_removed_event /= Void
			one_direction_exists: one_direction /= Void
			other_direction_exists: other_direction /= Void
		end

	make_with_terminal (a_name: STRING; a_type: TRAFFIC_TYPE_LINE; a_place: TRAFFIC_PLACE) is
			-- Create a line with a name `a_name' of type `a_type' and a planned terminal `a_place'.
		require
			a_name_exists: a_name /= Void
			a_name_not_empty: not a_name.is_empty
			a_type_exists: a_type /= Void
			a_place_exists: a_place /= Void
		do
			make (a_name, a_type)
			old_terminal_1 := a_place
		ensure
			name_set: equal (name, a_name)
			has_type_set: type /=Void -- have to be same object
			type_set: type=a_type
			count_line_section_not_void: connection_count >= 0 -- List is initilalized.
			element_inserted_event_exists: element_inserted_event /= Void
			element_removed_event_exists: element_removed_event /= Void
			one_direction_exists: one_direction /= Void
			other_direction_exists: other_direction /= Void
		end

feature -- Measurement

	total_time(speed:REAL_64):REAL is
			-- Estimated travel time for full line, time measured in Minutes.
			-- By Speed of
		do
			from
				one_direction.start
				Result:=0.0
			until
				one_direction.index+1 > one_direction.count

			loop
				Result:=Result + one_direction.item_for_iteration.travel_time (speed)
				one_direction.forth

			end


		end


	connection_count: INTEGER is
			-- Number of connections per direction in line
		do
			Result := one_direction.count
		end

	count: INTEGER is
			-- Number of stations in this line
		do
			Result := connection_count + 1
		end

feature -- Access

	index: INTEGER
			-- Internal cursor index

	i_th (i: INTEGER): TRAFFIC_PLACE is
			-- The station of index i on this line		
		require
			not_too_small: i >= 1
			not_too_big: i <= count
		do
			if i = connection_count + 1 then
				Result := terminal_2
			else
				Result := one_direction.item (i).origin
			end
		end

	item: TRAFFIC_PLACE is
			-- Item at internal cursor position of line
		require
			not_after: not after
		do
			Result := i_th (index)
		end

	hash_code: INTEGER is
			-- Hash code value
		do
			Result := (name + type.name).hash_code
		end

	name: STRING
			-- Name of line

	type: TRAFFIC_TYPE_LINE
			-- Type of line

	old_terminal_1: TRAFFIC_PLACE
			-- Old terminal (after deletion via `remove_all_connections')

	terminal_1: TRAFFIC_PLACE
			-- Terminal of line in one direction

	terminal_2: TRAFFIC_PLACE
			-- Terminal of line in other direction

	color: TRAFFIC_COLOR
			-- Line color
			-- Used as color represenation

	sw_end: TRAFFIC_PLACE is
			-- End station on South or West side
			do
				if not is_empty then
					Result := terminal_1
				end
			end


	road_points: DS_ARRAYED_LIST[TRAFFIC_COORDINATE] is
			-- Polypoints from the roads belonging to this line
		local
			roads:ARRAYED_LIST[TRAFFIC_ROAD_CONNECTION]
			pp: DS_ARRAYED_LIST[TRAFFIC_COORDINATE]
			invert, is_station: BOOLEAN
			v: TRAFFIC_COORDINATE
			lc: TRAFFIC_LINE_CURSOR
		do
			create Result.make(1)
			-- loop on all the line sections
			from
				create lc.make (Current)
				lc.start
			until
				lc.after
			loop
				roads:=lc.item_for_iteration.roads
				is_station:=true
				-- loop on all the roads

				if lc.item_for_iteration.origin=roads.first.origin and lc.item_for_iteration.destination=roads.last.destination then
					invert:=false
				elseif lc.item_for_iteration.origin=roads.last.destination and lc.item_for_iteration.destination=roads.first.origin then

					invert:=true
				else
					io.putstring ("Invalid roads for given line section%N")
					io.putstring("Line section origin: "+lc.item_for_iteration.origin.name+" - Line section destination:"+lc.item_for_iteration.destination.name+"%N")
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
							v:=pp.item_for_iteration
							Result.force_last (v)
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
							v:=pp.item_for_iteration
							Result.force_last (v)
							pp.forth
						end

						roads.forth
					end
				end

				forth
			end
		end

feature -- Cursor movement

	start is
			-- Move internal cursor to first position.
		do
			index := 1
		ensure
			at_first: (not is_empty) implies (index = 1)
			empty_convention: (is_empty) implies (after)
		end

	forth is
			-- Move internal cursor to next position.
		require
			not_after: not after
		do
			index := index + 1
		ensure
			moved_forth: index = old index + 1
		end

feature -- Status report





	has (v: TRAFFIC_LINE_CONNECTION): BOOLEAN
			-- Does list include `v'?
		do
			Result := one_direction.has (v) or other_direction.has (v)
		ensure
			not_empty: Result implies not is_empty
		end

	is_empty: BOOLEAN is
			-- Is container empty?
		do
			Result := one_direction.is_empty
		end

	after: BOOLEAN is
			-- Is there no valid position to right of internal cursor?
		do
			Result := index > count
		end

	is_before: BOOLEAN is
			-- Is there no valid position to left of internal cursor?
		do
			Result := index = 0
		end

feature -- Element change

	highlight is
			-- Highlight all line sections
		local
			lc: TRAFFIC_LINE_CURSOR
		do
			is_highlighted := True
			create lc.make (Current)
			from
				lc.start
			until
				lc.after
			loop
				lc.item_for_iteration.highlight
				lc.forth
			end
			from
				lc.start
				lc.set_cursor_direction (False)
			until
				lc.after
			loop
				lc.item_for_iteration.highlight
				lc.forth
			end
			changed_event.publish ([])
		end

	unhighlight is
			-- Highlight all line sections
		local
			lc: TRAFFIC_LINE_CURSOR
		do
			is_highlighted := False
			create lc.make (Current)
			from
				lc.start
			until
				lc.after
			loop
				lc.item_for_iteration.unhighlight
				lc.forth
			end
			from
				lc.start
				lc.set_cursor_direction (False)
			until
				lc.after
			loop
				lc.item_for_iteration.unhighlight
				lc.forth
			end
			changed_event.publish ([])
		end

	set_color (a_color: TRAFFIC_COLOR) is
			-- Set color to `a_color'.
		require
			a_color_exists: a_color /= Void
		do
			color := a_color
			changed_event.publish ([])
		ensure
			color_set: color = a_color
		end

feature {TRAFFIC_MAP_ITEM_LINKED_LIST} -- Basic operations (map)

	add_to_map (a_map: TRAFFIC_MAP) is
			-- Add `Current' and all nodes to `a_map'.
		local
			lc: TRAFFIC_LINE_CURSOR
		do
			is_in_map := True
			map := a_map
			from
				create lc.make (Current)
				lc.start
				lc.set_cursor_direction (True)
			until
				lc.after
			loop
				lc.item_for_iteration.add_to_map (map)
				lc.forth
			end
			from
				lc.start
				lc.set_cursor_direction (False)
			until
				lc.after
			loop
				lc.item_for_iteration.add_to_map (map)
				lc.forth
			end
		end

	remove_from_map is
			-- Remove all nodes from `a_map'.
		do
			wipe_out
			is_in_map := False
			map := Void
		end

feature -- Removal

	remove_all_connections, wipe_out is
			-- Remove all connections (current `terminal_1' is captured in attribute `old_terminal_1').
		require
			old_terminal_set: old_terminal_1 /= Void
		do
			from
				one_direction.start
			until
				one_direction.off
			loop
				element_removed_event.publish ([one_direction.item_for_iteration])
				one_direction.item_for_iteration.remove_from_map
				one_direction.forth
			end
			one_direction.wipe_out
			from
				other_direction.start
			until
				other_direction.off
			loop
				other_direction.item_for_iteration.remove_from_map
				element_removed_event.publish ([other_direction.item_for_iteration])
				other_direction.forth
			end
			other_direction.wipe_out
			terminal_1 := Void
			terminal_2 := Void
		ensure
			count: connection_count = 0
			terminals_void: terminal_1 = Void and terminal_2 = Void
			only_one_left: count = 1
		end


	remove_color is
			-- Remove color.
		do
			color := Void
			changed_event.publish ([])
		ensure
			color_removed: color = Void
		end

	remove_last is
			-- Remove end of the line.
		require
			count_valid: connection_count >= 1
		do
			element_removed_event.publish ([one_direction.last])
			if one_direction.last.is_in_map then
				one_direction.last.remove_from_map
			end
			one_direction.remove_last
			element_removed_event.publish ([other_direction.first])
			if other_direction.first.is_in_map then
				other_direction.first.remove_from_map
			end
			other_direction.remove_first
			if connection_count >= 1 then
				terminal_2 := one_direction.last.destination
			elseif connection_count = 0 then
				terminal_2 := Void
				terminal_1 := Void
			end
		ensure
			count_smaller: connection_count = old connection_count - 1
			terminals_set: connection_count /= 0 implies (terminal_1 = old terminal_1 and terminal_2 /= Void and old_terminal_1 = old terminal_1)
			terminals_set: connection_count = 0 implies (terminal_1 = Void and terminal_2 = Void and old_terminal_1 = old terminal_1)
		end

	remove_first is
			-- Remove start of the line.
		require
			count_valid: connection_count >= 1
		do
			element_removed_event.publish ([one_direction.first])
			element_removed_event.publish ([other_direction.last])
			if one_direction.first.is_in_map then
				one_direction.first.remove_from_map
			end
			if other_direction.last.is_in_map then
				other_direction.last.remove_from_map
			end
			one_direction.remove_first
			other_direction.remove_last
			if connection_count >= 1 then
				terminal_1 := one_direction.first.origin
				old_terminal_1 := terminal_1
			elseif connection_count = 0 then
				terminal_2 := Void
				terminal_1 := Void
			end
		ensure
			count_smaller: connection_count = old connection_count - 1
			terminals_set: connection_count /= 0 implies (terminal_2 = old terminal_2 and terminal_1 /= Void and old_terminal_1 = terminal_1)
			terminals_set: connection_count = 0 implies (terminal_1 = Void and terminal_2 = Void and old_terminal_1 = old terminal_1)
		end

feature -- Status report


	is_insertable (a_map: TRAFFIC_MAP): BOOLEAN is
			-- Is `Current' insertable into `a_map'?
			-- E.g. are all needed elements already inserted in the map?
		local
			lc: TRAFFIC_LINE_CURSOR
		do
			Result := True
			from
				create lc.make (Current)
				lc.start
			until
				lc.after or not Result
			loop
				if lc.item_for_iteration.start_node.is_in_map and lc.item_for_iteration.end_node.is_in_map and
						lc.item_for_iteration.origin.is_in_map and lc.item_for_iteration.destination.is_in_map then
					Result := True
				else
					Result := False
				end
				lc.forth
			end
		end

	is_removable: BOOLEAN is
			-- Is `Current' removable from `a_map'?
		do
			Result := True
		end

	is_terminal (a_terminal: TRAFFIC_PLACE): BOOLEAN is
			-- Is `a_terminal' a terminal of line?
		require
			a_terminal_exists: a_terminal /= Void
		do
			Result := equal (a_terminal, terminal_1) or equal (a_terminal, terminal_2)
		end

feature -- Basic operations

	put_first (l1, l2: TRAFFIC_LINE_CONNECTION) is
			-- Add l1 and l2 at beginning (l2 connects the same two places in reverse order).
		require
			l1_exists: l1 /= Void
			l2_exists: l2 /= Void
			l1_fits: terminal_1 /= Void implies l1.destination = terminal_1
			l2_fits: terminal_1 /= Void implies l2.origin = terminal_1
			l1_fits_l2: l1.start_node = l2.end_node and l1.end_node = l2.start_node
		do
			one_direction.put_first (l1)
			other_direction.put_last (l2)
			terminal_1 := l1.origin
			old_terminal_1 := terminal_1
			if terminal_2 = Void then
				terminal_2 := l1.destination
			end
			l1.set_line (Current)
			l2.set_line (Current)
			if is_in_map then
				l1.add_to_map (map)
				l2.add_to_map (map)
			end
			element_inserted_event.publish ([l1])
			element_inserted_event.publish ([l2])
		end

	put_last (l1, l2: TRAFFIC_LINE_CONNECTION) is
			-- Add l1 and l2 at end (l2 connects the same two places in reverse order).
		require
			l1_exists: l1 /= Void
			l2_exists: l2 /= Void
			l1_fits: terminal_2 /= Void implies l1.origin = terminal_2
			l2_fits: terminal_2 /= Void implies l2.destination = terminal_2
			l1_fits_l2: l1.start_node = l2.end_node and l1.end_node = l2.start_node
		do
			one_direction.put_last (l1)
			other_direction.put_first (l2)
			if terminal_1 = Void then
				terminal_1 := l1.origin
				old_terminal_1 := terminal_1
			end
			terminal_2 := l1.destination
			l1.set_line (Current)
			l2.set_line (Current)
			if is_in_map then
				l1.add_to_map (map)
				l2.add_to_map (map)
			end
			element_inserted_event.publish ([l1])
			element_inserted_event.publish ([l2])
		end

	extend (a_place: TRAFFIC_PLACE) is
			-- Add connection to `a_place' at end.
		require
			has_terminal_1: old_terminal_1 /= Void
		local
			l1, l2: TRAFFIC_LINE_CONNECTION
			s1, s2: TRAFFIC_STOP
			pp: DS_ARRAYED_LIST [TRAFFIC_COORDINATE]
		do
			if terminal_2 /= Void then
				-- We already have line connections, use terminal_2 to extend
				if terminal_2.has_stop (Current) then
					s1 := terminal_2.stop (Current)
				else
					create s1.make_stop (terminal_2, Current, create {TRAFFIC_COORDINATE}.make_from_other (terminal_2.position))
				end
			else
				-- Only old_terminal_1 is given, the line is empty
				if old_terminal_1.has_stop (Current) then
					s1 := old_terminal_1.stop (Current)
				else
					create s1.make_stop (old_terminal_1, Current, create {TRAFFIC_COORDINATE}.make_from_other (old_terminal_1.position))
				end
			end
			if a_place.has_stop (Current) then
				s2 := a_place.stop (Current)
			else
				create s2.make_stop (a_place, Current, create {TRAFFIC_COORDINATE}.make_from_other (a_place.position))
			end
			create pp.make (2)
			pp.force_last (create {TRAFFIC_COORDINATE}.make_from_other (s1.position))
			pp.force_last (create {TRAFFIC_COORDINATE}.make_from_other (s2.position))
			create l1.make (s1, s2, type, pp)
			create pp.make (2)
			pp.force_last (create {TRAFFIC_COORDINATE}.make_from_other (s2.position))
			pp.force_last (create {TRAFFIC_COORDINATE}.make_from_other (s1.position))
			create l2.make (s2, s1, type, pp)

			put_last (l1, l2)
		ensure
			new_place_added: i_th (count) = a_place
			added_at_end: terminal_2 = a_place
			one_more: count = old count + 1
		end

	prepend (a_place: TRAFFIC_PLACE) is
			-- Add connection from `a_place' to the beginning of the line.
		require
			has_terminal_1: old_terminal_1 /= Void
		local
			l1, l2: TRAFFIC_LINE_CONNECTION
			s1, s2: TRAFFIC_STOP
			pp: DS_ARRAYED_LIST [TRAFFIC_COORDINATE]
		do
			if a_place.has_stop (Current) then
				s1 := a_place.stop (Current)
			else
				create s1.make_stop (a_place, Current, create {TRAFFIC_COORDINATE}.make_from_other (a_place.position))
			end
			if terminal_1 /= Void then
				if terminal_1.has_stop (Current) then
					s2 := terminal_1.stop (Current)
				else
					create s2.make_stop (terminal_1, Current, create {TRAFFIC_COORDINATE}.make_from_other (terminal_1.position))
				end
			else
				if old_terminal_1.has_stop (Current) then
					s2 := old_terminal_1.stop (Current)
				else
					create s2.make_stop (old_terminal_1, Current, create {TRAFFIC_COORDINATE}.make_from_other (old_terminal_1.position))
				end
			end
			create pp.make (2)
			pp.force_last (create {TRAFFIC_COORDINATE}.make_from_other (s1.position))
			pp.force_last (create {TRAFFIC_COORDINATE}.make_from_other (s2.position))
			create l1.make (s1, s2, type, pp)
			create pp.make (2)
			pp.force_last (create {TRAFFIC_COORDINATE}.make_from_other (s2.position))
			pp.force_last (create {TRAFFIC_COORDINATE}.make_from_other (s1.position))
			create l2.make (s2, s1, type, pp)

			put_first (l1, l2)
		ensure
			new_place_added: i_th (1) = a_place
			added_at_end: terminal_1 = a_place
			one_more: count = old count + 1
		end


feature -- Output

	out: STRING is
			-- Textual representation
		local
			color_text: STRING
			c: TRAFFIC_LINE_CURSOR
		do
			if color /= Void then
				color_text := color.out
			else
				color_text := ""
			end
			Result := "Traffic " + type.out + " line: " + name + ", " + color_text +
				"%N  one direction"
			from
				create c.make (Current)
				c.start
			until
				c.after
			loop
				Result := Result + "%T" + c.item_for_iteration.out + "%N"
				c.forth
			end
			Result := Result + "%N  one direction"
			from
				c.set_cursor_direction (False)
				c.start
			until
				c.after
			loop
				Result := Result + "%T" + c.item_for_iteration.out + "%N"
				c.forth
			end
		end

feature {TRAFFIC_LINE_CURSOR} -- Implementation

	one_direction, other_direction: DS_LINKED_LIST [TRAFFIC_LINE_CONNECTION]

	angle(st,dest: TRAFFIC_COORDINATE):DOUBLE is
			-- Set the angles to the x- and y-axis respectively.
		local
			x_difference, y_difference, hypo, quad: DOUBLE
			angle_x:DOUBLE
		do
			x_difference := st.x - dest.x
			y_difference := st.y - dest.y
			hypo := sqrt ((x_difference * x_difference) + (y_difference * y_difference))

			if hypo /= 0 then
				-- arc_sine in radian
				quad := 0
				if  (x_difference >= 0) and (y_difference >= 0) then
					angle_x := arc_sine (x_difference/hypo)
						-- the same in degree
					angle_x := angle_x * 180 / pi
					angle_x := 180 + angle_x
				elseif (x_difference < 0) and (y_difference >= 0) then
					x_difference := x_difference.abs
					y_difference := y_difference.abs
					angle_x := arc_sine (x_difference/hypo)
						-- the same in degree
					angle_x := angle_x * 180 / pi
					angle_x := 180 - angle_x
				elseif (x_difference < 0) and (y_difference < 0) then
					x_difference := x_difference.abs
					y_difference := y_difference.abs
					angle_x := arc_sine (x_difference/hypo)
						-- the same in degree
					angle_x := angle_x * 180 / pi
				elseif (x_difference >= 0) and (y_difference < 0) then
					x_difference := x_difference.abs
					y_difference := y_difference.abs
					angle_x := arc_sine (x_difference/hypo)
						-- the same in degree
					angle_x := angle_x * 180 / pi
					angle_x := 360 - angle_x
				end

				if angle_x < 0 then
					angle_x := 360 + angle_x
				elseif angle_x > 360 then
					angle_x := angle_x - 360
				end
			end
			if angle_x>180 then
				Result:=angle_x-180
			else
				Result:=angle_x
			end
		end

invariant

	name_not_void: name /= Void -- Line has name.
	name_not_empty: not name.is_empty -- Line has not empty name.
	connections_not_void: one_direction /= Void and other_direction /= Void
	type_exists: type /= Void -- Line has type.
	counts_are_equal: one_direction.count = other_direction.count
	terminal_1_is_first: terminal_1 = i_th (1)
	terminal_2_is_last: terminal_2 = i_th (count)
	after: after = (index = count + 1)
end
