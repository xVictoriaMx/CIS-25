#include <iostream>
#include "Point.h"

using namespace std;
using namespace Geometry;

int main() {
    Point p1{ 3, 4 };
    Point p2{ 3, 4 };
    Point p3{ 5, 6 };

    if (p1 == p2) {
        cout << "p1 is equal to p2" << endl;
    }
    else {
        cout << "p1 is not equal to p2" << endl;
    }

    if (p1 == p3) {
        cout << "p1 is equal to p3" << endl;
    }
    else {
        cout << "p1 is not equal to p3" << endl;
    }

    cout << "Point p1: " << p1 << endl;
    cout << "Point p3: " << p3 << endl;

    return 0;
}