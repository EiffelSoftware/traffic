indexing
	description: "Apartment buildings with lots of condos"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_APARTMENT_BUILDING

inherit

	TRAFFIC_BUILDING
		redefine
			make_new
		end

create

	make_new, make_default

feature {NONE} -- Initialization

	make_default (a_center: TRAFFIC_COORDINATE) is
			-- Initialize with default size.
		require
			center_valid: a_center /= Void
		do
			make_new (default_width, default_depth, default_height, a_center)
			is_apartment_building := True
		ensure
			is_apartment_building: is_apartment_building and not is_villa and not is_skyscraper and not is_landmark
			size_set: width = default_width and height = default_height and depth = default_depth
			center_set: center = a_center
		end

	make_new (a_width, a_depth, a_height: DOUBLE; a_center: TRAFFIC_COORDINATE) is
			-- Initialize with size.
		do
			Precursor (a_width, a_depth, a_height, a_center)
			is_apartment_building := True
		ensure then
			is_apartment_building: is_apartment_building and not is_villa and not is_skyscraper and not is_landmark
		end

feature -- Constants

	default_width: DOUBLE is 27.0
			-- Default width of an apartment

	default_depth: DOUBLE is 13.0
			-- Default depth of an apartment

	default_height: DOUBLE is 35.0
			-- Default height of an apartment

end
