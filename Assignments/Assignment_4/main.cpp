#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string courseTitle = "Course";
    string studentTitle = "Student";

    string courses[] = {"C++", "JavaScript"};
    int students[] = {100, 50};

    cout << left << setw(15) << courseTitle;
    cout << right << setw(10) << studentTitle << endl;

    for (int i = 0; i < 2; i++) {
        cout << left << setw(15) << courses[i];
        cout << right << setw(10) << students[i] << endl;
    }

    return 0;
}