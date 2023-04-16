#ifndef PROJEKTNAOBIEK_DOUGH_H
#define PROJEKTNAOBIEK_DOUGH_H

#endif //PROJEKTNAOBIEK_DOUGH_H
#pragma once
#include "Pizza.h"

class WithDough : public Food
{
    private:
        std::string name;
        int kcal;
        float price;
        Pizza *decorated;
    public:
        WithDough(Pizza*,std::string, int, float);
        std::string Name();
        int Kcal() override;
        float Price() override;
        std::string Ingredients() override;
};