/**
 * Include relivent C++ Libraires
 */
#include <map>
#include <string>
#include <vector>
#include <Arduino.h>


namespace ErrorConfiguration
{
	/**
	 * Setup all system error configurations
	 *
	 * Vector of maps is used are Ardunio wont upload with map of maps
	 */
	static std::vector< std::map< String, std::map<int, String> > > setupErrors()
	{
		//Config container
		std::map< String, std::map<int, String> > error_config_container;
		std::vector< std::map< String, std::map<int, String> > > output;
		
		/////////////////////////////////////////
		// Setup Plug and Swicth               //
		/////////////////////////////////////////
		// Define sub containers
		error_config_container["conditions"][52] = "HIGH"; //When HIGH throw error
		error_config_container["conditions"][50] = "HIGH"; //When HIGH throw error
		error_config_container["action_outputs"][46] = "HIGH";
		error_config_container["action_outputs"][44] = "HIGH";
		error_config_container["action_message"][0] = "ERROR: Plug and switch polarity";
		error_config_container["action_message"][1] = "Please correct the error to continue";
		error_config_container["action_message"][2] = "";
		error_config_container["action_method"][0] = "0";
		output.push_back(error_config_container);  error_config_container.clear();

		

		/////////////////////////////////////////
		// Set up interlock switches           //
		/////////////////////////////////////////
		// Define sub containers
		error_config_container["conditions"][40] = "HIGH"; //When HIGH throw error
		error_config_container["conditions"][42] = "HIGH"; //When HIGH throw error
		error_config_container["action_outputs"][33] = "HIGH";
		error_config_container["action_outputs"][34] = "HIGH";
		error_config_container["action_message"][0] = "Error: Internal interlocks";
		error_config_container["action_message"][1] = "Check encloser's panels are secure and";
		error_config_container["action_message"][2] = "in place correctly";
		error_config_container["action_method"][0] = "0";
		output.push_back(error_config_container);  error_config_container.clear();
		

		// Return the error condtions
		return output;
	}

}