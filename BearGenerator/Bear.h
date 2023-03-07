#include <string>

#pragma once
class Bear
{
public:
	std::string type;
	std::string color;
	int weight;
	std::string favoriteFood;
	bool isAgressive;

	Bear();
	Bear(std::string type, std::string color, int weight, std::string favoriteFood);

};

