indexing
	description: "Some shared constants"
	date: "$Date$"
	revision: "$Revision$"

class
	SHARED_CONSTANTS

feature -- Constants

	Building_width: DOUBLE is 0.2
			-- Width of the quadratic (!) base of the building.
			
	Max_building_height: DOUBLE is 1.0
			-- Maximum height of buildings
			
	Plane_size: DOUBLE is 50.0
			-- Length, resp. width, of plane
			
	Window_width: INTEGER is 800 --1024
			-- Window width
			
	Window_height: INTEGER is 600 --768
			-- Window height
			
	Screen_resolution: INTEGER is 32
			-- Screen resolution
			
	Fullscreen: BOOLEAN is false
			-- Fullscreen?
			
	Line_width: DOUBLE is 0.075
			-- Width of the line representation on the map
			
	Line_height: DOUBLE is 0.01
			-- Height of the line representation on the map
			
	Line_depth: DOUBLE is 0.2
			-- Depth of the line representation on the map
			
	Station_radius: DOUBLE is
			-- Radius of a station on the map
		do
			Result := 2*line_width
		end
		
	map_to_gl_coords (vec: EM_VECTOR_2D): EM_VECTOR_2D is
			-- Transform map coordinates to the ones used by OpenGL.
		require
			vec /= void
		do
			-- (669,718) are the coordinates of the HB, where the centre is.
			create Result.make ((1350 - vec.x - 669)/30,(vec.y - 718)/30)
		end
		
	calculate_building_height (max_distance, distance: DOUBLE): DOUBLE is
			-- Calculate height of a building.
		do	
			Result := (max_distance - 2*distance)*(max_building_height/max_distance)
		end

end -- class SHARED_CONSTANTS
