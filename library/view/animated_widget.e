note
	description: "Map widget that responds to clock tick events."

class
	ANIMATED_WIDGET

inherit
	MAP_WIDGET
		redefine
			make_actions
		end

create
	make_actions

feature {NONE} -- Initialization
	make_actions
			-- Initialize action sequences.
		do
			Precursor
			create {V_ARRAYED_LIST [PROCEDURE [ANY, TUPLE [dt: INTEGER]]]} on_tick
			create {V_ARRAYED_LIST [PROCEDURE [ANY, TUPLE]]} on_tick_no_args
		end

feature -- Actions

	on_tick: V_LIST [PROCEDURE [ANY, TUPLE [dt: INTEGER]]]
			-- Actions performed each time a quant of time has passed.
			-- `dt' is the amount of time that passed (milliseconds).

	on_tick_no_args: V_LIST [PROCEDURE [ANY, TUPLE]]
			-- Actions without arguments performed each time a quant of time has passed.

feature -- Animation control

	is_animated: BOOLEAN
			-- Is animation running?

	animate
			-- Start animation (start generating tick events).
		do
			is_animated := True
			last_timeout := 0
			create timeout.make_with_interval (33)
			timeout.actions.extend (agent handle_timeout)
		end

	deanimate
			-- Stop animation (stop generating tick events).
		do
			is_animated := False
			if timeout /= Void then
				timeout.destroy
			end
		end

feature {NONE} -- Implementation

	timeout: EV_TIMEOUT
			-- Object that signals timeout events.

	last_timeout: INTEGER
			-- Time when last timeout event occurred.
			-- Resolution is milliseconds, wraps after 60 seconds.

	handle_timeout
			-- Handle timeout event.
		local
			date: C_DATE
			new_time: INTEGER
			dt: INTEGER
		do
			create date
			new_time := (date.second_now * 1000) + date.millisecond_now
			if last_timeout > 0 then
				if new_time < last_timeout then
					dt := new_time - last_timeout + 60000
				else
					dt := new_time - last_timeout
				end
				across
					on_tick as i
				loop
					i.item.call ([dt])
				end
				across
					on_tick_no_args as i
				loop
					i.item.call ([])
				end
			end
			last_timeout := new_time
		end

invariant
	on_tick_exists: on_tick /= Void
	last_timeout_in_bounds: 0 <= last_timeout and last_timeout <= 60000
end
