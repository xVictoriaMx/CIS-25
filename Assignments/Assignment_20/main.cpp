#include <iostream>

using namespace std;

int main() {
    int Arrsize, i;
    cout << "Enter the size of your array: ";
    cin >> Arrsize;

    int* arr = new int[Arrsize];

    while (i < Arrsize) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
        i++;
    }

    cout << "Elements of the array are: ";
    for (int j = 0; j <Arrsize; j++) {
        cout << arr[j] << " ";
    }
    int sum = 0;
    for (int k = 0; k < Arrsize; k++) {
        sum += arr[k];
    }
    cout << "Sum of the array elements: " << sum << endl;

    delete[] arr;

    return 0;

}