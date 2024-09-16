#include <iostream>

using namespace std;

int main() {
    int value;
    unsigned long long factorial = 1.0;

    cout<< "Input a positive number (20! is the limit unfortunately): " << endl;
    cin >> value;

    if (value < 0) {
        cout << "Looks like you selected a negative number, Try a positive one please" << endl;
    } else if (value >20) {
        cout << "The value is too large, it cannot be calculated accurately." << endl;
    } else {
        for( int i = 1; i <= value; ++i) {
            factorial *= i;
        }
        cout << value << "!" << " = " << factorial;
    }

    return 0;
}