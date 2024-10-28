#include "../header/Address.hpp"
#include <iostream>

using namespace std;

namespace CustomerAddress {
    void Address::display() const {
        cout << "Address:" << endl;
        cout << "  Street: " << street << endl;
        cout << "  City: " << city << endl;
        cout << "  Zip Code: " << zipCode << endl;
    }
}