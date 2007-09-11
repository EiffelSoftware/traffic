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
		redefine
			set_map
		end

	EM_COMPONENT

	DOUBLE_MATH
		export {NONE} all end

	GL_FUNCTIONS
		export {NONE} all end

	GLU_FUNCTIONS
		export {NONE} all end

	EM_GL_CONSTANTS
		export {NONE} all end

	TE_3D_SHARED_GLOBALS

create
	make_with_size

feature -- Initialization

	make_with_size (a_width, a_height: INTEGER) is
			-- Initialize the map widget.
		local
			green_material: TE_MATERIAL_SIMPLE
			primitive_factory: TE_3D_MEMBER_FACTORY_PRIMITIVE
			member_factory: TE_3D_MEMBER_FACTORY_FROMFILE_OBJ
		do
			make_component

			create internal_factory
			create internal_place_representations.make_as_child (root)
			internal_place_representations.transform.set_position (0.0,0.07,0.0)
			create internal_line_representations.make_as_child (root)
			internal_line_representations.transform.set_position (0.0,0.04,0.0)
			create internal_road_representations.make_as_child (root)
			internal_road_representations.transform.set_position(0.0, 0.02, 0.0)
			create internal_building_representations.make_as_child (root)
			create internal_moving_representations.make_as_child (root)
			create internal_path_representations.make_as_child (root)
			internal_path_representations.transform.set_position(0.0, 0.4, 0.0)

			add_taxi_agent := agent add_taxi (?)
			remove_taxi_agent := agent remove_taxi (?)

			set_keyboard_sensitive (True)
			set_width (a_width)
			set_height (a_height)

			-- Create the Sun Representation and Sun Light and shadow_pass
			create sun_representation.make
			disable_shadows

			--DEBUG --create 3d coordinates object
--			coordinates := (create{TE_3D_SHARED_GLOBALS}).scene_importer.import_3d_scene("..\objects\coordinates.obj");
--			(create{TE_3D_SHARED_GLOBALS}).root.add_child(coordinates)
			--/DEBUG


			--create the plane
--			create green_material.make
--			green_material.set_color(0.2,0.4,0.0) --(0.45,0.9,0.16)
--			create primitive_factory.make
--			primitive_factory.set_material(green_material)
--			primitive_factory.create_simple_plane(Default_plane_size, Default_plane_size)
--			plane := primitive_factory.last_3d_member;
--			(create{TE_3D_SHARED_GLOBALS}).root.add_child (plane)

			--create the environment
			create member_factory
			member_factory.create_3d_member_from_file ("..\objects\environment.obj")
			plane := member_factory.last_3d_member;
			(create{TE_3D_SHARED_GLOBALS}).root.add_child (plane)

			mouse_clicked_event.subscribe (agent publish_mouse_event (?))
			create building_clicked_event.default_create
			create place_clicked_event
		ensure
			sun_repr_created: sun_representation /= Void
		end

