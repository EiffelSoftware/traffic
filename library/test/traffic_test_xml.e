indexing
	description: "Test the generation of a map from an xml file."
	author: "Sibylle Aregger, Zurichs"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_TEST_XML
	
inherit
	EV_APPLICATION
	
	KL_SHARED_FILE_SYSTEM
		undefine
			copy, default_create
		end
create
	make
	
feature -- Initialization

	make (a_text: EV_TEXT; a_main_window: MAIN_WINDOW) is
			-- Create xml test.
		require
			a_text_exists: a_text /= Void
			a_main_window_exists: a_main_window /= Void
		do
			text := a_text
			main_window := a_main_window
			create factory.make
		ensure
			text_exists: text /= Void
			text_set: text = a_text
			main_window_exists: main_window /= Void
			main_window_set: main_window = a_main_window
			factory_exists: factory /= Void
		end
		
feature -- Test

	test is
			-- Test XML and generate text output.
		do
			request_open_city -- get the path to the xml file
			text.append_text ("%NNxml-file parsed!%N%N")
			text.append_text (factory.map.out) -- display textual representation of generated map
			map := factory.map
			if equal (map.name.substring (1, 6), "Zurich") then
				visit_places_zurich
				text.append_text ("%N")
				text.append_text (route.out)
			end
		end

feature -- Basic operation

	visit_places_zurich is
			-- Visit places.
		local
			l_places: LINKED_LIST [TRAFFIC_PLACE]
		do
			create l_places.make
			l_places.extend (map.place ("Hauptbahnhof"))
			l_places.extend (map.place ("Kunsthaus"))
			create route.make (l_places, map)
			route.calculate_shortest_path
		end
		
feature {NONE} -- Implementation

	text: EV_TEXT 
			-- Text window to write to.

	main_window: MAIN_WINDOW
			-- Main window to write to.

	factory: TRAFFIC_MAP_FACTORY
			-- Factory.
			
	map: TRAFFIC_MAP
			-- Map.
			
	route: TRAFFIC_ROUTE
			-- Route.

	request_open_city is
			-- Open the xml file of a city.
		local
			dlg: EV_FILE_OPEN_DIALOG
			fn: STRING
		do
			create dlg.make_with_title ("Open xml file...")
			dlg.show_modal_to_window (main_window)
			fn := dlg.file_name
			if fn /= Void and then not fn.is_empty and then File_system.file_exists (fn) then
				open_city (fn)
			end
		end
		
	open_city (a_filename: STRING) is
			-- Open city.
		require
			a_filename_exists: a_filename /= Void
			a_filename_not_empty: not a_filename.is_empty
			a_file_exists: File_system.file_exists (a_filename)
		local
			mp: TRAFFIC_MAP_PARSER
			sp: EV_STOCK_PIXMAPS
			adaptor: TRAFFIC_XML_ADAPTOR
		do
			create sp
			main_window.set_pointer_style (sp.Busy_cursor)
			create mp.make_with_factory (factory)
			create adaptor
			adaptor.adapt_xml_registry (mp)
			mp.set_file_name (a_filename)
			mp.set_working_directory
			mp.parse
			if mp.can_process then
				mp.process
			end
			
			if mp.has_error then
				text.append_text ("an error occured while parsing!%N")
				text.append_text (mp.error_description)
			end
		end

invariant
	text_exists: text /= Void
	main_window_exists: main_window /= Void
	factory_exists: factory /= Void


end -- class TRAFFIC_TEST_XML
