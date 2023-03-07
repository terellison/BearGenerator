#include <string>
#include <vector>
#include "Bear.h"
#pragma once
class BearGenerator
{
private:
	static BearGenerator* instance;

protected:
	BearGenerator();
public:
	BearGenerator(const BearGenerator& other) = delete;

	static BearGenerator* GetInstance();

	std::vector<std::string> getTypes();

	std::vector<std::string> getColors();

	std::vector<std::string> getFoods();

	Bear createRandomBear();

	int RandomNumber(int min, int max);
	
};

