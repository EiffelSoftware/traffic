indexing
	description: "Railroad type."

class
	TRAFFIC_TYPE_RAILROAD

inherit
	TRAFFIC_TYPE_ROAD
	redefine
		is_allowed_type
	end
	
create
	make
	
feature -- Creation

	make is
			-- Create new street type. 
		do
			name := "railroad"
		end
		

feature -- Basic 

	is_allowed_type(a_moving: TRAFFIC_MOVING): BOOLEAN is
			-- Is 'a_moving' allowed to go on a walk road?
			local
				line_vehicle: TRAFFIC_LINE_VEHICLE
			do
				line_vehicle?=a_moving
				if line_vehicle/=Void then
					Result:=true
				end
			end
		
end
