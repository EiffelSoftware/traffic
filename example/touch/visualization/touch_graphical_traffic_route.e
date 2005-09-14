indexing
	description: "[
					The class TOUCH_GRAPHICAL_TRAFFIC_ROUTE inherits from TRAFFIC_ROUTE
					and has also a praphical part. It uses a TOUCH_PASSENGER to visualize
					the Route.
				]"
	date: "2005/07/12"
	revision: "1.0"

class
	TOUCH_GRAPHICAL_TRAFFIC_ROUTE

inherit	
	TRAFFIC_ROUTE

create 
	make_with_scene_and_map_widget
	
feature -- Initialization		
	make_with_scene_and_map_widget (a_scene: EM_SCENE; a_map_widget: TRAFFIC_MAP_WIDGET) is
			-- 
		do
			make_empty (a_map_widget.map)
		
			scene := a_scene --.start_animating (passenger_drawable)
			map_widget := a_map_widget
			
			--map_widget.extend (passenger_drawable)
		ensure
			map_widget_set: map_widget = a_map_widget
			scene_set: scene = a_scene
		end
		
feature -- Access
	scene: EM_SCENE

	map_widget: TRAFFIC_MAP_WIDGET

feature -- Status setting
	set_scene (a_scene: EM_SCENE) is
			-- 
		do
			scene := a_scene
		ensure 
			scene_set: scene = a_scene
		end
		
	set_map_widget (a_map_widget: TRAFFIC_MAP_WIDGET) is
			-- 
		do
			map_widget := a_map_widget
		ensure
			map_widget_set: map_widget = a_map_widget
		end

feature -- Basic operations	
	animate is
			--animate the route with a passenger
		require
			correct_route: places_on_route /= Void and then places_on_route.first /= void
			scene_set: scene /= Void
			map_widget_set: map_widget /= Void
		local
			animation: TOUCH_PASSENGER
			drawable: MAP_WIDGET_PASSENGER_DRAWABLE
			shared_bitmap_factory: EM_SHARED_BITMAP_FACTORY
		do				
			create animation.make_on_map_place (map_widget.map, places_to_visit.first)
			create drawable.make_from_passenger (animation)
			
			create shared_bitmap_factory

			shared_bitmap_factory.bitmap_factory.create_bitmap_from_image ("images/star.png")
			drawable.set_picture (shared_bitmap_factory.bitmap_factory.last_bitmap)

			map_widget.extend (drawable)
			scene.start_animating (drawable)		
		
			animation.move_route (Current)
			
			scene.stop_animating (drawable)
			map_widget.delete (drawable)
		
		end

end -- class EXAMPLE_PASSENGER
