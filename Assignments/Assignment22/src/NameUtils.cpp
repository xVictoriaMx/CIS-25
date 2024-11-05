#include <iostream>
#include <string>
#include "../header/NameUtils.hpp"

using namespace std;

namespace NameUtils {
    pair<string, string> extractFirstAndLastName(const string& fullName) {
        size_t firstSpacePos = fullName.find(' ');
        if (firstSpacePos == string::npos) {
            return {fullName, ""};
        }

        size_t lastSpacePos = fullName.rfind(' ');

        string firstName = fullName.substr(0, firstSpacePos);

        string lastName = fullName.substr(lastSpacePos + 1);

        return {firstName, lastName};
    }
}
