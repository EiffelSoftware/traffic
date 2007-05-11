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

	make (a_width, a_height: INTEGER) is
			-- Initialize the map widget.
		local
			green_material: TE_MATERIAL_SIMPLE
			primitive_factory: TE_3D_MEMBER_FACTORY_PRIMITIVE
		do
			make_component

			set_keyboard_sensitive (True)
			set_width (a_width)
			set_height (a_height)

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
			(create{TE_3D_SHARED_GLOBALS}).root.add_child (plane)

			mouse_clicked_event.subscribe (agent publish_mouse_event (?))
			create building_clicked_event.default_create
			create place_clicked_event
--			create buildings_representation.make

			building_id:= 1


			-- create boolean_grid. used for random building placement.
			create boolean_grid.make (Grid_size, Grid_size)

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

	travelers_representation: TRAFFIC_3D_MOVING_REPRESENTATION
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
			window_z := 0.0
			gl_read_pixels_external (screen_x, y_new, 1, 1, Em_gl_depth_component, Em_gl_float, $window_z)
			temp := glu_un_project_external (screen_x, y_new, window_z, $model_c, $projection_c, viewport.pointer, $result_x, $result_y, $result_z)
			create Result.make_xyz (result_x, result_y, result_z)
		ensure
			Result /= void
		end

feature -- Element change

	set_map (a_map: TRAFFIC_MAP) is
			-- Use `a_map' to be displayed.
		local
			green_material: TE_MATERIAL_SIMPLE
			primitive_factory: TE_3D_MEMBER_FACTORY_PRIMITIVE
		do
			map := a_map
			if map /= Void then
				wipe_out
				is_map_loaded := True
				create places_representation.make (map)
				create lines_representation.make (map)
				create roads_representation.make (map)
				create travelers_representation.make (map)
				create paths_representation.make (map)
				create buildings_representation.make (map)

				-- Todo remove
--				map.paths.element_inserted_event.subscribe (agent add_path (?))

--				buildings_representation.set_map(a_map)
				boolean_grid.clear_all

				root.transform.set_position (-map.center.x, 0, -map.center.y)---event.y_motion*(delta/mouse_delta), 0)				

--				beauty_pass.camera.set_target (create {EM_VECTOR3D}.make_from_tuple ([map.city_center.x, 0.0, map.city_center.y]))
				plane.transform.set_position (map.center.x, 0.0, map.center.y)
--				plane.transform.set_scaling (plane.bounding_box., y, z: REAL_64)
--				disable_sun_shown
			else
				-- Todo remove everything
			end
		end

	wipe_out is
			-- Remove all map elements.
		do
			if places_representation /= Void then
				places_representation.place_root.remove_all_children
			end
			if lines_representation /= Void then
				lines_representation.line_section_root.remove_all_children
			end
			if travelers_representation /= Void then
				travelers_representation.moving_root.remove_all_children
			end
			if roads_representation /= Void then
				roads_representation.road_root.remove_all_children
			end
			if buildings_representation /= Void then
				buildings_representation.buildings_root.remove_all_children
			end
		end


feature -- Basic operations

	rotate_camera (x_distance, y_distance: DOUBLE) is
			-- Rotate camera by x_distance and y_distance around the city map centre.
		local
			camera: TE_3D_CAMERA
			radius,polar,azimut,zx_comp_length:DOUBLE
		do
			camera := beauty_pass.camera

			--carth to spherical
			radius:=camera.transform.position.length
			zx_comp_length:=sqrt(camera.transform.position.z^2.0 + camera.transform.position.x^2)
			if camera.transform.position.x >=0 then
				azimut:=arc_cosine(camera.transform.position.z/zx_comp_length)
			else
				azimut:=2*PI - arc_cosine(camera.transform.position.z/zx_comp_length)
			end
			polar:=PI/2 - arc_tangent(camera.transform.position.y/zx_comp_length)

			--rotate camera arround 000
			polar := polar - y_distance/50.0
			azimut := azimut - x_distance/50.0

			--spherical to carthesian
			camera.transform.set_position (radius*sine(polar)*sine(azimut), radius*cosine(polar), radius*sine(polar)*cosine(azimut))
		end

	zoom_out is
			-- Handle mouse wheel down event.
		local
			camera: TE_3D_CAMERA
			z_axis: EM_VECTOR3D
		do
			camera := beauty_pass.camera
			z_axis := camera.transform.position * (1.0/10.0)
			camera.transform.translate(z_axis.x, z_axis.y, z_axis.z)
		end

	zoom_in is
			-- Handle mouse wheel up event.
		local
			camera: TE_3D_CAMERA
			z_axis: EM_VECTOR3D
		do
			camera := beauty_pass.camera
			z_axis := camera.transform.position * (1.0/10.0)
			camera.transform.translate(-z_axis.x, -z_axis.y, -z_axis.z)
		end

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
--				travelers_representation.update
--				buildings_representation.update
			end

			renderpass_manager.render
		end

	finish_drawing is
			-- finish drawing
		do
			--nothing
		end



	place_buildings_randomly (a_density:INTEGER) is
			-- Place buildings randomly on map.
			-- `a_density' is the building density on the map. 1 means weak, 2 meduim, and 3 strong building density.
		require
			map_loaded: is_map_loaded
