indexing
	description: "Test TRAFFIC library. Text output."
	author: "Sibylle Aregger, ETH Zurich"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_TEST
	
inherit
	EV_APPLICATION
	
	KL_SHARED_FILE_SYSTEM
		undefine
			copy, default_create
		end

creation
	make

feature -- Initialization

	make (a_ev_text: EV_TEXT; a_main_window: MAIN_WINDOW)is
			-- Initialize Current.
		require
			a_ev_text_exists: a_ev_text /= Void
			a_main_window_exists: a_main_window /= Void
		do
			text := a_ev_text
			create map_test.make (a_ev_text)
			create xml_test.make (a_ev_text, a_main_window)
		ensure
			text_set: text = a_ev_text
			map_test_exists: map_test /= Void
			xml_test_exists: xml_test /= Void
		end

feature -- Basic operations

	test is
			-- Test Traffic framework.
		do
			text.append_text ("TRAFFIC TEST%N")
			text.append_text ("--------------------------------------%N")
			text.append_text ("test map:%N--------------------------------------%N%N")
			map_test.test
			text.append_text ("%Ntest xml:%N--------------------------------------%N")
			xml_test.test
		end

feature {NONE} -- Implementation

	text: EV_TEXT
			-- Text field of window.

	map_test: TRAFFIC_TEST_MAP
			-- Traffic map test.
			
	xml_test: TRAFFIC_TEST_XML
			-- Traffic xml test.

invariant
	text_exists: text /= Void
	map_test_exists: map_test /= Void
	xml_test_exists: xml_test /= Void

end -- class TRAFFIC_TEST
