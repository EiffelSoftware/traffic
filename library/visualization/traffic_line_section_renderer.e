indexing
	description: "A TRAFFIC_LINE_SECTION renderer"
	author: "Roger K�ng"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_LINE_SECTION_RENDERER
		inherit
			TRAFFIC_ITEM_RENDERER [TRAFFIC_LINE_SECTION]
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
			line_width := 4.0
			
			create traffic_type_colors.make (20)
			create traffic_type_line_widths.make (20)
		end

feature -- Access		
	map : TRAFFIC_MAP
		
	traffic_type_colors: DS_HASH_TABLE [ESDL_COLOR, STRING]
			-- Colors for traffic types 
			--|(identified through their names, 
			--|because traffic type not yet HASHABLE, should be?)			

	traffic_type_line_widths: DS_HASH_TABLE [DOUBLE, STRING]
			-- Line widths for traffic types 
			--|(identified through their names, 
			--|because traffic type not yet HASHABLE, should be?)
			
feature -- Status report
		
	line_color: ESDL_COLOR
			-- Color used to draw traffic line sections
			-- that have no appropriate `traffic_type_color' set
			-- (if `Void' either the color of the line is used
			-- or simply white).
			
	line_width: DOUBLE
			-- Line width used to draw traffic line sections.
			-- (if none set for the traffic			
			
feature -- Status setting
		
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
		
feature -- Basic operations
	render (a_line_section: TRAFFIC_LINE_SECTION): ESDL_POLYLINE is
			-- Polyline to visualize `a_line_section'.	
			
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

feature {NONE} -- Implementation

end -- class TRAFFIC_LINE_SECTION_RENDERER
