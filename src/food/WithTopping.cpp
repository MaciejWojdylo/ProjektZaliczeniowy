#include "../../include/food/WithTopping.h"

WithTopping::WithTopping(Food *base, std::string name, int kcal, float price)
{
    this->decorated = base;
    this->name = name;
    this->kcal = kcal;
    this->price = price;
}

float WithTopping::Price()
{
    return this->decorated->Price() + this->price;
}

int WithTopping::Kcal()
{
    return this->decorated->Kcal() + this->kcal;
}

std::string WithTopping::Name()
{
    return this->name;
}

std::string WithTopping::Ingredients()
{
    return this->decorated->Ingredients() + "\n" + this->name;
}