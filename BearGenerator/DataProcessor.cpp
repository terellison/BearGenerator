#include "DataProcessor.h"

DataProcessor* DataProcessor::_instance = nullptr;

DataProcessor::DataProcessor()
{

}

DataProcessor::~DataProcessor()
{
}

std::unordered_map<std::string, int> DataProcessor::getDataFor(std::vector<Bear>& data, const std::vector<std::string>& valuesArray, std::string value)
{

    std::unordered_map<std::string, int> map;

    for (auto possibleValue : valuesArray)
    {
        map[possibleValue] = 0;
    }

    for (auto& bear : data)
    {
        if (value == "favoriteFood")
        {
            map[bear.favoriteFood]++;
        }
        else if (value == "type")
        {
            map[bear.type]++;
        }
        else if (value == "color")
        {
            map[bear.color]++;
        }
        else if (value == "isAggressive")
        {
            bear.isAgressive ? map["isAggressive"]++ : map["notAgressive"]++;
        }
    }

    map.erase("0");
    map.erase("1");

    return map;
}

DataProcessor* DataProcessor::GetInstance()
{
    if (_instance == nullptr)
    {
        _instance = new DataProcessor();
    }

    return _instance;
}

void DataProcessor::ResetInstance()
{
    delete _instance;
    _instance = nullptr;
}
