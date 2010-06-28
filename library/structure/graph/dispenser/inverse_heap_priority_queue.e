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
			safe_less_than
		end

create
	make

feature {NONE} -- Comparison

	safe_less_than (a, b: G): BOOLEAN is
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
		end

end
