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

	TRAFFIC_EVENT_LINKED_LIST [TRAFFIC_LINE_CONNECTION]
		rename
			make as make_linked_list,
			out as linked_list_out,
			extend as put_end

		export
			{NONE}
				append, append_first, append_last, append_left, append_left_cursor, append_right, append_right_cursor,
				delete, extend_first, extend_last, extend_left, extend_left_cursor, extend_right, extend_right_cursor,
				force, force_first, force_last, force_left, force_left_cursor, force_right, force_right_cursor,
				keep_first, keep_last, make_default, make_equal, make_from_array, make_from_linear, make_linked_list,
				prune, prune_first, prune_last, prune_left, prune_left_cursor, prune_right, prune_right_cursor,
				put, put_end, put_first, put_last, put_left, put_left_cursor, put_right, put_right_cursor,
				remove, remove_at, remove_at_cursor, remove_first, remove_last, remove_left, remove_left_cursor,
				remove_right, remove_right_cursor, replace, replace_at, replace_at_cursor, swap
			{ANY}
				start, finish, after, before, off, forth, back, item, count, wipe_out, has
		select copy,is_equal
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
		end
create
	make

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
			make_linked_list -- create empty line_sections list
			name := a_name
			temp_type ?= a_type
			if a_type/=Void then
				type:=temp_type
			end
			create stops_one_direction.make -- create empty line_sections list for one direction
			create stops_other_direction.make -- create empty line_sections list for other direction
		ensure
			name_set: equal (name, a_name)
			has_type_set: type /=Void -- have to be same object
			type_set: type=a_type
			count_line_section_not_void: count >= 0 -- List is initilalized.
			stops_one_direction_exists: stops_one_direction /= Void
			stops_other_direction_exists: stops_other_direction /= Void
		end

feature -- Access

	name: STRING
			-- Name of line

	type: TRAFFIC_TYPE_LINE
			-- Type of line

	terminal_1: TRAFFIC_PLACE
			-- Terminal of line in one direction

	terminal_2: TRAFFIC_PLACE
			-- Terminal of line in other direction

	color: TRAFFIC_COLOR
			-- Line color
			-- Used as color represenation

	start_to_terminal (a_terminal: TRAFFIC_PLACE): TRAFFIC_PLACE is
			-- Start place to existing terminal `a_terminal'
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

	add_to_map (a_map: TRAFFIC_MAP) is
			-- Add `Current' and all nodes to `a_map'.
		do
			a_map.lines.force (Current, name)
			is_in_map := True
			map := a_map
			from
				start
			until
				after
			loop
				item_for_iteration.add_to_map (a_map)
				forth
			end
		ensure then
			line_in_map: a_map.lines.has (name)
		end

	remove_from_map is
			-- Remove all nodes from `a_map'.
		do
			is_in_map := False
			map := Void
		end

	set_color (a_color: TRAFFIC_COLOR) is
			-- Set color to `a_color'.
		require
			a_color_exists: a_color /= Void
		do
			color := a_color
		ensure
			color_set: color = a_color
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


	is_insertable (a_map: TRAFFIC_MAP): BOOLEAN is
			-- Is `Current' insertable into `a_map'?
			-- E.g. are all needed elements already inserted in the map?
		do
			Result := True
			from
				start
			until
				off or not Result
			loop
				if not item_for_iteration.is_insertable (a_map) then
					Result := False
				end
				forth
			end
		end

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

	is_valid_for_insertion (a_line_section: TRAFFIC_LINE_CONNECTION): BOOLEAN is
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
			-- Hash code value
		do
			Result := (name + type.name).hash_code
		end

