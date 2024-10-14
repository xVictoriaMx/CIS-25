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
    cout << endl;

    delete[] arr;

    return 0;

}