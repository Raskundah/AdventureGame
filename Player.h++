#pragma once
#include <string>
#include<vector>
class Player
{
public:

	std::string playerName;
	std::string description;
	int health = 0;
	int attackValue = 0;
	std::string weaponName;
	std::string armourName;
	std::vector<std::string> inventory;
};

