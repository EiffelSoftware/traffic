indexing
	description: "Objects that ..."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	TE_MATERIAL

feature -- Initialization

	make is
			-- create the material with default vaules
		do
			create name.make_empty
		end


feature -- Access

	name: STRING

feature -- Measurement

feature -- Status report

feature -- Status setting

feature -- Cursor movement

feature -- Element change

feature -- Removal

feature -- Resizing

feature -- Transformation

feature -- Conversion

feature -- Duplication

feature -- Miscellaneous

feature -- Basic operations

feature -- Obsolete

feature -- Inapplicable

feature -- Implementation

	specify is
			-- specifies the material
		deferred
		end

	remove is
			-- removes the mateiral. use glPushAtrib and glPopAtrib
		deferred
		end



invariant
	invariant_clause: True -- Your invariant here

end
