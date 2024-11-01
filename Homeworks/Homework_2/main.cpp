#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Book {
    string title;
    string author;
    string isbn;
    int quantity;
    vector<string> borrowers;

    bool operator==(const Book& other) const {
        return (title == other.title && author == other.author);
    }
};

struct Bookstore {
    string name;
    string address;
    vector<Book> inventory;

    void addBook(const Book& book) {
        for (Book& b : inventory) {
            if (b == book) {  
                b.quantity += book.quantity;
                cout << "Book quantity updated successfully.\n";
                return;
            }
        }
        inventory.push_back(book);
        cout << "Book added successfully.\n";
    }

    void addBookInput() {
        Book book;
        cout << "Enter book title: ";
        getline(cin, book.title);
        cout << "Enter book author: ";
        getline(cin, book.author);
        cout << "Enter book ISBN: ";
        getline(cin, book.isbn);
        cout << "Enter quantity: ";
        cin >> book.quantity;
        cin.ignore();  
        
        addBook(book); 
    }

    void borrowBook(const string& title, const string& author, const string& borrower) {
        for (Book& b : inventory) {
            if (b.title == title && b.author == author) {
                if (b.quantity > 0) {
                    b.quantity--;  
                    b.borrowers.push_back(borrower);
                    cout << borrower << " borrowed " << title << " by " << author << ".\n";
                } else {
                    cout << "Sorry, all copies of " << title << " are currently borrowed.\n";
                }
                return;
            }
        }
        cout << "Book not found in the inventory.\n";
    }

    void returnBook(const string& title, const string& author, const string& borrower) {
        for (Book& b : inventory) {
            if (b.title == title && b.author == author) {
                bool borrowerFound = false;
                
                for (size_t i = 0; i < b.borrowers.size(); ++i) {
                    if (b.borrowers[i] == borrower) {
                        b.borrowers.erase(b.borrowers.begin() + i); 
                        b.quantity++;  
                        borrowerFound = true;
                        cout << borrower << " returned " << title << " by " << author << ".\n";
                        break;
                    }
                }
                
                if (!borrowerFound) {
                    cout << borrower << " did not borrow " << title << ".\n";
                }
                return;
            }
        }
        cout << "Book not found in the inventory.\n";
    }

    void findBook(const string& title, const string& author) const {
        for (const Book& b : inventory) {
            if (b.title == title && b.author == author) {
                cout << "Book found:\n";
                cout << "Title: " << b.title << "\nAuthor: " << b.author
                     << "\nISBN: " << b.isbn << "\nQuantity: " << b.quantity << "\n";
                if (!b.borrowers.empty()) {
                    cout << "Borrowed by:\n";
                    for (const string& borrower : b.borrowers) {
                        cout << "- " << borrower << "\n";
                    }
                }
                return;
            }
        }
        cout << "Book not found in the inventory.\n";
    }

    void displayInventory() const {
        cout << "Inventory of " << name << ":\n";
        for (const Book& b : inventory) {
            cout << "Title: " << b.title << ", Author: " << b.author
                 << ", ISBN: " << b.isbn << ", Quantity: " << b.quantity;
            if (!b.borrowers.empty()) {
                cout << ", Borrowed by: ";
                for (const string& borrower : b.borrowers) {
                    cout << borrower << " ";
                }
            }
            cout << "\n";
        }
    }
};

int main() {
    Bookstore bookstore{"The Local Bookstore", "123 Main Street"};

    bookstore.addBook({"The Great Gatsby", "F. Scott Fitzgerald", "9780743273565", 5});
    bookstore.addBook({"To Kill a Mockingbird", "Harper Lee", "9780061120084", 3});

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
