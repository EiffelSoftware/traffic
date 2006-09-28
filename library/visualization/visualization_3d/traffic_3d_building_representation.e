indexing
	description: "Object that represents traffic buildings"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_3D_BUILDING_REPRESENTATION

inherit
	EM_CONSTANTS
		 export {NONE} all end
	
	GL_FUNCTIONS
		export {NONE} all end	
		
	GLU_FUNCTIONS
		export {NONE} all end
	
	TRAFFIC_3D_CONSTANTS
		export {NONE} all end
	
	MATH_CONST
		export {NONE} all end
		
	DOUBLE_MATH
		export {NONE} all end

--new
	EM_SHARED_BITMAP_FACTORY
		export {NONE} all end

creation
	make

feature -- Initialization

	make is
			-- Create a new object and set the representation method for the factory
		local
			texture_ids: ARRAY[INTEGER]
			building: EM_3D_OBJECT
			traffic_model: NEW_TRAFFIC_MODEL
			bitmap: EM_BITMAP
			i: INTEGER
		do
			create building_factory.make
			create buildings.make (1)
			create wall_color.make_xyz (0.5,0.5,0.5)
			create roof_color.make_xyz (1.0,0,0)
			create random.make
			random.start
			id_counter := 1
			building_factory.add_building_type (agent create_building_type, building_type)
			building_factory.add_gauger(agent decide_building_type, decision_type)
			building_factory.take_decision(decision_type)
			
			--new
			
			create model_ressources.make (0)
			
			from
				i := 1
			until
				i > building_count
			loop
				bitmap_factory.create_bitmap_from_image("buildings/building" + i.out +".tga")
				bitmap := bitmap_factory.last_bitmap
				create texture_ids.make (0,0)
				texture_ids.force (bitmap.texture.id, 0)
				building_factory.set_texture_id (texture_ids)
				
				building_factory.load_file("buildings/building" + i.out + ".obj")
				building := building_factory.create_object
				
				create traffic_model.make
				traffic_model.set_model(building)
				traffic_model.set_bounding_box (building.width, building.height, building.depth)
				traffic_model.set_texture_id (texture_ids)
				traffic_model.add_texture (bitmap)
				
				model_ressources.extend (traffic_model)
				
				i := i + 1
			end
		
			
		end
		
feature	-- Drawing

	draw is
			-- Draw all buildings.
		
		local				
			i:INTEGER
		do
			if not (buildings = void and number_of_buildings <= 0) then
				from
					i := 1
				until
					i > number_of_buildings
				loop
					buildings.i_th(i).draw
					i := i+1
				end
			end
		end
		
		
	highlight_building(a_building: TRAFFIC_BUILDING) is
			-- highlight `a_building'
		
		require
			building_valid: a_building /= void
		local
			temp: EM_3D_OBJECT
		do
			-- set color to highlighted values
			wall_color.set_xyz (1.0,1.0,0)
			roof_color.set_xyz (0,1.0,1.0)
			-- display list is changed
			building_factory.take_decision (decision_type)
			
			-- creat new temporary building with same attributes as a_building
			temp := building_factory.create_object
			temp.set_scale (a_building.width,a_building.height,a_building.breadth)
			temp.set_rotation (0,a_building.angle,0)
			temp.set_origin (a_building.center.x, 0, a_building.center.y)
			
			-- replace a_building with temporary building, so that this is drawn instead
			buildings.go_i_th (a_building.id)
			buildings.replace (temp)
			
			-- set color back to normal values
			wall_color.set_xyz (0.5,0.5,0.5)
			roof_color.set_xyz (1.0,0,0)
--			building_factory.changed
			building_factory.take_decision (decision_type)
		end
		
		
	un_highlight_building(a_building: TRAFFIC_BUILDING) is
			-- unhighlight `a_building'
		
		require
			building_valid: a_building /= void
		local
			temp: EM_3D_OBJECT
		do
			-- creat new temporary building with same attributes as a_building
			temp := building_factory.create_object
			temp.set_scale (a_building.width, a_building.height, a_building.breadth)
			temp.set_rotation (0, a_building.angle, 0)
			temp.set_origin (a_building.center.x, 0, a_building.center.y)
			
			-- replace a_building with temporary building, so that this is drawn instead
			buildings.go_i_th (a_building.id)
			buildings.replace (temp)
		end
		
		
