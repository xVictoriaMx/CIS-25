#ifndef NAMEUTILS_HPP
#define NAMEUTILS_HPP

#include <string>
#include <utility>

using namespace std; 

namespace NameUtils {
    pair<string, string> extractFirstAndLastName(const string& fullName);
}

#endif