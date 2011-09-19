note
	description: "Conversion between traffic colors and EiffelVision colors."

class
	COLOR_UTILITY

inherit
	EV_STOCK_COLORS

feature -- Conversion

	ev_color (c: COLOR): EV_COLOR
			-- Color `c' converted to {EV_COLOR}.
		do
			create Result.make_with_8_bit_rgb (c.red, c.green, c.blue)
		ensure
			result_exists: Result /= Void
		end

	traffic_color (c: EV_COLOR): COLOR
			-- Color `c' converted to {COLOR}.
		do
			create Result.make_from_rgb (c.red_8_bit.to_natural_8, c.green_8_bit.to_natural_8, c.blue_8_bit.to_natural_8)
		ensure
			result_exists: Result /= Void
		end

end
