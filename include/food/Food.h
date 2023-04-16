#ifndef PROJEKTNAOBIEK_FOOD_H
#define PROJEKTNAOBIEK_FOOD_H

#endif //PROJEKTNAOBIEK_FOOD_H
#include <iostream>
#pragma once
class Food
{
    public:
    virtual int Kcal()=0;
    virtual float Price()=0;
    virtual std::string Ingredients()=0;
};