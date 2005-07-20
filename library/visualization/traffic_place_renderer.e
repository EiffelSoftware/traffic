indexing
	description: "A TRAFFIC_PLACE renderer"
	author: "Roger Kueng"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_PLACE_RENDERER
		inherit
			TRAFFIC_ITEM_RENDERER [TRAFFIC_PLACE]
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
			map := a_map
			create place_color.make_with_rgb (0, 0, 255)
		end	
feature -- Status report
	map : TRAFFIC_MAP
		
	place_color: ESDL_COLOR
			-- Color used to fill places.
			
			
feature -- Status setting

	set_place_color (a_color: ESDL_COLOR) is
			-- Set `place_color' to `a_color'.
		require
			a_color_not_void: a_color /= Void
		do
			place_color := a_color
		end	
			
feature -- Basic operations
	render (a_place: TRAFFIC_PLACE) : ESDL_DRAWABLE is
				-- Rectangle to visualize `a_place'.
		local
			links: LIST [TRAFFIC_LINE_SECTION]
			p: ESDL_VECTOR_2D
			rectangle: ESDL_RECTANGLE
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
			rectangle.set_size_centered (rectangle.width + 10, rectangle.height + 10)
			rectangle.set_fill_color (place_color)			

			Result := rectangle
		end			

			
feature {NONE} -- Implementation

invariant
	invariant_clause: True -- Your invariant here

end -- class TRAFFIC_PLACE

