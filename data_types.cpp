#include <iostream>

using namespace std;

int main()
{
    char section = 'A';  // Only single quotes allowed
    string hello = "Hello World";
    int num = 7;
    float marks = 72.3;  // Float can store less decimal places
    double tot = 72.3345;  // double can store more decimal places
    bool isMale = true;

    cout << hello << " I'm in " << section << " got " << marks << " from " << tot << " still no " << num << " my fvt that's " << isMale << endl; 
    return 0;
}