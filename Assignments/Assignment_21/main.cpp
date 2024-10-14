#include <iostream>
#include <memory> // For smart pointers

using namespace std;

void fillArray(unique_ptr<int[]>& arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
}

int sumArray(const unique_ptr<int[]>& arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

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
