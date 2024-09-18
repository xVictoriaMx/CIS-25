#include <iostream>

using namespace std;

int main() {
    int numTemps;

    cout << "How many temperatures would you like to input? ";
    cin >> numTemps;

    double temperatures[numTemps]; 

    for (int i = 0; i < numTemps; ++i) {
        cout << "Enter temperature " << i + 1 << ": ";
        cin >> temperatures[i];
    }

    double sum = 0;
    for (int i = 0; i < numTemps; ++i) {
        sum += temperatures[i];
    }

    double average = sum / numTemps;

    cout << "The average temperature is: " << average << std::endl;

    return 0;
}
