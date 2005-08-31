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

feature -- Initialization
	
	make (x, z, d, w, max_h: DOUBLE) is
			-- create a new object
		require values_valid: x /= void and then z /= void and then d /= void and then w /= void and then max_h /= void
		do
			create centre.make_xyz (x+d/2,0,z+w/2)
			width := w
			depth := d
			max_height := max_h
			
		ensure 
			values_set_correctly: width = w and depth = d and max_height = max_h
			centre_set: centre.x = x + d/2 and centre.z = z + w/2
		end
		

feature -- Drawing	

	draw (n: INTEGER; map: TRAFFIC_MAP) is
			-- Draw `n' houses randomly.
		require n_exists_and_positive: n /= void and then n > 0
				map_exists: map /= void
		local
			randomizer: RANDOM
			x_coord, z_coord: DOUBLE
			i, j: INTEGER
			building_factory: BUILDING_FACTORY
			house: EM_3D_OBJECT
			max_distance,distance: DOUBLE
		do
			max_distance := sqrt(depth^2 + width^2)
			create randomizer.set_seed (42)
			create building_factory.make
			from
				i := 0
				j := 1
			until
				i > n
			loop
				x_coord := centre.x - (width/2) +  randomizer.double_i_th (j)*width
				z_coord := centre.z - (depth/2) + randomizer.double_i_th (j+1)*depth
				
--				if m.lines.linear_representation.for_all (agent is_free(xr, zr, 0.2, 0.2, ?)) then
					
					distance := distance_to_centre(create {GL_VECTOR_3D[DOUBLE]}.make_xyz (x_coord,0,z_coord))
--					io.put_double((max_distance - distance_to_centre(create {GL_VECTOR_3D[DOUBLE]}.make_xyz (x_coord,0,z_coord)))*(0.5/14))
--					io.put_new_line
					
					if distance < 1 then
						building_factory.set_central
					else
						building_factory.set_outlying
					end
					house := building_factory.create_object
					house.set_origin (x_coord, 0, z_coord)
					house.set_scale (0.2,(max_distance - 2*distance)*(max_height/max_distance),0.2)
					house.draw
--				end
				i := i + 1
				j := j + 2
			end			
		end
		
	distance_to_centre (p: GL_VECTOR_3D[DOUBLE]): DOUBLE is
				-- Calculates the distance to the centre.
		do
			Result := (sqrt((p.x-centre.x)^2 + (p.z-centre.z)^2))
		end
	
		
	
feature{NONE} -- Variables

	centre: GL_VECTOR_3D[DOUBLE]
		-- Centre of town
	coords: GL_VECTOR_3D[DOUBLE]
		-- Edge coordinates of plane
	width: DOUBLE
		-- width of plane
	depth: DOUBLE
		-- depth of plane
	max_height: DOUBLE
		-- Maximum height of buildings
	
	
	is_free (xx, zz, ll, bb: DOUBLE; line: TRAFFIC_LINE): BOOLEAN is
			-- Is this area not on this traffic line?
		local
--			f, t: INTEGER
		do
--			from
--				f := 1
--				t := 2
--			until
--				f = line.count
--			loop
--				f := f + 1
--				t := t + 1
--			end
			Result := True
		end
		
end -- class BUILDING_EWER
