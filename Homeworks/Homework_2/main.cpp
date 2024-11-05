#include <iostream>
#include <vector>
#include <string>
#include "Bookstore.h"
#include "Book.h"

using namespace std;
using namespace bookStore;
using namespace book;


int main() {
    Bookstore bookstore{ "The Local Bookstore", "123 Main Street" };

    bookstore.addBook({ "The Great Gatsby", "F. Scott Fitzgerald", "9780743273565", 5 });
    bookstore.addBook({ "To Kill a Mockingbird", "Harper Lee", "9780061120084", 3 });

    bookstore.borrowBook("The Great Gatsby", "F. Scott Fitzgerald", "Alice");
    bookstore.borrowBook("The Great Gatsby", "F. Scott Fitzgerald", "Bob");
    bookstore.returnBook("The Great Gatsby", "F. Scott Fitzgerald", "Alice");

    bookstore.findBook("The Great Gatsby", "F. Scott Fitzgerald");

    cout << "\nAdd a new book to the inventory:\n";
    bookstore.addBookInput();

    cout << "\nUpdated Inventory:\n";
    bookstore.displayInventory();

    return 0;
}
