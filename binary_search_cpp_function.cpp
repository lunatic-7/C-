#include <iostream>

using namespace std;

int main()
{
    int array[] = {1,2,3,4,5,6,10};
    int n = sizeof(array)/sizeof(int); // length of an array
    int x = 3; // element to find
    
    // lower_bound returns a pointer to the first array element whose value is at least x.
    auto k = lower_bound(array, array+n, x) - array;

    if (k < n && array[k] == x) 
    {
        cout << x << " is found at index " << k;
    }

    return 0;
}
