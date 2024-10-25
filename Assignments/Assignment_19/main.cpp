#include <iostream>

using namespace std;

int main() {
    int number1 = 5, number2 = 10;

    int* pointer1;
    int* pointer2;

    pointer1 = &number1; 
    pointer2 = &number2; 

    cout << "\nBefore." << endl;
    cout << "First Number = " << number1 << ", Second Number = " << number2 << endl;

    *pointer1 = *pointer1 + *pointer2; 
    *pointer2 = *pointer1 - *pointer2; 
    *pointer1 = *pointer1 - *pointer2; 

    cout << "\nAfter." << endl;
    cout << "First Number = " << number1 << ", Second Number = " << number2 << endl;

    return 0;
}
