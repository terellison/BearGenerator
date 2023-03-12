#include <iostream>
#include "Bear.h"
#include "BearGenerator.h"
#include "DataProcessor.h"
#include <vector>
#include <time.h>

void randomBears(int numberOfBears);

int main()
{
    srand(time(0U));

    randomBears(20);

    system("PAUSE");

    return 0;
}

void randomBears(int numberOfBears)
{
    auto generator = BearGenerator::GetInstance();
    std::vector<Bear> bears;

    for (int i = 0; i < numberOfBears; ++i)
    {
        bears.push_back(generator->createRandomBear());
    }

    auto dataProcessor = DataProcessor::GetInstance();
    
    std::vector<std::string> aggression = { "0", "1" };

    auto foodData = dataProcessor->getDataFor(bears, generator->GetFoods(), "favoriteFood");
    auto aggressionData = dataProcessor->getDataFor(bears, aggression, "isAggressive");
    auto typeData = dataProcessor->getDataFor(bears, generator->GetTypes(), "type");
    auto colorData = dataProcessor->getDataFor(bears, generator->GetColors(), "color");

    std::cout << "Favorite Food:" << std::endl;

    for (auto pair : foodData)
    {
        std::cout << pair.first << ":" << ((float)pair.second / bears.size()) * 100.0f << "%" << std::endl;
    }

    
    std::cout << std::endl;

    std::cout << "Aggression:" << std::endl;

    for (auto pair : aggressionData)
    {
        std::cout << pair.first << ":" << ((float)pair.second / bears.size()) * 100.0f << "%" << std::endl;
    }

    std::cout << std::endl;

    std::cout << "Type of Bear:" << std::endl;

    for (auto pair : typeData)
    {
        std::cout << pair.first << ":" << ((float)pair.second / bears.size()) * 100.0f << "%" << std::endl;
    }

    std::cout << std::endl;

    std::cout << "Color:" << std::endl;

    for (auto pair : colorData)
    {
        std::cout << pair.first << ":" << ((float)pair.second / bears.size()) * 100.0f << "%" << std::endl;
    }

    DataProcessor::ResetInstance();
    BearGenerator::ResetInstance();
}

