indexing
	description: "[
					A TRAFFIC_PLACE renderer. It renders a rectangle big enough to contain all the 
					startpoints of the neighbouring line_sections.
					]"
	date: "2005/08/31"
	revision: "1.0"

class
	TRAFFIC_PLACE_RENDERER
		inherit
			TRAFFIC_2D_ITEM_RENDERER [TRAFFIC_PLACE]
			redefine
				render
			end
				
create 
	make_with_map
	
feature {NONE} -- Initialization
	make_with_map (a_map: TRAFFIC_MAP) is
			-- Initialize to render items of `a_map'.
		require
			a_map_not_void: a_map /= Void
		do
			size_extension := 10
			map := a_map
			create place_color.make_with_rgb (0, 0, 255)
		ensure
			map_set: map = a_map
		end	
		
feature -- Status report
	map : TRAFFIC_MAP
		
	place_color: EM_COLOR
			-- Color used to fill places.
			
	size_extension: INTEGER
	
feature -- Status setting

	set_place_color (a_color: EM_COLOR) is
			-- Set `place_color' to `a_color'.
		require
			a_color_not_void: a_color /= Void
		do
			place_color := a_color
		ensure
			color_set: place_color = a_color
		end	
	
	set_size_extension (a_size: INTEGER) is
			-- 
		require
			a_size_positive: a_size > 0
		do
			size_extension := a_size
		ensure
			size_extension_set: size_extension = a_size
		end
		
feature -- Basic operations
	render (a_place: TRAFFIC_PLACE) : EM_DRAWABLE is
				-- Rectangle to visualize `a_place'.
		local
			links: LIST [TRAFFIC_LINE_SECTION]
			p: EM_VECTOR_2D
			rectangle: EM_RECTANGLE
		do

			-- Calculate rectangle to include all outgoing links of `a_place'.
			links := map.line_sections_of_place (a_place.name)			
			from			
				links.start
			until
				links.after
			loop
				if links.item.polypoints /= Void and then links.item.polypoints.count > 0 then   
				-- TODO: this check is only necessary because currently LINE_SECTION seems to be wrong --> see invariant of LINE_SECTION
					p := links.item.polypoints.first
					if rectangle = Void then
						create rectangle.make (p.twin, p.twin)
					else
						rectangle.extend (p)	
					end
				end
				links.forth
			end
			
			if rectangle = Void then
				create rectangle.make (a_place.position.twin, a_place.position.twin)				
			end
			
			-- Make a little bit larger and keep center-position
			rectangle.set_size_centered (rectangle.width + size_extension, rectangle.height + size_extension)
			rectangle.set_fill_color (place_color)			

			Result := rectangle
		end			

			
feature {NONE} -- Implementation

invariant
	map_set: map /= Void

end -- class TRAFFIC_PLACE

