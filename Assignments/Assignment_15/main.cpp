#include <iostream>

using namespace std;

int main() {
    int rows;

    cout << "How many rows would you like your triangle to have: "<<endl;

    cin >> rows;

    for (int i =1; i<=rows; i++) {
        for (int j = 1; j<=i; j++)
            cout << "*";
        cout << endl;
    }
    return 0;
}