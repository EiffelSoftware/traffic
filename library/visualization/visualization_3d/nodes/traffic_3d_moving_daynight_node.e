indexing
	description: "Drawables for moving objects that have a graphical representation for daytime and one for nighttime"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_3D_MOVING_DAYNIGHT_NODE

inherit
	TRAFFIC_3D_MOVING_NODE
		rename
			graphical as day_graphical,
			make_with_moving as make_with_moving_orig
		redefine
			render_node
		end

create
	make_with_moving

feature -- Initialization

	make_with_moving (a_moving: TRAFFIC_MOVING; a_day_graphical, a_night_graphical: TE_3D_NODE) is
			-- Initialize.
		require
			a_moving_not_void: a_moving /= Void
			a_day_graphical_not_empty: a_day_graphical /= Void
			a_night_graphical_not_empty: a_night_graphical /= Void
		do
			make_with_moving_orig (a_moving, a_day_graphical)
			night_graphical := a_night_graphical
			night_graphical.make_child_of (Current)

			-- TODO: randomize
			create night_start.make (21, 0, 0)
			create day_start.make (3, 0, 0)
		end

feature -- Access

	night_graphical: TE_3D_NODE

	night_start: TIME

	day_start: TIME

feature -- Basic operations

	render_node is
			-- Update the position before the node is rendered.
		local
			is_night: BOOLEAN
		do
			if night_start < day_start then
				if moving.traffic_time.actual_time > night_start and moving.traffic_time.actual_time < day_start then
					is_night := True
				else
					is_night := False
				end
			else
				if moving.traffic_time.actual_time > day_start and moving.traffic_time.actual_time < night_start then
					is_night := False
				else
					is_night := True
				end
			end
			if is_night then
				day_graphical.disable_hierarchy_renderable
				night_graphical.enable_hierarchy_renderable
				night_graphical.transform.reset
				night_graphical.transform.set_position (moving.position.x, 0, moving.position.y)
				night_graphical.transform.rotate(0.0,1.0,0.0,moving.angle_x)
			else
				night_graphical.disable_hierarchy_renderable
				day_graphical.enable_hierarchy_renderable
				day_graphical.transform.reset
				day_graphical.transform.set_position (moving.position.x, 0, moving.position.y)
				day_graphical.transform.rotate(0.0,1.0,0.0,moving.angle_x)
			end
			Precursor
		end

invariant

end
