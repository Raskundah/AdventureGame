#pragma once
#include <string>
class Item

{
public:
	Item();
	~Item();

	void SetItemName(std::string _name);
	void SetItemDescription(std::string _description);

	protected:

	std::string itemName;
	std::string itemDescription;
	
};

