#ifndef PROJEKTNAOBIEK_DOUGH_H
#define PROJEKTNAOBIEK_DOUGH_H

#endif //PROJEKTNAOBIEK_DOUGH_H
#pragma once
#include "Food.h"

class WithTopping : public Food
{
    private:
        std::string name;
        int kcal;
        float price;
        Food *decorated;
    public:
        WithTopping(Food*,std::string, int, float);
        std::string Name();
        int Kcal() override;
        float Price() override;
        std::string Ingredients() override;
};