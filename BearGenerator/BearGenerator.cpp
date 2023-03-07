#include "BearGenerator.h"
#include <time.h>

BearGenerator* BearGenerator::GetInstance()
{
	if (instance == nullptr)
	{
		instance = new BearGenerator();
	}

	return instance;
}

BearGenerator::BearGenerator()
{
}

std::vector<std::string> BearGenerator::getTypes()
{

	std::string arr[] =
	{
		"Winnie the Pooh Bear",
		"Yogi Bear",
		"Boo-boo Bear",
		"Paddington Bear",
		"Mama Bear",
		"Papa Bear",
		"Baby Bear",
		"Little Bear",
		"Teddy Bear",
		"Smokey Bear"
	};

	std::vector<std::string> types(arr, arr + sizeof(arr) / sizeof(std::string));

	return types;
}

std::vector<std::string> BearGenerator::getColors()
{

	std::string arr[] =
	{
		"Red",
		"Blue",
		"White",
		"Indigo",
		"Green",
		"Teal",
		"Fuchsia",
		"Brown",
		"Violet",
		"Black"
	};

	std::vector<std::string> colors(arr, arr + sizeof(arr) / sizeof(std::string));

	return colors;
}

std::vector<std::string> BearGenerator::getFoods()
{

	std::string arr[] =
	{
		"Honey",
		"Pizza",
		"Burger",
		"Burrito",
		"Wings",
		"Spaghetti",
		"Steak"
	};

	std::vector<std::string> foods(arr, arr + sizeof(arr) / sizeof(std::string));

	return foods;
}

Bear BearGenerator::createRandomBear()
{
	std::srand(0U);

	auto colors = this->getColors();
	auto foods = this->getFoods();
	auto types = this->getTypes();

	std::string color = colors[this->RandomNumber(0, colors.size())];
	std::string food = foods[this->RandomNumber(0, foods.size())];
	std::string type = types[this->RandomNumber(0, types.size())];

	int weight = this->RandomNumber(250, 1500);

	return Bear(type, color, weight, food);
}

int BearGenerator::RandomNumber(int min, int max)
{
	return (int)(1 + (std::rand() / (RAND_MAX / (max - min))));
}
