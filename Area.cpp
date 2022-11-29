#include "Area.h++"
#include <iostream>






Area::Area()
{
}

Area::Area(std::string areaName, std::string areaDescription, std::vector<std::string> areaContents, std::vector<Area*> areaExits)
	: areaName()
	,areaDescription()
	,areaContents()
	, areaExits()
{

}

Area::~Area()
{

}

void Area::addExit(Area* addExit)
{
	areaExits.push_back(addExit);
}




void Area::Look()
{
	std::cout << areaDescription << "And the exits here are" << "\n";

	for (int i = 0; i < areaExits.size(); ++i)
	{
		std::cout << areaExits[i]->areaName << "\n";
	}
}

void Area::Go(std::string exit, Player* toGo)
{
	Look(); 
	cout << "Where would you like to go?";
	std::getline(std::cin, exit);

	for (int i = 0; i < areaExits.size(); ++i )
	{
		if (exit = &areaExits[i])
		{

		}
	}
	
	
	playerArea = toGo;


	//Look();
}



