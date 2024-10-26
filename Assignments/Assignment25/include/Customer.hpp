#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP

#include <string>
#include <iostream>
#include "Address.hpp" 
using namespace std;

struct Customer {
    int id;
    string name;
    string email;
    Address address; 

    void display() const;
};

#endif
