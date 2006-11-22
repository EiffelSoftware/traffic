indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TE_3D_TRANSFORM inherit

create
	make, make_from_matrix


feature -- initialization

	make is
			-- Initialize with default values
		do
			model_matrix.set_unit
		end

	make_from_matrix(a_matrix: EM_MATRIX44) is
				-- make transform object from transformation matrix
		do
			model_matrix := a_matrix
		end


feature -- Access

	position: EM_VECTOR3D is
		-- position
		do
			result.set(model_matrix.element (4,1), model_matrix.element (4,2), model_matrix.element (4,3))
		end

	rotation: EM_QUATERNION is
			-- rotation as quaternion
		do
			Result.set_from_matrix44(model_matrix)
		end

--	--scaling: EM_VECTOR3D is
--		-- scaling
--		do
--			Result.set(scaling_matrix.element(1,1), scaling_matrix.element(2,2), scaling_matrix.element(3,3))
--		end

	x_axis: EM_VECTOR3D
		-- x_axis
		local
			x_unit:EM_VECTOR4D
			x_axis_4d: EM_VECTOR4D
		do
			x_unit.set(1.0,0.0,0.0,1.0)
			x_axis_4d := model_matrix.mult(x_unit)
			result.set(x_axis_4d.x, x_axis_4d.y, x_axis_4d.z)
			result := result - position
			result.normalize
		end

	y_axis: EM_VECTOR3D
		-- y_axis
		local
			y_unit:EM_VECTOR4D
			y_axis_4d: EM_VECTOR4D
		do
			y_unit.set(0.0,1.0,0.0,1.0)
			y_axis_4d := model_matrix.mult(y_unit)
			result.set(y_axis_4d.x, y_axis_4d.y, y_axis_4d.z)
			result := result - position
			result.normalize
		end

	z_axis: EM_VECTOR3D
		-- z_axis
		local
			z_unit:EM_VECTOR4D
			z_axis_4d: EM_VECTOR4D
		do
			z_unit.set(0.0,1.0,0.0,1.0)
			z_axis_4d := model_matrix.mult(z_unit)
			result.set(z_axis_4d.x, z_axis_4d.y, z_axis_4d.z)
			result := result - position
			result.normalize
		end

	model_matrix: EM_MATRIX44
			-- transform matrix of the object


feature -- Measurement

feature -- Status report

feature -- Status setting

feature -- Cursor movement

feature -- Element change

feature -- Removal

feature -- Resizing

feature -- Transformation

	reset is
			-- resets the transformation
		do
			model_matrix.set_unit
		end


	set_position(x,y,z:DOUBLE) is
		-- sets the position
		do
			model_matrix.set_element(x,4,1)
			model_matrix.set_element(y,4,2)
			model_matrix.set_element(z,4,3)
		end


	translate (x,y,z:DOUBLE) is
			-- offsets the position with the translate-vector
		local
			translation_vect: EM_VECTOR3D
			translation: EM_MATRIX44
		do
			translation_vect.set(x,y,z)
			translation.set_from_translation(translation_vect)
			model_matrix := translation * model_matrix
		end

	rotate (x,y,z,alpha:DOUBLE) is
			-- rotates arround the axis specified with xyz about the angle alpha
		local
			direction_vect: EM_VECTOR3D
			rot_mat:EM_MATRIX44
		do
			direction_vect.set(x,y,z)
			rot_mat.set_from_rotation(direction_vect, alpha)
			model_matrix :=rot_mat * model_matrix
		end


feature -- Conversion

	to_opengl: POINTER is
			-- for passing the transform object to openGL
		do
			Result := model_matrix.to_pointer
		end


feature -- Duplication

feature -- Miscellaneous

feature -- Basic operations

	infix "*" (other: like Current): like Current is
			-- creates a transform object containing the transformation from both transform objects
		do
			create Result.make_from_matrix(model_matrix * other.model_matrix)
		end

	vectortransform (a_vector: EM_VECTOR3D): EM_VECTOR3D is
			-- transforms the vector
		local
			homogenous_vector: EM_VECTOR4D
		do
			homogenous_vector.set(a_vector.x, a_vector.y, a_vector.z, 1.0)
			homogenous_vector := model_matrix.mult(homogenous_vector)
			Result.set (homogenous_vector.x, homogenous_vector.y, homogenous_vector.z)
		end

	inverse_vectortransform (a_vector: EM_VECTOR3D): EM_VECTOR3D is
			--transforms the vector by a inverse of the transform object
		local
			homogenous_vector: EM_VECTOR4D
		do
			homogenous_vector.set(a_vector.x, a_vector.y, a_vector.z, 1.0)
			homogenous_vector := model_matrix.inversed.mult(homogenous_vector)
			Result.set (homogenous_vector.x, homogenous_vector.y, homogenous_vector.z)
		end


feature -- Obsolete

feature -- Inapplicable

feature {NONE} -- Implementation

invariant
	invariant_clause: True -- Your invariant here

end
