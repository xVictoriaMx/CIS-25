#include <iostream>

using namespace std;

int main() {
    string names[3];

    cout << "Please enter three names below\n";
    for (int i = 0; i <3; i++) {
        cout << "Enter name " << i + 1 << ": ";
        getline(cin, names[i]);
    }

    cout << "\nThe first name you entered was: " << names[0] << endl;

    return 0;
}