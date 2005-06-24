indexing
	description: "Constants describing the game mode"
	status:	"See notice at end of class"
	author: "Marcel Kessler, ETH Zurich"
	date: "$Date$"
	revision: "$Revision$"

deferred class
	GAME_MODE_CONSTANTS

feature

	game_mode: INTEGER
			-- Actual game mode (`Hunt', `Escape', `Versus' or `Demo')
	
	Hunt, Escape, Versus, Demo: INTEGER is unique
			-- Constants for the four meaningfull game modes.
	
end

--|--------------------------------------------------------
--| This file is Copyright (C) 2004 by ETH Zurich.
--|
--| For questions, comments, additions or suggestions on
--| how to improve this package, please write to:
--|
--|     Marcel Kessler <kesslema@student.ethz.ch>
--|     Michela Pedroni <michela.pedroni@inf.ethz.ch>
--| 	Rolf Bruderer <bruderer@computerscience.ch>
--|
--|--------------------------------------------------------
