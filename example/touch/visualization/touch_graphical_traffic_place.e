indexing
	description: "[
				class to visualize a TRAFFIC_PLACE
				]"
	date: "2005/07/12"
	revision: "1.0"

class
	TOUCH_GRAPHICAL_TRAFFIC_PLACE
inherit
	TOUCH_TIMING

create
	make_with_place_and_map_widget
	
feature -- Initialization
	make_with_place_and_map_widget (a_place: TRAFFIC_PLACE; a_map_widget: TRAFFIC_MAP_WIDGET) is
			-- 
		require
			a_place_not_void: a_place /= Void
			a_map_widget_not_void: a_map_widget /= Void
		do
			place := a_place
			map_widget := a_map_widget
			
			wait_time := 5000
		ensure
			place_set: place = a_place
			map_widget_set: map_widget = a_map_widget
		end

feature -- Access
	wait_time: INTEGER
	
	place: TRAFFIC_PLACE

	map_widget: TRAFFIC_MAP_WIDGET

feature -- Commands
	spotlight is
			-- display the place different than normal
		local
			place_renderer: TRAFFIC_PLACE_RENDERER	
		do	
			create place_renderer.make_with_map (map_widget.map)
			place_renderer.set_place_color( create {EM_COLOR}.make_with_rgb (0, 0, 0))
			place_renderer.set_size_extension (20)

			map_widget.set_place_special_renderer (place_renderer, place)
			map_widget.render
			
			wait (wait_time)

			map_widget.reset_place_special_renderer (place)
			map_widget.render
		end

feature -- Queries
	is_exchange: BOOLEAN is
			-- Do several lines have a stop on this place
		local
			line: TRAFFIC_LINE
			line_sections: LIST [TRAFFIC_LINE_SECTION]
		do
			line_sections := map_widget.map.line_sections_of_place (place.name)
			Result := false
			from
				line_sections.start
			until
				line_sections.after or else Result = true
			loop
				if line = Void then
					line := line_sections.item.line
				else 
					if line = line_sections.item.line then
						Result := true
					end
				end
				line_sections.forth
			end
		end
		
invariant
	place_set: place /= Void
	map_widget_set: map_widget /= Void
	wait_time_valid: wait_time >= 0

end -- class TOUCH_GRAPHICAL_TRAFFIC_PLACE
