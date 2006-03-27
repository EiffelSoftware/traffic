indexing
	description: "[
					Renders the LINE_SECTIONS
					]"
	date: "2005/08/31"
	revision: "1.0"

obsolete class
	TRAFFIC_2D_LINE_RENDERER
		inherit
			TRAFFIC_2D_ITEM_RENDERER [EM_DRAWABLE]
			redefine
				render,
				render_type
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
		
	traffic_type_colors: DS_HASH_TABLE [EM_COLOR, STRING]
			-- Colors for traffic types 
			--|(identified through their names, 
			--|because traffic type not yet HASHABLE, should be?)			

	traffic_type_line_widths: DS_HASH_TABLE [DOUBLE, STRING]
			-- Line widths for traffic types 
			--|(identified through their names, 
			--|because traffic type not yet HASHABLE, should be?)
			
feature -- Status report
		
	line_color: EM_COLOR
			-- Color used to draw traffic line sections
			-- that have no appropriate `traffic_type_color' set
			-- (if `Void' either the color of the line is used
			-- or simply white).
			
	line_width: DOUBLE
			-- Line width used to draw traffic line sections.
			-- (if none set for the traffic			
			
feature -- Status setting
		
	set_line_color (a_color: EM_COLOR) is
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
	render (a_line_section: TRAFFIC_LINE_SECTION): EM_POLYLINE is
			-- Polyline to visualize `a_line_section'.	
			
		local
			col: EM_COLOR
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
		
		render_type :STRING is
			do
				Result := "TRAFFIC_LINE_SECTION"
			end

feature {NONE} -- Implementation

invariant
	invariant_clause: True -- Your invariant here

end
