#pragma once
#include <string>
#include <vector>
#include<map>
#include "Thing.h"
using namespace std;

class Player;
class Monster;

class Area : public Thing

{public:
	Area();

	Area(std:: string areaName, std::string areaDescription, std::vector<std::string> areaContents, std::vector<Area*> areaExits, std::string userName, Monster* monsterInArea);
	~Area();

	void SetAreaName(std::string _areaName);
	void SetAreaDescription(std::string newDescription);
	void SetareaContents(std::string newContents);
	void SetUserInputHandler(std::string _userInput);
	//Player* GetPlayerArea();
	Monster* GetMonster();
	void SetMonster(Monster* _monster);
	
	
	//void Attack(Monster* , Player* );

	void addExit(Area* addExit);
	void Look();
	
	void Go(std::string exit, Player* toGo);
	// void Go(std::string exit, Player* toGo);
	

protected:

	std::vector<Area*> areaExits;
	std::vector<std::string> contents;

	//Player* playerArea;
	//Player* combatStats;
	Monster* monster;
	
};

