#include <iostream>

using namespace std;

int main()
{
    string color, weather, anything;

    cout << "Enter a color: ";
    getline(cin, color);
    cout << "Enter a weather: ";
    getline(cin, weather);
    cout << "Enter anything: ";
    getline(cin, anything);

    cout << "\n" << endl;
    cout << "Roses are " << color << endl;
    cout << "Sky is " << weather << endl;
    cout << "I love " << anything << endl;
    return 0;
}