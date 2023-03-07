#include <time.h>
#include "Bear.h"

Bear::Bear(std::string type, std::string color, int weight, std::string favoriteFood)
{
	this->type = type;
	this->color = color;
	this->weight = weight;
	std::srand(0U);

	if (this->weight == 700 || this->type == "Little Bear" || this->type == "Baby Bear")
	{
		this->isAgressive = false;
	}

	else if (this->weight == 1200 || this->type == "Papa Bear" || this->type == "Black Bear")
	{
		this->isAgressive = true;
	}

	else
	{
		int randomNumber = (1 + (std::rand() / (RAND_MAX)));
		this->isAgressive = randomNumber;
	}

	if (this->type == "Winnie the Pooh Bear")
	{
		this->favoriteFood = "Honey";
	}
	else
	{
		this->favoriteFood = favoriteFood;
	}
}


