#include "Monster.h++"

Monster::Monster()
	: Creature()
{
}

Monster::~Monster()
{
}

void Monster::SetMonsterName(std::string _monsterName)
{
	creatureName = _monsterName;
}

void Monster::SetonsterDescription(std::string _description)
{
	description = _description;
}

void Monster::SetMonsterHealth(int _health)
{
	health = _health;
}

void Monster::SetMonsterAttack(int _attack)
{
	attackValue = _attack;
}

std::string Monster::GetMonsterName()
{
	return creatureName;
}
