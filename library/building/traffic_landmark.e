indexing
	description: "Landmarks are special buildings with an image file or 3d model file for display"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_LANDMARK

inherit

	TRAFFIC_BUILDING

create
	make

feature {NONE} -- Initialization

	make (a_center: TRAFFIC_COORDINATE; a_filename: STRING) is
			-- Initialize with default size.
		require
			center_valid: a_center /= Void
			a_filename_exists: a_filename /= Void and then not a_filename.is_empty
		do
			filename := a_filename
			make_new (default_width, default_depth, default_height, a_center)
			is_landmark := True
		ensure
			is_landmark: is_landmark and not is_apartment_building and not is_skyscraper and not is_villa
			size_set: width = default_width and height = default_height and depth = default_depth
			center_set: center = a_center
			filename_set: filename.is_equal (a_filename)
		end

feature -- Access

	filename: STRING
			-- Filename for special display object

feature -- Constants

	default_width: DOUBLE is 27.0

	default_depth: DOUBLE is 13.0

	default_height: DOUBLE is 35.0

end
