// Mouse Clicker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
	// Heading
	std::cout << "--------------------------------------------------\nWelcome to my AutoClicker!\nPlease follow the following instructions as\ncarefully as possible. Have fun clicking!\n--------------------------------------------------" << std::endl;
	std::cout << "\n\nFor all following instructions, please note the following:\n- If the program asks for a number, please enter only a numberand no other characters.\n- If the program asks for a character, please enter only a character, and nothing else.\n- If the program asks for the answer to a yes or no question, an improper response will read as a 'no'.\n- Please limit all text responses to lower case.\n- You cannot set the escape key to tilde(~).Don't ask me why." << std::endl;

	// Inputs
	// Input variables
	int i_delay;
	char i_initializingKey;
	char i_endingKey;
	char i_mouseSide;
	// Time delay
	std::cout << "Please enter the time delay between clicks in miliseconds.\nBe warned that gaps that are too small may cause system instability." << std::endl;
	std::cin >> i_delay;
	// Initilizing key
	std::cout << "Please enter the desired initiation key.\nYou will need to hold the Windows key and press this key in order to begin the clicking." << std::endl;
	std::cin >> i_initializingKey;
	// Ending key
	std::cout << "Please enter the desired ending key.\nYou will need to hold the Windows key and press this key to end the clicking.\nPressing escape will end the daemon altogether." << std::endl;
	std::cin >> i_endingKey;
	// Mouse side
	std::cout << "Would you like to click with the left or right side of the mouse? [l][r]" << std::endl;
	std::cin >> i_mouseSide;

	// Converting to batch running format
	std::string m_delay = std::to_string(i_delay);
	std::string m_initializingKey = std::string() + "#" + i_initializingKey;
	std::string m_endingKey = std::string() + "#" + i_endingKey;
	std::string m_mouseSide = (i_mouseSide == 'r') ? "right" : "left";

	std::string StrCommand = "daemonFormatter.bat " + m_delay + " " + m_initializingKey + " " + m_endingKey + " " + m_mouseSide;
	//std::cout << StrCommand << std::endl;
	system(StrCommand.c_str());
}
