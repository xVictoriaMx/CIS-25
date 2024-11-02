#include "Customer.hpp"
#include <iostream>

using namespace std;

void Customer::display() const {
    cout << "\nCustomer Details:" << endl;
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Email: " << email << endl;
}
