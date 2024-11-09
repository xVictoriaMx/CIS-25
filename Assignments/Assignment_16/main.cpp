#include "Grades.hpp"
#include <iostream>
#include <string>

using namespace std;

int main() {
    const int maxStudents = 100;
    string studentNames[maxStudents];
    double studentGrades[maxStudents];
    int numStudents;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    inputGrades(studentNames, studentGrades, numStudents);

    double average = calculateAverage(studentGrades, numStudents);
    double maxGrade = findMaximum(studentGrades, numStudents);
    double minGrade = findMinimum(studentGrades, numStudents);

    cout << "\nAverage Grade: " << average << endl;
    cout << "Maximum Grade: " << maxGrade << endl;
    cout << "Minimum Grade: " << minGrade << endl;

    compareGrades(studentGrades, numStudents, average);
    displayAboveAverage(studentNames, studentGrades, numStudents, average);

    return 0;
}
