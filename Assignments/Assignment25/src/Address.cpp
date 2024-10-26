#include "../include/Address.hpp"
#include <iostream>

using namespace std;

void Address::display() const {
    cout << "Address:" << endl;
    cout << "  Street: " << street << endl;
    cout << "  City: " << city << endl;
    cout << "  Zip Code: " << zipCode << endl;
}