feature -- Element change

	set_map (a_map: TRAFFIC_MAP) is
			-- Set map that is displayed to `a_map'.
		do
			if map /= Void then
				wipe_out
			end
			create internal_place_representations.make_as_child (root)
			internal_place_representations.transform.set_position (0.0,0.07,0.0)
			create internal_line_representations.make_as_child (root)
			internal_line_representations.transform.set_position (0.0,0.04,0.0)
			create internal_road_representations.make_as_child (root)
			internal_road_representations.transform.set_position(0.0, 0.02, 0.0)
			create internal_building_representations.make_as_child (root)
			create internal_moving_representations.make_as_child (root)
			create internal_path_representations.make_as_child (root)
			internal_path_representations.transform.set_position(0.0, 0.4, 0.0)
			Precursor (a_map)
			is_map_loaded := True
			root.transform.set_position (-map.center.x, 0, -map.center.y)
			plane.transform.set_position (map.center.x, 0.0, map.center.y)
		end

feature {NONE} -- Implementation

	internal_factory: TRAFFIC_3D_VIEW_FACTORY
	internal_moving_representations: TRAFFIC_3D_RENDERABLE_CONTAINER [TRAFFIC_MOVING]
	internal_path_representations: TRAFFIC_3D_RENDERABLE_CONTAINER [TRAFFIC_PATH]
	internal_line_representations: TRAFFIC_3D_RENDERABLE_CONTAINER [TRAFFIC_LINE]
	internal_road_representations: TRAFFIC_3D_RENDERABLE_CONTAINER [TRAFFIC_ROAD]
	internal_place_representations: TRAFFIC_3D_RENDERABLE_CONTAINER [TRAFFIC_PLACE]
	internal_building_representations: TRAFFIC_3D_RENDERABLE_CONTAINER [TRAFFIC_BUILDING]

feature -- Access

	line_representations:  TRAFFIC_VIEW_CONTAINER [TRAFFIC_LINE, TRAFFIC_VIEW [TRAFFIC_LINE]] is
			--
		do
			Result := internal_line_representations
		end

	road_representations:  TRAFFIC_VIEW_CONTAINER [TRAFFIC_ROAD, TRAFFIC_VIEW [TRAFFIC_ROAD]] is
			--
		do
			Result := internal_road_representations
		end

	path_representations:  TRAFFIC_VIEW_CONTAINER [TRAFFIC_PATH, TRAFFIC_VIEW [TRAFFIC_PATH]] is
			--
		do
			Result := internal_path_representations
		end

	place_representations: TRAFFIC_VIEW_CONTAINER [TRAFFIC_PLACE, TRAFFIC_VIEW [TRAFFIC_PLACE]]
			--
		do
			Result := internal_place_representations
		end

	building_representations: TRAFFIC_VIEW_CONTAINER [TRAFFIC_BUILDING, TRAFFIC_VIEW [TRAFFIC_BUILDING]]
			--
		do
			Result := internal_building_representations
		end

	moving_representations: TRAFFIC_VIEW_CONTAINER [TRAFFIC_MOVING, TRAFFIC_VIEW [TRAFFIC_MOVING]]
			--
		do
			Result := internal_moving_representations
		end

	factory: TRAFFIC_VIEW_FACTORY is
			--
		do
			Result := internal_factory
		end

feature -- Status report

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

	enable_sun_shown is
			--
		do
		end

	disable_sun_shown is
			--
		do
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
--			lines_representation.unhide
		ensure
			lines_shown: are_lines_shown = True
		end

	disable_lines_shown is
			-- Set `are_lines_shown' to `False'.
		do
			are_lines_shown := False
--			lines_representation.hide
		ensure
			lines_not_shown: are_lines_shown = False
		end

	enable_roads_shown is
			-- Set `are_roads_shown' to `True'.
		do
			are_roads_shown := True
--			roads_representation.unhide
		end

	disable_roads_shown is
			-- Set `are_lines_shown' to `False'.
		do
			are_roads_shown := False
--			roads_representation.hide
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

--	coordinates: TE_3D_NODE

--	movings_representation: TRAFFIC_3D_MOVING_REPRESENTATION
--		-- Representation for all travelers

--	lines_representation: TRAFFIC_3D_LINE_REPRESENTATION
--		-- Representation for all lines

--	roads_representation: TRAFFIC_3D_ROAD_REPRESENTATION
--		-- Representation for all roads

--	places_representation: TRAFFIC_3D_PLACE_REPRESENTATION
--		-- Representation for all places

--	buildings_representation: TRAFFIC_3D_BUILDING_REPRESENTATION
--		-- Representation for all buildings				

	sun_representation: TRAFFIC_3D_SUN_REPRESENTATION
		-- Representation for the sun & sunlight

--	paths_representation: TRAFFIC_3D_PATH_REPRESENTATION
--		-- Representation for all paths

	beauty_pass: TE_RENDERPASS_BEAUTY is
			-- return the first renderpass of the rendermanager assuming this is the beautypass. change it here, if the beautypass isn't the first one
		do
			Result ?= (create{TE_3D_SHARED_GLOBALS}).renderpass_manager.renderpasses.i_th(1)
		ensure
			beauty_pass_is_first_pass: Result /= Void
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
			window_z := 0.0
			gl_read_pixels_external (screen_x, y_new, 1, 1, Em_gl_depth_component, Em_gl_float, $window_z)
			temp := glu_un_project_external (screen_x, y_new, window_z, $model_c, $projection_c, viewport.pointer, $result_x, $result_y, $result_z)
			create Result.make_xyz (result_x, result_y, result_z)
		ensure
			Result /= void
		end

