#ifndef ADDRESS_HPP
#define ADDRESS_HPP

#include <string>
using namespace std;

namespace CustomerAddress {
    struct Address {
        string street;
        string city;
        string zipCode;

        void display() const; 
    };
}

#endif
