indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	LOAD_MAP

inherit
	TOUCH_EXAMPLE


feature -- Basic operations

--	run_with_scene: EM_SCENE is
--			-- Create the scene with an xml file of a city.
--		local
--			dlg: EV_FILE_OPEN_DIALOG
--			fn: STRING
--		do
--			create dlg.make_with_title ("Open xml file...")
--			dlg.show_modal_to_window (main_window)
--			fn := dlg.file_name
--			if fn /= Void and then not fn.is_empty and then File_system.file_exists (fn) then
--				example_scene.make_with_map(fn)
--			end
--		end
--		
	run (an_example_runtime: TOUCH_EXAMPLE_RUNTIME) is
			-- 
		do
		end
	description: STRING is
		do
			Result := "A simple example for opening a user specified map"
		end
feature {NONE} -- Implementation
	
--	example_scene: EM_SCENE

end -- class LOAD_MAP
