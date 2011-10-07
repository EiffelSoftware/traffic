note
	description: "Route that consists of one or more segments of transportation lines."

class
	ROUTE

inherit
	ANY
		redefine
			is_equal,
			copy,
			out
		end

create
	make

feature {NONE} -- Initialization

	make (a_leg: LEG)
			-- Create route starting from `a_leg'.
		require
			a_leg_exists: a_leg /= Void
		do
			first_leg := a_leg
			merge_adjacent
		ensure
			correct_origin: origin = a_leg.origin
		end

feature -- Initialization

	copy (other: like Current)
			-- Initialize by copying stations and lines from `other'.
		do
			if other /= Current then
				first_leg := other.first_leg.twin
			end
		end

feature -- Access

	origin: STATION
			-- First station of the route.
		do
			Result := first_leg.origin
		end

	destination: STATION
			-- Last station of the route.
		do
			Result := last_leg.destination
		end

	length: REAL_64
			-- Total length (meters).
		do
			Result := first_leg.total_length
		end

	first_leg: LEG
			-- First leg of the route.

	last_leg: LEG
			-- Last leg of this route.
		do
			from
				Result := first_leg
			until
				Result.next = Void
			loop
				Result := Result.next
			end
		end

feature -- Comparison

	is_equal (other: like Current): BOOLEAN
			-- Does `other' go through the same stations along the same lines?
		do
			Result := first_leg ~ other.first_leg
		end

feature -- Modification

	append_leg (a_leg: LEG)
			-- Add `a_leg' to the end of this route.
		require
			leg_exists: a_leg /= Void
			valid_origin: a_leg.origin = destination
		do
			if a_leg.line /= last_leg.line then
				last_leg.link (a_leg)
			else
				last_leg.set_destination (a_leg.destination)
			end
		ensure
			new_destination: destination = a_leg.destination
		end

	prepend_leg (a_leg: LEG)
			-- Add `a_leg' to the beginning of this route.
		require
			leg_exists: a_leg /= Void
			valid_destination: a_leg.destination = origin
		do
			if a_leg.line /= first_leg.line then
				a_leg.link (first_leg)
				first_leg := a_leg
			else
				first_leg.set_origin (a_leg.origin)
			end
		ensure
			new_origin_set: origin = a_leg.origin
		end

	reverse
			-- Reverse route.
		local
			reversed_first, tail: LEG
		do
			from
			until
				first_leg = Void
			loop
				tail := first_leg.next
				first_leg.unlink
				first_leg.reverse
				if reversed_first /= Void then
					first_leg.link (reversed_first)
				end
				reversed_first := first_leg
				first_leg := tail
			end
			first_leg := reversed_first
		end

feature -- Output

	out: STRING
			-- Textual representation.
		local
			l: LEG
		do
			Result := first_leg.origin.name
			from
				l := first_leg
			until
				l = Void
			loop
				Result := Result + " -" + l.line.kind.name + " " + l.line.name.out +  "-> " + l.destination.name
				l := l.next
			end
		end

feature {ROUTE} -- Implementation

	merge_adjacent
			-- Merge adjacent legs with the same line.
		local
			l, new: LEG
			dest: STATION
		do
			from
				l := first_leg
			until
				l.next = Void
			loop
				if l.next.line = l.line then
					new := l.next.next
					dest := l.next.destination
					l.unlink
					l.set_destination (dest)
					if new /= Void then
						l.link (new)
					end
				else
					l := l.next
				end
			end
		ensure
			first_leg.is_canonical
		end

invariant
	first_leg_exists: first_leg /= Void
	canonical: first_leg.is_canonical
	last_leg_exists: last_leg /= Void
	first_origin: origin = first_leg.origin
	last_destination: destination = last_leg.destination
end
