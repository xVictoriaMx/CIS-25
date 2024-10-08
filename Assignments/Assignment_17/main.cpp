#include <iostream>
#include "includes/search.hpp"

using namespace std;

int main() {
    int arr[] = { 2, 3, 4, 10, 40};
    int x=10;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = search(arr, n, x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}