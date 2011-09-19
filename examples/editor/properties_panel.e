note
	description: "Panel to display and change properties of a city object."

deferred class
	PROPERTIES_PANEL

inherit
	EV_VERTICAL_BOX

feature {NONE} -- Initialization

	make
			-- Initialize properties panel.
		local
			l_label: EV_LABEL
		do
			default_create

			create l_label.make_with_text (title)
			l_label.font.set_weight ({EV_FONT_CONSTANTS}.Weight_bold)
			extend (l_label)
			disable_item_expand (l_label)

			initialize_widgets

			create save_button.make_with_text ("Save")
			save_button.select_actions.extend (agent on_save_requested)
			extend (save_button)
			disable_item_expand (save_button)

			create properties_changed_actions
		end

	initialize_widgets
			-- Initialize properties widgets.
		deferred
		end

	add_widget (a_title: STRING; a_widget: EV_WIDGET)
			-- Add widget `a_widget' with title `a_title'.
		local
			l_horizontal_box: EV_HORIZONTAL_BOX
			l_label: EV_LABEL
		do
			create l_label.make_with_text (a_title)
			l_label.set_minimum_width (60)
			create l_horizontal_box
			l_horizontal_box.extend (l_label)
			l_horizontal_box.disable_item_expand (l_label)
			l_horizontal_box.extend (a_widget)
			extend (l_horizontal_box)
			disable_item_expand (l_horizontal_box)

			a_widget.key_release_actions.force_extend (agent on_change)
			a_widget.pointer_button_release_actions.force_extend (agent on_change)
		end

feature -- Status report

	is_valid_data: BOOLEAN
			-- Is the entered data valid?
		deferred
		end

	has_changes: BOOLEAN
			-- Are there changes in the data?
		require
			valid_data: is_valid_data
		deferred
		end

feature -- Basic operations

	save
			-- Save the data.
		require
			valid_data: is_valid_data
			changed_data: has_changes
		deferred
		ensure
			saved: not has_changes
		end

feature -- Events

	properties_changed_actions: EV_LITE_ACTION_SEQUENCE [TUPLE]
			-- Action sequence for change events.

feature {NONE} -- Event handlers

	title: STRING
			-- Properties panel title.
		deferred
		end

	on_change
			-- Handle event that something changed.
		do
			update_display
		end

	on_save_requested
			-- Handle event that data should be saved.
		do
			if is_valid_data and then has_changes then
				save
				properties_changed_actions.call ([])
				update_display
			end
		end

feature {NONE} -- Implementation

	save_button: EV_BUTTON
			-- Button used to save data.

	update_display
			-- Update display elements after change.
		do
			if is_valid_data and then has_changes then
				save_button.enable_sensitive
			else
				save_button.disable_sensitive
			end
		end

end