feature -- Basic operations

	extend (a_line_section: TRAFFIC_LINE_CONNECTION) is
			-- Add `a_line_section' at beginning or end of existing direction(s).
		require else
			a_line_section_exists: a_line_section /= Void
			a_line_section_valid_for_insertion: is_valid_for_insertion (a_line_section)
			a_section_insertable: is_in_map implies a_line_section.is_insertable (map)
		local
			origin, destination: TRAFFIC_PLACE
			origin_stop, destination_stop: TRAFFIC_STOP
		do
			origin_stop := a_line_section.start_node
			destination_stop := a_line_section.end_node
			origin := origin_stop.place
			destination := destination_stop.place

			if terminal_1 = Void then -- no direction exists yet
				put_first (a_line_section)
				terminal_1 := destination
				stops_one_direction.extend (origin_stop)
				stops_one_direction.extend (destination_stop)
			else
				if is_valid_insertion_one_direction_end (origin, destination) then
					if other_direction_exists then -- put left of other direction
						start
						search_forth (start_other_direction)
						put_left (a_line_section)
					else -- put at end of list
						put_last (a_line_section)
					end
					terminal_1 := destination
					stops_one_direction.extend (destination_stop)
				else
					if is_valid_insertion_one_direction_front (origin, destination) then -- put front of list
						put_first (a_line_section)
						stops_one_direction.extend (origin_stop)
					else
						if terminal_2 = Void then -- start other direction
							put_last (a_line_section)
							start_other_direction := a_line_section
							terminal_2 := destination
							stops_other_direction.extend (origin_stop)
							stops_other_direction.extend (destination_stop)
						else
							if is_valid_insertion_other_direction_end (origin, destination) then -- put end of list
								put_last (a_line_section)
								terminal_2 := destination
								stops_other_direction.extend (destination_stop)
							else --is_valid_insertion_other_direction_front
								start
								search_forth (start_other_direction)
								put_left (a_line_section)
								start_other_direction := a_line_section
								stops_other_direction.extend (origin_stop)
							end
						end
					end
				end
			end
			a_line_section.set_line (Current)
			if is_in_map then
				a_line_section.add_to_map (map)
			end
		ensure
			a_line_section_in_line: has (a_line_section)
			line_added_to_line_section: a_line_section.line = Current
		end

	road_points: DS_ARRAYED_LIST[TRAFFIC_COORDINATE] is
			-- returns the polypoints retrieve by the roads
			-- that belongs to this line
		local
			roads:ARRAYED_LIST[TRAFFIC_ROAD_CONNECTION]
			pp: DS_ARRAYED_LIST[TRAFFIC_COORDINATE]
			invert, is_station: BOOLEAN
			v: TRAFFIC_COORDINATE
		do
			create Result.make(1)
			-- loop on all the line sections
			from
				start
			until
				after
			loop
				roads:=item_for_iteration.roads
				is_station:=true
				-- loop on all the roads

				if item_for_iteration.origin=roads.first.origin and item_for_iteration.destination=roads.last.destination then
					invert:=false
				elseif item_for_iteration.origin=roads.last.destination and item_for_iteration.destination=roads.first.origin then

					invert:=true
				else
					io.putstring ("Invalid roads for given line section%N")
					io.putstring("Line section origin: "+item_for_iteration.origin.name+" - Line section destination:"+item_for_iteration.destination.name+"%N")
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
--							if is_station then
--								Result.extend(v)
--								Result.extend(v)
--								Result.extend(v)
--								is_station:=false
--							end
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
--							if is_station then
--								Result.extend(v)
--								Result.extend(v)
--								Result.extend(v)
--								is_station:=false
--							end
							Result.force_last (v)
							pp.forth
						end

						roads.forth
					end
				end

				forth
			end
		end

feature -- Output

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

	one_direction_out: STRING is
			-- Textual representation of one direction
		local
			l_line_section: TRAFFIC_LINE_CONNECTION
		do
			if terminal_1 = Void then
				Result := ""
			else
				Result := first.origin.name
				from
					start
				until
					after or equal (item_for_iteration, start_other_direction)
				loop
					l_line_section := item_for_iteration
					Result := Result + ", " + l_line_section.destination.name
					forth
				end
			end
		end

	other_direction_out: STRING is
			-- Textual representation of other direction
		local
			l_line_section: TRAFFIC_LINE_CONNECTION
		do
			if terminal_2 = Void then
				Result := ""
			else
				Result := start_other_direction.origin.name
				start
				search_forth (start_other_direction)
				from
				until
					after
				loop
					l_line_section := item_for_iteration
					Result := Result + ", " + l_line_section.destination.name
					forth
				end
			end
		end

feature {NONE} -- Implementation

	stops_one_direction, stops_other_direction: LINKED_LIST [TRAFFIC_STOP]
			-- Stops in each direction

	is_stop_of_place (a_stop: TRAFFIC_STOP; a_place: TRAFFIC_PLACE): BOOLEAN is
			--Is `a_stop' at the given place `a_place' and sevices the current line?
		require
			a_stop_exists: a_stop /= Void
			a_place_exists: a_place /= Void
		do
			Result := a_stop.place.name.is_equal (a_place.name) and then a_stop.line.name.is_equal (name)
		end

	start_other_direction: TRAFFIC_LINE_CONNECTION
			-- Starting line section other direction
			-- Starting line section one direction is first element in list

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
				--if not stops_one_direction.has (a_origin) then -- no circle
				if not stops_one_direction.there_exists (agent is_stop_of_place (?, a_origin)) then
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
				--if not stops_one_direction.has (a_destination) then
				if not stops_one_direction.there_exists (agent is_stop_of_place (?, a_destination)) then
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
				--if not stops_other_direction.has (a_origin) then
				if not stops_other_direction.there_exists (agent is_stop_of_place (?, a_origin)) then
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
				--if not stops_other_direction.has (a_destination) then
				if not stops_one_direction.there_exists (agent is_stop_of_place (?, a_destination)) then
					Result := True
				end
			end
		end



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
	count_line_section_not_void: count >= 0 -- List is initilalized.
	type_exists: type /= Void -- Line has type.
	stops_one_direction_exists: stops_one_direction /= Void -- List places one direction exists.
	stops_other_direction_exists: stops_other_direction /= Void -- List places other direction exists.
	terminal_1_exists_implies_one_direction_exists: terminal_1 /= Void implies one_direction_exists -- One direction exists if terminal_1 defined.
	terminal_2_exists_implies_other_direction_exists: terminal_2 /= Void implies other_direction_exists -- Other direction exists if terminal_2 defined.
	one_direction_exists_implies_places_in_stops_one_direction: one_direction_exists implies stops_one_direction.count >= 2 -- One direction exists if at least two places in places one direction.
	other_direction_exists_implies_places_in_stops_other_direction: other_direction_exists implies stops_other_direction.count >= 2 -- Other direction exists if at least two places in places other direction.

end
