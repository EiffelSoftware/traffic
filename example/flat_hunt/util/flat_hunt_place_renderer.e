indexing
	description: "Renders a TRAFFIC_PLACE and its name."
	date: "$Date$"
	revision: "$Revision$"

class
	FLAT_HUNT_PLACE_RENDERER

inherit
	TRAFFIC_PLACE_RENDERER
		redefine
			render
		end
	
	THEME
	
	EM_SHARED_SCENE

create
	make_with_map

feature -- Basic operations		
		
	render (a_place: TRAFFIC_PLACE): EM_DRAWABLE is
				-- Render `a_place' and its name.
		local
--			container: EM_DRAWABLE_CONTAINER [EM_DRAWABLE]
			container: PLACE_VIEW
			rectangle: EM_RECTANGLE
			place_label: EM_STRING			
		do
			rectangle ?= Precursor {TRAFFIC_PLACE_RENDERER}(a_place)
			create place_label.make (a_place.name, place_label_font)
			place_label.set_x_y (a_place.position.x.floor, a_place.position.y.floor)
			create container.make_with_content (rectangle, place_label)
			
			Result := container			

--			Result := Precursor {TRAFFIC_PLACE_RENDERER} (a_place)

--			container.extend (Precursor {TRAFFIC_PLACE_RENDERER}(a_place))
--			
--			-- I know, this is ugly because it doesn't follow the query-command-separation principle, 
--			-- but as of now I couldn't come up with another solution that is equally fast & doesn't
--			-- cause a memory leak. Any suggestions?
--			create place_label.make (a_place.name, place_label_font)
--			place_label.set_x_y (a_place.position.x.floor, a_place.position.y.floor)
--			container.extend (place_label)
--			Result := container
		end			
	
end
