#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>

using namespace std;

namespace Geometry{
    class Point {
    private:
        int x, y;

    public:
        Point(int x = 0, int y = 0);

        Point operator+(int value) const;

        Point operator+(const Point& other) const;

        void display() const;
    };
}


#endif 
