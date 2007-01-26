indexing
	description: "Class to fill in example 'road creation'"
	date: "$Date$"
	revision: "$Revision$"

class ROAD_CREATION

inherit

	TOURISM
		redefine
			explore
		end
	TOUCH_ROAD

feature -- Example

	explore is
			-- Some information.
		do
			console.set_text ("This is an example of a road creation. Click the Button to create a new Road")
			paris.display
		end

	explore_on_click is
			-- Create a road and animate it.
		do
			create place1.make_with_pos ("Place 1", 50, 50)
			create place2.make_with_pos ("Place 2", 90, 50)
			create place3.make_with_pos ("Place 3", 130, 50)
			create place4.make_with_pos ("Place 4", 170, 50)
			create place5.make_with_pos ("Place 5", 210, 90)
			create place6.make_with_pos ("Place 6", 210, 130)
			create place7.make_with_pos ("Place 7", 210, 170)
			create place8.make_with_pos ("Place 8", 210, 210)
			create place9.make_with_pos ("Place 9", 210, 250)
			create place10.make_with_pos ("Place 10", 90, 150)
			place1.link (place2)
			place2.link (place3)
			place3.link (place4)
			place4.link (place5)
			place5.link (place6)
			place6.link (place7)
			place7.link (place8)
			place8.link (place9)
			place9.link (place10)
			map_widget.disable_lines_shown -- Used for better contrast
			make_colored_road(place1, 5, 10, 25)
		end

feature -- Access

	place1: TOUCH_PLACE
	place2: TOUCH_PLACE
	place3: TOUCH_PLACE
	place4: TOUCH_PLACE
	place5: TOUCH_PLACE
	place6: TOUCH_PLACE
	place7: TOUCH_PLACE
	place8: TOUCH_PLACE
	place9: TOUCH_PLACE
	place10: TOUCH_PLACE
end
