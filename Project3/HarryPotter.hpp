/*******************************************************************************
** Author:       Edgar Hernandez
** Date:         10/19/2019
** Description:  This program contains the specification for the HarryPotter class.
** This is class is derived from the Character class. It contains two attack and
** defense functions that override the virtual functions in the base class.
*******************************************************************************/
#include "Character.hpp"
#include "die.hpp"
#ifndef HARRYPOTTER_HPP
#define HARRYPOTTER_HPP

class HarryPotter :
	public Character
{
private:
	Die charDie;
	int livesRemaining;
	std::string name;
public:
	HarryPotter();
	virtual ~HarryPotter() {};
	int attack();
	int defense(int attackIn);
	std::string getName();
	int getArmor();
	int getStrength();
};

#endif

