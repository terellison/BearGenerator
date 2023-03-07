#include "DataProcessor.h"


std::unordered_map<std::string, int> DataProcessor::getDataFor(std::vector<std::string>& valuesArray, std::string value)
{

    std::unordered_map<std::string, int> map;

    for (auto possibleValue : valuesArray)
    {
        map[possibleValue] = 0;
    }

    for (auto& bear : this->data)
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
            map[bear.color];
        }
        else if (value == "isAggressive")
        {
            bear.isAgressive ? map["isAggressive"]++ : map["notAgressive"]++;
        }
    }

    return map;
}
