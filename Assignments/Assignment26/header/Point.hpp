#ifndef POINT_H
#define POINT_H

#include <iostream>

using namespace std;

namespace Geometry {

    struct Point {
        int x, y;

        bool operator==(const Point& other) const;
    };

    ostream& operator<<(ostream& os, const Point& point);

} 

#endif
