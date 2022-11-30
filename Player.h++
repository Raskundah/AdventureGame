#pragma once
#include <string>
#include<vector>
class Area;

class Player

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
	//void SetPlayerLocation(Area *newplayerArea);

	// Area GetPlayerLocation();
	int GetPlayerHealth();
	int GetPlayerAttack();
	std::string GetWeaponName();



protected:

	std::string playerName;
	std::string description;
	int health = 0;
	int attackValue = 0;
	std::string weaponName;
	std::string armourName;
	std::vector<std::string> inventory;
	// Area* playerArea;
	std::string location;

};

