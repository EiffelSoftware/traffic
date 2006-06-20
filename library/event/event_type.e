indexing

	description:

		"Notion of event type"

	documentation:
		"[
			Usage and architecture described in the article 
			'Event Library: an object-oriented library for even-driven design',
			by Volkan Arslan, Piotr Nienaltowski, and Karine Arnout.
		]"

	author: "Volkan Arslan, Karine Arnout"
	copyright: "Copyright (c) 2002-2004, ETH Zurich, Switzerland"
	license: "Eiffel Forum License v2 (see License.txt)"
	date: "$Date: 2003/12/19"
	revision: "$Revision: 1.1"

class EVENT_TYPE [EVENT_DATA -> TUPLE create default_create end]

inherit

	LINKED_LIST [PROCEDURE [ANY, EVENT_DATA]]
		redefine
			default_create
		end

feature {NONE} -- Initialization

	default_create is 
		do
			make
			compare_objects
		end

feature -- Element change

	subscribe (an_action: PROCEDURE [ANY, EVENT_DATA]) is
			-- Add `an_action' to the subscription list.
		require
			an_action_not_void: an_action /= Void
			an_action_not_already_subscribed: not has (an_action)
		do
			extend (an_action)
		ensure
			an_action_subscribed: count = old count + 1 and has (an_action)
			index_at_same_position: index = old index
		end

	unsubscribe (an_action: PROCEDURE [ANY, EVENT_DATA]) is
			-- Remove `an_action' from the subscription list.
		require
			an_action_not_void: an_action /= Void
			an_action_already_subscribed: has (an_action)
		local 
			pos: INTEGER
		do
			pos := index
			start
			search (an_action)
			remove
			go_i_th (pos)
		ensure
			an_action_unsubscribed: count = old count - 1 and not has (an_action)
			index_at_same_position: index = old index
		end

feature -- Publication

	publish (arguments: EVENT_DATA) is
			-- Publish all not suspended actions from the subscription list.
		require
			arguments_not_void: arguments /= Void
		do
			if not is_suspended then
				do_all (agent {PROCEDURE [ANY, EVENT_DATA]}.call (arguments))
			end
		end

feature -- Status report

	is_suspended: BOOLEAN
			-- Is the publication of all actions from the subscription list suspended?
			-- (Answer: no by default.)

feature -- Status settings

	suspend_subscription is
			-- Ignore the call of all actions from the subscription list, 
			-- until feature restore_subscription is called.
		do
			is_suspended := True
		ensure
			subscription_suspended: is_suspended
		end

	restore_subscription is
			-- Consider again the call of all actions from the subscription list, 
			-- until feature suspend_subscription is called.
		do
			is_suspended := False
		ensure
			subscription_not_suspended: not is_suspended
		end

end
