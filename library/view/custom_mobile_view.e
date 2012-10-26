note
	description: "Graphical representation of a custom mobile."

class
	CUSTOM_MOBILE_VIEW

inherit
	VIEW

inherit {NONE}

	KL_SHARED_FILE_SYSTEM
		export
			{NONE} all
		end

create
	make_in_city

feature {NONE} -- Initialization

	make_in_city (a_mobile: MOBILE; a_map: MAP)
			-- Create representation of `a_mobile' and add it to `a_map'.
		require
			map_exists: a_map /= Void
			mobile_in_city: a_map.city.custom_mobiles.has (a_mobile)
		do
			model := a_mobile
			map := a_map
			make_actions
			remove_icon
		end

feature -- Acess

	model: MOBILE
		-- Underlying model.

feature -- Status report

	model_in_city: BOOLEAN
			-- Is `model' part of `map.city'?
		do
			Result := map.city.custom_mobiles.has (model)
		end

feature -- Status setting

	highlight
			-- Make visually distinct.
		do
			is_highlighted := True
		end

	unhighlight
			-- Return to normal view.
		do
			is_highlighted := False
		end

feature -- Modification

	set_icon (a_file_name: STRING)
			-- Change graphical representation to an icon located in `a_file_name'.
		require
			file_name_non_empty: a_file_name /= Void and then not a_file_name.is_empty
		local
			pixmap: EV_PIXMAP
		do
			if blob /= Void then
				map.custom_mobile_figures.prune_all (blob)
				blob := Void
			end
			create pixmap
			pixmap.set_with_named_file (a_file_name)
			create icon.make_with_pixmap (pixmap)
			icon.scale (map.scale_factor)
			map.custom_mobile_figures.extend (icon)
			subscribe_model (icon)
			update
		end

	remove_icon
		do
			if icon /= Void then
				map.custom_mobile_figures.prune_all (icon)
				icon := Void
			end
			create blob
			blob.set_radius1 ((Radius * map.scale_factor).rounded)
			blob.set_radius2 ((Radius * map.scale_factor).rounded)
			blob.set_background_color (Black)
			map.custom_mobile_figures.extend (blob)
			subscribe_model (blob)
			update
		end

feature -- Basic operations

	update
			-- Update according to the state of `model'.
		local
			point: EV_COORDINATE
		do
			point := map.world_coordinate (model.position)
			if icon /= Void then
				icon.set_x_y (point.x, point.y)
			else
				blob.set_x_y (point.x, point.y)
			end
		end

	remove_from_map
			-- Remove view from `map'.
		do
			if icon /= Void then
				map.custom_mobile_figures.prune_all (icon)
			else
				map.custom_mobile_figures.prune_all (blob)
			end
		end

feature {NONE} -- Parameters

	Radius: INTEGER = 10
			-- Blob radius.

feature {NONE} -- Implementation

	icon: EV_MODEL_PICTURE
			-- Icon depicting the mobile.

	blob: EV_MODEL_ELLIPSE
			-- Blob depicting the mobile in case icon is missing.			

invariant
	blob_or_icon_exists: blob /= Void or icon /= Void
end
