#pragma once
#include <string>
#include <vector>
#include "Thing.h"

class Creature :public Thing
{
public:

	Creature();
	~Creature();

	int GetAttack();
	int GetHealth();

	int TakeDamage(int damageAmount);

protected:
	std::string creatureName;
	std::string description;
	int health = 0;
	int attackValue = 0;
	std::string weaponName;
	std::string armourName;
	std::vector<std::string> inventory;
	std::string location;
};

