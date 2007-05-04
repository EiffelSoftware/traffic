indexing
	description: "Factory for moving drawables"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_3D_MOVING_FACTORY

feature -- Factory methods

	new_default_member (a_moving: TRAFFIC_MOVING): TRAFFIC_3D_MOVING_RENDERABLE [TRAFFIC_MOVING] is
			-- New man drawable
		do
			if error_template = Void then
				error_template := load_template ("error.obj")
			end
			create Result.make_with_item (a_moving, error_template.create_deep_instance)
			Result.graphical.transform.set_scaling (50, 50, 50)
		end

	new_free_moving_member (a_moving: TRAFFIC_FREE_MOVING): TRAFFIC_3D_MOVING_RENDERABLE [TRAFFIC_FREE_MOVING] is
			-- New man drawable
		do
			if man_template = Void then
				man_template := load_template ("man.obj")
			end
			create Result.make_with_item (a_moving, man_template.create_deep_instance)
			Result.graphical.transform.set_scaling (50, 50, 50)
			Result.set_color (create {EM_COLOR}.make_with_rgb (0, 255, 0))
		end

	new_person_member (a_passenger: TRAFFIC_PASSENGER): TRAFFIC_3D_MOVING_RENDERABLE [TRAFFIC_PASSENGER] is
			-- New person drawable (toggling between man and woman)
		do
			if not is_woman then
				Result := new_man_member (a_passenger)
				is_woman := True
			else
				Result := new_woman_member (a_passenger)
				is_woman := False
			end
		end

	new_man_member (a_passenger: TRAFFIC_PASSENGER): TRAFFIC_3D_MOVING_RENDERABLE [TRAFFIC_PASSENGER] is
			-- New man drawable
		do
			if man_template = Void then
				man_template := load_template ("man.obj")
			end
			create Result.make_with_item (a_passenger, man_template.create_deep_instance)
			Result.graphical.transform.set_scaling (50, 50, 50)
		end

	new_woman_member (a_passenger: TRAFFIC_PASSENGER): TRAFFIC_3D_MOVING_RENDERABLE [TRAFFIC_PASSENGER] is
			-- New woman drawable
		do
			if woman_template = Void then
				woman_template := load_template ("woman.obj")
			end
			create Result.make_with_item (a_passenger, woman_template.create_deep_instance)
			Result.graphical.transform.set_scaling (50, 50, 50)
		end

	new_taxi_daynight_member (a_taxi: TRAFFIC_TAXI): TRAFFIC_3D_MOVING_DAYNIGHT_RENDERABLE [TRAFFIC_TAXI] is
			-- New taxi drawable with two representations
		do
			if taxi_template = Void then
				taxi_template := load_template ("taxi.obj")
			end
			if taxi_night_template = Void then
				taxi_night_template := load_template ("taxi_night.obj")
			end
			create Result.make_with_item (a_taxi, taxi_template.create_deep_instance, taxi_night_template.create_deep_instance)
			Result.day_graphical.transform.set_scaling (50, 50, 50)
			Result.night_graphical.transform.set_scaling (50, 50, 50)
		end

	new_tram_daynight_member (a_tram: TRAFFIC_TRAM): TRAFFIC_3D_MOVING_DAYNIGHT_RENDERABLE [TRAFFIC_TRAM] is
			-- New taxi drawable with two representations
		do
			if tram_template = Void then
				tram_template := load_template ("tram2000_small.obj")
			end
			if tram_night_template = Void then
				tram_night_template := load_template ("tram2000_small_night.obj")
			end
			create Result.make_with_item (a_tram, tram_template.create_deep_instance, tram_night_template.create_deep_instance)
			Result.day_graphical.transform.set_scaling (50, 50, 50)
			Result.night_graphical.transform.set_scaling (50, 50, 50)
		end

	new_bus_daynight_member (a_bus: TRAFFIC_BUS): TRAFFIC_3D_MOVING_DAYNIGHT_RENDERABLE [TRAFFIC_BUS] is
			-- New bus drawable with two representations
		do
			if tram_template = Void then
				tram_template := load_template ("tram2000_small.obj")
			end
			if tram_night_template = Void then
				tram_night_template := load_template ("tram2000_small_night.obj")
			end
			create Result.make_with_item (a_bus, tram_template.create_deep_instance, tram_night_template.create_deep_instance)
			Result.set_color (create {EM_COLOR}.make_with_rgb (255, 0, 0))
			Result.day_graphical.transform.set_scaling (50, 50, 50)
			Result.night_graphical.transform.set_scaling (50, 50, 50)
		end

feature {NONE} -- Implementation

	taxi_template: TE_3D_NODE
			-- template to create a taxi traveler

	taxi_night_template: TE_3D_NODE
			-- template to create a taxi traveler

	tram_template: TE_3D_NODE
			-- template to create a tram traveler

	tram_night_template: TE_3D_NODE
			-- template to create a tram traveler

	man_template: TE_3D_NODE
			-- template to create a man traveler

	woman_template: TE_3D_NODE
			-- template to create a woman traveler

	error_template: TE_3D_NODE
			-- template which is returned when a wrong name is passed

	is_woman: BOOLEAN
			-- Toggle between man and woman (True: woman; False: man)

	load_template (a_file_name: STRING): TE_3D_NODE is
			-- load the traveler templates
		local
			fs: KL_FILE_SYSTEM
			s: STRING --path string
			i:INTEGER
			scene_importer: TE_3D_SCENE_IMPORTER
			current_building: TE_3D_NODE
		do
			fs := (create {KL_SHARED_FILE_SYSTEM}).file_system
			scene_importer := (create {TE_3D_SHARED_GLOBALS}).scene_importer

			s := fs.pathname ("..", "objects")
			s := fs.pathname (s, a_file_name)
			Result := scene_importer.import_3d_scene (s)
			Result.calculate_hierarchy_bounding_box
		end

end
