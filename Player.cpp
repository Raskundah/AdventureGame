#include "Player.h++"
#include <iostream>
#include "Area.h++"
#include "Monster.h++"


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

void Player::SetPlayerLocation(Area* newplayerArea)
{
	playerArea = newplayerArea;
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



void Player::Attack(Player* player, Monster* monster)
{
	std::string start;

	int playerHealth = player->GetPlayerHealth();
	int playerAttack = player->GetPlayerAttack();

	int monsterHealth = monster->GetMonsterHealth();
	int monsterAttack = monster->GetMonsterAttack();

	std::string mName = monster->GetMonsterName();
	std::string pWeapon = player->GetWeaponName();

	std::cout << "A " << mName << " Attacks! Press any key to begin combat." << "\n";
	std::getline(std::cin, start);

	while (monsterHealth > 0 && playerHealth > 0)
	{
		monsterHealth -= playerAttack;

		std::cout << "You attack " << mName << " with your " << pWeapon << ", It does " << playerAttack << " Damage!" << "\n";

		if (monsterHealth <= 0)
		{
			std::cout << "You defeated the monster!" << "\n";
			player->SetHealth(playerHealth);
		}

		else {
			std::cout << "The monster is still alive." << "\n";
		}
		playerHealth -= monsterAttack;

		if (playerHealth <= 0)
		{
			std::cout << "You died." << "\n";
		}

		else if (monsterHealth > 0) {
			std::cout << "The monster hits you for " << monsterAttack << " Damage." << " You stil have " << playerHealth << " Health" << "\n";
		}
	}
}





