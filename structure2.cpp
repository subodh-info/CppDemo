#include <iostream>
using namespace std;

struct Book{
    int bookID;
    float bookPrice;
    string bookTitle;
};

int main(){
    struct Book book;
    book.bookID = 1001;
    book.bookPrice = 500;
    book.bookTitle = "Let us C";

    cout << "Book ID : " << book.bookID << endl << "Book Title : " << book.bookTitle << endl << "Book price : " << book.bookPrice << endl;
    return EXIT_SUCCESS;
}