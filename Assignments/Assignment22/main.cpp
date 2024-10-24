#include <iostream>
#include <string>
#include "include/NameUtils.hpp"

using namespace std;
using namespace NameUtils;

int main() {
    string fullName;

    cout << "Enter your full name: ";
    getline(cin, fullName);

    auto [firstName, lastName] = extractFirstAndLastName(fullName);

    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;

    return 0;
}
