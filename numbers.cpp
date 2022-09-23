#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    // It follows PEMDAS
    cout << 10 + 3 << endl;
    cout << 10 - 3 << endl;
    cout << 10 * 3 << endl;
    cout << 10 / 3 << endl;
    cout << 10 % 3 << endl;

    int wnum = 5;
    cout << wnum << endl;

    wnum++;
    cout << wnum << endl;

    wnum--;
    cout << wnum << endl;

    wnum += 70;
    cout << wnum << endl;

    cout << pow(2, 5) << endl;  // 2 ki shakti 5
    cout << sqrt(2) << endl;  // 2 ka sqrt
    cout << round(4.6) << endl;  // rounds the no.
    cout << ceil(4.1) << endl;  // rounds up the no.
    cout << floor(4.7) << endl;  // rounds downn the no.
    cout << fmax(10, 17) << endl;  // find max no. only b/w two no's.
    cout << fmin(10, 17) << endl;  // find min no. only b/w two no's.
    return 0;
}