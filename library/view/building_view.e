note
	description: "Grpahical representation of a building."

class
	BUILDING_VIEW

inherit
	VIEW

create
	make_in_city

feature {NONE} -- Initialization

	make_in_city (a_building: BUILDING; a_map: MAP)
			-- Create representation of `a_building' and add it to `a_map'.
		require
			a_map_exists: a_map /= Void
			a_map_has_building: a_map.city.buildings.has (a_building)
		do
			building := a_building
			map := a_map
			create blob
			blob.set_background_color (Color)
			blob.set_foreground_color (Color)
			a_map.world.extend (blob)
			update

			make_actions
			subscribe_model (blob)
		end

feature -- Access

	building: BUILDING
			-- Underlying model.

feature -- Status setting

	highlight
			-- Make visually distinct.
		do
			is_highlighted := True
			blob.set_foreground_color (Highlight_color)
			blob.set_line_width (5)
		end

	unhighlight
			-- Return to normal view.
		do
			is_highlighted := False
			blob.set_foreground_color (Color)
			blob.set_line_width (1)
		end

feature -- Basic operations

	update
			-- Update according to the state of `building'.
			-- and bring to foreground of the map.
		local
			point_a, point_b: EV_COORDINATE
		do
			point_a := map.world_coordinate (building.corner_a)
			point_b := map.world_coordinate (building.corner_b)
			blob.set_point_a_position (point_a.x, point_a.y)
			blob.set_point_b_position (point_b.x, point_b.y)

			map.world.bring_to_front (blob)
		end

	remove_from_map
			-- Remove station representation from `map'.
		do
			map.world.prune_all (blob)
		end

feature -- Parameters

	Color: EV_COLOR
			-- Building color.
		once
			create Result.make_with_rgb (0.8, 0.8, 0.8)
		end


feature {NONE} -- Implementation

	blob: EV_MODEL_RECTANGLE
			-- Rectangle depicting the building.

invariant
	building_exists: building /= Void
	blob_exists: blob /= Void
end
