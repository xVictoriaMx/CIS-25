#include <iostream>
#include "sumArray.h"

using namespace std;

namespace Sum {
    int sumArray(const unique_ptr<int[]>& arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}
}