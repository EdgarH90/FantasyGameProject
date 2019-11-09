/*******************************************************************************
** Author:       Edgar Hernandez
** Date:         10/19/2019
** Description:  This program contains the specification for the Vampire class.
** This is class is derived from the Character class. It contains two attack and
** defense functions that override the virtual functions in the base class.
*******************************************************************************/
#include "Character.hpp"
#include "die.hpp"
#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP

class Vampire :
	public Character
{
private:
	Die charDie;
	std::string name;
public:
	Vampire();
	virtual ~Vampire() {};
	int attack();
	int defense(int attackIn);
	std::string getName();
	int getArmor();
	int getStrength();
};

#endif

