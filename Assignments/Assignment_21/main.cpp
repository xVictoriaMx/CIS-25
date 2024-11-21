#include <iostream>
#include <memory>
#include "fillArray.h"
#include "sumArray.h"

using namespace std; 
using namespace Fill;
using namespace Sum;

int main() {
    int Arrsize;

    cout << "Enter the size of your array: ";
    cin >> Arrsize;

    unique_ptr<int[]> arr = make_unique<int[]>(Arrsize);

    fillArray(arr, Arrsize);

    cout << "Elements of the array are: ";
    for (int i = 0; i < Arrsize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Sum of the array elements: " << sumArray(arr, Arrsize) << endl;

    return 0;
}
