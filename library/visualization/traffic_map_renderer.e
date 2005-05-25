indexing
	description: "Renderers to render TRAFFIC_MAP"
	note: "[
				Just a very simple implementation, not very reusable yet not very nice yet 
				(maybe create something like TRAFFIC_PLACE_VIEW instead of ESDL_RECTANGLE / ESDL_POLYLINE ??? etc. ....)	
	
				]"
	author: "Rolf Bruderer"
	date: "2005/03/15"
	revision: "0.1"



class
	TRAFFIC_MAP_RENDERER
	
create 
	make_with_map
	
feature {NONE} -- Initialization

	make_with_map (a_map: TRAFFIC_MAP) is
			-- Initialize to render items of `a_map'.
		require
			a_map_not_void: a_map /= Void
		do
			place_renderer := agent place_view
			line_section_renderer := agent line_section_view	
			map := a_map
			create place_color.make_with_rgb (0, 0, 255)
			create traffic_type_colors.make (20)
			create traffic_type_line_widths.make (20)
			line_width := 4.0
		end
		
feature -- Access

	map: TRAFFIC_MAP
			-- Map of which `Current' can visualize places.

	traffic_type_colors: DS_HASH_TABLE [ESDL_COLOR, STRING]
			-- Colors for traffic types 
			--|(identified through their names, 
			--|because traffic type not yet HASHABLE, should be?)			

	traffic_type_line_widths: DS_HASH_TABLE [DOUBLE, STRING]
			-- Line widths for traffic types 
			--|(identified through their names, 
			--|because traffic type not yet HASHABLE, should be?)

feature -- Status report

	place_color: ESDL_COLOR
			-- Color used to fill places.
			
	line_color: ESDL_COLOR
			-- Color used to draw traffic line sections
			-- that have no appropriate `traffic_type_color' set
			-- (if `Void' either the color of the line is used
			-- or simply white).
			
	line_width: DOUBLE
			-- Line width used to draw traffic line sections.
			-- (if none set for the traffic			
			
feature -- Status setting

	set_place_color (a_color: ESDL_COLOR) is
			-- Set `place_color' to `a_color'.
		require
			a_color_not_void: a_color /= Void
		do
			place_color := a_color
		end	
		
	set_line_color (a_color: ESDL_COLOR) is
			-- Set `line_color' to `a_color'.
		do
			line_color := a_color
		ensure
			line_color_set: line_color = a_color
		end	
		
	set_line_width (a_line_width: DOUBLE) is
			-- Set `line_width' to `a_line_width'.	
		require
			a_line_width_positive: a_line_width > 0
		do
			line_width := a_line_width
		ensure
			line_width_set: line_width = a_line_width
		end
		
feature -- Renderers

	place_renderer: FUNCTION [ANY, TUPLE [TRAFFIC_PLACE], ESDL_RECTANGLE]
			-- Renderer for use with TRAFFIC_WIDGET to visualize places of TRAFFIC_MAP
	
	line_section_renderer: FUNCTION [ANY, TUPLE [TRAFFIC_LINE_SECTION], ESDL_POLYLINE]
			-- Renderer for use with TRAFFIC_WIDGET to visualize line sections of TRAFFIC_MAP
			
feature {NONE} -- Rendering	Implementation
	
	place_view (a_place: TRAFFIC_PLACE): ESDL_RECTANGLE is
			-- Rectangle to visualize `a_place'.
		require
			a_place_not_void: a_place /= Void
		local
			links: LIST [TRAFFIC_LINE_SECTION]
			p: ESDL_VECTOR_2D
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
					if Result = Void then
						create Result.make (p.twin, p.twin)
					else
						Result.extend (p)	
					end
				end
				links.forth
			end
			
			if Result = Void then
				create Result.make (a_place.position.twin, a_place.position.twin)				
			end
			
			-- Make a little bit larger and keep center-position
			Result.set_size_centered (Result.width + 10, Result.height + 10)
			Result.set_fill_color (place_color)			
		end	
		
	line_section_view (a_line_section: TRAFFIC_LINE_SECTION): ESDL_POLYLINE is
			-- Polyline to visualize `a_line_section'.
		require
			a_line_section_not_void: a_line_section /= Void
		local
			col: ESDL_COLOR
			tcol: TRAFFIC_COLOR
		do
			create Result.make_from_list (a_line_section.polypoints)


			-- TODO: the following should not be necessary seem to be a LINE_SECTION bug: --> see invariant of LINE_SECTION
			if Result.count < 2 then
				create Result.make_empty
				Result.extend (a_line_section.origin.position)
				Result.extend (a_line_section.destination.position)
			end
			
			
			if traffic_type_colors.has (a_line_section.type.name) then
				Result.set_line_color (traffic_type_colors.item (a_line_section.type.name))
			elseif line_color /= Void then
				Result.set_line_color (line_color)
			elseif a_line_section.line /= Void then
				if a_line_section.line.color /= Void then
					tcol := a_line_section.line.color
					create col.make_with_rgb (tcol.red, tcol.green, tcol.blue)					
					Result.set_line_color (col)
				end				
			end
			if traffic_type_line_widths.has (a_line_section.type.name) then
				Result.set_line_width (traffic_type_line_widths.item (a_line_section.type.name))
			else
				Result.set_line_width (line_width)
			end	
			
		end		

end -- class TRAFFIC_MAP_RENDERER
