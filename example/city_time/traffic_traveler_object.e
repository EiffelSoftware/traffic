indexing
	description: "For new traveler objects you should inherit from this class and implement the take tour feature"
	author: "Florian Geldmacher"
	date: "$Date$"
	revision: "$Revision$"

class
	TRAFFIC_TRAVELER_OBJECT

inherit
	EM_3D_OBJECT_DISPLAYLIST


create
	make
	
--feature -- Initialization
--	make (a_list: INTEGER; a_width: DOUBLE; a_height: DOUBLE; a_depth: DOUBLE) is
--		-- make a new object, like a 'EM_3D_OBJECT_DISPLAYLIST', but with the new take_tour Procedure
--		do
--			Precursor (a_list, a_width, a_height, a_depth)
--		end
		
feature -- Attributes
	
	traffic_info: STRING is
			-- what type of traffic is it
		do
		end
	
	current_position_x: DOUBLE
	
	current_position_y: DOUBLE
	
feature -- Procedures
	
	take_tour is
			-- take a tour on the map
			do
				-- implement a tour algo
			end
		

end
