#include <iostream>

using namespace std;

int main() {
    int value1, value2, largerValue;

    cout << "Enter a value: ";
    cin >> value1;

    cout << "Enter another value: ";
    cin >> value2;

/*    if (value1 > value2) {
        largerValue = value1;
    } else {
        largerValue = value2;
    }*/
   
    largerValue = (value1 > value2) ? value1 : value2;

    cout << "The larger value is: " << largerValue << endl;

    return 0;
} 

