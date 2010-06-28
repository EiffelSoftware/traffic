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

	make_default (a_center: TRAFFIC_POINT) is
			-- Initialize with default size.
		require
			center_valid: a_center /= Void
		do
			make_new (default_width, default_depth, default_height, a_center)
		ensure
			is_skyscraper: is_skyscraper and not is_villa and not is_apartment_building and not is_landmark
			size_set: width = default_width and height = default_height and depth = default_depth
			center_set: center = a_center
		end

	make_new (a_width, a_depth, a_height: REAL_64; a_center: TRAFFIC_POINT) is
			-- Initialize with size.
		do
			Precursor (a_width, a_depth, a_height, a_center)
			is_skyscraper := True
		ensure then
			is_skyscraper: is_skyscraper and not is_villa and not is_apartment_building and not is_landmark
		end

feature -- Constants

	default_width: REAL_64 is 33.0
			-- Default width of a skyscrapter

	default_depth: REAL_64 is 33.0
			-- Default depth of a skyscrapter

	default_height: REAL_64 is 81.0
			-- Default height of a skyscrapter

end
