indexing
	description: "Renders a TRAFFIC_PLACE and its name."
	date: "$Date$"
	revision: "$Revision$"

class
	FLAT_HUNT_PLACE_RENDERER

inherit
	TRAFFIC_PLACE_RENDERER
		redefine
			make_with_map, render
		end
	
	THEME
	
	EM_SHARED_SCENE

create
	make_with_map

feature -- Initialization

	make_with_map (a_map: TRAFFIC_MAP) is
			-- Initialize to render items of `a_map'.
		do
			Precursor {TRAFFIC_PLACE_RENDERER} (a_map)
		end

feature -- Basic operations		
		
	render (a_place: TRAFFIC_PLACE): EM_DRAWABLE is
				-- Render `a_place' and its name.
		local
			container: EM_DRAWABLE_CONTAINER [EM_DRAWABLE]			
		do
			create container.make			
			container.extend (Precursor {TRAFFIC_PLACE_RENDERER}(a_place))
			Result := container
			
			-- I know, this is ugly because it doesn't follow the query-command-separation principle, 
			-- but as of now I couldn't come up with another solution that is equally fast & doesn't
			-- cause a memory leak. Any suggestions?
			Place_label_font.draw_string (a_place.name, running_scene.screen, a_place.position.x.floor, a_place.position.y.floor)
		end			
	
end