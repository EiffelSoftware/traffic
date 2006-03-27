indexing
	description: "Abstract processors for XML nodes."

	date: "$Date$"
	revision: "$Revision$"

deferred class
	TRAFFIC_NODE_PROCESSOR

inherit
	TRAFFIC_NODE_PROCESSOR_REGISTRY

	TRAFFIC_PARSE_ERROR_CONSTANTS
		redefine
			set_error
		end

feature -- Initialization

	make is
			-- Create processor.
		do
			create {LINKED_LIST [XM_ELEMENT]} subnodes.make
			reset
		ensure
			subnodes_exist: subnodes /= Void
			reset: is_reset
		end

feature -- Access

	name: STRING is
			-- Name of node to process.
		deferred
		ensure
			name_exists: Result /= Void
			name_not_empty: not Result.is_empty
		end

	source: XM_ELEMENT
			-- Source to process.

	target: ANY--CITY_ELEMENT
			-- Target to build.

	parent: TRAFFIC_NODE_PROCESSOR
			-- Parent processor.
			
	data: ANY
			-- Data from subnodes for parent.
			
	attribute (a_name: STRING): STRING is
			-- Attribute named `a_name'.
		require
			has_source: has_source
			name_exists: a_name /= Void
			name_not_empty: not a_name.is_empty
			has_attribute: has_attribute (a_name)
		do
			Result := source.attribute_by_name (a_name).value
		ensure
			Result_exists: Result /= Void
		end
		
	attribute_integer (a_name: STRING): INTEGER is
			-- Integer attribute named `a_name'.
		require
			has_source: has_source
			name_exists: a_name /= Void
			name_not_empty: not a_name.is_empty
			has_attribute: has_attribute (a_name)
			is_integer: is_attribute_integer (a_name)
		do
			Result := attribute (a_name).to_integer
		end

	attribute_double (a_name: STRING): DOUBLE is
			-- Double attribute named `a_name'.
		require
			has_source: has_source
			name_exists: a_name /= Void
			name_not_empty: not a_name.is_empty
			has_attribute: has_attribute (a_name)
			is_double: is_attribute_double (a_name)
		local
			attr: STRING
		do
			attr := clone (attribute (a_name))
			if attr.is_integer then
				attr.append (".0")
			end
			Result  := attr.to_double
		end

	attribute_boolean (a_name: STRING): BOOLEAN is
			-- Boolean attribute named `a_name'.
		require
			has_source: has_source
			name_exists: a_name /= Void
			name_not_empty: not a_name.is_empty
			has_attribute: has_attribute (a_name)
			is_boolean: is_attribute_boolean (a_name)
		do
			Result  := attribute (a_name).to_boolean
		end

	text: STRING is
			-- Text of element.
		require
			has_source: has_source
			has_text: has_text
		local
			l: LIST [STRING]
		do
			create Result.make (0)
			l := source.text.split ('%N')
			from
				l.start
			until
				l.after
			loop
				l.item.left_adjust
				l.item.right_adjust
				if not l.item.is_empty then
					Result.append (l.item)
					Result.extend ('%N')
				end
				l.forth
			end
			Result.right_adjust
		ensure
			Result_exists: Result /= Void
		end
		
	allowed_subnode_types: ARRAY [STRING] is
			-- Table of allowed subnode types.
		do
			if Allowed_subnode_registry.has (name) then
				Result := Allowed_subnode_registry.item (name)
			else
				Result := << >>
			end
		ensure
			Result_exists: Result /= Void
			object_comparison: Result.object_comparison
		end

	mandatory_attributes: ARRAY [STRING] is
			-- Table of mandatory attributes.
		deferred
		ensure
			Result_exists: Result /= Void
			object_comparison: Result.object_comparison
		end


	subnodes: LIST [XM_ELEMENT]
			-- List of subnodes.

feature -- Measurement

	subnode_count: INTEGER is
			-- Number of subnodes.
		do
			Result := subnodes.count
		end
		
