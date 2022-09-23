#include <iostream>

using namespace std;

int main()
{
    int age = 17;
    int *pAge = &age;  // storing address of age in a pointer variable
    double gpa = 2.7;
    double *pGpa = &gpa;
    string name = "Wasif";
    string *pName = &name;

    cout << &age << endl;  // printing address of age
    cout << pAge << endl;  // printing address of age
    cout << *pAge << endl;  // derefrencing the address of age
    cout << *&age << endl;  // derefrencing the address of age
    return 0;
}