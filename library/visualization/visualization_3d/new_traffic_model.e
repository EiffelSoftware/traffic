indexing
	description: "Objects that ..."
	author: "Matthias Bühlmann"
	date: "$Date$"
	revision: "$Revision$"

class
	NEW_TRAFFIC_MODEL

inherit

	EM_3D_OBJECT
	
	EM_GL_CONSTANTS
	
	GLEXT_FUNCTIONS
	
	EM_GLEXT_CONSTANTS

	DOUBLE_MATH
		export {NONE} all end
		
--	AW_SHARED_MATERIALS

create

	make

feature {NONE} -- Initialization

make is
		-- creation
	do
		scale.set(1,1,1)
		create textures.make (0)
	end


feature {NONE} -- Implementation

	model: EM_3D_OBJECT
		-- das 3D Model

feature -- Texture and binding
	
	bind_texture is
			-- bindet die textur an das objekt
			local
				i: INTEGER
		do
			if texture_id /= void and then texture_id.item(0) /= 0 then
				gl_enable(Em_gl_texture_2d)
				gl_bind_texture(Em_gl_texture_2d, texture_id.item (0))
			else
				gl_disable(Em_gl_texture_2d)
			end
			
			
--			if shader /= void then
--				shader.use
--				from
--					i:=0
--				until
--					i=texture_id.count
--				loop
--					shader.uniform1i ("tex"+i.out, i)		
--					gl_active_texture_arb( 33984 + i )
--					gl_bind_texture ( em_gl_texture_2d, texture_id.item (i) )
--					i := i + 1
--				end
--				aw_materials.shader_interface(shader, shader_interface)
--			end
			
			
		end
	
	unbind_texture is
			-- löscht die textur, damit auch objekte ohne textur gezeichnet werden können
		do
			gl_disable(Em_gl_texture_2d)
			
--			if shader /= void then
--				gl_active_texture_arb( em_gl_texture0_arb )
--				shader.unuse
--			end
		end
	
	assign_material is -- sollte noch private gemacht werden!
			-- führt vor dem zeichnen eine displaylist mit den settings von AW_MATERIAL aus
		do
--			gl_call_list (aw_materials.disable_materials)
--			gl_call_list (aw_materials.material[material_id])
			
			gl_enable(EM_GL_CULL_FACE)
			gl_enable(EM_GL_ALPHA_TEST)
			gl_alpha_func(EM_GL_GREATER, 0.5)
		end
		
	remove_material is -- sollte noch private gemacht werden!
			-- führt vor dem zeichnen eine displaylist mit den settings von AW_MATERIAL aus
		do
			
			gl_disable(EM_GL_CULL_FACE)
			gl_disable(EM_GL_ALPHA_TEST)
		end
		

	set_texture_id(a_texture_id: ARRAY[INTEGER])is
			-- setzt die zu rendernde textur_id! einfach dieses feature callen und das objekt wird mit der neuen textur gezeichnet!
		do
			texture_id := a_texture_id
		end
		
	add_texture(a_texture: EM_BITMAP)is
			-- 
		do
			textures.extend (a_texture)
		end
		
	set_material_id (a_material_id: INTEGER)is
			-- setzt die material_id
		do
			material_id := a_material_id
		end
		
--	set_shader (a_shader: GL_SHADER_PROGRAM) is
--			-- setzt shader programm
--		do
--			shader := a_shader
--		end
--		
--	set_shader_interface (a_shader_interface: INTEGEr) is
--			-- setzt shader interface
--		do
--			shader_interface := a_shader_interface
--		end
		
		
	set_model(a_em_3d_object: EM_3D_OBJECT)is
			-- weist das model zu
		do
			model := a_em_3d_object
			set_origin(model.origin.x, model.origin.y, model.origin.z)
			set_scale(model.scale.x, model.scale.y, model.scale.z)
			set_rotation(model.angle_x, model.angle_y, model.angle_z)
		end
		
	set_bounding_box(a_width, a_height, a_depth: DOUBLE) is
			-- 
		do
			width := a_width
			height := a_height
			depth := a_depth
		end
		

	texture_id: ARRAY[INTEGER]
		-- speichert momentane textur_id
		
	textures: ARRAYED_LIST[EM_BITMAP]
		-- speichert alle texturreferenzen, falls sie bearbeitet werden müssen und damit der garbage collector
		-- sie nicht löscht.
		
	texture_count: INTEGER is
			-- gibt anzahl texturen für dieses Objekt zurück
		do
			Result := texture_id.capacity
		end
		
		-- speichert die Anzahl Texturen des Models
		
	material_id: INTEGER
		-- speichert material_id des objekts
		
--	shader: GL_SHADER_PROGRAM
--		-- speichert das shaderprogramm das aus dem vertex und fragment shader file gelesen wird, falls GLSL aktiviert ist
--		
--	shader_interface: INTEGER
--		-- speichert, welches shader interface (definitert in AW_MATERIALS) verwendet werden soll

feature -- Assignment per Vector Objects
--	set_origin_by_vector (vec: AW_VECTOR_CARTHESIAN) is
--			-- set origin
--		do
--			set_origin (vec.x, vec.y, vec.z)
--		end
				
--	set_rotation_by_vector (vec: AW_VECTOR_ANGULAR) is
--			-- set origin
--		do
--			set_rotation (vec.angle_x, vec.angle_y, vec.angle_z)
--		end	


feature {EM_3D_OBJECT} -- Implementation of the 3d object

	draw_object	is
		do
			bind_texture
			assign_material
			model.draw_object
			remove_material
			unbind_texture
		end

end


