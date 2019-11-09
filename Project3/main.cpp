/*******************************************************************************************
** Author: Edgar Hernandez
** Creation Date: 11/3/2019
** Description: This program contains an implementation of a fantasy combat game.
********************************************************************************************/
#include <string>
#include <iostream>
#include <sstream>
#include <time.h>
#include <memory>
#include "inputValidation.hpp"
#include "Game.hpp"
#include "die.hpp"
#include "Vampire.hpp"
#include "HarryPotter.hpp"


int main()
{
	//Uses the current time to generate a random seed for each roll
	//Downcast as unsigned int to convert to 32-bit integer
	srand((unsigned int)time(NULL));

	Game testGame;

	testGame.selectChar(1, 2);
	testGame.selectChar(2, 3);
	
	while (testGame.player1->getStrength() > 0 && testGame.player2->getStrength() > 0)
	{
		testGame.playeroneAttacks();
		if (testGame.player2->getStrength() > 0)
		{
			testGame.playertwoAttacks();
		}
	}

	//std::cout << typeid(testGame.player1).name() << std::endl;



	return 0;
}