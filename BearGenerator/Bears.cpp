#include <iostream>
#include "Bear.h"
#include "BearGenerator.h"
#include "DataProcessor.h"
#include <vector>
int main()
{
    /*Bear b("Black Bear", "Black", 800, "Meat");

    std::cout << b.isAgressive << std::endl;*/

    system("PAUSE");

    return 0;
}

void randomBears(int numberOfBears)
{
    BearGenerator* generator = BearGenerator::GetInstance();
    std::vector<Bear> bears;

    for (int i = 0; i <= numberOfBears; ++i)
    {
        bears.push_back(generator->createRandomBear());
    }

    DataProcessor* dataProcessor = new DataProcessor(bears);

}

