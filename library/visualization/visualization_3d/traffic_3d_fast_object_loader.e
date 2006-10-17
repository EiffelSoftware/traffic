indexing
	description: "Optimized 3d-object loader which caches objects"
	date: "$Date$"
	revision: "$Revision$"

obsolete class
	TRAFFIC_3D_FAST_OBJECT_LOADER

inherit
	TRAFFIC_3D_OBJECT_LOADER
	redefine
		make,
		make_with_color,
		compile,
		load_file,
		set_color,
		set_em_color
	end

create
	make,
	make_with_color

feature {NONE} -- Initialization

	make is
		-- Initialize `Current'
		do
			create obj_cache.make (5)
			Precursor
		end

	make_with_color (a_r: DOUBLE; a_g: DOUBLE; a_b: DOUBLE) is
		-- Initialize `Current' with the given color
		do
			create obj_cache.make (5)
			Precursor (a_r, a_g, a_b)
		end

feature -- Attribute Setting

	set_em_color (a_r: DOUBLE; a_g: DOUBLE; a_b: DOUBLE) is
		-- Set the given color
		do
			Precursor (a_r, a_g, a_b)
			ignore_changed := False
		end

feature -- Commands

	load_file(a_filename: STRING) is
			-- checks if the file was already loaded. assumes the files aren't changed
			-- during run-time.
		local
			itm: TUPLE[INTEGER, DOUBLE, DOUBLE, DOUBLE]
		do
			-- using the filename as a key may be risky if relative paths are used
			-- the perfectly correct solution would be to always build the absolute path
			-- which is a slight overkill
			itm := obj_cache.item (a_filename)

			if itm /= Void then
				displaylist := itm.integer_item (1)
				object_width := itm.double_item (2)
				object_height := itm.double_item(3)
				object_depth := itm.double_item(4)
				unchanged := False
			else
				Precursor (a_filename)
				compile
				create itm
				itm.put_integer (displaylist, 1)
				itm.put_double (object_width, 2)
				itm.put_double (object_height, 3)
				itm.put_double (object_depth, 4)
				obj_cache.extend (itm, a_filename)
			end

			ignore_changed := True
		end


feature {NONE} -- Implementation

	ignore_changed: BOOLEAN
			-- so load_file's postcondition doesn't have to be changed

	compile is
		-- see if the file is in the cache first
		do
			if not ignore_changed then
				Precursor
			end

		end

	obj_cache:  HASH_TABLE[TUPLE[INTEGER, DOUBLE, DOUBLE, DOUBLE], STRING]
		-- the cache for the objects. filename, display_list, width, height, depth

	set_color (a_r: REAL; a_g: REAL; a_b: REAL; a_a: REAL) is
			-- Redefined to set the ignore_change flag to false
		do
			Precursor (a_r, a_g, a_b, a_a)
			ignore_changed := False
		end

end
