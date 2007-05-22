indexing
	description: "Some shared constants"
	date: "$Date: 2005/09/26 11:22:45 $"
	revision: "$Revision: 1.23 $"

class
	TRAFFIC_3D_CONSTANTS

feature -- Constants

--	Building_directory: STRING is "..\buildings"

--	Building_files: ARRAY [STRING] is
--			-- Location of the building templates
--		once
--			Result := << 	"building1.obj", "building_night1.obj", "building2.obj", "building_night2.obj",
--							"building3.obj", "building_night3.obj", "building4.obj", "building_night4.obj" >>
--		end

--	Hours_per_day: INTEGER is 24
--			-- Hours.

--	Minutes_per_hour: INTEGER is 60
--			-- Minutes

--	minutes_per_day: INTEGER is
--		do
--			Result := Hours_per_day * Minutes_per_hour
--		end

--	Seconds_per_minute: INTEGER is 60
--			-- Virtual Seconds.

--	Milliseconds_per_second: INTEGER is 1000
--			-- Milliseconds.

--	Building_width: DOUBLE is 0.2
			-- Width of the quadratic (!) base of the building.

--	Max_building_height: DOUBLE is 1.0
			-- Maximum height of buildings.


--	Traffic_window_width: INTEGER is 800 -- 1000 -- 1024
--			-- Window width.

--	Traffic_window_height: INTEGER is 600 -- 768
--			-- Window height.

--	Traffic_screen_resolution: INTEGER is 32
--			-- Screen resolution.

--	Fullscreen: BOOLEAN is False
--			-- Fullscreen?

	Line_width: DOUBLE is 7.0
			-- Width of the line representation on the map.


--	Line_height: DOUBLE is 0.01
--			-- Height of the line representation on the map.

--	Line_depth: DOUBLE is 0.2
--		
	-- Depth of the line representation on the map.

--	road_width: DOUBLE is 0.15
			-- Width of the line representation on the map.

--	road_height: DOUBLE is 0.01
--			-- Height of the line representation on the map.

--	road_depth: DOUBLE is 0.2
--			-- Depth of the line representation on the map.

--	Place_width: DOUBLE is 0.075
--			-- Width of the place representation on the map.

--	Place_height: DOUBLE is 0.02
--			-- Height of the place representation on the map.

--	Place_depth: DOUBLE is 0.2
--			-- Depth of the place representation on the map.

--	Station_radius: DOUBLE is
--			-- Radius of a station on the map.
--		do
--			Result := 2*line_width
--		end

--	map_to_gl_coords (vec: EM_VECTOR_2D): EM_VECTOR_2D is
--			-- Transform map coordinates to the ones used by OpenGL.
--		require
--			vec /= void
--		do
--			-- (669,718) are the coordinates of the HB, where the centre is.
--			create Result.make ((1350 - vec.x - 669)/30,(1420 - vec.y - 718)/30)
--		end

--	gl_to_map_coords (vec: EM_VECTOR_2D): EM_VECTOR_2D is
--			-- Transform coordinates used by OpenGL to map coordinates
--		require
--			vec /= void
--		do
--			-- (669,718) are the coordinates of the HB, where the centre is.
--			create Result.make (1350 - 30*vec.x - 669, 1420 - 30*vec.y - 718)
--		end

--	calculate_building_height (max_distance, distance: DOUBLE): DOUBLE is
--			-- Calculate height of a building.
--		do
--			Result := (max_distance - 2*distance)*(max_building_height/max_distance)
--		end

end
