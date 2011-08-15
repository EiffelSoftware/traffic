note
	description: "Visualization of a MOVER."

class
	MOVER_VIEW

inherit
	EV_STOCK_COLORS
		export
			{NONE} all
		end

create
	make_in_city

feature
	make_in_city (a_mover: MOVER; a_city_view: CITY_VIEW)
		do
			mover := a_mover
			city_view := a_city_view

			create blob
			blob.set_width (width)
			blob.set_height (width)
			blob.set_radius (1)
			blob.set_background_color (Red)

			city_view.world.extend (blob)

			update
		end

	width: INTEGER = 50
	mover: MOVER
	blob: EV_MODEL_ROUNDED_RECTANGLE

	update
		local
			point: EV_COORDINATE
		do
			point := city_view.world_coordinate (mover.position)
			blob.set_x_y (point.x, point.y)
		end

	remove_from_city
		do
			city_view.world.prune (blob)
		end

feature -- Internal
	city_view: CITY_VIEW

end
