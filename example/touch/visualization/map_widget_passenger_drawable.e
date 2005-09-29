indexing
	description: "Simple Visualization of MAP_WIDGET_PASSENGER."
	date: "2005/03/10"
	revision: "0.3"

class
	MAP_WIDGET_PASSENGER_DRAWABLE
	
inherit 
	EM_DRAWABLE
		redefine
			publish_mouse_event
		end
	
	EM_ANIMATABLE
	
create
	make_from_passenger
	
feature -- Initialization

	make_from_passenger (a_passenger: MAP_WIDGET_PASSENGER) is
			-- 
		do
			passenger := a_passenger
		end		

feature -- Access

	picture: EM_DRAWABLE
	
	set_picture (a_pic: EM_DRAWABLE) is
			-- Set `picture' to `a_pic'.
		do
			picture := a_pic
			update_position
		end
		
	passenger: MAP_WIDGET_PASSENGER
	
	update_position is
			-- Update position to passenger's position.
		local
			pos: EM_VECTOR_2D
		do
			pos := passenger.position
			x := (pos.x - (picture.width / 2)).floor
			y := (pos.y - (picture.height / 2)).floor
			picture.set_x_y (x, y)			
		end		
	
	go_to_time (a_time: INTEGER) is
			-- 
		do
			update_position			
		end
		
	draw (surface: EM_SURFACE) is
			-- Draw 'Current' onto `surf'.
		do
			if picture /= Void then
				surface.draw_object (picture)
			end
		end
		
	width: INTEGER is
			-- 
		do
			Result := picture.width
		end
		
	height: INTEGER is
			-- 
		do
			Result := picture.height
		end	
		
feature -- Mouse handling

	publish_mouse_event (a_mouse_event: EM_MOUSE_EVENT) is
			-- Publish mouse event when `a_mouse_event' occurred on `Current'.
			-- Descendants should redefine this feature 
			-- for only catching and publishing their mouse events when mouse pointer
			-- is really inside object or for 
			-- distributing mouse events to child objects.
		do
			if bounding_box.has (a_mouse_event.proportional_position) then
				dispatch_mouse_event (a_mouse_event)								
				
				-- Passenger does not catch (because if he does, the system crashes)
				-- a_mouse_event.set_caught (True)
			end			
		end		

end
