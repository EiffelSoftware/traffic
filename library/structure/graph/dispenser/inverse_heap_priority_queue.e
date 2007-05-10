indexing
	description: "[
		Heap priority queue sorted such that the item with the lowest
		priority is placed at the head of the queue.
		]"
	author: "Olivier Jeger"
	date: "$Date$"
	revision: "$Revision$"

class
	INVERSE_HEAP_PRIORITY_QUEUE [G -> COMPARABLE]

inherit
	HEAP_PRIORITY_QUEUE [G]
		redefine
			put,
			remove
		end

create
	make

feature -- Element change

	put (v: like item) is
			-- Insert item `v' at its proper position.
		local
			i: INTEGER
		do
			count := count + 1
			from
				i := count
			until
				i <= 1 or else not safe_greater_than (i_th (i // 2), v)
			loop
				put_i_th (i_th (i // 2), i)
				i := i // 2
			end
			put_i_th (v, i)
		end

feature -- Removal

	remove is
			-- Remove item of lowest value.
		local
			l_default: G
			i, j: INTEGER
			up: like item
			stop: BOOLEAN
		do
			count := count - 1
			if count > 0 then
				from
					i := 1
					up := i_th (count + 1)
				until
					stop or i > count // 2
				loop
					j := 2 * i
					if (j < count) and safe_greater_than (i_th (j), i_th (j + 1)) then
						j := j + 1
					end
					stop := not safe_greater_than (up, i_th (j))
					if not stop then
						put_i_th (i_th (j), i)
						i := j
					end
				end
				put_i_th (up, i)
			end
			put_i_th (l_default, count + 1)
		end

feature {NONE} -- Comparison

	safe_greater_than (a, b: G): BOOLEAN is
			-- Same as `a > b' when `a' and `b' are not Void.
			-- If `b' is Void and `a' is not, then True
			-- Otherwise False
		do
			if a /= Void and b /= Void then
				Result := a > b
			elseif a /= Void and b = Void then
				Result := True
			else
				Result := False
			end
		ensure
			definition: (a /= Void and b /= Void) implies Result = (a > b)
			left_void_definition: (a /= Void and b = Void) implies Result
			right_void_definition: (a = Void and b /= Void) implies not Result
		end

end -- class INVERSE_HEAP_PRIORITY_QUEUE