feature -- Options

	add_building (a_building: TRAFFIC_BUILDING) is
			-- add `a_building' to representation
		
		require
			building_valid: a_building /= Void
		local
			building: NEW_TRAFFIC_MODEL
		do
			random.forth
			
			building := model_ressources.i_th((random.double_item*(building_count-1).to_double).rounded +1).twin
			
			building.set_scale (a_building.width, a_building.height, a_building.breadth)
			building.set_rotation (0, a_building.angle, 0)
			building.set_origin (a_building.center.x, 0, a_building.center.y)
			
			a_building.set_id(id_counter)
			id_counter := id_counter + 1
			buildings.force (building)
			map.add_building (a_building)
			number_of_buildings := number_of_buildings + 1
			
		end
				
		
	delete_buildings is
			-- Delete buildings from representation.
		do
			buildings.wipe_out
			number_of_buildings:= 0
			id_counter:=1
			if map /= void then
				map.delete_buildings
			end
		end
		
	delete_one_building(a_building: TRAFFIC_BUILDING) is
			-- Delete the building 'a_building' from the building list.
		local
			a_building_origin: EM_3D_VECT
		do
			a_building_origin.set (a_building.center.x, 0, a_building.center.y)
			
			from
				buildings.start
			until
				buildings.after
			loop
				if	
					a_building_origin = buildings.item.origin 
				then
					buildings.remove
					buildings.back
				end
				buildings.forth
			end
			
			map.remove_one_building (a_building)
			number_of_buildings := number_of_buildings - 1
		end
		
	set_building_number (n: INTEGER) is
			-- Set the number of buildings that are shown.
		require
			n_valid: n >= 0
		do
			number_of_buildings:= n
		ensure
			number_of_buildings = n
			buildings.count >= number_of_buildings
		end
		
	set_map (a_map: TRAFFIC_MAP) is
			-- set map to `a_map'
		
		require 
			map_exists: a_map /= Void
		do
			map := a_map
		ensure
			map_set: map = a_map
		end		
		
			
feature {NONE} -- Decision features
	
	create_building_type is
		-- Create a building.
	
	do
		--Front			
		gl_begin(Em_gl_polygon)
			gl_color3dv(wall_color.pointer)
			gl_normal3b(0,0,1)
			gl_vertex3d(0.5,0,-0.5)
			gl_vertex3d(-0.5,0,-0.5)
			gl_vertex3d(-0.5,1,-0.5)
			gl_vertex3d(0,1.25,-0.5)
			gl_vertex3d(0.5,1,-0.5)
		gl_end
		
		--Back	
		gl_begin(Em_gl_polygon)
			gl_normal3b(0,0,-1)
			gl_vertex3d(0.5,0,0.5)
			gl_vertex3d(-0.5,0,0.5)
			gl_vertex3d(-0.5,1,0.5)
			gl_vertex3d(0,1.25,0.5)
			gl_vertex3d(0.5,1,0.5)
		gl_end
		
		gl_begin(Em_gl_quads)
			
			--Left	
			gl_normal3b(1,0,0)
			gl_vertex3d(0.5,0,-0.5)				
			gl_vertex3d(0.5,1,-0.5)
			gl_vertex3d(0.5,1,0.5)				
			gl_vertex3d(0.5,0,0.5)

			--Right
			gl_normal3b(-1,0,0)
			gl_vertex3d(-0.5,0,-0.5)				
			gl_vertex3d(-0.5,1,-0.5)
			gl_vertex3d(-0.5,1,0.5)				
			gl_vertex3d(-0.5,0,0.5)
			
			--Roof right
			gl_color3dv(roof_color.pointer)
			gl_normal3d(-0.5,1,0)
			gl_vertex3d(-0.5,1,-0.5)	
			gl_vertex3d(-0.5,1,0.5)
			gl_vertex3d(0,1.25,0.5)
			gl_vertex3d(0,1.25,-0.5)
			
			-- Roof left
			gl_normal3d(0.5,1,0)
			gl_vertex3d(0.5,1,-0.5)	
			gl_vertex3d(0,1.25,-0.5)
			gl_vertex3d(0,1.25,0.5)
			gl_vertex3d(0.5,1,0.5)
			
		gl_end		
		
	end 	
	
	decide_building_type: STRING is
			-- decide which type of place is chosen.
		do
			Result := building_type
		end

feature -- Decision attributes

	building_type: STRING is "building_place"
	 
	decision_type: STRING is "standard"
			
feature {NONE} -- Attributes

	number_of_buildings: INTEGER
			-- Count of buildings in the representation

	buildings: ARRAYED_LIST [EM_3D_OBJECT]
			-- Buildings in the representation
	
	building_factory: NEW_TRAFFIC_BUILDING_FACTORY
			-- Factory for buildings

	wall_color: GL_VECTOR_3D[DOUBLE]
			-- Color of the walls
	
	roof_color: GL_VECTOR_3D[DOUBLE]
			-- Color of the roof	
			
	map: TRAFFIC_MAP
			-- Map to which the representation belongs

	id_counter: INTEGER
			-- Counter for the ids
	
	model_ressources: ARRAYED_LIST[NEW_TRAFFIC_MODEL]
	
	random: RANDOM
			-- randomizer
			
	building_count: INTEGER is 5
			-- how many differnt building models are available
	
end
