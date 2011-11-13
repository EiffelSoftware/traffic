note
	description: "Graphical representation of a public transportation unit."

class
	TRANSPORT_VIEW

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
	make_in_city (a_transport: PUBLIC_TRANSPORT; a_map: MAP)
			-- Create representation of `a_transport' and add it to `a_map'.
		local
			file_name: STRING
			icon_pixmap: EV_PIXMAP
		do
			model := a_transport
			map := a_map

			create blob
			blob.set_radius1 ((Radius * map.scale_factor).rounded)
			blob.set_radius2 ((Radius * map.scale_factor).rounded)
			blob.set_background_color (ev_color (model.line.color))
			map.world.extend (blob)

			file_name := model.line.kind.icon_file
			if file_name /= Void and file_system.file_exists (file_name) then
				create icon_pixmap
				icon_pixmap.set_with_named_file (file_name)
				create icon.make_with_pixmap (icon_pixmap)
				icon.scale (map.scale_factor)
				map.world.extend (icon)
			end
			update

			make_actions
			subscribe_model (blob)
			if icon /= Void then
				subscribe_model (icon)
			end
		end

feature -- Acess

	model: PUBLIC_TRANSPORT
		-- Underlying model.

feature -- Status report

	model_in_city: BOOLEAN
			-- Is `model' part of `map.city'?
		do
			Result := map.city.transports.has (model)
		end

feature -- Status setting

	highlight
			-- Make visually distinct.
		do
			is_highlighted := True
			blob.set_foreground_color (Highlight_color)
			blob.set_line_width (5)
		end

	unhighlight
			-- Return to normal view.
		do
			is_highlighted := False
			blob.set_foreground_color (Black)
			blob.set_line_width (1)
		end

feature -- Basic operations

	update
			-- Update according to the state of `model'.
		local
			point: EV_COORDINATE
		do
			point := map.world_coordinate (model.position)
			blob.set_x_y (point.x, point.y)
			if icon /= Void then
				icon.set_x_y (point.x, point.y)
			end
		end

	remove_from_map
			-- Remove view from `map'.
		do
			map.world.prune_all (blob)
			if icon /= Void then
				map.world.prune_all (icon)
			end
		end

feature {NONE} -- Parameters

	Radius: INTEGER = 20
			-- Blob radius.

feature {NONE} -- Implementation

	icon: EV_MODEL_PICTURE
			-- Icon depicting the transport.

	blob: EV_MODEL_ELLIPSE
			-- Background blob.			

invariant
	blob_exists: blob /= Void
end
