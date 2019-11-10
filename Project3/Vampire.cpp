/*******************************************************************************
** Author:       Edgar Hernandez
** Date:         10/19/2019
** Description:  This program contains the specification for the Vampire class.
** This is class is derived from the Character class. It contains two attack and
** defense functions that override the virtual functions in the base class.
*******************************************************************************/
#include "Vampire.hpp"


/*********************************************************************
*					Vampire::Vampire()
* This is the default constructor that intializes the attributes for the
* vampire character
*********************************************************************/
Vampire::Vampire()
{
	name = "Vampire";
	armorPoints = 1;
	strengthPoints = 18;
}


int Vampire::attack()
{
	charDie.setSides(12);
	attackPoints = charDie.rollDie();
	std::cout << "\n" << "Vampire's attack roll: " << attackPoints << std::endl;
	return attackPoints;
}


void Vampire::defense(int attackIn)
{
	int damage = 0;
	int charm = rand() % 2;
	charDie.setSides(6);
	defensePoints = charDie.rollDie();
	std::cout << "Vampire's defense roll: " << defensePoints << std::endl;
	if (charm == 0)
	{
		damage = (attackIn - defensePoints - armorPoints);
		//Make sure damage is not negative
		if (damage < 0)
		{
			damage = 0;
		}
		std::cout << "Total damage inflicted: " << attackIn << "-" <<
			defensePoints << "-" << armorPoints << " = " << damage << std::endl;
	}
	else
	{
		std::cout << "Vampire's Charm stopped the opponent's attack!" << std::endl;
	}

	strengthPoints -= damage;
}

/*********************************************************************
*					Vampire::getName()
* This function returns the name of the character.
*********************************************************************/
std::string Vampire::getName()
{
	return name;
}

/*********************************************************************
*					Vampire::getName()
* This function returns the armor of the character.
*********************************************************************/
int Vampire::getArmor()
{
	return armorPoints;
}

/*********************************************************************
*					Vampire::getName()
* This function returns the strength of the character.
*********************************************************************/
int Vampire::getStrength()
{
	return strengthPoints;
}