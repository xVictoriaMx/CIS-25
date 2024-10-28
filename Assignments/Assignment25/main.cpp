#include <iostream>
#include "header/Customer.hpp"

using namespace std;
using namespace CustomerAddress;
using namespace CustomerDetails;

int main() {
    Customer customer;

    cout << "Enter Customer ID: ";
    cin >> customer.id;
    cin.ignore();

    cout << "Enter Customer Name: ";
    getline(cin, customer.name);

    cout << "Enter Customer Email: ";
    getline(cin, customer.email);

    cout << "Enter Street Address: ";
    getline(cin, customer.address.street);

    cout << "Enter City: ";
    getline(cin, customer.address.city);

    cout << "Enter Zip Code: ";
    getline(cin, customer.address.zipCode);

    customer.display();

    return 0;
}
