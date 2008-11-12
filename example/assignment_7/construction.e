indexing
	description: "Construction class (Assignment 7)"
	date: "$Date$"
	revision: "$Revision$"

class
	CONSTRUCTION

inherit

	TOURISM

feature -- Explore Paris

	build is
			-- Build trams and connecting lines.
		do
			Paris.display
			wait

			-- To be filled in
		end

	generate_buildings_along_segment (a_segment: TRAFFIC_ROAD_SEGMENT) is
			-- Generate building along a segment.
		require
			a_segment_exists: a_segment /= Void
		do
			-- To implement by you

			-- For task 1.5: Use the conditional below
			-- if you only want to put buildings when
			-- it doesn't collide with other buildings or lines:
			--
			-- if not grid.has_rectangle_collision (building_coordinate, 18.0, 16.0)  then
			--		-- Create and add building
			-- end
		end

	generate_buildings is
			-- Generate buildings along all roads.
		do
			-- To implement by you
		end

	fill_grid is
			-- Create and fill grid (for task 1.5).
		local
			l: TRAFFIC_LINE_SEGMENT
		do
			create grid.make (200, Paris.center, Paris.radius)
			from
				Paris.line_segments.start
			until
				Paris.line_segments.after
			loop
				l := Paris.line_segments.item_for_iteration
				grid.mark_polyline (l.polypoints, 7.0, True)
				Paris.line_segments.forth
			end
		ensure
			grid_exists: grid /= Void
		end

	grid: TRAFFIC_GRID
			-- Grid storing occupied fields in the city


end
