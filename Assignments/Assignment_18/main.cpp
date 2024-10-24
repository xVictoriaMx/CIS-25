#include <iostream>
using namespace std;
#include "bubbleSort.hpp";

int main() {
    const int SIZE = 5;
    int arr[SIZE] = {8, 2, 4, 1, 3}; 
    cout << "Initial array: ";
    for (int step = 0; step < SIZE; step++) {
        cout << arr[step] << " ";
    }
    cout << endl;

    bubbleSort(arr, SIZE);

    cout << "Sorted array: ";
    for (int step = 0; step < SIZE; step++) {
        cout << arr[step] << " ";
    }
    cout << endl;

    return 0;
}