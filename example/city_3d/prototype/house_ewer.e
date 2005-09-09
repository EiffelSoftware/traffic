indexing
	description: "Places houses randomly on a plane"
	date: "$Date$"
	revision: "$Revision$"

class
	HOUSE_EWER

inherit
	MATH_CONST
	
	DOUBLE_MATH

create
	make

feature
	
	make (xx, zz, ll, bb, hh: DOUBLE) is
			-- Create a new object.
		do
			x := xx
			z := zz
			l := ll
			b := bb
			h := hh
		end
	
	x, z, l, b, h: DOUBLE
	
	draw (n: INTEGER; m: ARRAY[ARRAY[TUPLE[DOUBLE]]]) is
			-- Draw `n' houses randomly.
		local
			randomizer: RANDOM
			xr, zr: DOUBLE
			i, r: INTEGER
			factory: HOUSE_FACTORY
			house: EM_3D_OBJECT
		do
			create randomizer.set_seed (42)
			create factory.make
			
			from
				i := 0
				r := 0
			until
				i > n
			loop
				xr := x + randomizer.double_i_th (r)*l
				zr := z + randomizer.double_i_th (r+1)*b
				
				if m.for_all (agent is_free(xr, zr, 0.2, 0.2, ?)) then
					house := factory.create_object
				
					house.set_origin (xr, 0, zr)
					house.set_scale (0.2, 0.2, 0.2)
					house.draw
				end
				
				i := i + 1
				r := r + 2
			end
		end
	
	is_free (xx, zz, ll, bb: DOUBLE; m: ARRAY[TUPLE[DOUBLE]]): BOOLEAN is
			-- Is this area not on this metro line?
		local
			v, n: INTEGER
		do
			from
				v := 1
				n := 2
			until
				v = m.count
			loop
				v := v + 1
				n := n + 1
			end
			Result := True
		end
	
end -- class HOUSE_EWER