--			no_buildings_already_on_map: buildings_representation.number_of_buildings = 0
			a_density_not_1_2_or_3: a_density /= 1 or a_density /= 2 or a_density /= 3
		do

			io.putstring ("Randomly placing buildings: ")
			io.new_line

			-- load buildings templates.
--			io.putstring ("- Loading building templates...")
--			io.new_line
--			buildings_representation.load_building_templates


			-- set the values of cells over all line sections and places to true.
			io.putstring ("- Checking occupied map positions...")
			io.new_line
			mark_occupied

			-- place buildings on free grid cells. set grid cells beneath a placed building to true.
			place_buildings (a_density)
			io.putstring ("- Done")
			io.new_line

		end


--	delete_buildings is
--			-- Delete all buildings from representation.
--		do
--			buildings_representation.delete_buildings
----			buildings_representation.collision_polygons.wipe_out
--			boolean_grid.clear_all
--			building_id:= 1
--		end

	add_path (a_path: TRAFFIC_PATH) is
			-- Add path to the map	
		require
			a_path_exists: a_path /= Void
		local
			ps: TRAFFIC_PATH_SECTION
		do
--			map.add_path (a_path)
--			paths_representation.add_path (a_path)

			--places where have to change are colored red
			create ps.default_create
			from
				ps := a_path.first
			until
				ps.next = Void -- = a_path.last
			loop
				places_representation.highlight_place (ps.connections.last.destination, create {EM_COLOR}.make_with_rgb (255, 0, 0))
				ps := ps.next
			end
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

	boolean_grid: ARRAY2[BOOLEAN]
			-- Two dimensional boolean grid over plane with size `Grid_size'. Used for random building placement.
			--	True means the cell is occupied
			--	False means the cell is free

	Grid_size: INTEGER is 800
			-- Height and width of `boolean_grid'.
			-- a large value means that buildings are placed more closely, but performance is reduced.


	mark_occupied is
			-- call `mark_grid_cells_for_line_section' for each pair of polypoints of each line section.
			-- call `mark_grid_cells_for_rectangular_area' for each place.
		local
			poly_points: DS_ARRAYED_LIST [EM_VECTOR_2D]
			poly_point: EM_VECTOR_2D
			i,j:INTEGER
			places: TRAFFIC_EVENT_HASH_TABLE[TRAFFIC_PLACE,STRING_8]
		do

			--mark cells for each of the line sections
			from
				i:=1
			until
				i > map.line_sections.count
			loop
				-- traverse each poly point of a line section
				poly_points := map.line_sections.item (i).polypoints
				from
					j:=2
					poly_point := poly_points.item (1)
				until
					j > poly_points.count
				loop
