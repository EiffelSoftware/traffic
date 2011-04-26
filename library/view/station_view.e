note
	description: "Graphical representation of a station."

class
	STATION_VIEW

inherit {NONE}
	EV_STOCK_COLORS
		export
			{NONE} all
		end

create
	make_in_city

feature {NONE} -- Initialization

	make_in_city (a_station: STATION; a_map: CITY_VIEW)
			-- Create representation of `a_station' and add it to `a_map'.
		require
			a_map_exists: a_map /= Void
			a_map_has_station: a_map.city.stations.has (a_station)
		local
			blob: EV_MODEL_ROUNDED_RECTANGLE
			label_background: EV_MODEL_RECTANGLE
			label: EV_MODEL_TEXT
		do
			station := a_station
			create blob.make_with_points (
				a_map.world_coordinate (station.position - [Radius, Radius]),
				a_map.world_coordinate (station.position + [Radius, Radius]))
			blob.set_radius (blob.width // 4)
			blob.set_background_color (White)
			a_map.world.extend (blob)
			create label.make_with_text (station.name)
			label.set_x_y (blob.point_b_x + label.width // 2, blob.point_a_y - label.height // 2)
			create label_background.make_rectangle (label.point_x, label.point_y, label.width, label.height)
			label_background.set_foreground_color (White)
			label_background.set_background_color (White)
			a_map.world.extend (label_background)
			a_map.world.extend (label)
		end

feature -- Access

	station: STATION
			-- Underlying model.

feature {NONE} -- Implementation

	Radius: REAL_64 = 10.0
			-- Radius of the blob.

end
