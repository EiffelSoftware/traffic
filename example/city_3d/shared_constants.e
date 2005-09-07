indexing
	description: "Some shared constants"
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	SHARED_CONSTANTS
	
	inherit
		
		DOUBLE_MATH

feature -- Constants

	Building_width: DOUBLE is 0.2
		-- Width of the quadratic (!) base of the building.

	Max_building_height: DOUBLE is 1.0
		-- Maximum height of buildings

	Plane_size: DOUBLE is 30.0
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
			-- Width of the line
	
	Line_height: DOUBLE is 0.05
			-- Height of the line representation on the map
			
	Station_radius: DOUBLE is
			-- Radius of a station on the map
		do
			Result := 2*line_width
		end
		
	map_to_gl_coords (vec: EM_VECTOR_2D): EM_VECTOR_2D is
			-- Transform map coords to ones used by OpenGL
		require vec /= void
		local divisor: DOUBLE
		do
			-- Powered by MAPLE - Command the brilliance of a thousand mathematicians :)
			-- and Lagrange for his brilliant formula
			divisor := -(7/4)*plane_size + (149/2)
			create Result.make ((vec.x / divisor) - Plane_size, (vec.y / divisor) - Plane_size)
--			io.put_string("x: ")
--			io.put_double (vec.x)
--			io.put_string(" - ")
--			io.put_double (Result.x)
--			io.put_string("y: ")
--			io.put_double (vec.y)
--			io.put_string(" - ")
--			io.put_double (Result.y)
--			io.put_new_line
		end
		
	calculate_building_height(max_distance, distance: DOUBLE): DOUBLE is
			-- Calculate height of building
		do	
			Result := (max_distance - 2*distance)*(max_building_height/max_distance)		
			
			
			
		end

end -- class SHARED_CONSTANTS
