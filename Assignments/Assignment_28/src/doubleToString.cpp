#include "doubleToString.h"

using namespace std;

namespace Convert {
    string doubleToString(double number, int precision) {
        stringstream stream;
        stream << fixed << setprecision(precision) << number;
        return stream.str();
    }
}