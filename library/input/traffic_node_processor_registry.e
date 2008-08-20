indexing
	description: "Shared registry of known XML node processors."
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_NODE_PROCESSOR_REGISTRY

feature {NONE} -- Access

	processor (a_name: STRING): TRAFFIC_NODE_PROCESSOR is
			-- Node processor named `a_name'
		require
			name_exists: a_name /= Void
			name_not_empty: not a_name.is_empty
			element_exists: has_processor (a_name)
		do
			Result := (Processor_registry @ a_name).twin
			Result.make
		ensure
			Result_exists: Result /= Void
		end

feature -- Access

	map_factory: TRAFFIC_MAP_FACTORY
			-- Traffic map factory

	city: TRAFFIC_CITY is
			-- City that is built
		do
			Result := map_factory.city
		end

feature -- Status setting

	set_map_factory (a_factory: TRAFFIC_MAP_FACTORY) is
			-- Set map factory to `a_factory'.
		do
			map_factory := a_factory
		ensure
			map_factory_set: map_factory = a_factory
		end

feature -- Status report

	processor_registered (a_processor: TRAFFIC_NODE_PROCESSOR): BOOLEAN is
			-- Is `a_processor' registered?
		do
			Result := Processor_registry.has_item (a_processor)
		end

	has_processor (a_name: STRING): BOOLEAN is
			-- Is processor named `a_name' available?
		require
			name_exists: a_name /= Void
			name_not_empty: not a_name.is_empty
		do
			Result := Processor_registry.has (a_name)
		end

feature -- Basic operations

	register_processor (a_processor: TRAFFIC_NODE_PROCESSOR) is
			-- Register `a_processor' in registry.
		require
			processor_exists: a_processor /= Void
			not_registered: not processor_registered (a_processor)
		do
			Processor_registry.force (a_processor, a_processor.name)
		ensure
			registered: Processor_registry.has_item (a_processor)
		end

	register_allowed_subnode (a_parent_name: STRING; a_subnode_name: STRING) is
			-- Register processor with name `a_subnode_name' as allowed subnode of processor with name `a_parent_name'.
			-- Use `register_processor' for new node types and
			-- `register_allowed_subnode' for registering their subnode types.
		local
			a: ARRAY [STRING]
		do
			if Allowed_subnode_registry.has (a_parent_name) then
				Allowed_subnode_registry.item (a_parent_name).force (a_subnode_name, Allowed_subnode_registry.item (a_parent_name).count + 1)
			else
				a := << a_subnode_name >>
				a.compare_objects
				Allowed_subnode_registry.force ( a, a_parent_name)
			end
		end

feature {NONE} -- Constants

	Default_registry_capacity: INTEGER is 100
			-- Default capacity of registry

feature {NONE} -- Implementation

	Processor_registry: DS_HASH_TABLE [TRAFFIC_NODE_PROCESSOR, STRING] is
			-- System-wide registry for known map node processors
			-- Use `register_processor' for new node types and
			-- `register_allowed_subnode' for registering their subnode types.
		once

			create Result.make (Default_registry_capacity)
			Result.put (create {TRAFFIC_MAP_NODE_PROCESSOR}.make, "map")
			Result.put (create {TRAFFIC_PLACES_NODE_PROCESSOR}.make, "places")
			Result.put (create {TRAFFIC_PLACE_NODE_PROCESSOR}.make, "place")
			Result.put (create {TRAFFIC_LANDMARK_NODE_PROCESSOR}.make, "landmark")
			Result.put (create {TRAFFIC_LINES_NODE_PROCESSOR}.make, "lines")
			Result.put (create {TRAFFIC_LINE_NODE_PROCESSOR}.make, "line")
			Result.put (create {TRAFFIC_POINT_NODE_PROCESSOR}.make, "point")
			Result.put (create {TRAFFIC_LINE_SECTION_NODE_PROCESSOR}.make, "line_section")
			Result.put (create {TRAFFIC_DESCRIPTION_NODE_PROCESSOR}.make, "description")
			Result.put (create {TRAFFIC_FILE_NODE_PROCESSOR}.make, "file")
			Result.put (create {TRAFFIC_COLOR_NODE_PROCESSOR}.make, "color")
			Result.put (create {TRAFFIC_BUILDINGS_NODE_PROCESSOR}.make, "buildings")
			Result.put (create {TRAFFIC_BUILDING_NODE_PROCESSOR}.make, "building")

			Result.put (create {TRAFFIC_ROADS_NODE_PROCESSOR}.make, "roads")
			Result.put (create {TRAFFIC_ROAD_NODE_PROCESSOR}.make, "road")
			Result.put (create {TRAFFIC_ONROAD_NODE_PROCESSOR}.make, "onroad")

			Result.put (create {TRAFFIC_SCHEDULER_LINES_NODE_PROCESSOR}.make, "slines")
			Result.put (create {TRAFFIC_SCHEDULER_LINE_NODE_PROCESSOR}.make, "sline")
			Result.put (create {TRAFFIC_SCHEDULER_NODE_PROCESSOR}.make, "entry")

			Result.put (create {TRAFFIC_POLYGON_NODE_PROCESSOR}.make, "polygon")

		ensure
			Result_exists: Result /= Void
			Result_not_empty: not Result.is_empty
		end

	Allowed_subnode_registry: DS_HASH_TABLE [ARRAY [STRING], STRING] is
			-- System-wide registry for known map node processors
			-- Use `register_processor' for new node types and
			-- `register_allowed_subnode' for registering their subnode types.
		local
			a: ARRAY [STRING]
		once
			create Result.make (Default_registry_capacity)
--			map
			a := << "description", "places","roads", "lines", "polygon" >>
			a.compare_objects
			Result.put (a, "map")
--			places
			a := << "place" , "landmark">>
			a.compare_objects
			Result.put (a, "places")
			a := << "file", "description" >>
			a.compare_objects
			Result.put (a, "place")
			Result.put (a, "landmark")
--			point
			a := <<  >>
			a.compare_objects
			Result.put (a, "point")

--			line
			a := << "color", "line_section">>
			a.compare_objects
			Result.put (a, "line")
--			lines
			a := << "line" >>
			a.compare_objects
			Result.put (a, "lines")


--			line_section
			a := << "point", "onroad" >>
			a.compare_objects
			Result.put (a, "line_section")

--			file
			a := <<  >>
			a.compare_objects
			Result.put (a, "file")
--			color
			a := <<  >>
			a.compare_objects
			Result.put (a, "color")

--			roads
			a := << "road">>
			a.compare_objects
			Result.put (a, "roads")

--			point			
			a := << "point" >>
			a.compare_objects
			Result.put (a, "road")

--			schedule slines
			a := << "sline" >>
			a.compare_objects
			Result.put (a, "slines")
--			schedule sline
			a := << "entry" >>
			a.compare_objects
			Result.put (a, "sline")

--			buildings
			a := << "building" >>
			a.compare_objects
			Result.put (a, "buildings")

--			building
			a := << >>
			a.compare_objects
			Result.put (a, "building")

--			polygon
			a := << "color", "point" >>
			a.compare_objects
			Result.put (a, "polygon")


		end

end
