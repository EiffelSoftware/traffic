note
	description: "Reads a city from an xml file."

class
	XML_READER

create
	read

feature -- Access

	city: CITY
			-- City read by the last `read' operation.

	has_error: BOOLEAN
			-- Did last `read' operation produce an error?

	error_message: STRING
			-- Error description of the last `read' operation.

feature -- Basic operation

	read (a_file_name: STRING)
			-- Read city description from file `a_file_name'.
			-- If reading is successful, store result in `city'.
			-- Otherwise store error message in `error_message'.
		local
			file: KL_TEXT_INPUT_FILE
			parser: XM_PARSER
			city_builder: XML_CITY_BUILDER
			error_handler: XM_PARSER_STOP_ON_ERROR_FILTER
		do
			create file.make (a_file_name)
			file.open_read

			create {XM_EIFFEL_PARSER} parser.make
			create error_handler.make (parser)
			create city_builder.with_error_handler (error_handler)
			error_handler.set_next (city_builder)
			parser.set_callbacks (error_handler)
			parser.set_dtd_resolver (create {XM_FILE_EXTERNAL_RESOLVER}.make)
			parser.parse_from_stream (file)

			if parser.is_correct then
				has_error := False
				city := city_builder.city
			else
				has_error := True
				error_message := parser.last_error_description
			end

			file.close
		end
end
