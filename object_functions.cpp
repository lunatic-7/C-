#include <iostream>

using namespace std;

class Student {
    public:
        string name;
        string stream;
        double gpa;

    Student(string aName, string aStream, double aGpa) {
        name = aName;
        stream = aStream;
        gpa = aGpa;
    }

    // Object functions
    bool hasHonours() {
        if (gpa >= 3.5)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Student student1("Wasif", "CSE", 2.7);  
    Student student2("Sagar", "English", 3.7);

    cout << student1.hasHonours() << endl;  
    cout << student2.hasHonours() << endl;  
    return 0;
}