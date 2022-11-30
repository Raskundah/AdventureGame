#pragma once
#include <string>
#include <vector>
class Thing
{
public:

	Thing();
	~Thing();

	void Look();

protected:
	std::string name;
	std::string description;
	std::string inputname;
};

