#include "Creature.h"

Creature::Creature()
	: creatureName("")
	, description("")
	, health(0)
	, attackValue(0)
	, weaponName("")
	, armourName("")
	, inventory()
	, location()

{
}


Creature::~Creature()
{
}

int Creature::GetAttack()
{
	return attackValue;
}

int Creature::GetHealth()
{
	return health;
}

int Creature::TakeDamage(int damageAmount)
{
	return health -= damageAmount;
}

