#pragma once
#include <string>
class Monster
{
public:
	Monster();
	~Monster();

	void SetMonsterName(std::string _monsterName);
	void SetonsterDescription(std::string _description);
	void SetMonsterHealth(int _health);
	void SetMonsterAttack(int _attack);

	int GetMonsterHealth();
	int GetMonsterAttack();
	std::string GetMonsterName();

protected:
	std::string monsterName;
	std::string monsterDescription;
	int health = 0;
	int attack = 0;
};

