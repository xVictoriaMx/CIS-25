#include "Point.hpp"

using namespace std;

namespace Geometry {
    Point::Point(int x, int y) : x(x), y(y) {}

    Point Point::operator+(int value) const {
        return Point(x + value, y + value);
    }

    Point Point::operator+(const Point& other) const {
        return Point(x + other.x, y + other.y);
    }

    void Point::display() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
}