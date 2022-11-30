#include "Monster.h++"

Monster::Monster()
{
}

Monster::~Monster()
{
}

void Monster::SetMonsterName(std::string _monsterName)
{
	monsterName = _monsterName;
}

void Monster::SetonsterDescription(std::string _description)
{
	monsterDescription = _description;
}

void Monster::SetMonsterHealth(int _health)
{
	health = _health;
}

void Monster::SetMonsterAttack(int _attack)
{
	attack = _attack;
}

int Monster::GetMonsterHealth()
{
	return health;
}

int Monster::GetMonsterAttack()
{
	return attack;
}

std::string Monster::GetMonsterName()
{
	return monsterName;
}

