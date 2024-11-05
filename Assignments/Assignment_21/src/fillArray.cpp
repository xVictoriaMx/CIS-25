#include <iostream>
#include <memory> 

using namespace std;

namespace Fill {
    void fillArray(unique_ptr<int[]>& arr, int size) {
        for (int i = 0; i < size; i++) {
            cout << "Enter element " << i + 1 << ": ";
            cin >> arr[i];
        }
    }
}