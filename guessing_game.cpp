#include <iostream>

using namespace std;

int main()
{
    int secretNum = 7;
    int guess;
    int limit = 0;
    bool outOfGuesses = false;

    while (guess != secretNum && !outOfGuesses)
    {
        if (limit < 3)
        {
            cout << "Enter guess: ";
            cin >> guess;
            limit++;
        }
        else
        {
            outOfGuesses = true;
        }
        
    }

    if (outOfGuesses)
    {
        cout << "You Lost!";
    }
    else
    {
        cout << "You Won!";
    }

    return 0;
}