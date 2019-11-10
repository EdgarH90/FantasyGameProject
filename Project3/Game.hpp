/*******************************************************************************
** Author:       Edgar Hernandez
** Date:         10/19/2019
** Description:  This program contains the specification for the playGame class.
** 
*******************************************************************************/
#ifndef PLAYGAME_HPP
#define PLAYGAME_HPP
#include <string>
#include <iostream>
#include <sstream>
#include <memory>
#include "Character.hpp"
#include "Vampire.hpp"
#include "HarryPotter.hpp"
#include "BlueMen.hpp"
#include "Barbarian.hpp"
#include "Medusa.hpp"

class Game
{
public: //MAKE PRIVATE
	bool gameStatus = true;
	int damage = 0;
	std::shared_ptr<Character> player1;
	std::shared_ptr<Character> player2;
public:
	Game();
	~Game();
	void selectChar(int playerNum, int playerChoice);
	void playeroneAttacks();
	void playertwoAttacks();
};

#endif
