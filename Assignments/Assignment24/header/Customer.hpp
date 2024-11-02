#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP

#include <string>

using namespace std;

struct Customer {
    int id;
    string name;
    string email;

    void display() const;
};

#endif
