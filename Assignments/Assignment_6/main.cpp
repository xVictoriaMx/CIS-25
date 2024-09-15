#include <iostream>
#include <string>

using namespace std;

int main() {
string street, city, state, zipCode;

cout << "Enter your Street Address: ";
getline(cin, street);

cout << "\nEnter your City Name: ";
getline(cin, city);

cout << "\nEnter your State: ";
getline(cin, state);

cout << "\nEnter your Zip Code: ";
getline(cin, zipCode);

cout << "\nYour Address is:\n";
cout << street << "\n" << city<< ", " << state<< ", "<<zipCode << endl;

return 0;
}