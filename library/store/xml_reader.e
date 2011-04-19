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
			consumer: XML_CITY_CALLBACKS
		do
			create file.make (a_file_name)
			file.open_read

			create {XM_EIFFEL_PARSER} parser.make
			create consumer
			parser.set_callbacks (consumer)
			parser.parse_from_stream (file)

			city := consumer.city

			file.close
		end
end
