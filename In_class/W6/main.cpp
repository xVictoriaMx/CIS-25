#include <iostream>

using namespace std;

double increasePrice(double price){
price *= 1.20;
}

int main() {
    double price(100);
    increasePrice(price);
    cout << price<< endl;
    return 0;
}
