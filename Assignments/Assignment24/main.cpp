#include <iostream>
#include "header/Customer.hpp"

using namespace std;
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

    customer.display();

    return 0;
}
