indexing
	description: "The Sun"
	author: "Lars Krapf <lkrapf@student.ethz.ch>"
	date: "22.05.06"
	revision: "$Revision$"

class
	TRAFFIC_SUN
inherit
	DOUBLE_MATH
		export {NONE} all end	
	
	MATH_CONST
		export 
			{NONE} all 
			{ANY} pi
		end
	
create
	make

feature {NONE} -- Initialization

	make is
			-- Initialize `Current'.
		do
			-- Initialize Coordinates
			theta := 0.6
			phi := 1.0
			radius := 50.0
		ensure
			Coordinates_Initialized : (theta = 0.6) and (phi = 1.0) and (radius = 50.0)
		end


feature -- Access
	-- Spherical Coordinates of the Sun
	theta: DOUBLE
		-- Longitude (rad)
	phi: DOUBLE
		-- Colatitude (rad)
	radius: DOUBLE
		-- Radius
	
	position : GL_VECTOR_3D[DOUBLE] is
			-- The Position of the Sun in Carthesian Coordinates
		do
			create Result.make_xyz (radius*sine(theta)*cosine(phi),
									radius*sine(theta)*sine(phi),
									radius*cosine(theta))
		ensure
			Result_Set: Result /= Void
		end
		
	
feature -- Element change

	set_theta(new_theta: DOUBLE) is	
			-- Set Longitude
		require
			New_Theta_Valid: new_theta >= 0 and new_theta < 2*pi
		do
			theta := new_theta
		ensure
			New_Theta_Set: theta = new_theta
		end
		
	set_phi(new_phi: DOUBLE) is	
			-- Set Colatitude
		require
			New_Phi_Valid: new_phi >= 0 and new_phi < pi
		do
			phi := new_phi
		ensure
			New_Phi_Set: phi = new_phi
		end

	set_radius(new_radius: DOUBLE) is
			-- Set Radius
		require
			New_Radius_Valid: new_radius >= 0
		do
			radius := new_radius
		ensure
			New_Radius_Set: radius = new_radius
		end

	update(time: TRAFFIC_TIME) is
			-- Set Coordinates corresponding to time
		require
			time_exists: time /= Void
		do
			theta := (3*pi/2.0 + (2.0*pi*time.actual_hour*60.0 + time.actual_minute)/(24.0*60.0))
			if theta > 2*pi then 
				theta := theta - 2*pi
			end
		ensure
			Theta_Valid: theta >= 0 and theta < 2*pi
		end
		
feature {NONE} -- Implementation

invariant
	Longitude_Valid: theta >= 0 and theta < 2*pi
	Colatitude_Valid: phi >= 0 and phi < pi
	Radius_Valid: radius >= 0
end
