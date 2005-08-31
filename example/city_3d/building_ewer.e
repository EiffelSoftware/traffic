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
	
	SHARED_CONSTANTS

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
			until i > buildings.count
			loop
				if buildings.item (i) /= void then
					buildings.item(i).draw	
				end
				i := i + 1
			end
		end

	create_buildings (n: INTEGER; map: TRAFFIC_MAP) is
			-- Create `n' buildings randomly.
		require n_exists_and_positive: n /= void and then n > 0
				map_exists: map /= void
		local
			randomizer: RANDOM
			x_coord, z_coord: DOUBLE
			i, j: INTEGER
			outlying_building_factory: BUILDING_FACTORY
			central_building_factory: BUILDING_FACTORY
			building: EM_3D_OBJECT
			collision_rec: EM_RECTANGLE_COLLIDABLE
			max_distance,distance: DOUBLE
		do
			create_collidable_pieces (map)
			create randomizer.set_seed (42)
			create central_building_factory.make_central
			create outlying_building_factory.make
			create buildings.make (1,n+1)
			
			max_distance := sqrt(depth^2 + width^2)
			
			from i := 0; j := 1
			until i > n
			loop
				x_coord := centre.x - (width/2) +  randomizer.double_i_th (j)*width
				z_coord := centre.z - (depth/2) + randomizer.double_i_th (j+1)*depth

				-- ACHTUNG: Origin ist links unten!
				create collision_rec.make_from_position_and_size (create {EM_VECTOR_2D}.make (x_coord+0.1, z_coord+0.1), 0.2,0.2)
				
				if collidable_pieces.for_all (agent collides_with_piece (collision_rec, ?)) then
					distance := distance_to_centre(create {GL_VECTOR_3D[DOUBLE]}.make_xyz (x_coord,0,z_coord))
					if distance < 3 then
						building := central_building_factory.create_object
					else
						building := outlying_building_factory.create_object
					end
					building.set_origin (x_coord, 0, z_coord)
					building.set_scale (0.2,(max_distance - 2*distance)*(max_height/max_distance),0.2)
					buildings.force (building,i)
					i := i + 1
				end
				j := j + 2
			end			
		end
	
	collides_with_piece (r: EM_RECTANGLE_COLLIDABLE; other: EM_RECTANGLE_COLLIDABLE): BOOLEAN is
			-- Does the rectangle collide with the line piece?
		do
			Result := r.collides_with (other)
		end
		
	collidable_pieces: ARRAYED_LIST[EM_RECTANGLE_COLLIDABLE]
	
	create_collidable_pieces (map: TRAFFIC_MAP) is
			-- Create a list of collidable pieces.
		require
			map_exists: map /= Void
		local
			lines: ARRAYED_LIST[TRAFFIC_LINE]
			line: TRAFFIC_LINE
			section: TRAFFIC_LINE_SECTION
			collidable: EM_RECTANGLE_COLLIDABLE
			f, t: INTEGER
			delta_x, delta_y: DOUBLE
			norm: DOUBLE
			pf, pt: EM_VECTOR_2D
		do
			lines := map.lines.linear_representation
			create collidable_pieces.make (0)
			
			from
				lines.start
			until
				lines.after
			loop
				line := lines.item
				
				from
					line.start
				until
					line.after
				loop
					section := line.item
					
					from
						f := 1
						t := 2
					until
						f >= section.polypoints.count
					loop
						pf := section.polypoints.i_th (f)
						pt := section.polypoints.i_th (t)
						
						delta_x := pf.x - pt.x
						delta_y := pf.y - pt.y
						
						norm := sqrt (delta_x^2 + delta_y^2)
						
--						draw_plane (create {GL_VECTOR_3D[DOUBLE]}.make_xyz (p.x-delta_z*line_width/norm,p.y,p.z+delta_x*line_width/norm), create {GL_VECTOR_3D[DOUBLE]}.make_xyz (p.x+delta_z*line_width/norm,p.y,p.z-delta_x*line_width/norm), create {GL_VECTOR_3D[DOUBLE]}.make_xyz (q.x+delta_z*line_width/norm,q.y,q.z-delta_x*line_width/norm) ,create {GL_VECTOR_3D[DOUBLE]}.make_xyz (q.x-delta_z*line_width/norm,q.y,q.z+delta_x*line_width/norm))
						
						create collidable.make (create {EM_VECTOR_2D}.make (pf.x-delta_y*line_width/norm, pf.y+delta_x*line_width/norm), create {EM_VECTOR_2D}.make (pt.x+delta_y*line_width/norm, pt.y-delta_x*line_width/norm))
						
						collidable_pieces.force (collidable)
						
						f := f + 1
						t := t + 1
					end
					
					line.forth
				end
				lines.forth
			end
		end
		
	distance_to_centre (p: GL_VECTOR_3D[DOUBLE]): DOUBLE is
				-- Calculates the distance to the centre.
		do
			Result := (sqrt((p.x-centre.x)^2 + (p.z-centre.z)^2))
		end
	
feature{NONE} -- Variables

	buildings: ARRAY[EM_3D_OBJECT]
		-- Array of all buildings
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
		
end -- class BUILDING_EWER
