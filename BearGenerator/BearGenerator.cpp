#include "BearGenerator.h"
#include <time.h>

BearGenerator* BearGenerator::_instance = nullptr;

BearGenerator* BearGenerator::GetInstance()
{
	if (_instance == nullptr)
	{
		_instance = new BearGenerator();
	}

	return _instance;
}

BearGenerator::BearGenerator()
{
}

BearGenerator::~BearGenerator()
{
}

std::vector<std::string> BearGenerator::GetTypes()
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

std::vector<std::string> BearGenerator::GetColors()
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

void BearGenerator::ResetInstance()
{
	delete _instance;
	_instance = nullptr;
}

std::vector<std::string> BearGenerator::GetFoods()
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

Bear& BearGenerator::createRandomBear()
{
	auto colors = this->GetColors();
	auto foods = this->GetFoods();
	auto types = this->GetTypes();

	std::string color = colors[this->RandomNumber(0, colors.size() - 1)];
	std::string food = foods[this->RandomNumber(0, foods.size() - 1)];
	std::string type = types[this->RandomNumber(0, types.size() - 1)];

	int weight = this->RandomNumber(250, 1500);

	auto value = new Bear(type, color, weight, food);

	return *value;
}

int BearGenerator::RandomNumber(int min, int max)
{
	return (int)(rand() % (max - min + 1) + min);
}
