#include "Point.h"

using namespace std;

namespace Geometry {

    bool Point::operator==(const Point& other) const {
        return (x == other.x && y == other.y);
    }

    ostream& operator<<(ostream& os, const Point& point) {
        os << "(" << point.x << ", " << point.y << ")";
        return os;
    }

} 
