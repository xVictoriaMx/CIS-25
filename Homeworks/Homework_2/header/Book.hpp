#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <vector>

using namespace std;

namespace book {
    struct Book {
        string title;
        string author;
        string isbn;
        int quantity;
        vector<string> borrowers;

        bool operator==(const Book& other) const;  
    };

}
#endif 
