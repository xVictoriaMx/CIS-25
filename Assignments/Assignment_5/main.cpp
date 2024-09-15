#include <iostream>
#include <limits>   

using namespace std;

// Size and Range of data types

int main() {
    cout << "Size of short: " << sizeof(short) << " byte" << endl;
    cout << "Range of short: " << SHRT_MIN << " to " << SHRT_MAX << endl;

    cout << "\nSize of double: " << sizeof(double) << " byte" << endl;
    cout << "Range of double: " << numeric_limits<double>::min() << " to " << numeric_limits<double>::max() << endl;

    cout << "\nSize of int: " << sizeof(int) << " byte" << endl;
    cout << "Range of int: " << INT_MIN << " to " << INT_MAX << endl;

    cout << "\nSize of float: " << sizeof(float) << " byte" << endl;
    cout << "Range of float: " << numeric_limits<float>::min() << " to " << numeric_limits<float>::max() << endl;

    cout << "\nSize of char: " << sizeof(char) << " byte" << endl;
    cout << "Range of char: " << CHAR_MIN << " to " << CHAR_MAX << endl;

    cout << "\nSize of unsigned int: " << sizeof(unsigned int) << " byte" << endl;
    cout << "Range of unsigned int: 0 to " << UINT_MAX << endl;

    return 0;
}