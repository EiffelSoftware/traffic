indexing
	description: "[
				The Class 'TOUCH_PLACE_RENDERER' is an extension of the basic 'TRAFFIC_PLACE_RENDERER'
				It does draw the rectangle, but it also draws the first picture of the information.
				And it draws the name of the places(NOT YET).
				]"
	date: "2005/07/12"
	revision: "1.0"

class
	TOUCH_PLACE_RENDERER

inherit
	TRAFFIC_PLACE_RENDERER
		redefine
			render
		end
	
	EM_SHARED_BITMAP_FACTORY
		undefine
			is_equal,
			default_create,
			copy
		end
	
create 
	make_with_map

feature -- Basic operations
	render (a_place: TRAFFIC_PLACE): EM_DRAWABLE is
			-- Render place as rectangle and add a picture if it has any
		local
			bitmap: EM_BITMAP
			container: EM_DRAWABLE_CONTAINER [EM_DRAWABLE]
		do
			create container.make

			container.extend (Precursor {TRAFFIC_PLACE_RENDERER} (a_place))
			
			if a_place.information /= Void then
				if a_place.information.pictures.first /= Void then
					
					bitmap_factory.create_bitmap_from_image (a_place.information.pictures.first)
					bitmap := bitmap_factory.last_bitmap
					if bitmap /= Void then
						bitmap.set_x_y (a_place.position.x.rounded - bitmap.width//2 - 30, a_place.position.y.rounded - bitmap.height//2 - 30)
						container.extend (bitmap)				
					end
				end
			end
			
			Result := container
		end

end -- class TOUCH_PLACE_RENDERER
