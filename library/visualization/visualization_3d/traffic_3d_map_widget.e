indexing
	description: "[
					Map widget to display the map in 3D.
					Inherit from this class and add events to handle the map
					]"
	date: "$Date: 2006/03/02 18:57:05 $"
	revision: "$Revision: 1.26 $"

class TRAFFIC_3D_MAP_WIDGET

inherit

	TRAFFIC_MAP_WIDGET

	EM_COMPONENT
		--redefine
			--prepare_drawing
		--end

	TRAFFIC_3D_CONSTANTS
		export {NONE} all end

	MATH_CONST
		export {NONE} all end

	DOUBLE_MATH
		export {NONE} all end

	TRAFFIC_SHARED_TIME

	GL_FUNCTIONS
		export {NONE} all end

	GLU_FUNCTIONS
		export {NONE} all end

	EM_GL_CONSTANTS
		export {NONE} all end

	TE_3D_SHARED_GLOBALS

create
	make

feature -- Initialisation

	make is
			-- Initialize the map widget.
		local
			green_material: TE_MATERIAL_SIMPLE
			primitive_factory: TE_3D_MEMBER_FACTORY_PRIMITIVE
		do
			make_component

			set_keyboard_sensitive (True)
			set_width (600)
			set_height (600)

			-- Variable initialization
			x_coord := 0
			y_coord := -1

			-- Create the Sun Representation and Sun Light and shadow_pass
			create sun_representation.make
			disable_shadows

			--DEBUG --create 3d coordinates object
--			coordinates := (create{TE_3D_SHARED_GLOBALS}).scene_importer.import_3d_scene("..\objects\coordinates.obj");
--			(create{TE_3D_SHARED_GLOBALS}).root.add_child(coordinates)
			--/DEBUG

			--create the plane
			create green_material.make
			green_material.set_color(0.25,0.7,0.06) --(0.45,0.9,0.16)
			create primitive_factory.make
			primitive_factory.set_material(green_material)
			primitive_factory.create_simple_plane(plane_size, plane_size)
			plane := primitive_factory.last_3d_member; --<- I NEED A `;' HAHA :D
			(create{TE_3D_SHARED_GLOBALS}).root.add_child(plane)

			mouse_clicked_event.subscribe (agent publish_mouse_event (?))
			create building_clicked_event.default_create
			create place_clicked_event
			create buildings_representation.make

			building_id:= 1

		ensure
			sun_repr_created: sun_representation /= Void
		end

feature -- Status report

	is_map_hidden: BOOLEAN
			-- Is the map currently hidden?

	is_sun_shown: BOOLEAN
			-- Is the sun displayed?

	are_shadows_enabled: BOOLEAN
			-- are shadows enabled?

	are_buildings_shown: BOOLEAN
			-- Are the buildings displayed?

	are_lines_shown: BOOLEAN
			-- Are the lines displayed?

	are_roads_shown: BOOLEAN
			-- Are the roeads displayed?

	is_shortest_path_shown: BOOLEAN
			-- Is the shortest path shown?

	is_map_loaded: BOOLEAN
			-- Is there a loaded map?

feature -- Status setting

	enable_map_hidden is
			-- Set `is_map_hidden' to `True'.
		do
			is_map_hidden := True
		ensure
			map_hidden: is_map_hidden
		end

	disable_map_hidden is
			-- Set `is_map_hidden' to `False'.
		do
			is_map_hidden := False
		ensure
			map_not_hidden: not is_map_hidden
		end

	enable_sun_shown is
			-- Set `is_sun_shown' to `True'.
		do
			is_sun_shown := True
		ensure
			sun_shown: is_sun_shown = True
		end

	disable_sun_shown is
			-- Set `is_sun_shown' to `False'.
		do
			is_sun_shown := False
		ensure
			sun_not_shown: is_sun_shown = False
		end

	enable_shadows is
			-- enables shadows
		do
			are_shadows_enabled := true
			sun_representation.enable_shadows
		end

	disable_shadows is
			-- enables shadows
		do
			are_shadows_enabled := false
			sun_representation.disable_shadows
		end

	enable_buildings_shown is
			-- Set `are_buildings_shown' to `True'.
		do
			are_buildings_shown := True
		ensure
			buildings_shown: are_buildings_shown = True
		end

	disable_buildings_shown is
			-- Set `are_buildings_shown' to `False'.
		do
			are_buildings_shown := False
		ensure
			buildings_not_shown: are_buildings_shown = False
		end

	enable_lines_shown is
			-- Set `are_lines_shown' to `True'.
		do
			are_lines_shown := True
			lines_representation.unhide
		ensure
			lines_shown: are_lines_shown = True
		end

	disable_lines_shown is
			-- Set `are_lines_shown' to `False'.
		do
			are_lines_shown := False
			lines_representation.hide
		ensure
			lines_not_shown: are_lines_shown = False
		end

	enable_roads_shown is
			-- Set `are_roads_shown' to `True'.
		do
			are_roads_shown := True
			roads_representation.unhide
		end

	disable_roads_shown is
			-- Set `are_lines_shown' to `False'.
		do
			are_roads_shown := False
			roads_representation.hide
		end

	enable_shortest_path_shown is
			-- Set `is_shortest_path_shown' to `True'.
		do
			is_shortest_path_shown := True
		ensure
			shortest_path_shown: is_shortest_path_shown = True
		end

	disable_shortest_path_shown is
			-- Set `is_shortest_path_shown' to `False'.
		do
			is_shortest_path_shown := False
		ensure
			shortest_path_not_shown: is_shortest_path_shown = False
		end

