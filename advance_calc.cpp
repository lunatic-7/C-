#include <iostream>

using namespace std;

void calc(double num1, double num2, char op) {
    if (op == '+')
    {
        cout << num1 + num2;
    }
    else if (op == '-')
    {
        cout << num1 - num2;
    }
    else if (op == '*')
    {
        cout << num1 * num2;
    }
    else if (op == '/')
    {
        cout << num1 / num2;
    }
    else
    {
        cout << "Invalid Operator";
    }
    
}

int main()
{
    double num1, num2;
    char op;
    cout << "Enter number one: ";
    cin >> num1;
    cout << "Enter the operator: ";
    cin >> op;
    cout << "Enter number two: ";
    cin >> num2;

    calc(num1, num2, op);
    return 0;
}