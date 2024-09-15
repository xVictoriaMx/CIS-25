#include <iostream>

using namespace std;

// Commission calculator 
int main() {
    int sales;
    double commissionRate, commission;

    cout << "What were your sales: $";
    cin >> sales;

    if (sales < 10000) {
        commissionRate = 0.1;
    } else if (sales >= 10000 && sales <15000) {
        commissionRate = 0.15;
    } 
    else {
        commissionRate = 0.2;
    }
    commission = sales*commissionRate;
    cout << "\nThe commission rate will be " << commissionRate*100 << "%";
    cout << "\nTherefore your commission is $" << commission;
    

    return 0;
}