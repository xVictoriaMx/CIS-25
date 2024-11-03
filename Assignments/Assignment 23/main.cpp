#include <iostream>
#include <string>
#include <cctype>
#include "CustomerValidator.h"

using namespace std;
using namespace CustomerValidation;

int main() {
    string customerNumber;
    cout << "Enter customer number: ";
    cin >> customerNumber;

    if (isValidCustomerNumber(customerNumber)) {
        cout << "Valid customer number." << endl;
    }
    else {
        cout << "Invalid customer number." << endl;
    }
    return 0;
}