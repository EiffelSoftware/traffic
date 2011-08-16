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
	make_in_city (a_mover: MOBILE; a_city_view: CITY_VIEW)
		do
			mover := a_mover
			city_view := a_city_view

			create blob
			blob.set_width (width)
			blob.set_height (width)
			blob.set_radius (3)

			if attached {TRAM} a_mover as tram then
				blob.set_background_color (ev_color (tram.line.color))
			else
				blob.set_background_color (Red)
			end


			city_view.world.extend (blob)

			update
		end

	width: INTEGER = 12
	mover: MOBILE
	blob: EV_MODEL_ROUNDED_RECTANGLE

	ev_color (c: COLOR): EV_COLOR
			-- Color `c' converted to {EV_COLOR}.
		do
			create Result.make_with_8_bit_rgb (c.red, c.green, c.blue)
		ensure
			result_exists: Result /= Void
		end

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
