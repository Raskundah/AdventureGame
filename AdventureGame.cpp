// AdventureGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include "Area.h++"
#include "Feature.h++"
#include "Item.h++"
#include "Monster.h++"
#include "Player.h++"

void describePlayer(Player toDescribe)
{
	std::cout << "This mighty adventurer " << toDescribe.playerName << " Is " << toDescribe.description << " and is weilding " << toDescribe.weaponName << " and their armour is " << toDescribe.armourName << ". They have a health of "
		<< toDescribe.health << " and an attack value of " << toDescribe.health << ". their inventory contains: ";

	for (int i = 0; i < toDescribe.inventory.size(); ++i)
	{
		std::cout << toDescribe.inventory[i];
		std::cout << "\n";
	}

	std::cout << "\n";
}

void describeMonster(Monster describe)
{
	std::cout << "This monster is a " << describe.monsterName << " Described as " << describe.monsterDescription << " with attack value of " << describe.attack << " and a health value of " << describe.health << "." << "\n";

	std::cout << "\n";
}

void describeArea(Area toDescribe)
{
	std::cout << "This area is " << toDescribe.areaName << " described as " << toDescribe.areaDescription << " And has exits ";

	for (int i = 0; i < toDescribe.areaExits.size(); ++i)
	{
		std::cout << toDescribe.areaExits[i] << " ";

	}

	std::cout << " And contains ";
	for (int i = 0; i < toDescribe.areaContents.size(); ++i)
	{
		std::cout << toDescribe.areaContents[i] << " ";
	}

	std::cout << "\n";



}

void describeItems(Item toDescribe)
{
	std::cout << "This item is " << toDescribe.ItemName << " with a description of " << toDescribe.ItemDescription << "\n";
}

void describeFeatures(Feature toDescribe)
{
	std::cout << "This feature is " << toDescribe.featureName << " and is described as " << toDescribe.featureDescription << "\n";

}

int main()
{
#pragma region Createclasses
	//Creating class objects

	Player warrior;
	Player archer;
	Player knight;

	Monster slime;
	Monster dragon;
	Monster minotaur;

	Area start;
	Area beforeBoss;
	Area bossRoom;

	Item key;
	Item torch;
	Item rock;

	Feature door;
	Feature rubble;
	Feature fountain;

#pragma endregion

#pragma region InstancePlayer
	//define Player instances

	warrior.playerName = "Grog";
	warrior.description = "A might berzerker, ready to chop skulls";
	warrior.health = 200;
	warrior.attackValue = 50;
	warrior.weaponName = "SkullCleaver";
	warrior.armourName = "Unarmoured Defence!";
	warrior.inventory.push_back("Key");
	warrior.inventory.push_back("Potion of Healing");

	knight.playerName = "Magnus";
	knight.description = "A paladin devoted to the norse god Odin!";
	knight.health = 75;
	knight.attackValue = 80;
	knight.weaponName = "GreatSword + 1";
	knight.armourName = "Platemail";
	knight.inventory.push_back("CLoak of protection");
	knight.inventory.push_back("Potion of Greater healing");
	knight.inventory.push_back("Symbol of the devout!");

	archer.playerName = "Vex'halia";
	archer.description = "A penny pinching bear lover!";
	archer.health = 120;
	archer.attackValue = 40;
	archer.weaponName = "Veth'las";
	archer.armourName = "Dragon Scale Mail!";
	archer.inventory.push_back("Dagger");
	archer.inventory.push_back("Potion of invisibility");
	archer.inventory.push_back("Bear food");


#pragma endregion

#pragma region features
	//define and populate features


	door.featureDescription = "An ordinary wooden door";
	door.featureName = "Oak_Door_01";

	rubble.featureName = "Rubble_Pile";
	rubble.featureDescription = "A simple rubble pile.";

	fountain.featureDescription = "A fountain long bereft of water.";
	fountain.featureName = "fountain_empty";

#pragma endregion

#pragma region monsters
	//define and populate monsters

	slime.monsterName = "Slime_03";
	slime.monsterDescription = "A sickly, green slime creature.";
	slime.attack = 10;
	slime.health = 10;

	dragon.monsterName = "Ancient red dragon";
	dragon.monsterDescription = "A ferocious fire breathing red dragon. RUN!";
	dragon.health = 300;
	dragon.attack = 1000;

	minotaur.monsterName = "Silver_Minotaur_01";
	minotaur.monsterDescription = "A maze conqering half bull, half man, all power!";
	minotaur.attack = 50;
	minotaur.health = 100;

#pragma endregion

#pragma region items
	//populate items.

	key.ItemName = "Key to the silver throne room";
	key.ItemDescription = "This key is silvery and warm to the touch.";

	torch.ItemName = "Unlit torch";
	torch.ItemDescription = "Light this torch to see in dark places.";

	rock.ItemName = "a rock.";
	rock.ItemDescription = "A rock.";

#pragma endregion

#pragma region areas
	//populate areas.

	start.areaName = "StartRoom";
	start.areaDescription = "This is the room you woke up in, naked and afraid.";
	start.areaContents.push_back("rubble");
	start.areaExits.push_back("North");

	beforeBoss.areaName = "Dragon_PreBossRoom";
	beforeBoss.areaDescription = "Before you lies a single door to the west, it looks to be made of iron, hot to the touch.";
	beforeBoss.areaContents.push_back("key");
	beforeBoss.areaExits.push_back("west");

	bossRoom.areaName = "Dragons_Lair";
	bossRoom.areaDescription = "as you enter, the roar of a dragon fills your ears, you quickly dodge the dragons jaws!";
	bossRoom.areaExits.push_back("east");
	bossRoom.areaExits.push_back("south");
	bossRoom.areaContents.push_back("Dragon's Hoard");

#pragma endregion

#pragma region writeToCOnsole

	//player console

	describePlayer(knight);
	describePlayer(warrior);
	describePlayer(archer);

	//Monster console
	std::cout << "\n";


	describeMonster(dragon);
	describeMonster(slime);
	describeMonster(minotaur);

	// area describe
	std::cout << "\n";


	describeArea(start);
	describeArea(beforeBoss);
	describeArea(bossRoom);

	//feature describe
	std::cout << "\n";


	describeFeatures(fountain);
	describeFeatures(rubble);
	describeFeatures(door);

	//item describe
	std::cout << "\n";


	describeItems(key);
	describeItems(torch);
	describeItems(rock);

#pragma endregion

}

