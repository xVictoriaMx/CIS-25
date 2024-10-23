#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isValidCustomerNumber(const string& customerNumber) {
    if (customerNumber.length() != 6) {
        return false;
    }
    if (!isalpha(customerNumber[0]) || !isalpha(customerNumber[1])) {
        return false;
    }

    for (int i = 2; i < 6; ++i) {
        if (!isdigit(customerNumber[i])) {
            return false;
        }
    }
    return true;
}

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
