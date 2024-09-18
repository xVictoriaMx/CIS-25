#include <iostream>

using namespace std;

int main() {
    unsigned int num;
    
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num == 0) {
        cout << "Binary: 0" << endl;
        return 0;
    }

    std::string binary = "";  

    while (num > 0) {
        binary = (num % 2 == 0 ? "0" : "1") + binary; 
        num /= 2;  
    }

    cout << "Binary: " << binary << endl;

    return 0;
}
