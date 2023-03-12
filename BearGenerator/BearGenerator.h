#include <string>
#include <vector>
#include "Bear.h"
#pragma once
class BearGenerator
{
private:
	static BearGenerator* _instance;

protected:
	BearGenerator();
	~BearGenerator();
public:
	BearGenerator(const BearGenerator& other) = delete;

	void operator=(BearGenerator& other) = delete;

	static BearGenerator* GetInstance();

	static void ResetInstance();

	std::vector<std::string> GetTypes();

	std::vector<std::string> GetColors();

	std::vector<std::string> GetFoods();

	Bear& createRandomBear();

	int RandomNumber(int min, int max);
	
};

