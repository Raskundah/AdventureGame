#include "Item.h++"

Item::Item()
{
}

Item::~Item()
{
}

void Item::SetItemName(std::string _name)
{
	itemName = _name;
}

void Item::SetItemDescription(std::string _description)
{
	itemDescription = _description;
}