--					mark_grid_cells_for_line_section (map_to_gl_coords (poly_point), map_to_gl_coords (poly_points.i_th (j)), Line_width)
					mark_grid_cells_for_line_section (poly_point, poly_points.item (j), Line_width)
					poly_point := poly_points.item (j)
					j:=j+1
				end
				i :=i+1
			end

			--mark cells for each of the places
			places:=map.places
			from
				places.start
			until
				places.after
			loop
				if places.item_for_iteration.width > 0 and places.item_for_iteration.breadth > 0 then
--					mark_grid_cells_for_rectangular_area (map_to_gl_coords(places.item_for_iteration.position), places.item_for_iteration.width/30, places.item_for_iteration.breadth/30)
					mark_grid_cells_for_rectangular_area (places.item_for_iteration.position, places.item_for_iteration.width/30, places.item_for_iteration.breadth/30)
				end
				places.forth
			end

		end



	place_buildings (a_density: INTEGER) is
			-- place buildings on map. buildings are first placed along the lines on the map. Then they're placed randomly on the map.
		require
			a_density_not_1_2_or_3: a_density /= 1 or a_density /= 2 or a_density /= 3
			at_least_one_building_template: buildings_representation.building_factory.count >= 1
		local
			i, nr_of_templates, buildings_nr:INTEGER
			randomizer: RANDOM
			t: C_DATE
		do
			--initialize locals
			create t.default_create
			create randomizer.set_seed (t.millisecond_now)
			buildings_nr := 35
			nr_of_templates := buildings_representation.building_factory.count

			-- add buildings along all lines
			io.putstring ("- Placing buildings along lines...")
			io.new_line
			add_buildings_along_lines


			-- add buildings randomly on map
			io.putstring ("- Placing buildings on random positions on map...")
			io.new_line


				-- add a few business skyskrapers (template 4) to center of map
				add_buildings_randomly (a_density*buildings_nr, Plane_size/3, 4, randomizer)
				t.update
				randomizer.set_seed (t.millisecond_now)
				add_buildings_randomly (a_density*buildings_nr, Plane_size/2, 4, randomizer)


				-- add other types of buildings on random positions on map
				-- template 1: housing skyskraper, template 2: brown house, template 3: blue house, template 4: business skyskraper.
				from
					i := 1
				until
					i > buildings_representation.building_factory.count
				loop
					t.update
					randomizer.set_seed (t.millisecond_now)
					add_buildings_randomly (a_density * buildings_nr,plane_size,i,randomizer)
					i := i + 1
				end
		end


	add_buildings_along_lines is
			-- Add buildings along all lines (except railway).
		local
			line_sections:DS_ARRAYED_LIST [TRAFFIC_LINE_CONNECTION]
			line_section: TRAFFIC_LINE_CONNECTION
			building: TRAFFIC_BUILDING
			center,p1,p2,p3,p4: EM_VECTOR_2D
			start_point, end_point, temp: EM_VECTOR_2D
			temp_destination: EM_VECTOR_2D -- destination rotated by line angle
			gl_origin: EM_VECTOR_2D -- origin in gl coordinates
			angle, building_height, w, b: DOUBLE
			collision_poly: EM_POLYGON_CONVEX_COLLIDABLE
			poly_points: DS_LINKED_LIST[EM_VECTOR_2D]
			random: RANDOM
			template, i: INTEGER
		do
			building_height := 0.5
			create start_point.make(0,0)
			create end_point.make(0,0)
			line_sections:=map.line_sections
			create random.make

			-- add buildings along every line section
			from
				line_sections.start
				--line_sections.forth
			until
				line_sections.after
				--line_sections.index > line_sections.count
			loop

				line_section := line_sections.item_for_iteration
				-- railways are not taken into account
				if not line_section.type.name.is_equal ("rail") then
					from
						i := 1
					until
						i+1 > line_section.polypoints.count
					loop
						--check if linesection is vertical
						if line_section.polypoints.item (i+1).x = line_section.polypoints.item (i).x then
