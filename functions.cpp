#include <iostream>

using namespace std;

void sayHi(string name, int age) {
    cout << "Hi " << name << " You are " << age << " Years old." << endl;
}

int main()
{
    sayHi("Wasif", 21);
    sayHi("Sagar", 22);
    sayHi("Mano", 18);
    return 0;
}