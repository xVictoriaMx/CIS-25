#include <iostream>

using namespace std;

int main() {
    int a = 5, b = 10;

    int* p1;
    int* p2;

    p1 = &a; 
    p2 = &b; 

    cout << "\nBefore." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    *p1 = *p1 + *p2; 
    *p2 = *p1 - *p2; 
    *p1 = *p1 - *p2; 

    cout << "\nAfter." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
