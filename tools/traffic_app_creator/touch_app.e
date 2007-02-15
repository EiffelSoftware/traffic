indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TOUCH_APP

create
	make

feature {NONE} -- Initialization

	make(a_systen_name:STRING; a_system_dir:STRING; a_traffic_dir:STRING) is
			-- Initialize `Current'.
		require
			a_systen_name /= Void
			a_system_dir /= Void
			a_traffic_dir /= Void
		do
			system_name := a_systen_name
			system_dir := a_system_dir
			traffic_dir := a_traffic_dir
		end

feature -- Access

	generate:BOOLEAN is
			-- generate files, return true if succeded
		local
			replacer:REPLACER
			succ : BOOLEAN
			tmp : STRING
			my_dir: STRING
			dir : DIRECTORY
			traffic_dir2 : STRING
		do
			-- get clean system name
			system_name.to_lower
			system_name.replace_substring_all ("/", "_")
			system_name.replace_substring_all (".", "_")

			-- create system directory
			my_dir := system_dir + "/" + system_name
			create dir.make (my_dir)
			dir.create_dir

			-- ecf file
			create replacer.make ("./template/sample.ecf.txt", my_dir + "/" + system_name + ".ecf")

			-- rules
			replacer.add_replacement_rule ("<<system_name>>", system_name)
			create tmp.make_from_string (system_name)
			tmp.to_upper
			replacer.add_replacement_rule ("<<system_class>>", tmp)
			replacer.add_replacement_rule ("<<root_class>>", tmp + "_3D_APPLICATION")
			replacer.add_replacement_rule ("<<scene_class>>", tmp + "_3D_SCENE")
			replacer.add_replacement_rule ("<<traffic_dir>>", traffic_dir)
			create traffic_dir2.make_from_string (traffic_dir)
			traffic_dir2.to_lower
			traffic_dir2.replace_substring_all ("\", "/")
			replacer.add_replacement_rule ("<<traffic_dir2>>", traffic_dir2)
			succ := replacer.do_replacement

			-- main class
			replacer.set_input_file ("./template/sample.e.txt")
			replacer.set_output_file (my_dir + "/" + system_name + ".e")
			succ := succ and replacer.do_replacement

			-- application class
			replacer.set_input_file ("./template/sample_3d_application.e.txt")
			replacer.set_output_file (my_dir + "/" + system_name + "_3d_application.e")
			succ := succ and replacer.do_replacement

			-- scene class
			replacer.set_input_file ("./template/sample_3d_scene.e.txt")
			replacer.set_output_file (my_dir + "/" + system_name + "_3d_scene.e")
			succ := succ and replacer.do_replacement

			Result := succ
		end

feature {NONE} -- Implementation

	system_name : STRING

	system_dir, traffic_dir : STRING

invariant
	invariant_clause: True -- Your invariant here

end
