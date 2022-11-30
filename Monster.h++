#pragma once
#include <string>
#include "Creature.h"

class Monster : public Creature
{
public:
	Monster();
	~Monster();

	void SetMonsterName(std::string _monsterName);
	void SetonsterDescription(std::string _description);
	void SetMonsterHealth(int _health);
	void SetMonsterAttack(int _attack);

	std::string GetMonsterName();


protected:
	 
};

