indexing
	description: "Class for creatin a dump file of a traffic map"
	author: "Fabian W�est"
	date: "22.01.2006"
	revision: "0.1"

class
	TRAFFIC_MAP_DUMP

inherit
	KL_SHARED_FILE_SYSTEM
	
creation
	make_with_name
	
feature -- Initialization
	
	make_with_name(name:STRING) is
			-- Creation procedure
		require
			name_valid: name/=void and then not name.is_empty
		local
			directory: DIRECTORY
			dump_file: RAW_FILE
		do
--			xml_name := name
--			dump_name := name.split('.')[1] + ".dump"
			directory_name := file_system.absolute_parent_directory (name) + "\"
			xml_name := file_system.basename (name)
			dump_name := xml_name.split('.')[1] + ".dump"
			create directory.make_open_read (directory_name)
			if not directory.has_entry ("dump.log") then
				create dump_file.make_create_read_write (directory_name + "dump.log")				
			end
		end
		
feature -- Access
	
	get_map:TRAFFIC_MAP is
			-- Getting the dumped map
		local
			directory: DIRECTORY
		do 
			create directory.make_open_read (directory_name)
			if directory.has_entry (dump_name) then
				Result ?= (create {TRAFFIC_MAP}.make("temp")).retrieve_by_name (directory_name + dump_name)
			else
				Result := void
			end
		end
	
	is_up_to_date: BOOLEAN is
			-- is the dump file up to date
		local
			log_file: RAW_FILE
			xml_file: RAW_FILE
			stamp: INTEGER
			name: STRING
		do
			create log_file.make_open_read (directory_name + "dump.log")
			create xml_file.make (directory_name + xml_name)
			Result := False
			from
				log_file.start
			until
				log_file.end_of_file
			loop
				log_file.read_word
				name := log_file.last_string
				if not name.is_equal ("") then
					log_file.read_character
					log_file.read_integer
					stamp := log_file.last_integer
				end	
				if name.is_equal (xml_name) and stamp = xml_file.date then
					Result := True
				end
			end
			log_file.close
		end
	
	create_dump(map:TRAFFIC_MAP) is
			-- creating a dump file
		local
			log_file: RAW_FILE
			xml_file: RAW_FILE
		do
			map.store_by_name (directory_name + dump_name)
			create log_file.make_open_append (directory_name + "dump.log")
			create xml_file.make(directory_name + xml_name)
			log_file.finish
			log_file.putstring (xml_name + " ")
			log_file.putint (xml_file.date)
			log_file.close
		end
		
		

feature {NONE}-- attributes
	xml_name: STRING	
	
	dump_name: STRING
	
	directory_name: STRING

end
