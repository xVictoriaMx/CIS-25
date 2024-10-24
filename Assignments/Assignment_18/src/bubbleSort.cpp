#include <iostream>
#include "bubbleSort.hpp"


using namespace std;

void bubbleSort(int arr[], int size) {
    for (int step = 0; step < size - 1; step++) {
        for (int i = 0; i < size - step - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
            cout << "Step " << step + 1 << ", swap " << i + 1 << ": ";
            for (int k = 0; k < size; k++) {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}