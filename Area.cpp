#include "Area.h++"
#include <iostream>
#include "Player.h++"
#include "Monster.h++"

Area::Area()
{
}

Area::Area(std::string areaName, std::string areaDescription, std::vector<std::string> areaContents, std::vector<Area*> areaExits, std::string userName, Monster* monsterInArea)
	: areaName()
	,areaDescription()
	,areaContents()
	, areaExits()
	, inputname()
	, monster(nullptr)
{
}

Area::~Area()
{

}

void Area::SetAreaName(std::string _areaName)
{
	areaName = _areaName;
}

void Area::SetAreaDescription(std::string newDescription)
{
	areaDescription = newDescription;
}

void Area::SetareaContents(std::string toSet)
{
	areaContents.push_back(toSet);
}

void Area::SetUserInputHandler(std::string _userInput)
{
	inputname = _userInput;
}

Monster* Area::GetMonster()
{
	return monster;
}

void Area::SetMonster(Monster* _monster)
{
	monster = _monster;
}

/*Player Area::GetPlayerArea()
{
	return *playerArea;
}

Monster Area::GetMonster()
{
	return *monster;
}

void Area::SetMonster(Monster* newMonster)
{
	monster = newMonster;
}

*/

/*void Area::Attack(Monster* monsterStats, Player* playerStats)
{
	std::string start;

	int playerHealth = playerStats->GetPlayerHealth();
	int playerAttack = playerStats->GetPlayerAttack();

	int monsterHealth = monsterStats->GetMonsterHealth();
	int monsterAttack = monsterStats->GetMonsterAttack();

	std::string mName = monsterStats->GetMonsterName();
	std::string pWeapon = playerStats->GetWeaponName();

	std::cout << "A " << mName << " Attacks! Press any key to begin combat." << "\n";
	std::getline(std::cin, start);

	while (monsterHealth > 0 && playerHealth > 0)
	{
		monsterHealth -= playerAttack;

		std::cout << "You attack " << mName << " with your " << pWeapon << ", It does "<< playerAttack << " Damage!" << "\n";
	
		if (monsterHealth <= 0)
		{
			std::cout << "You defeated the monster!" << "\n";
			playerStats->SetHealth(playerHealth);
		}

		else {
			std::cout << "The monster is still alive." << "\n";
		}
		playerHealth -= monsterAttack;

		if (playerHealth <= 0)
		{
			std::cout << "You died." << "\n";
		}

		else if (monsterHealth > 0){
			std::cout << "The monster hits you for " << monsterAttack << " Damage." << " You stil have " << playerHealth << " Health" << "\n";
			}
	}
} */

void Area::addExit(Area* addExit)
{
	areaExits.push_back(addExit);
}

void Area::Look()
{
	std::cout << areaDescription << "And the exits here are: " << "\n";

	for (int i = 0; i < areaExits.size(); ++i)
	{
		std::cout << areaExits[i]->inputname << "\n";
	}
}

void Area::Go(std::string exit, Player* toGo)
{
	{
		Look();
		cout << "Where would you like to go?" << "\n";
		std::getline(std::cin, exit);

		for (int i = 0; i < areaExits.size(); ++i)
		{
			if (exit == areaExits[i]->inputname)
			{
				toGo->SetPlayerLocation(areaExits[i]);
				std::cout << "You have moved room." << "\n";
			}
			else
				std::cout << "No such room exists" << "\n";
		}
	}
}


	




