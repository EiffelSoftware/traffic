indexing
	description: "Renders a TRAFFIC_PLACE and its name."
	date: "$Date$"
	revision: "$Revision$"

class
	FLAT_HUNT_PLACE_RENDERER

inherit
	TRAFFIC_2D_PLACE_RENDERER
		redefine
			render
		end
	
	SHARED_THEME
	
	EM_SHARED_SCENE

create
	make_with_map

feature -- Basic operations		
		
	render (a_place: TRAFFIC_PLACE): EM_DRAWABLE is
				-- Render `a_place' and its name.
		local
			container: PLACE_VIEW
			rectangle: EM_RECTANGLE
			place_label: EM_STRING			
		do
			rectangle ?= Precursor {TRAFFIC_2D_PLACE_RENDERER}(a_place)
			create place_label.make (a_place.name, theme.place_label_font)
			place_label.set_x_y (a_place.position.x.floor, a_place.position.y.floor)
			create container.make_with_content (rectangle, place_label)
			
			Result := container			

		end			
	
end
