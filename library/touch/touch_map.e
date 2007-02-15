indexing
	description: "Objects that forwards calls to TRAFFIC_MAP and TOUCH_3D_MAP_WIDGET."
	date: "$Date$"
	revision: "$Revision$"

class TOUCH_MAP

inherit

	ANY
		redefine
			out
		end

	TOUCH_SHARED_MAP_WIDGET
		undefine
			out
		end

create
	make

feature -- Initialization

	make is -- (a_widget: TOUCH_3D_MAP_WIDGET) is
			-- Set `internal_map_widget' to `a_widget'.
		require
		--	a_widget_exists: a_widget /= Void
		do
			internal_map_widget := map_widget
		ensure
			internal_map_widget /= Void
		end

feature -- Status report

	has_place (a_name: STRING): BOOLEAN is
			-- Has traffic map place called `a_name'?
		require
			a_name_exists: a_name /= Void
			a_name_not_empty: not a_name.is_empty
		do
			Result := internal_map.has_place (a_name)
		end

	has_line_section_between (a_origin_name, a_destination_name: STRING): BOOLEAN is
			-- Has traffic map line section between places with given names?
		require
			a_origin_exists: a_origin_name /= Void and not a_origin_name.is_empty
			a_destination_exists: a_destination_name /= Void and not a_destination_name.is_empty
		do
			Result := internal_map.has_line_section_between (a_origin_name, a_destination_name)
		end

	has_line_section (a_origin_name, a_destination_name: STRING; a_traffic_type: TRAFFIC_TYPE; a_line: TRAFFIC_LINE): BOOLEAN is
			-- Has traffic map line section `a_line_section'?
		require
			a_origin_exists: a_origin_name /= Void and not a_origin_name.is_empty
			a_destination_exists: a_destination_name /= Void and not a_destination_name.is_empty
			a_traffic_type_exists: a_traffic_type /= Void
		do
			Result := internal_map.has_line_section (a_origin_name, a_destination_name, a_traffic_type, a_line)
		end

	has_line (a_name: STRING): BOOLEAN is
			-- Has traffic map line `a_name'?
		require
			a_name_exists: a_name /= Void
			a_name_not_empty: not a_name.is_empty
		do
			Result := internal_map.has_line (a_name)
		end

feature -- Element change

	equip is
			-- Add `a_number' trams per line.
		do
			internal_map_widget.travelers_representation.add_tram_per_line (internal_map, 2)
		end

	build is
			-- Add buildings along traffic lines.
		do
			internal_map_widget.add_buildings_randomly_improved(3)
			internal_map_widget.enable_buildings_shown
		end

	set_description (a_description: STRING) is
			-- Set map description.
		do
			internal_map.set_description (a_description)
		ensure
			description_set: description = a_description
		end

	add_place (a_place: TRAFFIC_PLACE) is
			-- Add place `a_place' to map.
		require
			a_place_exists: a_place /= Void
			no_place_with_same_name_in_map: not has_place (a_place.name)
		do
			internal_map.add_place (a_place)
		ensure
			a_place_in_map: has_place (a_place.name)
		end

	add_line_section (a_line_section: TRAFFIC_LINE_SECTION) is
			-- Add line section `a_line_section' to map.
		require
			a_line_section_exists: a_line_section /= Void
			a_line_section_not_in_map: not has_line_section (a_line_section.origin.name, a_line_section.destination.name, a_line_section.type, a_line_section.line)
		do
			internal_map.add_line_section (a_line_section)
		ensure
			a_line_section_in_map: has_line_section (a_line_section.origin.name, a_line_section.destination.name, a_line_section.type, a_line_section.line)
		end

	add_line (a_line: TRAFFIC_LINE) is
			-- Add line `a_line' to map.
		require
			a_line_exists: a_line /= Void
			no_line_with_same_name_in_map: not has_line (a_line.name)
		do
			internal_map.add_line (a_line)
		ensure
			a_line_in_map: has_line (a_line.name)
		end

	add_building (a_building: TRAFFIC_BUILDING) is
			-- Add building `a_building' to map.
		require
			a_building_exists: a_building /= Void
		do
			internal_map.add_building (a_building)
		end

	add_traveler (a_traveler: TRAFFIC_MOVING) is
			-- Add traveler 'a_traveler' to map.
			require
				a_traveler_exists: a_traveler /= Void
			do
				internal_map.add_traveler (a_traveler)
			end

	remove_line_section (a_line_section: TRAFFIC_LINE_SECTION) is
			-- Remove line_section `a_line_section' from map (bad implementation)
			require
				has_a_line_section: a_line_section /= Void and then line_sections.has (a_line_section)
			do
				internal_map.remove_line_section (a_line_section)
			end

	remove_traveler (index: INTEGER) is
			-- Remove traveler at position index
			require
				index_valid: index >= 0
			do
				internal_map.remove_traveler (index)
			end

	change_traveler_speed (divisor: DOUBLE) is
			-- Divide the speed of each traveler by divisor
			require
				divisor >= 2
			do
				internal_map.change_traveler_speed (divisor)
			end

feature -- Access

	new_building_at_place (a_place: TRAFFIC_PLACE): TOUCH_BUILDING is
			-- New building at a defined place
		require
			a_traffic_place_exists: a_place /= Void
		do
			create Result.make_at_place(a_place)
		end

	new_route (a_places_to_visit: LINKED_LIST [TRAFFIC_PLACE]): TOUCH_ROUTE is
			-- New route with places from `a_places_list'
		do
			create Result.make_route (a_places_to_visit)
		end

	new_empty_route(a_map: TRAFFIC_MAP): TOUCH_ROUTE is
			-- New empty touch route
		do
			create Result.make_empty_route(a_map)
		end

	name: STRING is
			-- Name of region this map represents.
		do
			Result := internal_map.name
		end

	description: STRING is
			-- Textual description.
		do
			Result := internal_map.description
		end

	place (a_name: STRING): TRAFFIC_PLACE is
			-- Place named `a_name'.
		require
			a_name_exists: a_name /= Void
			place_in_map: has_place (a_name)
		do
			Result := internal_map.place (a_name)
		ensure
			result_exists: Result /= Void
		end

	places: HASH_TABLE [TRAFFIC_PLACE, STRING] is
			-- All places in map.
		do
			Result := internal_map.places
		end

	line (a_name: STRING): TOUCH_LINE is
			-- Line named `a_name'
		require
			a_name_exists: a_name /= Void
			line_in_map: has_line (a_name)
		do
			create Result.make_with_line_and_representation(internal_map.line (a_name))
		end

	simple_line (a_name: STRING): TOUCH_SIMPLE_LINE is
			-- Simple line named `a_name'
		require
			a_name_exists: a_name /= Void
			line_in_map: has_line (a_name)
		local
			a_line: TRAFFIC_SIMPLE_LINE
		do
			a_line ?= internal_map.line (a_name)
			if a_line /= Void then
				create Result.make_with_line_and_representation(a_line)
			end
		end

	line_sections: ARRAYED_LIST [TRAFFIC_LINE_SECTION] is
			-- All line sections in map
		do
			Result := internal_map.line_sections
		end

	lines: HASH_TABLE [TRAFFIC_LINE, STRING] is
			-- All lines in map.
		do
			Result := internal_map.lines
		end

	buildings: LINKED_LIST [TRAFFIC_BUILDING] is
			-- All buildings on map.
		local
			b: ARRAY [LINKED_LIST [TRAFFIC_BUILDING]]
			i: INTEGER
		do
			from
				b := internal_map.buildings
				i := 1
				create Result.make
			until
				i > b.count
			loop
				Result.append (b.item (i))
				i := i + 1
			end
		end

	travelers: HASH_TABLE [TRAFFIC_MOVING, INTEGER] is
			-- All travelers on the map
		do
			Result := internal_map.travelers
		end

	line_sections_of_place (a_name: STRING): LIST [TRAFFIC_LINE_SECTION] is
			-- Line sections with origin or destination place `a_name'.
		require
			place_in_map: has_place (a_name)
		do
			Result := internal_map.line_sections_of_place (a_name)
		end


feature -- Basic operation

	out: STRING is
			-- Textual representation.
		do
			Result := internal_map.out
		end

feature -- Basic operations

	display is
			-- Display `Current' on `internal_map_widget'.
		do
			internal_map_widget.disable_map_hidden
		end

feature {NONE} -- Implementation

	internal_map: TRAFFIC_MAP is
			-- Map to which calls are forwarded
		do
			Result := internal_map_widget.map
		end

	internal_map_widget: TOUCH_3D_MAP_WIDGET
			-- Map widget that allows graphical changes

invariant

	name_not_void: name /= Void
	name_not_empty: not name.is_empty
	places_not_void: places /= Void
	lines_not_void: lines /= Void
	line_sections_not_void: line_sections /= Void
	travelers_not_void: travelers /= Void

end