feature -- Access

	coordinates: TE_3D_NODE

	travelers_representation: TRAFFIC_3D_TRAVELER_REPRESENTATION
		-- Representation for all travelers

	lines_representation: TRAFFIC_3D_LINE_REPRESENTATION
		-- Representation for all lines

	roads_representation: TRAFFIC_3D_ROAD_REPRESENTATION
		-- Representation for all roads

	places_representation: TRAFFIC_3D_PLACE_REPRESENTATION
		-- Representation for all places

	buildings_representation: TRAFFIC_3D_BUILDING_REPRESENTATION
		-- Representation for all buildings				

	sun_representation: TRAFFIC_3D_SUN_REPRESENTATION
		-- Representation for the sun & sunlight

	paths_representation: TRAFFIC_3D_PATH_REPRESENTATION
		-- Representation for all paths

feature -- Basic operations

	prepare_drawing is
			-- Prepare for drawing.
		do
			if Video_subsystem.video_surface.is_opengl_blitting_enabled then
				Video_subsystem.video_surface.disable_opengl_blitting
				gl_tex_envi (Em_gl_texture_env, Em_gl_texture_env_mode, Em_gl_modulate)
			end
			gl_viewport_external (x, Video_subsystem.video_surface.height - height - y, width, height)
		end

	draw is
			-- Draw the map.
		do
			-- Enable Sunlight and draw Sun
			if is_map_loaded then
				sun_representation.update
				travelers_representation.update
				buildings_representation.update
			end

			renderpass_manager.render
		end

	finish_drawing is
			-- finish drawing
		do
			--nothing
		end


	set_map (a_map: TRAFFIC_MAP) is
			-- Use `a_map' to be displayed.
		do
			map := a_map
			if map /= Void then
				is_map_loaded := True
				buildings_representation.delete_buildings
				create places_representation.make (map)
				create lines_representation.make (map)
				create roads_representation.make (map)
				create travelers_representation.make (map)
				create paths_representation.make (map)

				buildings_representation.set_map(a_map)
			else
				-- Todo remove everything
			end
		end

	add_buildings_randomly (n: INTEGER) is
			-- Adds randomly `n' buildings to map.		
		require
			n_not_negative: n >= 0
		local
			local_x_coord, local_y_coord: DOUBLE -- cooridnates of the building center
			i, j: INTEGER
			angle: DOUBLE -- random number between -45 and 45
			stretch_factor_x, stretch_factor_y: DOUBLE
			building: TRAFFIC_BUILDING
			poly_points: DS_LINKED_LIST[EM_VECTOR_2D]
			old_number: INTEGER
			collision_poly: EM_POLYGON_CONVEX_COLLIDABLE
			p1,p2,p3,p4: EM_VECTOR_2D
			center: EM_VECTOR_2D
			angle_randomizer: RANDOM
			randomizer: RANDOM
		do
			create angle_randomizer.set_seed(45)
			create randomizer.set_seed (42)
			old_number := 0

			-- set stretch factor
			stretch_factor_x := .25
			stretch_factor_y := .25

			from
				i := 1
				j := 1
			until
				i > (n + old_number)
			loop
				-- calculate center of building
				local_x_coord := - (plane_size/2) + randomizer.double_i_th (j)*plane_size
				local_y_coord := - (plane_size/2) + randomizer.double_i_th (j+1)*plane_size
				create center.make (local_x_coord, local_y_coord)

				-- calculate angle of building
				angle := angle_randomizer.double_i_th(j)*-90+45

				-- create the four corners
				create p1.make (local_x_coord+0.5*stretch_factor_x, local_y_coord+0.5*stretch_factor_y)
				create p2.make (local_x_coord+0.5*stretch_factor_x, local_y_coord-0.5*stretch_factor_y)
				create p3.make (local_x_coord-0.5*stretch_factor_x, local_y_coord-0.5*stretch_factor_y)
				create p4.make (local_x_coord-0.5*stretch_factor_x, local_y_coord+0.5*stretch_factor_y)

				-- rotate the building
				p1:=p1.rotation (center,-angle*pi/180)
				p2:=p2.rotation (center,-angle*pi/180)
				p3:=p3.rotation (center,-angle*pi/180)
				p4:=p4.rotation (center,-angle*pi/180)

				-- Check for collision with lines and other buildings
				create poly_points.make
				poly_points.force (p1, 1)
				poly_points.force (p2, 2)
				poly_points.force (p3, 3)
				poly_points.force (p4, 4)
				create collision_poly.make_from_absolute_list (create {EM_VECTOR_2D}.make (x_coord, y_coord), poly_points)

				if not has_collision (collision_poly) then

					-- create traffic building and add it to map
					create building.make(p1, p2, p3, p4, 0.25, "building " + building_id.out)
					building_id := building_id + 1
					building.set_angle (angle)
					buildings_representation.add_building (building)
					i := i + 1
		end
				-- we need to random j's per round
				j := j + 2
			end

		end

	add_buildings_along_lines is
			-- Add buildings along all lines (expect railway).

		local
			line_sections:ARRAYED_LIST [TRAFFIC_LINE_SECTION]
			line_section: TRAFFIC_LINE_SECTION
			building: TRAFFIC_BUILDING
			temp_destination: EM_VECTOR_2D -- destination rotated by line angle
			gl_origin: EM_VECTOR_2D -- origin in gl coordinates
			p1,p2,p3,p4: EM_VECTOR_2D
			angle: DOUBLE
			building_height: DOUBLE
			collision_poly: EM_POLYGON_CONVEX_COLLIDABLE
			poly_points: DS_LINKED_LIST[EM_VECTOR_2D]
			i : INTEGER
			start_point, end_point: EM_VECTOR_2D
			temp: EM_VECTOR_2D
		do
			building_height := 0.5
			create start_point.make(0,0)
			create end_point.make(0,0)
			line_sections:=map.line_sections

			-- add buildings along every line section
			from
				line_sections.start
				--line_sections.forth
			until
				line_sections.after
				--line_sections.index > line_sections.count
			loop

				line_section := line_sections.item
				-- railways are not taken into account
				if not line_section.type.name.is_equal ("rail") then
					from
						i := 1
					until
						i+1 > line_section.polypoints.count
					loop
						--check if linesection is vertical
						if line_section.polypoints.i_th(i+1).x = line_section.polypoints.i_th(i).x then
							temp_destination := map_to_gl_coords(line_section.polypoints.i_th(i+1))
							gl_origin := map_to_gl_coords (line_section.polypoints.i_th(i))
							from
								start_point.set_y (gl_origin.y-0.5)
								start_point.set_x (gl_origin.x)
								if start_point.y < temp_destination.y then
									temp:=start_point
									start_point:=temp_destination
									temp_destination:=temp
								end
								end_point.set_y (start_point.y-0.5)
								end_point.set_x(start_point.x)
							until
								end_point.y<= temp_destination.y
							loop
								--buildings on the right hand side of the line
								create p1.make (start_point.x-0.5, start_point.y)
								create p2.make (end_point.x-0.5, end_point.y)
								create p3.make (p2.x-0.5,p2.y)
								create p4.make (p1.x-0.5,p1.y)
								create building.make (p1,p2,p3,p4, building_height, "building " + building_id.out)
								building_id := building_id + 1
								building.set_angle (0)
								create poly_points.make
								poly_points.force (p1, 1)
								poly_points.force (p2, 2)
								poly_points.force (p3, 3)
								poly_points.force (p4, 4)
								create collision_poly.make_from_absolute_list (building.center, poly_points)
								if not has_collision (collision_poly) then
									buildings_representation.add_building (building)
									buildings_representation.collision_polygons.force_last (collision_poly)
								end

								--builiding on the left hand sinde of the line
								create p4.make (start_point.x+0.5, start_point.y)
								create p3.make (end_point.x+0.5, end_point.y)
								create p2.make (p3.x+0.5,p3.y)
								create p1.make (p4.x+0.5,p4.y)
								create building.make (p1,p2,p3,p4, building_height, "building " + building_id.out)
								building_id := building_id + 1
								building.set_angle (0)
								create poly_points.make
								poly_points.force (p1, 1)
								poly_points.force (p2, 2)
								poly_points.force (p3, 3)
								poly_points.force (p4, 4)
								create collision_poly.make_from_absolute_list (building.center, poly_points)
								if not has_collision (collision_poly) then
									buildings_representation.add_building (building)
									buildings_representation.collision_polygons.force_last (collision_poly)
								end
								start_point.set_y (end_point.y-0.01)
								end_point.set_y (end_point.y-0.51)
							end
						else
							-- linessection is not vertical
							angle:= arc_tangent((line_section.polypoints.i_th (i+1).y-line_section.polypoints.i_th (i).y)/(line_section.polypoints.i_th (i+1).x-line_section.polypoints.i_th (i).x))
							if angle*180/pi>-70 and angle*180/pi<70 then

								temp_destination:=map_to_gl_coords(line_section.polypoints.i_th(i+1).rotation (line_section.polypoints.i_th(i), -angle))
								gl_origin:=map_to_gl_coords (line_section.polypoints.i_th(i))

								from
									start_point.set_y (gl_origin.y)
									start_point.set_x (gl_origin.x-0.5)
									if start_point.x < temp_destination.x then
										temp:=start_point
										start_point:=temp_destination
										temp_destination:=temp
									end
									end_point.set_y (start_point.y)
									end_point.set_x(start_point.x-0.5)
								until
									end_point.x<= temp_destination.x
								loop
									--building above the line
									create p2.make (start_point.x,start_point.y+0.5)
									create p1.make (p2.x,p2.y+0.5)
									create p3.make (end_point.x,end_point.y+0.5)
									create p4.make (p3.x,p3.y+0.5)
									p1:= p1.rotation (gl_origin, -angle)
									p2:= p2.rotation (gl_origin, -angle)
									p3:= p3.rotation (gl_origin, -angle)
									p4:= p4.rotation (gl_origin, -angle)
									create building.make (p1,p2,p3,p4, building_height, "building " + building_id.out)
									building_id := building_id + 1
									building.set_angle (angle*180/pi)
									create poly_points.make
									poly_points.force (p1, 1)
									poly_points.force (p2, 2)
									poly_points.force (p3, 3)
									poly_points.force (p4, 4)
									create collision_poly.make_from_absolute_list (building.center, poly_points)
									if not has_collision (collision_poly) then
										buildings_representation.add_building (building)
										buildings_representation.collision_polygons.force_last(collision_poly)
									end

									--builiding underneath the line
									create p1.make (start_point.x,start_point.y-0.5)
									create p2.make (p1.x,p1.y-0.5)
									create p4.make (end_point.x,end_point.y-0.5)
									create p3.make(p4.x,p4.y-0.5)
									p1:= p1.rotation (gl_origin, -angle)
									p2:= p2.rotation (gl_origin, -angle)
									p3:= p3.rotation (gl_origin, -angle)
									p4:= p4.rotation (gl_origin, -angle)
									create building.make (p1,p2,p3,p4, building_height, "building " + building_id.out)
									building_id := building_id + 1
									building.set_angle (angle*180/pi)
									create poly_points.make
									poly_points.force (p1, 1)
									poly_points.force (p2, 2)
									poly_points.force (p3, 3)
									poly_points.force (p4, 4)
									create collision_poly.make_from_absolute_list (building.center, poly_points)
									if not has_collision (collision_poly) then
										buildings_representation.add_building (building)
										buildings_representation.collision_polygons.force_last (collision_poly)
									end
									start_point.set_x (end_point.x-0.01)
									end_point.set_x (end_point.x-0.51)
								end
							end
						end
						i:=i+1
					end
				end
				-- we need only every second section since there is one section for every direction
				line_sections.forth
				line_sections.forth
			end
		end

	delete_buildings is
			-- Delete all buildings from representation.
		do
			buildings_representation.delete_buildings
			buildings_representation.collision_polygons.wipe_out
			building_id:= 1
		end