feature -- Status report

	has_subnodes: BOOLEAN is
			-- Are there any subnodes?
		do
			Result := (subnode_count > 0)
		end
		
	has_source: BOOLEAN is
			-- Is a source set?
		do
			Result := (source /= Void)
		end

	has_target: BOOLEAN is
			-- Is a target set?
		do
			Result := (target /= Void)
		end

	has_parent: BOOLEAN is
			-- Is a parent set?
		do
			Result := (parent /= Void)
		end
		
	has_attribute (a_name: STRING): BOOLEAN is
			-- Is there an attribute named `a_name'?
		require
			has_source: has_source
			name_exists: a_name /= Void
			name_not_empty: not a_name.is_empty
		do
			Result := source.has_attribute_by_name (a_name)
		end

	is_attribute_integer (a_name: STRING): BOOLEAN is
			-- Is attribute named `a_name' an integer?
		require
			has_source: has_source
			name_exists: a_name /= Void
			name_not_empty: not a_name.is_empty
			has_attribute: has_attribute (a_name)
		do
			Result  := attribute (a_name).is_integer
		end

	is_attribute_double (a_name: STRING): BOOLEAN is
			-- Is attribute named `a_name' a double?
		require
			has_source: has_source
			name_exists: a_name /= Void
			name_not_empty: not a_name.is_empty
			has_attribute: has_attribute (a_name)
		do
			Result  := is_attribute_integer (a_name) or else attribute (a_name).is_double
		end

	is_attribute_boolean (a_name: STRING): BOOLEAN is
			-- Is attribute named `a_name' a boolean?
		require
			has_source: has_source
			name_exists: a_name /= Void
			name_not_empty: not a_name.is_empty
			has_attribute: has_attribute (a_name)
		do
			Result  := attribute (a_name).is_boolean
		end

	valid_source (an_element: XM_ELEMENT): BOOLEAN is
			-- Is `an_element' a valid source?
		require
			source_exists: an_element /= Void
		local
			n: STRING
		do
			n := clone (an_element.name)
			n.to_lower
			Result := equal (n, name)
		end

	has_text: BOOLEAN is
			-- Does element have text attached?
		do
			Result := has_source and then source.text /= Void
		end
		
	is_reset: BOOLEAN is
			-- Is processor in default state?
		do
			Result := not has_source and not has_target and not has_parent and 
				not has_subnodes and not has_error
		end
		
feature -- Status setting

	set_source (an_element: XM_ELEMENT) is
			-- Set source to `an_element'.
		require
			an_element_exists: an_element /= Void
			an_element_valid: valid_source (an_element)
		do
			source := an_element
			initialize
		ensure
			source_set: source = an_element
		end

	set_target (a_target: like target) is
			-- Set target to `a_target'.
		do
			target := a_target
		ensure
			target_set: target = a_target
		end

	set_parent (a_parent: like parent) is
			-- Set parent to `a_parent'.
		do
			parent := a_parent
		ensure
			parent_set: parent = a_parent
		end

	reset is
			-- Reset processor.
		do
			source := Void
			target := Void
			parent := Void
			subnodes.wipe_out
			set_error (0, << >>)
		ensure
			reset: is_reset
		end

feature {TRAFFIC_NODE_PROCESSOR} -- Status setting

	set_error (a_code: INTEGER; an_error_string_array: ARRAY [STRING]) is
			-- Set error to `a_code' with additional information `an_error_string_array'.
		local
			p: like parent
		do
			Precursor (a_code, an_error_string_array)
			if has_parent and a_code/=0 then
				from
					p := parent
				until
					p = Void
				loop
					p.set_error (a_code, an_error_string_array)
					p := p.parent
				end
			end
		end
			

feature -- Basic operations

	send_data (a_data: ANY) is
			-- Store `a_data'.
		do
			data := a_data
		end

	process is
			-- Process node.
		require
			has_source: has_source
			no_error: not has_error
		deferred
		end

	process_subnodes is
			-- Process subnodes.
		require
			has_source: has_source
			has_subnodes: has_subnodes
			no_error: not has_error
		local
			n: XM_ELEMENT
			p: TRAFFIC_NODE_PROCESSOR
		do
			from
				subnodes.start
			until
				has_error or subnodes.after
			loop
				n := subnodes.item
				if has_processor (n.name) then
					p := processor (n.name)
						check
							no_error: not p.has_error
								-- Because a new processor was retrieved.
						end
				else
					set_error (Unknown_node_processor, << n.name , name >>)
				end
				if not has_error then
					p.set_source (n)
					p.set_parent (Current)
					
					p.set_map_factory (map_factory)
					
					if has_target then
						p.set_target (target)
					end
					if not p.has_error then
						p.process
					else
						set_error (p.error_code, p.slots)
					end
				end
				subnodes.forth
			end
		end

feature {NONE} -- Implementation

	initialize is
			-- Initialize processor.
		require
			has_source: has_source
		local
			i: INTEGER
			el: DS_LIST [XM_ELEMENT]
			e: XM_ELEMENT
			attr: STRING
		do
			set_error (0, << >>)
			from
				i := Mandatory_attributes.lower
			until
				has_error or i > Mandatory_attributes.upper
			loop
				attr := Mandatory_attributes @ i
				if not has_attribute (attr) or else
					attribute (attr).is_empty then
					set_error (Mandatory_attribute_missing, << attr >>)
				end
				i := i + 1
			end

			el := source.elements
			from
				i := 1
			until
				has_error or i > el.count
			loop
				e := el.item (i)
				if Allowed_subnode_types.has (e.name) then 
					subnodes.extend (e)
				else
					set_error (Unknown_subnode, << e.name, name >>)
				end
				i := i + 1
			end
		end

invariant

	subnodes_exist: subnodes /= Void
	subnode_count_definition: subnode_count = subnodes.count
	has_subnode_definition: has_subnodes = (subnode_count > 0)
	has_source_definition: has_source = (source /= Void)
	has_target_definition: has_target = (target /= Void)
	has_parent_definition: has_parent = (parent /= Void)
	has_text_definition: has_text = (has_source and then source.text /= Void)
	source_valid: has_source implies valid_source (source)

end