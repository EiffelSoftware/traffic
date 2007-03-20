indexing
	description: "Base class for road's types"


deferred class
	TRAFFIC_TYPE_ROAD

inherit
	TRAFFIC_TYPE

feature -- Basic

	is_allowed_type(a_moving: TRAFFIC_MOVING): BOOLEAN is
			-- Is 'a_moving' allowed to go on a route?
			local
				line_vehicle: TRAFFIC_VEHICLE
			do
				line_vehicle?=a_moving
				if line_vehicle/=Void then
					Result:=true
				else
					Result:=false
				end
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


