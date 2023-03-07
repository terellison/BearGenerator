#pragma once
#include <vector>
#include "Bear.h"
#include <unordered_map>
class DataProcessor
{
	std::vector<Bear> data;

public:
	DataProcessor(std::vector<Bear>& data) { this->data = data; }

	std::unordered_map<std::string, int> getDataFor(std::vector<std::string>& valuesArray, std::string value);

};

