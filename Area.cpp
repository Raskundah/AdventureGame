#include "Area.h++"
#include <iostream>



Area::Area()
	:
 areaName()
,areaDescription()
,areaContents()
,areaExits()
,playerArea(nullptr)
,exits{}
{}

Area::~Area()
{
}




void Area::Look()
{
	std::cout << this->areaDescription;
	for (auto itr = exits.begin(); itr != exits.end(); ++itr)
	{
		cout << itr->second << " " << endl;
	}

		std::cout << "\n";
}

void Area::Go(std::string targetArea, Player* toGo)
{
	Look();
	cout << "Where would you like to go?";
	cin >> targetArea;
	
	playerArea = toGo
}



