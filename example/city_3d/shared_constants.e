indexing
	description: "Some shared constants"
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	SHARED_CONSTANTS

feature -- Constants

	Plane_size: DOUBLE is 14.0
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
		do
			create Result.make ((vec.x / 50) - Plane_size, (vec.y / 50) - Plane_size)		
		end
		

end -- class SHARED_CONSTANTS
