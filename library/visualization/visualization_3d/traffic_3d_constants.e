indexing
	description: "Some shared constants"
	date: "$Date: 2005/09/26 11:22:45 $"
	revision: "$Revision: 1.23 $"

class
	TRAFFIC_3D_CONSTANTS

feature -- Constants
	
	Hours_per_day: INTEGER is 24
			-- Hours.

	Minutes_per_hour: INTEGER is 60
			-- Minutes

	minutes_per_day: INTEGER is
		do
			Result := Hours_per_day * Minutes_per_hour
		end
	
	
	Seconds_per_minute: INTEGER is 60
			-- Virtual Seconds.
	
	Milliseconds_per_second: INTEGER is 1000
			-- Milliseconds.
	
	Building_width: DOUBLE is 0.2
			-- Width of the quadratic (!) base of the building.
			
	Max_building_height: DOUBLE is 1.0
			-- Maximum height of buildings.
			
	Plane_size: DOUBLE is 50.0
			-- Length, resp. width, of plane.
			
	Window_width: INTEGER is 800 -- 1000 -- 1024 
			-- Window width.
			
	Window_height: INTEGER is 600 -- 768
			-- Window height.
			
	Screen_resolution: INTEGER is 32
			-- Screen resolution.
			
	Fullscreen: BOOLEAN is False
			-- Fullscreen?
			
	Line_width: DOUBLE is 0.075
			-- Width of the line representation on the map.
			
	Line_height: DOUBLE is 0.01
			-- Height of the line representation on the map.
			
	Line_depth: DOUBLE is 0.2
			-- Depth of the line representation on the map.
			
	Place_width: DOUBLE is 0.075
			-- Width of the place representation on the map.
			
	Place_height: DOUBLE is 0.02
			-- Height of the place representation on the map.
			
	Place_depth: DOUBLE is 0.2
			-- Depth of the place representation on the map.
	
	Station_radius: DOUBLE is
			-- Radius of a station on the map.
		do
			Result := 2*line_width
		end
		
	map_to_gl_coords (vec: EM_VECTOR_2D): EM_VECTOR_2D is
			-- Transform map coordinates to the ones used by OpenGL.
		require
			vec /= void
		do
			-- (669,718) are the coordinates of the HB, where the centre is.
			create Result.make ((1350 - vec.x - 669)/30,(1420 - vec.y - 718)/30)
		end
		
	calculate_building_height (max_distance, distance: DOUBLE): DOUBLE is
			-- Calculate height of a building.
		do	
			Result := (max_distance - 2*distance)*(max_building_height/max_distance)
		end

end
