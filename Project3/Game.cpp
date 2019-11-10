#include "Game.hpp"



Game::Game()
{
}


Game::~Game()
{
}

/*********************************************************************
*					Game::selectChar()
* This function has the user select the character to be created by taking
* in the player number and the player's choice as integer parameters.
*********************************************************************/

void Game::selectChar(int playerNum, int playerChoice)
{
	//Create a new character based on the player selection

	if (playerChoice == 1)
	{
		if (playerNum == 1)
		{
			player1 = std::make_shared<HarryPotter>();
		}
		else
		{
			player2 = std::make_shared<HarryPotter>();
		}
	}
	else if (playerChoice == 2)
	{
		if (playerNum == 1)
		{
			player1 = std::make_shared<Vampire>();
		}
		else
		{
			player2 = std::make_shared<Vampire>();
		}
	}
	else if (playerChoice == 3)
	{
		if (playerNum == 1)
		{
			player1 = std::make_shared<BlueMen>();
		}
		else
		{
			player2 = std::make_shared<BlueMen>();
		}
	}
	else if (playerChoice == 4)
	{
		if (playerNum == 1)
		{
			player1 = std::make_shared<Barbarian>();
		}
		else
		{
			player2 = std::make_shared<Barbarian>();
		}
	}
	else
	{
		if (playerNum == 1)
		{
			player1 = std::make_shared<Medusa>();
		}
		else
		{
			player2 = std::make_shared<Medusa>();
		}
	}
}

void Game::playeroneAttacks()
{
	//Display the attacker and defender types
	std::cout<< "\n ***" << player1->getName() << " (Player One)" <<
	" attacks "<< player2->getName() << " (Player Two)" << "!***\n" << std::endl;

	//Display defender's stats
	std::cout << player2->getName() << "'s (Player 2 Defender) stats: " << std::endl;
	std::cout << "Armor: " << player2->getArmor() << std::endl;
	std::cout << "Strength: " << player2->getStrength() << std::endl;

	//Used to store the points for the player's attacks
	int pOneAttack = player1->attack();

	//Player 2 defends and takes damage
	player2->defense(pOneAttack);
	
	//Check to see if player died
	if (player2->getStrength() > 0)
	{
		std::cout << player2->getName() << "'s Strength is now: " <<
			player2->getStrength() << std::endl;
	}
	else
	{
		std::cout << player2->getName() << " died. " <<
			player1->getName() << " (Player 1) \n wins! " << std::endl;
	}
}

void Game::playertwoAttacks()
{
	//Display the attacker and defender types
	std::cout << "\n***" << player2->getName() << " (Player Two)" <<
		" attacks " << player1->getName() << " (Player One)!***\n" << std::endl;

	//Display defender's stats
	std::cout << player1->getName() << "'s (Player 1 Defender) stats: " << std::endl;
	std::cout << "Armor: " << player1->getArmor() << std::endl;
	std::cout << "Strength: " << player1->getStrength() << std::endl;

	//Used to store the points for the player's attacks
	int pTwoAttack = player2->attack();

	//Player 1 defends and takes damage
	player1->defense(pTwoAttack);

	//Check to see if player died
	if (player1->getStrength() > 0)
	{
		std::cout << player1->getName() << "'s Strength is now: " <<
			player1->getStrength() << std::endl;
	}
	else
	{
		std::cout << player1->getName() << " died. " <<
			player2->getName() << " (Player 2) wins! \n " << std::endl;
	}
}