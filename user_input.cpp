#include <iostream>

using namespace std;

int main()
{
    // Getting string, it's slightly different
    string name;
    cout << "Enter your name: ";
    getline(cin, name);  // taking input from user
    cout << "Your name is " << name << endl;
    
    // Getting int
    int age;
    cout << "Enter your age: ";
    cin >> age;  // taking input from user
    cout << "You are " << age << " years old!" << endl;

    // Getting char
    char ch;
    cout << "Enter your char: ";
    cin >> ch;  // taking input from user
    cout << "You entered " << ch << endl;
    

    return 0;
}