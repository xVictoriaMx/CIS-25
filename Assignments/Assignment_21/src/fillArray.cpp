#include "fillArray.h"
#include <iostream>

using namespace std;

namespace Fill {
    void fillArray(std::unique_ptr<int[]>& arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];
    }
}
}