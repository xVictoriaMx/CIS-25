#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include "doubleToString.h"

using namespace std;
using namespace Convert; 

int main() {
    double number;
    int precision;

    cout << "Enter a double value: ";
    cin >> number;

    cout << "Enter the desired precision: ";
    cin >> precision;

    string str = doubleToString(number, precision);
    cout << "Formatted string: " << str << endl;

    return 0;
}
