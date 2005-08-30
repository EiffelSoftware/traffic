indexing
	description: "Places buildings randomly on a plane"
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	BUILDING_EWER

inherit
	MATH_CONST
	
	DOUBLE_MATH

create
	make

feature
	
	make (xx, zz, ll, bb, hh: DOUBLE) is
			-- create a new object
		do
			x := xx
			z := zz
			l := ll
			b := bb
			h := hh
		end
	
	x, z, l, b, h: DOUBLE
	
	draw (n: INTEGER; m: TRAFFIC_MAP) is
			-- draw `n' houses randomly
		local
			randomizer: RANDOM
			xr, zr: DOUBLE
			i, r: INTEGER
			factory: BUILDING_FACTORY
			house: EM_3D_OBJECT
		do
			create randomizer.set_seed (42)
			create factory.make
			
			from
				i := 0
				r := 1
			until
				i > n
			loop
				xr := x + randomizer.double_i_th (r)*l
				zr := z + randomizer.double_i_th (r+1)*b
				
--				if m.lines.linear_representation.for_all (agent is_free(xr, zr, 0.2, 0.2, ?)) then
					house := factory.create_object
					
					house.set_origin (xr, 0, zr)
					house.set_scale (0.2, 0.2, 0.2)
					house.draw
--				end
				
				i := i + 1
				r := r + 2
			end
			
		end
	
	is_free (xx, zz, ll, bb: DOUBLE; line: TRAFFIC_LINE): BOOLEAN is
			-- Is this area not on this traffic line?
		local
			f, t: INTEGER
		do
			from
				f := 1
				t := 2
			until
				f = line.count
			loop
				f := f + 1
				t := t + 1
			end
			Result := True
		end
		
end -- class BUILDING_EWER
