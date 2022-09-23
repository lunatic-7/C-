#include <iostream>

using namespace std;

int main()
{
    cout << "Hey I'm\n";  // We can skip endl, but to get new line we then need to use \n
    cout << "Wasif Nadeem" << endl;   

    string temp = "Hello World";
                // 012345678910 
    cout << temp << endl;
    cout << temp.length() << endl;  // get length of string
    cout << temp[0] << endl;  // get 1st char of string

    temp[0] = 'B'; // changing specific character of a string
    cout << temp << endl;

    cout << temp.find("World", 4) << endl;  // 0 means start searching from index 0, it will return the index from where World starts
    cout << temp.find("el") << endl;

    cout << temp.substr(7, 3) << endl; // It means start from 7th index and take 3 characters from there.

    return 0;
}