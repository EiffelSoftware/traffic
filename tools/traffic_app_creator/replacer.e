indexing
	description: "Objects that opens a file and writes its contents to another file, replacing stuff"
	author: "Matthias Loeu"
	date: "$Date$"
	revision: "$Revision$"

class
	REPLACER

create
	make

feature {NONE} -- Initialization

	make(in_file:STRING; out_file:STRING) is
			-- Initialize `Current'.
		do
			input_file := in_file
			output_file := out_file
			create replacement_table.make (10)

		end

feature -- Access

	get_input_file:STRING is
			--
		do
			Result := input_file
		end

	get_output_file:STRING is
			--
		do
			Result := output_file
		end

feature -- Element change

	set_input_file(file:STRING) is
			--
		do
			input_file := file
		end

	set_output_file(file:STRING) is
			--
		do
			output_file := file
		end

	add_replacement_rule(key:STRING; value:STRING) is
			-- add a replacement rule for the files
		do
			replacement_table.put (value, key)
		end

	remove_replacement_rule(key:STRING) is
			-- remove a replacement rule
		do
			replacement_table.remove (key)
		end

feature -- Basic operations
	do_replacement : BOOLEAN is
			-- do the stuff it is intended for
		local
			file, file2 : PLAIN_TEXT_FILE
			string : STRING
			my_key, my_item : STRING
		do
			-- get the files
			create file.make_open_read (input_file)
			create file2.make_open_write (output_file)

			-- loop trough the first file and write its contents to the second one
			from file.start until file.end_of_file loop
				file.read_line
				string := file.last_string
				from
					replacement_table.start
				until
					replacement_table.after
				loop
					my_key := replacement_table.key_for_iteration
					my_item := replacement_table.item_for_iteration
					string.replace_substring_all (my_key, my_item)
					replacement_table.forth
				end
				file2.put_string (string)
				file2.put_new_line
			end

			-- close the files (only here the file is written!)
			file.close
			file2.close

			-- assume we don't have any errors...
			Result := true
		end

feature {NONE} -- Implementation

	input_file, output_file : STRING

	replacement_table : HASH_TABLE[STRING, STRING]

invariant
	invariant_clause: True -- Your invariant here

end
