indexing
	description: "[
				class to visualize a TRAFFIC_LINE
				]"
	author: "Roger Kueng"
	date: "2005/07/12"
	revision: "1.0"
class
	TOUCH_GRAPHICAL_TRAFFIC_LINE
inherit
	TOUCH_TIMING
create
	make_with_line_and_map_widget
	
feature -- Initialization
	
	make_with_line_and_map_widget (a_line: TRAFFIC_LINE; a_map_widget: TRAFFIC_MAP_WIDGET) is
			-- 
		require
			a_line_not_void: a_line /= Void
			a_map_widget_not_void: a_map_widget /= Void
		do
			line := a_line
			map_widget := a_map_widget
			
			wait_time := 5000
		ensure
			line_set: line = a_line
			map_widget_set: map_widget = a_map_widget
		end

feature -- Access

	wait_time: INTEGER
	
	line: TRAFFIC_LINE

	map_widget: TRAFFIC_MAP_WIDGET
	
feature -- Measurement

feature -- Status report

feature -- Status setting

feature -- Cursor movement

feature -- Element change

feature -- Removal

feature -- Resizing

feature -- Transformation

feature -- Conversion

feature -- Duplication

feature -- Miscellaneous

feature -- Basic operations

	feature highlight is
			-- 
		local
			line_renderer: TRAFFIC_LINE_SECTION_RENDERER		
		do
	
			create line_renderer.make_with_map (map_widget.map)
			line_renderer.set_line_color (create {EM_COLOR}.make_with_rgb (0, 0, 0))
			line_renderer.set_line_width (map_widget.line_section_renderer.line_width * 2)
			map_widget.set_line_special_renderer (line_renderer, line)
			
			map_widget.render

			wait (wait_time)
			
			map_widget.reset_line_special_renderer (line)
			map_widget.render
			
		end
feature -- Obsolete

feature -- Inapplicable

feature {NONE} -- Implementation

invariant
	invariant_clause: True -- Your invariant here

end -- class TOUCH_GRAPHICAL_TRAFFIC_LINE