--							temp_destination := map_to_gl_coords(line_section.polypoints.i_th(i+1))
							temp_destination := line_section.polypoints.item(i+1)
--							gl_origin := map_to_gl_coords (line_section.polypoints.i_th (i))
							gl_origin := line_section.polypoints.item (i)
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
								random.forth
								template:= (random.double_item*(buildings_representation.building_factory.count-1).to_double).rounded +1
								w:=buildings_representation.width_of_template (template)
								b:=buildings_representation.breadth_of_template (template)

								create p1.make (start_point.x-0.5, start_point.y)
								create p2.make (end_point.x-0.5, end_point.y)
								create p3.make (p2.x-0.5,p2.y)
								create p4.make (p1.x-0.5,p1.y)
								create center.make ((p2.x+p4.x)/2,(p1.y+p3.y)/2)

								-- Check for collision with lines and other buildings
								if	not rectangular_area_has_collision_with_grid(center, w, b)	then
									create building.make (p1,p2,p3,p4, building_height, "building " + building_id.out)
									building_id := building_id + 1
									building.set_angle (0)
									create poly_points.make
									poly_points.force (p1, 1)
									poly_points.force (p2, 2)
									poly_points.force (p3, 3)
									poly_points.force (p4, 4)
									create collision_poly.make_from_absolute_list (building.center, poly_points)
									buildings_representation.add_building_with_template (building, template)
--									buildings_representation.collision_polygons.force_last (collision_poly)
									mark_grid_cells_for_rectangular_area(building.center, w, b)
								end

								--builiding on the left hand sinde of the line
								random.forth
								template:= (random.double_item*(buildings_representation.building_factory.count-1).to_double).rounded +1
								w:=buildings_representation.width_of_template (template)
								b:=buildings_representation.breadth_of_template (template)

								create p4.make (start_point.x+0.5, start_point.y)
								create p3.make (end_point.x+0.5, end_point.y)
								create p2.make (p3.x+0.5,p3.y)
								create p1.make (p4.x+0.5,p4.y)
								create center.make ((p2.x+p4.x)/2,(p1.y+p3.y)/2)

								-- Check for collision with lines and other buildings
								if	not rectangular_area_has_collision_with_grid(center, w, b)	then
									create building.make (p1,p2,p3,p4, building_height, "building " + building_id.out)
									building_id := building_id + 1
									building.set_angle (0)
									create poly_points.make
									poly_points.force (p1, 1)
									poly_points.force (p2, 2)
									poly_points.force (p3, 3)
									poly_points.force (p4, 4)
									create collision_poly.make_from_absolute_list (building.center, poly_points)
									buildings_representation.add_building_with_template (building, template)
--									buildings_representation.collision_polygons.force_last (collision_poly)
									mark_grid_cells_for_rectangular_area(center, w, b)
								end
								start_point.set_y (end_point.y-0.01)
								end_point.set_y (end_point.y-0.51)
							end
						else
							-- linessection is not vertical
							angle:= arc_tangent((line_section.polypoints.item (i+1).y-line_section.polypoints.item (i).y)/(line_section.polypoints.item (i+1).x-line_section.polypoints.item (i).x))
							if angle*180/pi>-70 and angle*180/pi<70 then

