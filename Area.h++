#pragma once
#include <string>
#include <vector>
#include<map>
using namespace std;

class Player;

class Area

{public:
	Area();

	Area(std:: string areaName, std::string areaDescription, std::vector<std::string> areaContents, std::vector<Area*> areaExits);
	~Area();

	void addExit(Area* addExit);


	void Look();
	void Go(std::string exit, Player* toGo);
	
	std::string areaName;
	std::string areaDescription;
	std::vector<std::string> areaContents;
	std::vector<Area*> areaExits;

	// map<string, string> exits;

	Player* playerArea;
};

