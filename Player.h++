#pragma once
#include <string>
#include<vector>
#include"Creature.h"
class Area;
class Monster;

class Player : public Creature

{
public:

	Player();
	~Player();

	void SetPlayerName(std::string newName);
	void SetPlayerDescription(std::string newDescription);
	void SetHealth(int _health);
	void SetAttackValue(int _attack);
	void SetWeaponName(std::string _weapon);
	void SetArmourname(std::string _armour);
	void AddToInventory(std::string _item);
	void SetPlayerLocation(Area *newplayerArea);

	Area GetPlayerLocation();
	std::string GetWeaponName();
	
	void Attack(Player* player, Monster* monster);



protected:

	
	Area* playerArea;

};

