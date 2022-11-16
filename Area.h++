#pragma once
#include <string>
#include <vector>
#include<map>
using namespace std;

class Player;

class Area

{public:
	Area();
	~Area();

	void Look();
	void Go(std::string targetArea, Player* toGo);
	
	std::string areaName;
	std::string areaDescription;
	std::vector<std::string> areaContents;
	std::vector<std::string> areaExits;

	map<int, string> exits;

	Player* playerArea;
};

