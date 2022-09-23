#include <iostream>

using namespace std;

class Chef
{
public:
    void makeChicken()
    {
        cout << "Chef makes chicken" << endl;
    }
    void makePasta()
    {
        cout << "Chef makes pasta" << endl;
    }
    void makeSpecialDish()
    {
        cout << "Chef makes PIZZA" << endl;
    }
};

class ItalianChef : public Chef  // Inheriting property from Chef class
{
public:
    void makeMaggi()
    {
        cout << "Chef makes Maggi" << endl;
    }
    void makeSpecialDish()
    {
        cout << "Chef makes BBQ GRILL" << endl;
    }
};

int main()
{
    Chef chef;
    chef.makeChicken();
    chef.makeSpecialDish();

    ItalianChef italianChef;
    italianChef.makeChicken();  // inherited from Chef class
    italianChef.makeMaggi();
    italianChef.makeSpecialDish();  // modified in ItalianChef class
    return 0;
}