#include <iostream>

using namespace std;

int main()
{
    cout << "While" << endl;
    int index = 1;
    while (index <= 5)
    {
        cout << index << endl;
        index++;
    }

    cout << "do while" << endl;
    int index2 = 6;
    do{
        cout << index2 << endl;
        index2++;
    }while(index2 <= 5);
        
    return 0;
}