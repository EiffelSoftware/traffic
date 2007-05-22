indexing
	description: "Skyscraper buildings"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_SKYSCRAPER

inherit

	TRAFFIC_BUILDING
		redefine
			make_new
		end

create

	make_new, make_default

feature {NONE} -- Initialization

	make_default (a_center: EM_VECTOR_2D) is
			-- Initialize with default size.
		require
			center_valid: a_center /= Void
		do
			make_new (default_width, default_depth, default_height, a_center)
		ensure
			is_skyscraper: is_skyscraper and not is_villa and not is_apartment_building
			size_set: width = default_width and height = default_height and depth = default_depth
			center_set: center = a_center
		end

	make_new (a_width, a_depth, a_height: DOUBLE; a_center: EM_VECTOR_2D) is
			-- Initialize with size.
		do
			Precursor (a_width, a_depth, a_height, a_center)
			is_skyscraper := True
		ensure then
			is_skyscraper: is_skyscraper and not is_villa and not is_apartment_building
		end

feature -- Constants

	default_width: DOUBLE is 33.0

	default_depth: DOUBLE is 33.0

	default_height: DOUBLE is 81.0

end
