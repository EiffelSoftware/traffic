indexing
	description: "Base class for road's types"
	date: "$Date: 6/6/2006$"
	revision: "$Revision$"

deferred class
	TRAFFIC_TYPE_ROAD

inherit

	TRAFFIC_TYPE

feature -- Basic

	is_allowed_type(a_moving: TRAFFIC_MOVING): BOOLEAN is
			-- Is 'a_moving' allowed to go on a route?
		local

		do
			Result := {line_vehicle: TRAFFIC_VEHICLE} a_moving
		end

	is_allowed_walking: BOOLEAN is
			-- Is it allowed to walk on 'a_road'?
		local
			street: TRAFFIC_TYPE_STREET
		do
			create street.make
			Result := street.name.is_equal (name)
		end

end