--								temp_destination:=map_to_gl_coords(line_section.polypoints.i_th(i+1).rotation (line_section.polypoints.i_th(i), -angle))
--								gl_origin:=map_to_gl_coords (line_section.polypoints.i_th(i))
								temp_destination:=line_section.polypoints.item(i+1).rotation (line_section.polypoints.item(i), -angle)
								gl_origin:=line_section.polypoints.item(i)
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
									random.forth
									template:= (random.double_item*(buildings_representation.building_factory.count-1).to_double).rounded +1
									w:=buildings_representation.width_of_template (template)
									b:=buildings_representation.breadth_of_template (template)

									create p2.make (start_point.x,start_point.y+0.5)
									create p1.make (p2.x,p2.y+0.5)
									create p3.make (end_point.x,end_point.y+0.5)
									create p4.make (p3.x,p3.y+0.5)
									p1:= p1.rotation (gl_origin, -angle)
									p2:= p2.rotation (gl_origin, -angle)
									p3:= p3.rotation (gl_origin, -angle)
									p4:= p4.rotation (gl_origin, -angle)
									create center.make ((p2.x+p4.x)/2,(p1.y+p3.y)/2)

									-- Check for collision with lines and other buildings
								if	not quadratic_area_has_collision_with_grid(center, sqrt(w*w + b*b))	then
										create building.make (p1,p2,p3,p4, building_height, "building " + building_id.out)
										building_id := building_id + 1
										building.set_angle (angle*180/pi)
										create poly_points.make
										poly_points.force (p1, 1)
										poly_points.force (p2, 2)
										poly_points.force (p3, 3)
										poly_points.force (p4, 4)
										create collision_poly.make_from_absolute_list (building.center, poly_points)
										buildings_representation.add_building_with_template (building, template)
--										buildings_representation.collision_polygons.force_last(collision_poly)
										mark_grid_cells_for_quadratic_area(grid_coordinate(building.center.x),grid_coordinate(building.center.y),sqrt(w*w + b*b))

									end

									--builiding underneath the line
									random.forth
									template:= (random.double_item*(buildings_representation.building_factory.count-1).to_double).rounded +1
									w:=buildings_representation.width_of_template (template)
									b:=buildings_representation.breadth_of_template (template)

									create p1.make (start_point.x,start_point.y-0.5)
									create p2.make (p1.x,p1.y-0.5)
									create p4.make (end_point.x,end_point.y-0.5)
									create p3.make(p4.x,p4.y-0.5)
									p1:= p1.rotation (gl_origin, -angle)
									p2:= p2.rotation (gl_origin, -angle)
									p3:= p3.rotation (gl_origin, -angle)
									p4:= p4.rotation (gl_origin, -angle)
									create center.make ((p2.x+p4.x)/2,(p1.y+p3.y)/2)

									-- Check for collision with lines and other buildings
								if	not quadratic_area_has_collision_with_grid(center, sqrt(w*w + b*b))	then
										create building.make (p1,p2,p3,p4, building_height, "building " + building_id.out)
										building_id := building_id + 1
										building.set_angle (angle*180/pi)
										create poly_points.make
										poly_points.force (p1, 1)
										poly_points.force (p2, 2)
										poly_points.force (p3, 3)
										poly_points.force (p4, 4)
										create collision_poly.make_from_absolute_list (building.center, poly_points)
										buildings_representation.add_building_with_template (building, template)
