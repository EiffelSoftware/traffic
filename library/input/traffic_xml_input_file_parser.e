indexing
	description: "Parser for XML input files."

	status:	"See notice at end of class"
	author: "Patrick Schoenbach, Michela Pedroni, Sibylle Aregger"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	TRAFFIC_XML_INPUT_FILE_PARSER
	
inherit
	TRAFFIC_PARSE_ERROR_CONSTANTS
		redefine
			error_description, has_error
		end
	
	KL_SHARED_FILE_SYSTEM
	
feature {NONE} -- Initialization

	make is
			-- Create parser.
		do
			xml_parser := new_xml_parser
			create tree_pipe.make
			xml_parser.set_string_mode_mixed
			xml_parser.set_callbacks (tree_pipe.start)
			xml_parser.set_resolver (create {XM_FILE_EXTERNAL_RESOLVER}.make)
		ensure
			xml_parser_exists: xml_parser /= Void
			tree_pipe_exists: tree_pipe /= Void
		end

feature -- Access

	xml_document: XM_DOCUMENT is
			-- Parsed XML document
		require
			parsed: is_parsed
		do
			Result := tree_pipe.document
		ensure
			Result_exists: Result /= Void
		end

	root_element: XM_ELEMENT is
			-- Root element of document
		require
			parsed: is_parsed
		do
			Result := xml_document.root_element
		ensure
			Result_exists: Result /= Void
		end

	error_description: STRING is
			-- Description of last parser error
		do
			if error_code > 0 then
				Result := Precursor
			else
				Result := xml_parser.last_error_extended_description
			end
		ensure then
			Result_exists: Result /= Void
			Result_not_empty: not Result.is_empty
		end

feature -- Status report

	has_error: BOOLEAN is
			-- Did a parser error occur?
		do
			Result := Precursor or not xml_parser.is_correct
		end

	is_parsed: BOOLEAN
			-- Has a map been parsed?

	has_file_name: BOOLEAN is
			-- Has a file name been set?
		do
			Result := file_name /= Void and then not file_name.is_empty
		end
	
	can_process: BOOLEAN is
			-- Can document tree be processed?
		deferred
		end
		
feature -- Status setting

	set_file_name (a_name: STRING) is
			-- Set file name to `a_name'.
		require
			file_name_valid:  File_system.is_file_readable (a_name)
			file_exists: File_system.file_exists (a_name)
		do
			create file_name.make_from_string (a_name)
			is_parsed := False
		ensure
			file_name_set: has_file_name
			not_parsed: not is_parsed
		end

	set_working_directory is
			-- Set the current working directory to the place where the filename 
			-- comes from (needs to be done if dtd-files with relative paths should be accepted).
		require
			file_name_set: has_file_name
		do
			(create {EXECUTION_ENVIRONMENT}).change_working_directory (File_system.absolute_parent_directory (file_name))
		end

feature -- Basic operations

	parse is
			-- Parse map.
		require
			file_name_set: has_file_name
		local
			file: KL_TEXT_INPUT_FILE
		do
			set_error (0, << >>)
			create file.make (file_name)
			file.open_read
			if file.is_open_read then
				xml_parser.parse_from_stream (file)
				file.close
				if not has_error then
					is_parsed := True
	 			end
			else
				set_error (File_not_readable, << File_system.basename (file_name) >>)
			end
		ensure
			parsed_if_no_error: not has_error implies is_parsed
		end

	process is
			-- Process document tree.
		require
			processing_ready: can_process
		deferred
		end

feature {NONE} -- Implementation

	xml_parser: XM_PARSER
			-- XML parser

	tree_pipe: XM_TREE_CALLBACKS_PIPE
			-- Tree generating callbacks

	new_xml_parser: XM_PARSER is
			-- Create new parser
		local
			factory: XM_EXPAT_PARSER_FACTORY
		do
			create factory
			if factory.is_expat_parser_available then
				Result := factory.new_expat_parser
			else
				create {XM_EIFFEL_PARSER} Result.make
			end
		end
		
invariant

	xml_parser_exists: xml_parser /= Void
	tree_pipe_exists: tree_pipe /= Void
	has_error_definition: has_error = ((error_code > 0) or
			not xml_parser.is_correct)
	has_file_name_definition: has_file_name = (file_name /= Void and then
			not file_name.is_empty)
	parsed_constraint: is_parsed implies has_file_name

end

--|--------------------------------------------------------
--| This file is Copyright (C) 2003 by ETH Zurich.
--|
--| For questions, comments, additions or suggestions on
--| how to improve this package, please write to:
--|
--|     Patrick Schoenbach <pschoenb@gmx.de>
--|		Michela Pedroni <pedronim@inf.ethz.ch>
--|
--|--------------------------------------------------------
