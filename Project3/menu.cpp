/*******************************************************************************
** Author:       Edgar Hernandez
** Date:         9/29/2019
** Description:  This program contains the implementation for the menu function.
** The menu takes in a pointer to a game object as a parameter. The menu then prints
** out all of the instructions for the user and plays the game.
*******************************************************************************/
#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include "inputValidation.hpp"
#include "Game.hpp"

// The function takes in all user inputs and validates them
void menu(Game* gameIn)
{
	std::string errorMsg = "Please enter a valid integer";
	int status = 1;
	int userChoice = 0;

	std::cout << "*** Welcome to my Fantasy Combat Game! ***" << std::endl;
	std::cout << "Please select a number from the options below and press enter: " << std::endl;
	std::cout << "1. Start new game." << std::endl;
	std::cout << "2. Quit program." << std::endl;
	inputValidation(status, errorMsg, 1, 2);

	while (status != 2)
	{
		if (status == 1)
		{
			std::string charNames[5] = { "Harry Potter", "Vampire", "Blue Men", "Barbarian", "Medusa" };

			//Select characters for both players
			for (int i = 0; i < 2; i++)
			{
				std::cout << "Player " << i+1 << ", please select the number for your character: " << std::endl;
				for (int j = 0; j < 5; j++)
				{
					std::cout << j + 1 << ". " << charNames[j] << std::endl;
				}
				inputValidation(userChoice, errorMsg, 1, 5);
				gameIn->selectChar(i+1, userChoice);
			}

			//Play game until one character dies
			while (gameIn->player1->getStrength() > 0 && gameIn->player2->getStrength() > 0)
			{
				gameIn->playeroneAttacks();
				if (gameIn->player2->getStrength() > 0)
				{
					gameIn->playertwoAttacks();
				}
			}
		}

		std::cout << "Would you like to play again? " << std::endl;
		std::cout << std::setw(10) << "1. Yes" << std::setw(10) << "2. No" << std::endl;
		inputValidation(userChoice, errorMsg, 1, 2);
		status = userChoice;
	}
	std::cout << "Game over. Thanks for playing!!" << std::endl;
}

