/*******************************************************************************
** Author:       Edgar Hernandez
** Date:         10/19/2019
** Description:  This program contains the specification for the BlueMen class.
** This is class is derived from the Character class. It contains two attack and
** defense functions that override the virtual functions in the base class.
*******************************************************************************/
#include "Character.hpp"
#include "die.hpp"
#ifndef BLUEMEN_HPP
#define BLUEMEN_HPP

class BlueMen :
	public Character
{
private:
	Die charDie[3];
	std::string name;
public:
	BlueMen();
	virtual ~BlueMen() {};
	int attack();
	int defense(int attackIn);
	std::string getName();
	int getArmor();
	int getStrength();
};

#endif