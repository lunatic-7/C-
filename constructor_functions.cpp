#include <iostream>

using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;
    
    // CONSTRUCTORS
    Book() {
        cout << "Creating a book" << endl;
    }

    Book(string aTitle, string aAuthor, int aPages) {
        title = aTitle;
        author = aAuthor;
        pages = aPages;
    }
};

int main()
{   

    // Older Method
    Book book1;
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 500;

    // Creating using constructor function
    Book book2("Lord of the rings", "Tolkein", 700);

    cout << book1.title << endl;
    cout << book2.pages << endl;
    return 0;
}