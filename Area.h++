#pragma once
#include <string>
#include <vector>
#include<map>
using namespace std;

class Player;
class Monster;

class Area

{public:
	Area();

	Area(std:: string areaName, std::string areaDescription, std::vector<std::string> areaContents, std::vector<Area*> areaExits, std::string userName, Monster* monsterInArea);
	~Area();

	void SetAreaName(std::string _areaName);
	void SetAreaDescription(std::string newDescription);
	void SetareaContents(std::string newContents);
	void SetUserInputHandler(std::string _userInput);
	//Player* GetPlayerArea();
	//Monster* GetMonster();
	void SetMonster(Monster* newMonster);
	
	//void Attack(Monster* , Player* );

	void addExit(Area* addExit);
	void Look();
	void Go(std::string exit, Player* toGo);
	

protected:

	std::string areaName;
	std::string areaDescription;
	std::vector<std::string> areaContents;
	std::vector<Area*> areaExits;
	std::string inputname;

	Player* playerArea;
	//Player* combatStats;
	//Monster* monster;
	
};

