indexing
	description: "XML processors for <description> nodes."

	status:	"See notice at end of class"
	author: "Patrick Schoenbach, Michela Pedroni, Sibylle Aregger"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_DESCRIPTION_NODE_PROCESSOR
	
inherit
	TRAFFIC_NODE_PROCESSOR

create
	make

feature -- Access

	Name: STRING is
			-- Name of node to process.
		once
			Result := "description"
		end
		
	Mandatory_attributes: ARRAY [STRING] is
			-- Table of mandatory attributes.
		do
			Result := << "text" >>
			Result.compare_objects
		end

feature -- Basic operations

	process is
			-- Process element.
		require else
			has_target: has_target -- Because it has been passed down from the parent.
		local
			description: STRING
		do
--			if has_text then
--				target.set_description (text)
--			end
--
--			if has_subnodes then
--				process_subnodes
--			end
			if has_attribute ("text") then
				create description.make_from_string (attribute ("text"))
				parent.send_data (description)
			else
				set_error (Mandatory_attribute_missing, << "text" >>)
			end
		end

end -- class TRAFFIC_DESCRIPTION_NODE_PROCESSOR

--|--------------------------------------------------------
--| This file is Copyright (C) 2003 by ETH Zurich.
--|
--| For questions, comments, additions or suggestions on
--| how to improve this package, please write to:
--|
--|     Patrick Schoenbach <pschoenb@gmx.de>
--|		Michela Pedroni <pedronim@inf.ethz.ch>
--|
--|--------------------------------------------------------
