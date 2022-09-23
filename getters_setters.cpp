#include <iostream>

using namespace std;

class Movie {
    private:  // Anything in this private cannot be accessed direclty from any other function
        string rating;
    public:
        string name;
        string director;
    
    Movie(string aName, string aDirector, string aRating) {
        name = aName;
        director = aDirector;
        rating = setRating(aRating);
    }

    string setRating(string aRating) {
        if (aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR")
        {
            return aRating;
        }
        return "NR";
    }

    string getRating() {
        return rating;
    }
};

int main()
{
    Movie movie1("Avengers", "Unknown", "PG");
    Movie movie2("Avengers", "Unknown", "Dog");  // Giving arbitrary rating, will return NR
    Movie movie3("Avengers", "Unknown", "PG-13"); 

    cout << movie1.getRating() << endl;
    cout << movie2.getRating() << endl; // will return NR
    cout << movie3.getRating() << endl;
    return 0;
}