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

	draw is
			-- Draw all houses
		local i: INTEGER
		do
			from i := 1
			until i > houses.count
			loop
				if houses.item (i) /= void then
					houses.item(i).draw	
				end
				i := i + 1
			end
		end
		

	create_houses (n: INTEGER; map: TRAFFIC_MAP) is
			-- Create `n' houses randomly.
		require n_exists_and_positive: n /= void and then n > 0
				map_exists: map /= void
		local
			randomizer: RANDOM
			x_coord, z_coord: DOUBLE
			i, j: INTEGER
			outlying_building_factory: BUILDING_FACTORY
			central_building_factory: BUILDING_FACTORY
			house: EM_3D_OBJECT
			collision_rec: EM_RECTANGLE_COLLIDABLE
			max_distance,distance: DOUBLE
		do
			

			create randomizer.set_seed (42)
			create central_building_factory.make_central
			create outlying_building_factory.make
			create houses.make (1,n+1)
			
			max_distance := sqrt(depth^2 + width^2)
			
			from i := 0; j := 1
			until i > n
			loop
				x_coord := centre.x - (width/2) +  randomizer.double_i_th (j)*width
				z_coord := centre.z - (depth/2) + randomizer.double_i_th (j+1)*depth

				-- ACHTUNG: Origin ist links unten!
				create collision_rec.make_from_position_and_size (create {EM_VECTOR_2D}.make (x_coord+0.1, z_coord+0.1), 0.2,0.2)
				
				if true then -- m.lines.linear_representation.for_all (agent is_free(xr, zr, 0.2, 0.2, ?)) then
					distance := distance_to_centre(create {GL_VECTOR_3D[DOUBLE]}.make_xyz (x_coord,0,z_coord))
					if distance < 3 then
						house := central_building_factory.create_object
					else
						house := outlying_building_factory.create_object
					end
					house.set_origin (x_coord, 0, z_coord)
					house.set_scale (0.2,(max_distance - 2*distance)*(max_height/max_distance),0.2)
					houses.force (house,i)
					i := i + 1
				end
				j := j + 2
			end			
		end
		
	distance_to_centre (p: GL_VECTOR_3D[DOUBLE]): DOUBLE is
				-- Calculates the distance to the centre.
		do
			Result := (sqrt((p.x-centre.x)^2 + (p.z-centre.z)^2))
		end
	
		
	
feature{NONE} -- Variables

	houses: ARRAY[EM_3D_OBJECT]
		-- Array of all houses
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
