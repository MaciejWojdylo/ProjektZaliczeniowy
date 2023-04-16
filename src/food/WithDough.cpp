#include "../../include/food/WithDough.h"

WithDough::WithDough(Pizza *base, std::string name, int kcal, float price)
{
    this->decorated = base;
    this->name = name;
    this->kcal = kcal;
    this->price = price;
}

float WithDough::Price()
{
    return this->decorated->Price() + this->price;
}

int WithDough::Kcal()
{
    return this->decorated->Kcal() + this->kcal;
}

std::string WithDough::Name()
{
    return this->name;
}

std::string WithDough::Ingredients()
{
    return this->decorated->Ingredients() + this->name;
}