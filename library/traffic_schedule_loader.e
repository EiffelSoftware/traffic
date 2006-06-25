indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_SCHEDULE_LOADER

inherit
	
	KL_SHARED_FILE_SYSTEM
	
	TRAFFIC_SHARED_ERROR_HANDLER
	
	EXCEPTIONS

create
	make
	
feature -- Initialization

	make (a_filename: STRING) is
			-- Sets all necessary pathnames if the directory and the xml-file specified by `a_filename' exists.
		require
			a_filename_exists: a_filename /= Void
		do
			if not file_system.directory_exists (file_system.absolute_parent_directory (a_filename)) then
				error_handler.raise_warning (error_handler.traffic_error_directory_does_not_exist, [file_system.absolute_parent_directory (a_filename)])
				has_error := True
			elseif not file_system.file_exists (a_filename) then
				error_handler.raise_warning (error_handler.traffic_error_xml_file_does_not_exist, [a_filename])
				has_error := True
			else
				directory_name := file_system.dirname (a_filename)
				xml_filename := a_filename 
				dump_filename := file_system.pathname (directory_name, file_system.basename (xml_filename).split('.')[1] + ".dump")
				log_filename := file_system.pathname (directory_name, "dump.log")
				has_error := False
				create schedule.make
			end
		end

	load_schedule is
			-- Load map  from xml file. 
			-- If map loading was unsuccessful, has_error will be set to `True'.
		local
			directory: DIRECTORY
			log_file: RAW_FILE
		do
			if not has_error then
				-- Check whether there is a dump.log file and create it if there is none
				create directory.make_open_read (directory_name)
				if not directory.has_entry (file_system.basename (log_filename)) then
					create log_file.make_create_read_write (log_filename)
				end
					get_from_xml
			end
		end

feature -- Status report

	has_error: BOOLEAN
			-- Did the map loading succeed?

feature -- Access

	schedule: TRAFFIC_SCHEDULE_FACTORY
		
feature {NONE} -- Implementation

	log_filename: STRING
			
	directory_name: STRING
			-- Directory of all the map files
			
	xml_filename: STRING
			-- Location of the xml-File

	dump_filename: STRING
			-- Location of the dump-File

	get_from_xml is
			-- Initialize with schedule loaded from file with `a_filename'.
			-- (either `a_filename' is an absolute path 
			--  or relative to current working directory)
		require
			xml_file_exists: xml_filename /= Void and then file_system.file_exists (xml_filename)
		local
			factory: TRAFFIC_SCHEDULE_FACTORY
			schedule_parser: TRAFFIC_SCHEDULE_PARSER
		do
			create factory.make
			create schedule_parser.make_with_factory (factory)
			schedule_parser.set_file_name (xml_filename)
			schedule_parser.parse
			if schedule_parser.can_process then
				schedule_parser.process
			end			
			if schedule_parser.has_error then
				has_error := True
				raise ("Error while parsing " + xml_filename + ": " + schedule_parser.error_description)	
			else
				schedule := factory
				has_error := False
			end
		end

invariant
	invariant_clause: True -- Your invariant here

end
