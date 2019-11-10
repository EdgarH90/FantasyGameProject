/*******************************************************************************
** Author:       Edgar Hernandez
** Date:         10/19/2019
** Description:  This program contains the specification for the Medusa class.
** This is class is derived from the Character class. It contains two attack and
** defense functions that override the virtual functions in the base class.
*******************************************************************************/
#include "Medusa.hpp"


/*********************************************************************
*					Medusa::Medusa()
* This is the default constructor that intializes the attributes for the
* Medusa character
*********************************************************************/
Medusa::Medusa()
{
	name = "Medusa";
	armorPoints = 0;
	strengthPoints = 8;
}

/*********************************************************************
*					Medusa::defense()
* This function contains the attack function for Medusa. It simulates
* the roll of 2 six-sided dice and returns the value of the attack points
*********************************************************************/
int Medusa::attack()
{
	charDie.setSides(6);
	int firstDie = charDie.rollDie();
	int secondDie = charDie.rollDie();
	attackPoints = 12; //(firstDie + secondDie);
	std::cout << "\n" << "Medusa's attack roll: " << firstDie << "+" << secondDie
		<< std::endl;
	if (attackPoints == 12)
	{
		std::cout << "Medusa used glare to turn her opponent into stone!" << std::endl;
		attackPoints = 1000;
	}
	return attackPoints;
}

/*********************************************************************
*					Medusa::defense()
* This function contains the defense function for Medusa. It simulates
* the roll of 1 six-sided die, displays the damage information, and
* returns an integer for the damage. It also contains the implementation
* for the Hogwarts special ability.
*********************************************************************/
void Medusa::defense(int attackIn)
{
	int damage = 0;
	charDie.setSides(6);
	defensePoints = charDie.rollDie();
	std::cout << "\n" << "Medusa's defense roll: " << defensePoints << std::endl;
	damage = (attackIn - defensePoints - armorPoints);
	//Make sure damage is not negative
	if (damage < 0)
	{
		damage = 0;
	}
	std::cout << "Total damage inflicted: " << attackIn << "-" <<
		defensePoints << "-" << armorPoints << " = " << damage << std::endl;

	strengthPoints -= damage;
}

/*********************************************************************
*					Medusa::getName()
* This function returns the name of the character.
*********************************************************************/
std::string Medusa::getName()
{
	return name;
}

/*********************************************************************
*					Medusa::getName()
* This function returns the armor of the character.
*********************************************************************/
int Medusa::getArmor()
{
	return armorPoints;
}

/*********************************************************************
*					Medusa::getName()
* This function returns the strength of the character.
*********************************************************************/
int Medusa::getStrength()
{
	return strengthPoints;
}