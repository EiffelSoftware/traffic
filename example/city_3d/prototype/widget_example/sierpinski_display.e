indexing
	description: "[
	
		Example component to show implementation of a 3D scene component.
		
		Drawing:
			Implement 'draw' and put your OpenGL code there.
		
		Events:
			See INPUT_SENSITIVE
	
	]"
	date: "$Date$"
	revision: "$Revision$"

class
	SIERPINSKI_DISPLAY

inherit
	EM_3D_COMPONENT
	
	SINGLE_MATH
		export {NONE} all end
	
create	
	make
	
feature {NONE} -- Initialisation

	make is
			-- Initialise default values.
		local
			point1, color1: GL_VECTOR_3D [REAL]
			point2, color2: GL_VECTOR_3D [REAL]
			point3, color3: GL_VECTOR_3D [REAL]
			point4, color4: GL_VECTOR_3D [REAL]
		do
			make_3d_component
			set_tooltip ("drag to rotate / left click to increase detail / right click to decrease detail")
			
			subdivisions := 0
			longitude := 10
			latitude := 20
			distance := 2
			
			create point1.make_xyz (1, -0.4, 0)
			create point2.make_xyz (-cosine (Pi/3), -0.4, sine (Pi/3))
			create point3.make_xyz (-cosine (Pi/3), -0.4, -sine (Pi/3))
			create point4.make_xyz (0, 1, 0)
			create color1.make_xyz (1, 0, 0)
			create color2.make_xyz (0, 1, 0)
			create color3.make_xyz (0, 0, 1)
			create color4.make_xyz (1, 1, 1)
			
			create pyramid.make (point1, point2, point3, point4, color1, color2, color3, color4)
			pyramid.subdivide (subdivisions)
			
			-- OpenGL initialization
			create light.make (Em_gl_light0)
			light.ambient.set_xyzt (0, 0, 0, 1)
			light.specular.set_xyzt (1, 1, 1, 1)
			light.diffuse.set_xyzt (1, 1, 1, 1)
			light.position.set_xyz (0.5, 0.5, 0.5)
			light.apply_values
			
			-- Event registration
			mouse_clicked_event.subscribe (agent handle_mouse_clicked)
			mouse_dragged_event.subscribe (agent handle_mouse_dragged)
			mouse_wheel_up_event.subscribe (agent handle_mouse_wheel_up)
			mouse_wheel_down_event.subscribe (agent handle_mouse_wheel_down)
		end

feature -- Access

	subdivisions: INTEGER
			-- Level of subdivision

	longitude: REAL
			-- Longitude of the eye (in degree) around center (0,0,0)

	latitude: REAL
			-- Latitude of the eye (in degree) around center (0,0,0)
		
	distance: REAL
			-- Distance of the eye to center (0,0,0)
	
	pyramid: SIERPINSKI_PYRAMID
			-- Subdivided pyramid
			
	pyramid_display_list: INTEGER
			-- Display list id of pyramid
			
	light: GL_LIGHT
			-- OpenGL light

feature -- Basic operations

	increase_subdivisions is
			-- Increase subdivisions.
		do
			subdivisions := subdivisions + 1
			pyramid.subdivide (subdivisions)
			-- Free display list to trigger generation of a new one
			gl_delete_lists (pyramid_display_list, 1)
			pyramid_display_list := 0
		ensure
			subdivisions_increased: subdivisions = old subdivisions + 1
		end
		
	decrease_subdivisions is
			-- Decrease subdivisions.
		do
			if subdivisions > 0 then
				subdivisions := subdivisions - 1
				pyramid.subdivide (subdivisions)
				-- Free display list to trigger generation of a new one
				gl_delete_lists (pyramid_display_list, 1)
				pyramid_display_list := 0
			end
		ensure
			subdivisions_decreased: old subdivisions > 0 implies subdivisions = old subdivisions - 1
		end
		
feature -- Drawing

	draw is
			-- Draw pyramid.
		do
			-- Set up eye position
			gl_translatef (0, 0, -distance)
			gl_rotatef (-longitude, 0, 1, 0)
			gl_rotatef (latitude, cosine (-longitude / 180 * pi),0,sine (-longitude / 180 * pi))
			-- Generate a display list if necessary and call it
			if pyramid_display_list = 0 then
				pyramid_display_list := gl_gen_lists (1)
				gl_new_list (pyramid_display_list, Em_gl_compile)
					pyramid.draw
				gl_end_list
			end
			
			gl_enable (Em_gl_lighting)
			gl_enable (Em_gl_color_material)
			gl_color_material (Em_gl_front_and_back, Em_gl_ambient_and_diffuse)
			light.enable
			gl_call_list (pyramid_display_list)
			gl_disable (Em_gl_color_material)
			gl_disable (Em_gl_lighting)
		end

feature {NONE} -- Mouse management
		
	handle_mouse_clicked (event: EM_MOUSEBUTTON_EVENT) is
			-- Handle mouse clicked event.
		do
			if event.is_left_button then
				increase_subdivisions
			elseif event.is_right_button and subdivisions > 0 then
				decrease_subdivisions
			end
		end

	handle_mouse_dragged (event: EM_MOUSEMOTION_EVENT) is
			-- Handle mouse dragged event.
		do
			longitude := longitude - event.motion.x
			latitude := latitude + event.motion.y
			if latitude > 90 then
				latitude := 90
			elseif latitude < -90 then
				latitude := -90
			end
		end
	
	handle_mouse_wheel_up is
			-- Handle mouse wheel up event.
		do
			distance := distance - 0.1
			if distance < 0 then
				distance := 0
			end
		end
	
	handle_mouse_wheel_down is
			-- Handle mouse wheel down event.
		do
			distance := distance + 0.1
			if distance > 10 then
				distance := 10
			end
		end
		
end
