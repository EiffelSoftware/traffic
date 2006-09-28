indexing
	description: "A tokenzier suited for iterated scanning."
	author: "Basil Fierz, bfierz@student.ethz.ch"
	date: "$Date: 2005/06/21 15:16:28 $"
	revision: "$Revision: 1.4 $"

class 
	Q_TEXT_SCANNER

create 
	make_from_string_with_delimiters

feature {NONE} 

	make_from_string_with_delimiters (a_string: STRING; the_delimiters: STRING) is
		require
			a_string /= Void
			the_delimiters /= Void
		do
			source := a_string
			delimiters := the_delimiters
			start_idx := next_start (1)
			create last_string.make_empty
		end
	
feature 

	set_source_string (a_string: STRING) is
		require
			a_string /= Void
		do
			source := a_string
			start_idx := next_start (1)
		ensure
			source = a_string
		end

	read_token is
		local
			finish_idx: INTEGER
		do
			finish_idx := next_finish (start_idx)
			last_string.set (source, start_idx, finish_idx)
			start_idx := next_start (finish_idx + 1)
		end
	
feature 

	last_string: STRING
	
feature {NONE} 

	next_start (start_ix: INTEGER): INTEGER is
		do
			from
				Result := start_ix
			until
				(Result > source.count) or else not (delimiters.has (source @ Result))
			loop
				Result := Result + 1
			end
		end

	next_finish (start_ix: INTEGER): INTEGER is
		do
			from
				Result := start_ix
			until
				(Result > source.count) or else delimiters.has (source @ Result)
			loop
				Result := Result + 1
			end
			Result := Result - 1
		end

	find_next_delim (start: INTEGER): INTEGER is
		require
			start > 0
		local
			curr_delim: INTEGER
			curr_index: INTEGER
		do
			from
				curr_delim := 1
				Result := source.count
			until
				curr_delim > delimiters.count
			loop
				curr_index := source.index_of (delimiters.item (curr_delim), start)
				if curr_index > 0 and curr_index < Result then
					Result := curr_index
				end
				curr_delim := curr_delim + 1
			end
			if Result = source.count then
				Result := 0
			end
		end

	source: STRING

	delimiters: STRING

	start_idx: INTEGER
	
invariant
	source /= Void

end -- class Q_TEXT_SCANNER
