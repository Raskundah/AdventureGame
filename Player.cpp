#include "Player.h++"
#include <iostream>
#include "Area.h++"


Player::Player()
 : playerName("")
,description("")
, health(0)
, attackValue(0)
,weaponName("")
, armourName("")
, inventory()
,playerArea(nullptr)
,location()

{

}

Player::~Player()
{
}

void Player::SetPlayerName(std::string newName)
{
	playerName = newName;
}

void Player::SetPlayerDescription(std::string newDescription)
{
	description = newDescription;
}

void Player::SetHealth(int _health)
{
	health = _health;
}

void Player::SetAttackValue(int _attack)
{
	attackValue = _attack;
}

void Player::SetWeaponName(std::string _weapon)
{
	weaponName = _weapon;
}

void Player::SetArmourname(std::string _armour)
{
	armourName = _armour;
}

void Player::AddToInventory(std::string _item)
{
	inventory.push_back(_item);
}

void Player::SetPlayerLocation(Area* newPlayerArea)
{
	playerArea = newPlayerArea;
}

Area Player::GetPlayerLocation()
{
	return *playerArea;
}

int Player::GetPlayerHealth()
{
	return health;
}

int Player::GetPlayerAttack()
{
	return attackValue;
}

std::string Player::GetWeaponName()
{
	return weaponName;
}


