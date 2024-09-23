#include <iostream>

using namespace std;

int main() {
    int rows;

    cout << "How many rows would you like your triangle to have: "<<endl;

    cin >> rows;

    for (int x =1; x<=rows; x++) {
        for (int y = 1; y<=x; y++)
            cout << "*";
        cout << endl;
    }
    return 0;
}