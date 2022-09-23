#include <iostream>

using namespace std;

int power(int num, int powNum) {
    int result = 1;
    for (int i = 0; i < powNum; i++)
    {
        result = result * num;
    }
    
    return result;
}

int main()
{
    cout << power(2,3);
    return 0;
}