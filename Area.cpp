#include "Area.h++"
#include <iostream>

Area::Area()
	:
 areaName()
,areaDescription()
,areaContents()
,areaExits()
,playerArea(nullptr)
{}


void Area::Look()
{
	std::cout << "The area you are in is " << areaName << " And the exists are ";
		for (int i = 0; i < areaExits.size(); ++i)
		{
			std::cout << areaExits[i] << " ";
		}

		std::cout << "\n";
}

void Area::Go(std::string targetArea, Player* toGo)
{
	Look();
	

	
}
