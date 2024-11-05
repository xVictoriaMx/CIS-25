#ifndef BOOKSTORE_H
#define BOOKSTORE_H

#include <string>
#include <vector>
#include "Book.h"

using namespace book;
using namespace std;

namespace bookStore {
    struct Bookstore {
        string name;
        string address;
        vector<Book> inventory;

        void addBook(const Book& book);
        void addBookInput();
        void borrowBook(const string& title, const string& author, const string& borrower);
        void returnBook(const string& title, const string& author, const string& borrower);
        void findBook(const string& title, const string& author) const;
        void displayInventory() const;
    };

}

#endif  
