#include <iostream>
#include "DateTime.hpp"


using namespace std; 

int main() {
    DateTime dt(2024, 12, 13, 9, 5, 7);

    cout << dt.format("YYYY-MM-DD") << endl;       
    cout << dt.format("HH:mm:SS") << endl;         
    cout << dt.format("Today is YYYY-MM-DD HH:mm") << endl;

    return 0;
}
