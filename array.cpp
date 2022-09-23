#include <iostream>

using namespace std;

int main()
{
    int luckynums[] = {10,2,44,5,7,22};
    // int somenums[10];  // an array with a predefined capacity of 10 elements only.

    cout << luckynums[0] << endl;  // Accessing array elements from their index

    luckynums[2] = 77;
    cout << luckynums[2] << endl;  // Changing value at an index



    return 0;
}