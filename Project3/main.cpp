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
#include "menu.hpp"



int main()
{
	//Uses the current time to generate a random seed for each roll
	//Downcast as unsigned int to convert to 32-bit integer
	srand((unsigned int)time(NULL));

	Game fantasyGame;
	menu(&fantasyGame);
	//fantasyGame.selectChar(1, 5);
	//fantasyGame.selectChar(2, 3);
	//
	//while (fantasyGame.player1->getStrength() > 0 && fantasyGame.player2->getStrength() > 0)
	//{
	//	fantasyGame.playeroneAttacks();
	//	if (fantasyGame.player2->getStrength() > 0)
	//	{
	//		fantasyGame.playertwoAttacks();
	//	}
	//}



	return 0;
}