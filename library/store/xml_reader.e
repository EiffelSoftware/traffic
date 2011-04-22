note
	description: "Reads a city from an xml file."

class
	XML_READER

inherit {NONE}
	KL_SHARED_FILE_SYSTEM

create
	read

feature -- Access

	city: CITY
			-- City read by the last `read' operation.

	has_error: BOOLEAN
			-- Did last `read' operation produce an error?

	error_message: STRING
			-- Description of the error produced by the last `read' operation.

feature -- Basic operation

	read (a_file_name: STRING)
			-- Read city description from file `a_file_name'.
			-- If reading is successful, store result in `city'.
			-- Otherwise store error message in `error_message'.
		local
			file_name, old_working_dir_name: STRING
			file: KL_TEXT_INPUT_FILE
			parser: XM_PARSER
			city_builder: XML_CITY_BUILDER
			error_handler: XM_PARSER_STOP_ON_ERROR_FILTER
		do
			has_error := False
			file_name := file_system.canonical_pathname (file_system.absolute_pathname (a_file_name))

			if file_system.file_exists (file_name) then
				old_working_dir_name := file_system.current_working_directory
				file_system.set_current_working_directory (file_system.dirname (file_name))
				create file.make (file_name)
				file.open_read

				if file.is_open_read then
					create {XM_EIFFEL_PARSER} parser.make
					create error_handler.make (parser)
					create city_builder.with_error_handler (error_handler)
					error_handler.set_next (city_builder)
					parser.set_callbacks (error_handler)
					parser.set_dtd_resolver (create {XM_FILE_EXTERNAL_RESOLVER}.make)
					parser.parse_from_stream (file)

					if parser.is_correct then
						city := city_builder.city
					else
						has_error := True
						error_message := message (file_name, parser.last_error_description)
					end

					file.close
				else
					has_error := True
					error_message := message (file_name, "Cannot open file for reading")
				end

				file_system.set_current_working_directory (old_working_dir_name)
			else
				has_error := True
				error_message := message (file_name, "File does not exist")
			end
		end

feature {NONE} -- Implementation

	message (a_file_name, a_reason: STRING): STRING
			-- Pretty error message resulting from reading file `a_file_name' for reason `a_reason'.
		do
			Result := "Error reading a city from %"" + a_file_name + "%": " +
				a_reason + "."
		end

end
