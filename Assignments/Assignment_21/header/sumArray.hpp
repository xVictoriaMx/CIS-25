#ifndef SUMARRAY_H
#define SUMARRAY_H

#include <memory>

using namespace std;

namespace Sum{
    int sumArray(const unique_ptr<int[]>& arr, int size);
}

#endif 
