#include <iostream>

using namespace std;

string dayNameNo(int dayNo)
{
    string dayName;

    switch (dayNo)
    {
    case 0:
        dayName = "Sunday";
        break;
    case 1:
        dayName = "Monday";
        break;
    case 2:
        dayName = "Tuesday";
        break;
    case 3:
        dayName = "Wednesday";
        break;
    case 4:
        dayName = "Thursday";
        break;
    case 5:
        dayName = "Friday";
        break;
    case 6:
        dayName = "Saturday";
        break;
    default:
        dayName = "Invalid day number";
    }
    return dayName;
}

int main()
{
    int dayNo;
    cout << "Enter no of the day: ";
    cin >> dayNo;
    cout << dayNameNo(dayNo);
    return 0;
}