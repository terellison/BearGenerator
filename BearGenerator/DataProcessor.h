#pragma once
#include <vector>
#include "Bear.h"
#include <unordered_map>
class DataProcessor
{
	static DataProcessor* _instance;

protected:

	DataProcessor();
	~DataProcessor();

public:

	DataProcessor(DataProcessor& other) = delete;

	std::unordered_map<std::string, int> getDataFor(std::vector<Bear>& data, const std::vector<std::string>& valuesArray, std::string value);

	static DataProcessor* GetInstance();

	static void ResetInstance();
};

