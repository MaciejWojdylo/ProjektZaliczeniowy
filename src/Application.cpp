#include <iostream>
#include "../include/food/WithDough.h"
#include "../include/food/WithTopping.h"

using namespace std;


int main() {
    Food *pizza;
    pizza = new Pizza;
    //new WithTopping(new WithDough(, "cienkie", 100, 12.50f), "ananas", 100, 5.0f)

    cout << "Choose your dough type: " << endl << "[1] thin" << endl << "[2] thick" << endl;
    int a;
    cin >> a;

    switch (a)
    {
        case 1:
            pizza = new WithDough((Pizza*) pizza, "Thin dough", 100, 12.50f);
            break;
        case 2:
            pizza = new WithDough((Pizza*) pizza, "Thick dough", 150, 13.50f);
            break;
    }

    system("cls");

    cout << "Choose 3 toppings: " << endl;
    cout << "[1] pineapple" << endl;
    cout << "[2] ham" << endl;
    cout << "[3] salami" << endl;
    cout << "[4] champignons" << endl;
    cout << "[5] shrimps" << endl;
    cout << "[6] onion" << endl;
    for (int i = 0; i < 3; i++)
    {
        cin >> a;
        switch (a)
        {
            case 1:
                pizza = new WithTopping(pizza, "Pineapple", 50, 5.0f);
                break;
            case 2:
                pizza = new WithTopping(pizza, "Ham", 100, 4.0f);
                break;
            case 3:
                pizza = new WithTopping(pizza, "Salami", 100, 7.0f);
                break;
            case 4:
                pizza = new WithTopping(pizza, "Champignons", 100, 3.0f);
                break;
            case 5:
                pizza = new WithTopping(pizza, "Shrimps", 100, 9.0f);
                break;
            case 6:
                pizza = new WithTopping(pizza, "Onion", 100, 2.0f);
                break;
        }
    }
    cout << pizza->Ingredients() << endl << pizza->Kcal() << " kcal" << endl << pizza->Price() << " PLN" << endl;
    cout << pizza->Price() * 0.0000079 << " BTC";
    return 0;
}
