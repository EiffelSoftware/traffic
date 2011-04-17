note
	description: "Finite precision comparison for 64-bit reals."

class
	DOUBLE_COMPARISON

feature -- Access
	precision: REAL_64 = 1.e-6
			-- Precision of comparison.

feature -- Basic operations
	approx_equal (x, y: REAL_64): BOOLEAN
			-- Is `x' approximately equal to `y'?
		do
			if is_ind (x) or is_ind (y) then
				Result := is_ind (x) and is_ind (y)
			elseif y = 0.0 then
				Result := x.abs <= precision
			else
				Result := (1.0 - x / y).abs <= precision
			end
		end

	approx_less (x, y: REAL_64): BOOLEAN
			-- Is `x' less than `y' at least by `precision'?
		do
			if y = 0.0 then
				Result := x < -precision
			else
				Result := (y.sign - x / y.abs) > precision
			end
		end

	approx_less_equal (x, y: REAL_64): BOOLEAN
			-- Is `x' less than or approximately equal to `y'?
		do
			Result := (x < y) or approx_equal(x, y)
		end

feature {NONE} -- Implementation

	is_ind (x: REAL_64): BOOLEAN is
			-- Is `x' equal to `-1.IND'?
		do
			Result := - x.abs >= 1.0
		end
end
