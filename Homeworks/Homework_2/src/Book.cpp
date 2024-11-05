#include "Book.h"


namespace book {
    bool Book::operator==(const Book& other) const {
        return (title == other.title && author == other.author);
    }
}