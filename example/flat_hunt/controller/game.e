indexing
	description	: "Logic for the FLAT_HUNT game"
	status:	"See notice at end of class"
	author: "Marcel Kessler & Rolf Bruderer, ETH Zurich"
	author: "Ursina Caluori, ucaluori@student.ethz.ch"
	date: "$Date$"
	revision: "$Revision$"

class
	GAME
	
inherit
	GAME_STATE_CONSTANTS
	GAME_MODE_CONSTANTS

create 
	make
	
feature {MAIN_CONTROLLER} -- Initialization
	make is
		do
				
		end
		
end

--|--------------------------------------------------------
--| This file is Copyright (C) 2004 by ETH Zurich.
--|
--| For questions, comments, additions or suggestions on
--| how to improve this package, please write to:
--|
--|     Marcel Kessler <kesslema@student.ethz.ch>
--|     Michela Pedroni <michela.pedroni@inf.ethz.ch>
--|     Rolf Bruderer <bruderer@computerscience.ch>
--|
--|--------------------------------------------------------
