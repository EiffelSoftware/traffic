indexing
	description: "Class QUERIES from the Texbook TOUCH."
	author: "Roger Kueng"
	date: "2005/08/25"
	revision: "0.1"

class
	QUERIES

inherit
	QUERIES_PREDEFINES

feature -- Basic operations
	queries is
			-- Do some queries
		do
			Console.show ("Places")
			Console.show (Simple_Line_8.i_th (1))
			Console.show (Simple_Line_8.i_th (Simple_Line_8.count))
			
			Console.show ("Line Sections")
			Console.show (Line_8.i_th (1))
			Console.show (Line_8.i_th (Line_8.count))
		end

feature {NONE} -- Implementation
	print_out_simple_line (a_simple_line: TRAFFIC_SIMPLE_LINE) is
			-- Print out a line on the console
		local
			timing: TOUCH_TIMING
		do
			create timing
			-- Wait a short time
			timing.wait(5000)
			-- Show the line name
			Console.show ("Line: " + a_simple_line.name)
			Console.show ("One end: " + a_simple_line.one_end.name)
			Console.show ("Other end: " + a_simple_line.other_end.name)

			timing.wait(2000)

			-- Iterate over all places
			from
				a_simple_line.start
			until
				a_simple_line.after
			loop
				-- Show Place name
				Console.show (a_simple_line.item.name)
				-- Wait a short time
				timing.wait(1000)
				-- Increase Iteration
				a_simple_line.forth
			end
		end
		
end -- class QUERIES
