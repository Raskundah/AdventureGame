#include "Player.h++"
#include <iostream>
#include "Area.h++"
#include "Monster.h++"

	

Player::Player()
 :
	Creature()
	, playerArea()
{

}

Player::~Player()
{
}

void Player::SetPlayerName(std::string newName)
{
	creatureName = newName;
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

std::string Player::GetWeaponName()
{
	return weaponName;
}




void Player::Attack(Player* player, Monster* monster)
{
	std::string start;


	std::cout << "A " << monster->GetMonsterName() << " Attacks! Press any key to begin combat." << "\n";
	std::getline(std::cin, start);

	while (monster->GetHealth() > 0 && player->GetHealth() > 0)
	{

		monster->TakeDamage(GetAttack());

		std::cout << "You attack " << monster->GetMonsterName() << " with your " << GetWeaponName() << ", It does " << GetAttack() << " Damage!" << "\n";

		if (monster->GetHealth() <= 0)
		{
	
			std::cout << "You defeated the monster!" << "\n";
		}

		else if (monster->GetHealth() > 0)
		{
			std::cout << "The monster is still alive" << "\n";
		}

		TakeDamage(monster->GetAttack());

		if (GetHealth() <= 0)
		{
			std::cout << "You died." << "\n";
		}

		else if (monster->GetHealth() > 0) {
			std::cout << "The monster hits you for " << monster->GetAttack() << " Damage." << " You stil have " << GetHealth() << " Health" << "\n";
		}


	}

}





