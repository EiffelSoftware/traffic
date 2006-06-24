indexing
	description: "XML processors for <schedule> nodes."
	author: "Adrian Helfenstein, adrianh@student.ethz.ch"
	date: "23.06.2006"
	revision: "$Revision$"

class
	TRAFFIC_SCHEDULER_NODE_PROCESSOR
inherit
	TRAFFIC_NODE_PROCESSOR
	
create
	make

feature -- Access

	Name: STRING is "schedule"
			-- Name of element to process
		
	Mandatory_attributes: ARRAY [STRING] is
			-- Table of mandatory attributes
		do
			Result := << "station","arrival", "departure" >>
			Result.compare_objects
		end
		
feature -- Basic operations
	process is
			-- Process node
		local
			arrival,departure: INTEGER
			station:STRING
		do
			-- Check whether aributes exist and have proper type
			if not has_attribute ("station") then
				set_error (Mandatory_attribute_missing, << "station" >>)
			elseif not has_attribute ("arrival") then
				set_error (Mandatory_attribute_missing, << "arrival" >>)
			elseif not has_attribute ("departure") then
				set_error (Mandatory_attribute_missing, << "departure" >>)
			elseif not (is_attribute_integer ("arrival") and is_attribute_integer ("departure")) then
				set_error (Wrong_attribute_type, << "arrival", "departure" >>)
			else
				-- Create new arrival/departure for a station
				station := attribute("station")
				arrival := attribute_integer("arrival")
				departure := attribute_integer("departure")
				schedule_factory.put_entry (station,arrival,departure)
			
			end
	end
end
