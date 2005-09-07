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
			-- and Lagrange for his ingenious formula
--			divisor := -14.79459895*plane_size+.7159018102*plane_size^2-.2169121784e-1*plane_size^3+.6954194409e-7*plane_size^6-.6502635142e-5*plane_size^5+.4454590000e-3*plane_size^4+.5322908962e-16*plane_size^10+.3350753472e-11*plane_size^8-.1534151681e-13*plane_size^9-.5554268552e-9*plane_size^7+.2669668356e-21*plane_size^12-.1387583660e-18*plane_size^11-.3672162619e-24*plane_size^13+.3412349417e-27*plane_size^14+164.8644626+.4917138554e-34*plane_size^16-.1917481767e-30*plane_size^15
--			create Result.make ((vec.x / divisor) - Plane_size, (vec.y / divisor) - Plane_size)
--			io.put_string("x: ")
--			io.put_double (vec.x)
--			io.put_string(" - ")
--			io.put_double (Result.x)
--			io.put_string("y: ")
--			io.put_double (vec.y)
--			io.put_string(" - ")
--			io.put_double (Result.y)
--			io.put_new_line


			create Result.make ((1350 - vec.x - 669)/30,(vec.y - 718)/30)
		end
		
	calculate_building_height(max_distance, distance: DOUBLE): DOUBLE is
			-- Calculate height of building
		do	
			Result := (max_distance - 2*distance)*(max_building_height/max_distance)		
			
			
			
		end

end -- class SHARED_CONSTANTS