--										buildings_representation.collision_polygons.force_last (collision_poly)
										mark_grid_cells_for_quadratic_area(grid_coordinate(building.center.x),grid_coordinate(building.center.y),sqrt(w*w + b*b))

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


	add_buildings_randomly (n:INTEGER; size_of_plane:DOUBLE; a_template:INTEGER; a_randomizer: RANDOM) is
			-- Add `n' buildings of type a_template to map area defined by size_of_plane.
		require
			n_not_negative: n >= 0
			size_of_plane <= Plane_size
			n_smaller_max_iterations: n <=  1000
		local
			local_x_coord, local_y_coord: DOUBLE -- cooridnates of the building center
			max_iterations, nr_buildings_placed, j: INTEGER
			building: TRAFFIC_BUILDING
			p1,p2,p3,p4,center: EM_VECTOR_2D
			collision_poly: EM_POLYGON_CONVEX_COLLIDABLE
			poly_points: DS_LINKED_LIST[EM_VECTOR_2D]
			w,b: DOUBLE
		do
			-- set maximum number of iterations to ensure termination
			max_iterations:= 1000
			nr_buildings_placed := 0
			w:=buildings_representation.width_of_template (a_template)
			b:=buildings_representation.breadth_of_template (a_template)

			-- iterate to get different random values of positions on map
			from
				j := 1
			until
				nr_buildings_placed > n  or  j > max_iterations
			loop

				-- calculate center of building to be placed
				local_x_coord := - (size_of_plane/2) + a_randomizer.double_i_th (j) * size_of_plane
				local_y_coord := - (size_of_plane/2) + a_randomizer.double_i_th (j+1) * size_of_plane
				create center.make (local_x_coord, local_y_coord)

				-- Check for collision with lines and other buildings
				if	not rectangular_area_has_collision_with_grid (center, w, b) then
					-- create the four corners
					create p1.make (local_x_coord+0.5*w, local_y_coord+0.5*b)
					create p2.make (local_x_coord+0.5*w, local_y_coord-0.5*b)
					create p3.make (local_x_coord-0.5*w, local_y_coord-0.5*b)
					create p4.make (local_x_coord-0.5*w, local_y_coord+0.5*b)

					-- create traffic building and add it to map
					create poly_points.make
					poly_points.force (p1, 1)
					poly_points.force (p2, 2)
					poly_points.force (p3, 3)
					poly_points.force (p4, 4)
					create collision_poly.make_from_absolute_list (center, poly_points)
					create building.make (p1, p2, p3, p4, 0.25, "building " + building_id.out)
					building_id := building_id + 1
					buildings_representation.add_building_with_template (building, a_template)
--					buildings_representation.collision_polygons.force_last (collision_poly)
					mark_grid_cells_for_rectangular_area (center, w, b)
					nr_buildings_placed := nr_buildings_placed + 1
				end
				-- we need two random j's per round
				j := j + 2
			end
		end


	mark_grid_cells_for_line_section (p0, p1: EM_VECTOR_2D; a_line_width: DOUBLE) is
    		-- mark boolean_grid cells along the line from p0 to p1 to true using a standard line drawing Algorithm.
    	local
    	x0_local, y0_local, x1_local, y1_local: INTEGER
        dx,dy: DOUBLE
        m, b: DOUBLE
		do
			x0_local := grid_coordinate (p0.x)
			y0_local := grid_coordinate (p0.y)
			x1_local := grid_coordinate (p1.x)
			y1_local := grid_coordinate (p1.y)
			dy := p1.y - p0.y
			dx := p1.x - p0.x
			mark_grid_cells_for_quadratic_area (x0_local, y0_local, a_line_width)

			if dx.abs > dy.abs then
            	m := dy/dx					-- compute slope
            	b := p0.y - m*p0.x
	            	if dx < 0 then
	            		dx := -1.0
	            	else
	            		dx := 1.0
	            	end
            	from
            	until
            		x0_local = x1_local
            	loop
            		x0_local := x0_local + dx.rounded
            		y0_local := grid_coordinate (m*gl_coordinate(x0_local) + b)
       				mark_grid_cells_for_quadratic_area (x0_local, y0_local,a_line_width)

		        end
            else
            	if not (dy = 0) then
	            	m := dx/dy					-- compute slope
	            	b := p0.x - m*p0.y
		            	if dy < 0 then
		            		dy := -1.0
		            	else
		            		dy := 1.0
		            	end
	            	from
	            	until
	            		y0_local = y1_local
	            	loop
	            		y0_local := y0_local + dy.rounded
	            		x0_local := grid_coordinate (m*gl_coordinate(y0_local) + b)
	            		mark_grid_cells_for_quadratic_area (x0_local, y0_local,a_line_width)
	            	end
				end
        	end
   		 end


	mark_grid_cells_for_rectangular_area (a_center:EM_VECTOR_2D; a_width, a_breadth:DOUBLE) is
			-- mark boolean_grid cells within rectangular area to true.
		local
			nr_cells_in_x_direction:INTEGER
			nr_cells_in_y_direction:INTEGER
			i,j,k,l: INTEGER
		do
			nr_cells_in_x_direction := (a_width/(Plane_size/Grid_size)).ceiling
			nr_cells_in_y_direction := (a_breadth/(Plane_size/Grid_size)).ceiling
			boolean_grid.put (True, grid_coordinate (a_center.x), grid_coordinate (a_center.y))
			from
				i := grid_coordinate (a_center.x) - (nr_cells_in_x_direction/2).floor
				j := grid_coordinate (a_center.x) + (nr_cells_in_x_direction/2).floor
			until
				i > j
			loop
				from
					k := grid_coordinate (a_center.y) - (nr_cells_in_y_direction/2).floor
					l := grid_coordinate (a_center.y) + (nr_cells_in_y_direction/2).floor
				until
					k > l
				loop
					if 1 <= i and then i <= Grid_size and then 1 <= k and then k <= Grid_size then
						boolean_grid.put (True, i , k)
					end
					k := k + 1
				end
				i := i + 1
			end
		end

	rectangular_area_has_collision_with_grid (a_center:EM_VECTOR_2D; a_width, a_breadth:DOUBLE):BOOLEAN is
			-- mark boolean_grid cells within rectangular area to true.
		local
			nr_cells_in_x_direction:INTEGER
			nr_cells_in_y_direction:INTEGER
			i,j,k,l: INTEGER
			res: BOOLEAN
		do
			res:= False
			nr_cells_in_x_direction := (a_width/(Plane_size/Grid_size)).ceiling
			nr_cells_in_y_direction := (a_breadth/(Plane_size/Grid_size)).ceiling
			if boolean_grid[grid_coordinate (a_center.x), grid_coordinate (a_center.y)] then
				res:= True
			end
			from
				i := grid_coordinate (a_center.x) - (nr_cells_in_x_direction/2).floor
				j := grid_coordinate (a_center.x) + (nr_cells_in_x_direction/2).floor
			until
				i > j or res
			loop
				from
					k := grid_coordinate (a_center.y) - (nr_cells_in_y_direction/2).floor
					l := grid_coordinate (a_center.y) + (nr_cells_in_y_direction/2).floor
				until
					k > l or res
				loop
					if 1 <= i and then i <= Grid_size and then 1 <= k and then k <= Grid_size then
						if boolean_grid [i, k] then
							res := True
						end
					else
						res:= True   -- building not completely on plane
					end
					k := k + 1
				end
				i := i + 1
			end
			Result := res
		end


	mark_grid_cells_for_quadratic_area (grid_x, grid_y:INTEGER; a_width:DOUBLE) is
			-- mark boolean_grid cells within quadratic area with center at (grid_x, grid_y) to true.
		local
			nr_cells_to_cover_area: INTEGER
			start_x, end_x,start_y,end_y:INTEGER
		do
			if 1 <= grid_x and grid_x <= Grid_size and 1 <= grid_y and grid_y <= Grid_size then
				boolean_grid.put (True, grid_x, grid_y)
			end
			if  a_width > 0 then
				nr_cells_to_cover_area := (a_width/(Plane_size/Grid_size)).ceiling
				from
					start_x := grid_x - (nr_cells_to_cover_area/2).floor
					end_x := grid_x + (nr_cells_to_cover_area/2).floor
				until
					start_x > end_x
				loop
					from
						start_y := grid_y - (nr_cells_to_cover_area/2).floor
						end_y := grid_y + (nr_cells_to_cover_area/2).floor
					until
						start_y > end_y
					loop
						if 1 <= start_x and start_x <= Grid_size and 1 <= start_y and start_y <= Grid_size then
							boolean_grid.put (True, start_x , start_y)
						end
						start_y := start_y + 1
					end
					start_x := start_x + 1
				end
			end
		end




	quadratic_area_has_collision_with_grid (a_center: EM_VECTOR_2D; a_diagonal:DOUBLE): BOOLEAN is
			-- is a part of the quadratic area described by a_center and a_diagonal on an occupied grid cell?
		local
			nr_cells_to_cover_diagonal:INTEGER
			i,j,k,l: INTEGER
			res: BOOLEAN
		do
			res := False
			nr_cells_to_cover_diagonal := (a_diagonal/(Plane_size/Grid_size)).ceiling
			if boolean_grid [grid_coordinate (a_center.x), grid_coordinate (a_center.y)] then
				res := True
			end
			from
				i := grid_coordinate (a_center.x) - (nr_cells_to_cover_diagonal/2).floor
				j := grid_coordinate (a_center.x) + (nr_cells_to_cover_diagonal/2).floor
			until
				i > j or res
			loop
				from
					k := grid_coordinate (a_center.y) - (nr_cells_to_cover_diagonal/2).floor
					l := grid_coordinate (a_center.y) + (nr_cells_to_cover_diagonal/2).floor
				until
					k > l or res
				loop
					if 1 <= i and i <= Grid_size and 1 <= k and k <= Grid_size then
						if boolean_grid [i, k] then
							res := True
						end
					else
						res := True  -- building not completely on plane
					end
					k := k + 1
				end
				i := i + 1
			end
			Result := res
		end



	grid_coordinate (a_gl_coord: DOUBLE):INTEGER is
			-- upper edge of the grid cell in x or y direction, in which a_gl_coord lies. depends on Grid_size.
		do
			Result := ((a_gl_coord + Plane_size/2)/ (Plane_size / Grid_size)).ceiling
			-- if a_coord_value is not on the plane return closest grid value
			if a_gl_coord >= Plane_size/2 then
				Result := Grid_size
			end
			if a_gl_coord <= -Plane_size/2 then
				Result := 1
			end
			ensure
				grid_coord_valid: Result >= 1 and Result <= Grid_size
		end

	gl_coordinate (a_grid_coord: INTEGER): DOUBLE is
			-- gl coordinate of the center of the cell's x or y component, which is described by a_grid_coord.
		require
			grid_coord_valid: a_grid_coord >= 1 and a_grid_coord <= Grid_size
		do
			Result := a_grid_coord * Plane_size / Grid_size - Plane_size/2 - (Plane_size/Grid_size)/2
		ensure
			gl_coord_valid: Result >= -Plane_size/2 and Result <= Plane_size/2
		end


--	has_collision (a_poly: EM_COLLIDABLE): BOOLEAN is
--			-- Is there a collision?
--		require
--			a_poly_exists: a_poly /= void
--		do
--			-- Check if there is a collision with a line
--			from
--				roads_representation.collision_polygons.start
--				Result := False
--			until
--				roads_representation.collision_polygons.after or Result
--			loop
--				if roads_representation.collision_polygons.item_for_iteration /= Void and then a_poly.collides_with (roads_representation.collision_polygons.item_for_iteration) then
--					Result := True
--				end
--				roads_representation.collision_polygons.forth
--			end

--			-- Check if there is a collsion with a building
--			from
--				buildings_representation.collision_polygons.start
--			until
--				buildings_representation.collision_polygons.after or Result
--			loop
--				if buildings_representation.collision_polygons.item_for_iteration /= Void and then a_poly.collides_with (buildings_representation.collision_polygons.item_for_iteration) then
--					Result := True
--				end
--				buildings_representation.collision_polygons.forth
--			end
--		end

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
			buildings: DS_LINKED_LIST[TRAFFIC_BUILDING]
			found: BOOLEAN
		do
--			if a_point.x >=0 and a_point.z>=0 then
--				buildings:= map.buildings[1]
--			elseif a_point.x<=0 and a_point.z>=0 then
--				buildings:= map.buildings[2]
--			elseif a_point.x>=0 and a_point.z<=0 then
--				buildings:= map.buildings[3]
--			else
--				buildings:= map.buildings[4]
--			end
			buildings := map.buildings
			from
				buildings.start
				found:= false
			until
				buildings.after or found
			loop
				if buildings.item_for_iteration.contains_point(a_point.x, a_point.z) then
					building_clicked_event.publish([buildings.item_for_iteration,event])
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
			place := map.place_at_position (create {EM_VECTOR_2D}.make (a_point.x, a_point.z))
			if place /= Void then
					place_clicked_event.publish([place,event])
			end
		end



	invariant
		Grid_size_greater_0: Grid_size > 0

end
