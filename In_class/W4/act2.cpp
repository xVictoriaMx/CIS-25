#include <iostream>

int main() {
    double r;
    const double pi = 3.1415;
    double circle;

    std::cout<< "input the radius of the cirlce =";
    std::cin>> r;
    circle = pi*r*r;
    std::cout<< "The area of your Circle is " << circle;
    return 0;

}