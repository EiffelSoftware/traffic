indexing
	description: "[
		Deferred class serving as base for different 3d file loaders.
		Original class Q_GL_3D_LOADER written by Basil Fierz. Edited and changed for ESDL usage,
		namely declared as descendant of ESDL_3D_OBJECT_FACTORY, by Laurent Zimmerli.
	]"
	author: "Basil Fierz, bfierz@student.ethz.ch; Laurent Zimmerli, laurentz@student.ethz.ch"
	date: "$Date: 2005/06/21 15:16:28 $"
	revision: "$Revision: 1.4 $"

deferred class
	TRAFFIC_3D_LOADER_OBSOLETE

inherit
	EM_3D_OBJECT_FACTORY

feature

	load_file (a_filename: STRING) is
		deferred
		end

end -- class TRAFFIC_3D_LOADER

