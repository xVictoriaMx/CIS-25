#include "Point.hpp"

using namespace std;
using namespace Geometry;

int main() {
	Point coordinate1(3, 4);
    Point coordinate2(1, 2);

    Point coordinate3 = coordinate1 + 5;      
    Point coordinate4 = coordinate1 + coordinate2;   

    coordinate1.display();
    cout << "coordinate 1 + 5 = ";
    coordinate3.display();

    coordinate2.display();
    cout << "coordinate 1 + coordinate 2 = ";
    coordinate4.display();

    return 0;
}