feature -- Event channels

	building_clicked_event: EM_EVENT_CHANNEL [TUPLE [TRAFFIC_BUILDING,EM_MOUSEBUTTON_EVENT]]
			-- Event for click on building

	place_clicked_event: EM_EVENT_CHANNEL [TUPLE [TRAFFIC_PLACE, EM_MOUSEBUTTON_EVENT]]
			-- Event for click on place

feature {NONE} -- Implementation

	x_coord: DOUBLE
			-- X coordinate of the viewer

	y_coord: DOUBLE
			-- Y coordinate of the viewer

	building_id: INTEGER
			-- Number to specify the building name

	plane: TE_3D_MEMBER
			-- Plane on which the map is displayed

	has_collision (a_poly: EM_COLLIDABLE): BOOLEAN is
			-- Is there a collision?
		require
			a_poly_exists: a_poly /= void
		do
			-- Check if there is a collision with a line
			from
				roads_representation.collision_polygons.start
				Result := False
			until
				roads_representation.collision_polygons.after or Result
			loop
				if roads_representation.collision_polygons.item_for_iteration /= Void and then a_poly.collides_with (roads_representation.collision_polygons.item_for_iteration) then
					Result := True
				end
				roads_representation.collision_polygons.forth
			end

			-- Check if there is a collsion with a building
			from
				buildings_representation.collision_polygons.start
			until
				buildings_representation.collision_polygons.after or Result
			loop
				if buildings_representation.collision_polygons.item_for_iteration /= Void and then a_poly.collides_with (buildings_representation.collision_polygons.item_for_iteration) then
					Result := True
				end
				buildings_representation.collision_polygons.forth
			end
		end

	publish_mouse_event (event: EM_MOUSEBUTTON_EVENT) is
			-- 	Publish mouse event if there was a click somewhere on the map.
		local
			result_vec: GL_VECTOR_3D[DOUBLE]
			clicked_point: GL_VECTOR_3D[DOUBLE]
		do
			if map /= Void then
				result_vec := transform_coords(event.screen_x, event.screen_y)
				create clicked_point.make_xyz (result_vec.x, result_vec.y, result_vec.z)
				publish_building_events (clicked_point, event)
				publish_place_events (clicked_point, event)
			end
		end

	publish_building_events (a_point: GL_VECTOR_3D[DOUBLE]; event: EM_MOUSEBUTTON_EVENT) is
			-- Publish mouse event if a building was clicked.
		local
			buildings: LINKED_LIST[TRAFFIC_BUILDING]
			found: BOOLEAN
		do
			if a_point.x >=0 and a_point.z>=0 then
				buildings:= map.buildings[1]
			elseif a_point.x<=0 and a_point.z>=0 then
				buildings:= map.buildings[2]
			elseif a_point.x>=0 and a_point.z<=0 then
				buildings:= map.buildings[3]
			else
				buildings:= map.buildings[4]
			end
			from
				buildings.start
				found:= false
			until
				buildings.after or found
			loop
				if buildings.item.contains_point(a_point.x, a_point.z) then
					building_clicked_event.publish([buildings.item,event])
					found:= true
				end
				buildings.forth
			end
		end

	publish_place_events (a_point: GL_VECTOR_3D[DOUBLE]; event: EM_MOUSEBUTTON_EVENT) is
			-- Publish mouse event if a place was clicked.
		local
			place: TRAFFIC_PLACE
		do
			place := places_representation.place_at_position (gl_to_map_coords (create {EM_VECTOR_2D}.make (a_point.x, a_point.z)))
			if place /= Void then
					place_clicked_event.publish([place,event])
			end
		end


	transform_coords (screen_x, screen_y: INTEGER): GL_VECTOR_3D[DOUBLE] is
			-- Transform mouse coordinates with gl_un_project to 3D coordinates.
		local
			model_matrix, projection_matrix: ARRAY [DOUBLE]
			model_c, projection_c: ANY
			viewport: GL_VECTOR_4D [INTEGER]
			y_new: INTEGER
			result_x, result_y, result_z: DOUBLE
			temp: ANY
			window_z: REAL
		do
			if video_subsystem.video_surface.is_opengl_blitting_enabled then
				video_subsystem.video_surface.disable_opengl_blitting
			end

			create model_matrix.make (0, 15)
			create projection_matrix.make (0, 15)
			create viewport.make_xyzt (0, 0, 0, 0)
			model_c := model_matrix.to_c
			projection_c := projection_matrix.to_c

			gl_get_doublev_external (Em_gl_modelview_matrix, $model_c)
			gl_get_doublev_external (Em_gl_projection_matrix, $projection_c)
			gl_get_integerv_external (Em_gl_viewport, viewport.pointer)
			viewport.set_xyzt (x, y, width, height)
			y_new := video_subsystem.video_surface.height - screen_y -- OpenGL renders with (0,0) on bottom, mouse reports with (0,0) on top

			gl_read_pixels_external (screen_x, y_new, 1, 1, Em_gl_depth_component, Em_gl_float, $window_z)
			temp := glu_un_project_external (screen_x, y_new, window_z, $model_c, $projection_c, viewport.pointer, $result_x, $result_y, $result_z)

			create Result.make_xyz (result_x, result_y, result_z)
		ensure
			Result /= void
		end

end
