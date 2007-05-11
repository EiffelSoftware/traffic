indexing
	description: "Objects that represent the moving objects on the map"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_3D_MOVING_REPRESENTATION

create
	make

feature -- Initialization

	make (a_map: TRAFFIC_MAP) is
			-- Initialize with `a_map' as the map on which the travelers are on.
		require
			map_exists: a_map /= Void
		do
			create moving_root.make_as_child ((create{TE_3D_SHARED_GLOBALS}).root)
			create taxi_root.make_as_child (moving_root)
			create tram_root.make_as_child (moving_root)
			create bus_root.make_as_child (moving_root)
			create passenger_root.make_as_child (moving_root)
			create free_moving_root.make_as_child (moving_root)
			create moving_factory
			a_map.passengers.element_inserted_event.subscribe (agent add_passenger)
			a_map.trams.element_inserted_event.subscribe (agent add_tram)
			a_map.busses.element_inserted_event.subscribe (agent add_bus)
			a_map.free_movings.element_inserted_event.subscribe (agent add_free_moving)
			a_map.passengers.element_removed_event.subscribe (agent remove_passenger (?))
			a_map.trams.element_removed_event.subscribe (agent remove_tram (?))
			a_map.busses.element_removed_event.subscribe (agent remove_bus (?))
			a_map.free_movings.element_removed_event.subscribe (agent remove_free_moving)
			add_taxi_agent := agent add_taxi (?)
			remove_taxi_agent := agent remove_taxi (?)
			a_map.taxi_offices.element_inserted_event.subscribe (agent add_taxi_office)
		ensure
			moving_root_exists: moving_root /= Void
			moving_factory_exists: moving_factory /= Void
		end

feature -- Insertion

	add_passenger (a_passenger: TRAFFIC_PASSENGER) is
			-- Add a representation for `a_passenger'.
		require
			a_passenger_not_void: a_passenger /= Void
		do
			moving_factory.new_person_member (a_passenger).set_as_child_of (passenger_root)
		end

	add_tram (a_tram: TRAFFIC_TRAM) is
			-- Add a representation for `a_tram'.
		require
			a_tram_not_void: a_tram /= Void
		do
			moving_factory.new_tram_daynight_member (a_tram).set_as_child_of (tram_root)
		end

	add_bus (a_bus: TRAFFIC_BUS) is
			-- Add a representation for `a_bus'.
		require
			a_bus_not_void: a_bus /= Void
		do
			moving_factory.new_bus_daynight_member (a_bus).set_as_child_of (bus_root)
		end

	add_taxi (a_taxi: TRAFFIC_TAXI) is
			-- Add a representation for `a_taxi'.
		require
			a_taxi_not_void: a_taxi /= Void
		do
			if not taxi_root.has_child (a_taxi) then
				moving_factory.new_taxi_daynight_member (a_taxi).set_as_child_of (taxi_root)
				taxi_root.child_for_item (a_taxi).set_color (create {EM_COLOR}.make_with_rgb (a_taxi.office.color.red, a_taxi.office.color.green, a_taxi.office.color.blue))
			end
		end

	add_free_moving (a_moving: TRAFFIC_FREE_MOVING) is
			-- Add a default representation for `a_moving'.
		do
			moving_factory.new_free_moving_member (a_moving).set_as_child_of (free_moving_root)
		end

	add_taxi_office (a_taxi_office: TRAFFIC_TAXI_OFFICE) is
			-- Add `a_taxi_office' to the ones with taxis that might need a representation.
		do
			a_taxi_office.taxis.element_inserted_event.subscribe (add_taxi_agent)
			a_taxi_office.taxis.element_removed_event.subscribe (remove_taxi_agent)
			-- In case the taxi office has already some taxis...
			if not a_taxi_office.taxis.is_empty then
				from
					a_taxi_office.taxis.start
				until
					a_taxi_office.taxis.off
				loop
					add_taxi (a_taxi_office.taxis.item_for_iteration)
				end
			end
		end

feature -- Deletion

	remove_passenger (a_passenger: TRAFFIC_PASSENGER) is
			-- Remove representation for `a_passenger'.
		require
			a_passenger_exists: a_passenger /= Void
		local
			node: TE_3D_NODE
		do
			if passenger_root.has_child (a_passenger) then
				node := passenger_root.child_for_item (a_passenger)
			end
			if node /= Void then
				passenger_root.remove_child (node)
			end
		end

	remove_taxi (a_taxi: TRAFFIC_TAXI) is
			-- Remove representation for `a_taxi'.
		require
			a_taxi_exists: a_taxi /= Void
		local
			node: TE_3D_NODE
		do
			if taxi_root.has_child (a_taxi) then
				node := taxi_root.child_for_item (a_taxi)
			end
			if node /= Void then
				taxi_root.remove_child (node)
			end
		end

	remove_free_moving (a_moving: TRAFFIC_FREE_MOVING) is
			-- Remove representation for `a_moving'.
		require
			a_moving_exists: a_moving /= Void
		local
			node: TE_3D_NODE
		do
			if free_moving_root.has_child (a_moving) then
				node := free_moving_root.child_for_item (a_moving)
			end
			if node /= Void then
				free_moving_root.remove_child (node)
			end
		end

	remove_taxi_office (a_taxi_office: TRAFFIC_TAXI_OFFICE) is
			-- Remove representation for `a_taxi_office' (i.e. remove all taxi representations).
		require
			a_taxi_office_exists: a_taxi_office /= Void
		local
			node: TE_3D_NODE
		do
			a_taxi_office.taxis.element_inserted_event.unsubscribe (add_taxi_agent)
			a_taxi_office.taxis.element_removed_event.unsubscribe (remove_taxi_agent)
			from
				a_taxi_office.taxis.start
			until
				a_taxi_office.taxis.off
			loop
				if taxi_root.has_child (a_taxi_office.taxis.item_for_iteration) then
					node := taxi_root.child_for_item (a_taxi_office.taxis.item_for_iteration)
				end
				if node /= Void then
					taxi_root.remove_child (node)
				end
				a_taxi_office.taxis.forth
			end
		end

	remove_tram (a_tram: TRAFFIC_TRAM) is
			-- Remove representation for `a_tram'.
		require
			a_tram_exists: a_tram /= Void
		local
			node: TE_3D_NODE
		do
			if tram_root.has_child (a_tram) then
				node := tram_root.child_for_item (a_tram)
			end
			if node /= Void then
				tram_root.remove_child (node)
			end
		end

	remove_bus (a_bus: TRAFFIC_BUS) is
			-- Remove representation for `a_bus'.
		require
			a_bus_exists: a_bus /= Void
		local
			node: TE_3D_NODE
		do
			if bus_root.has_child (a_bus) then
				node := bus_root.child_for_item (a_bus)
			end
			if node /= Void then
				bus_root.remove_child (node)
			end
		end

feature -- Access

	moving_factory: TRAFFIC_3D_MOVING_FACTORY

	moving_root: TE_3D_NODE

	tram_root: TRAFFIC_3D_RENDERABLE_CONTAINER [TRAFFIC_TRAM]

	bus_root: TRAFFIC_3D_RENDERABLE_CONTAINER [TRAFFIC_BUS]

	taxi_root: TRAFFIC_3D_RENDERABLE_CONTAINER [TRAFFIC_TAXI]

	passenger_root: TRAFFIC_3D_RENDERABLE_CONTAINER [TRAFFIC_PASSENGER]

	free_moving_root: TRAFFIC_3D_RENDERABLE_CONTAINER [TRAFFIC_FREE_MOVING]

feature -- Element setting

	set_factory (a_moving_factory: TRAFFIC_3D_MOVING_FACTORY) is
			-- Set `moving_factory' to `a_moving_factory'.
		require
			a_moving_factory_exists: a_moving_factory /= Void
		do
			moving_factory := a_moving_factory
		ensure
			moving_factory_set: a_moving_factory = moving_factory
		end

feature {NONE} -- Implementation

	add_taxi_agent: PROCEDURE [ANY, TUPLE [TRAFFIC_TAXI]]

	remove_taxi_agent: PROCEDURE [ANY, TUPLE [TRAFFIC_TAXI]]

invariant

	moving_factory_exists: moving_factory /= Void
	moving_root_exists: moving_root /= Void

end