feature -- Constants

	Default_plane_size: DOUBLE is 1600.0
			-- Length, resp. width, of plane.

feature -- Element change


	wipe_out is
			-- Remove all map elements.
		do
			if place_representations /= Void then
				place_representations.wipe_out
			end
			if line_representations /= Void then
				line_representations.wipe_out
			end
			if moving_representations /= Void then
				moving_representations.wipe_out
			end
			if road_representations /= Void then
				road_representations.wipe_out
			end
			if building_representations /= Void then
				building_representations.wipe_out
			end
			if path_representations /= Void then
				path_representations.wipe_out
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
			radius:=(camera.transform.position-camera.target).length
			zx_comp_length:=sqrt((camera.transform.position.z-camera.target.z)^2.0 + (camera.transform.position.x-camera.target.x)^2)
			if camera.transform.position.x >=0 then
				azimut:=arc_cosine((camera.transform.position.z-camera.target.z)/zx_comp_length)
			else
				azimut:=2*PI - arc_cosine((camera.transform.position.z-camera.target.z)/zx_comp_length)
			end
			polar:=PI/2 - arc_tangent((camera.transform.position.y-camera.target.y)/zx_comp_length)

			--rotate camera arround 000
			polar := polar - y_distance/50.0
			azimut := azimut - x_distance/50.0

			--spherical to carthesian
			camera.transform.set_position (radius*sine(polar)*sine(azimut)+camera.target.x, radius*cosine(polar)+camera.target.y, radius*sine(polar)*cosine(azimut)+camera.target.z)
		end

	pan(x_distance, y_distance: DOUBLE) is
			-- pans using the left mouse button while dragging
		local
			camera: TE_3D_CAMERA
			translation: EM_VECTOR3D
			dir, right, up: EM_VECTOR3D
		do
			if (x_distance+y_distance)*(x_distance+y_distance)>0.00005 then

				camera := beauty_pass.camera
				dir := camera.target - camera.transform.position
				up.set(0,1,0)
				right := -dir.cross_product (up)
				right.normalize
				up := right.cross_product(dir)
				up.normalize

				translation := (right * x_distance + up * y_distance)*5
				camera.transform.translate(translation.x, translation.y, translation.z)
				camera.set_target(camera.target + (right * x_distance + up * y_distance)*5)
			end
		end


	zoom(y_distance:DOUBLE) is
			-- zooms by pressing the middle mouse button
		local
			camera: TE_3D_CAMERA
			z_axis: EM_VECTOR3D
		do
			camera := beauty_pass.camera
			z_axis := (camera.transform.position-camera.target).normalized * 20 * y_distance
			camera.transform.translate(z_axis.x, z_axis.y, z_axis.z)
		end

	zoom_out is
			-- Handle mouse wheel down event.
		local
			camera: TE_3D_CAMERA
			z_axis: EM_VECTOR3D
		do
			camera := beauty_pass.camera
			z_axis := (camera.transform.position-camera.target) * (1.0/10.0)
			camera.transform.translate(z_axis.x, z_axis.y, z_axis.z)
		end

	zoom_in is
			-- Handle mouse wheel up event.
		local
			camera: TE_3D_CAMERA
			z_axis: EM_VECTOR3D
		do
			camera := beauty_pass.camera
			z_axis := (camera.transform.position-camera.target) * (1.0/10.0)
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
			end

			renderpass_manager.render
		end

	finish_drawing is
			-- finish drawing
		do
			--nothing
		end

feature -- Event channels

	building_clicked_event: EM_EVENT_CHANNEL [TUPLE [TRAFFIC_BUILDING,EM_MOUSEBUTTON_EVENT]]
			-- Event for click on building

	place_clicked_event: EM_EVENT_CHANNEL [TUPLE [TRAFFIC_PLACE, EM_MOUSEBUTTON_EVENT]]
			-- Event for click on place

feature {NONE} -- Implementation

	plane: TE_3D_MEMBER
			-- Plane on which the map is displayed

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
			place := map.place_at_position (create {TRAFFIC_COORDINATE}.make (a_point.x, a_point.z))
			if place /= Void then
					place_clicked_event.publish([place,event])
			end
		end

end
