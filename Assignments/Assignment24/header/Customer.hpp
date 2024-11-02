#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP

#include <string>

using namespace std;

namespace CustomerDetails {
    struct Customer {
        int id;
        string name;
        string email;

        void display() const;
    };
}

#endif
