#pragma once
#include <string>
#include <vector>
class Player;

class Area

{public:
	Area();

	void Look();
	void Go(std::string targetArea, Player* toGo);
	
	std::string areaName;
	std::string areaDescription;
	std::vector<std::string> areaContents;
	std::vector<std::string> areaExits;
	Player* playerArea;
};

