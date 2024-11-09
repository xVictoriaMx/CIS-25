#include "Grades.hpp"
#include <iostream>

using namespace std;

void inputGrades(string names[], double grades[], int numStudents) {
    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter student " << i + 1 << " name: ";
        cin >> names[i];
        cout << "Enter grade for " << names[i] << ": ";
        cin >> grades[i];
    }
}

double calculateAverage(const double grades[], int numStudents) {
    double sum = 0.0;
    for (int i = 0; i < numStudents; ++i) {
        sum += grades[i];
    }
    return sum / numStudents;
}

double findMaximum(const double grades[], int numStudents) {
    double maxGrade = grades[0];
    for (int i = 1; i < numStudents; ++i) {
        if (grades[i] > maxGrade) {
            maxGrade = grades[i];
        }
    }
    return maxGrade;
}

double findMinimum(const double grades[], int numStudents) {
    double minGrade = grades[0];
    for (int i = 1; i < numStudents; ++i) {
        if (grades[i] < minGrade) {
            minGrade = grades[i];
        }
    }
    return minGrade;
}

void compareGrades(const double grades[], int numStudents, double average) {
    cout << "\nGrade comparison to average (" << average << "):\n";
    for (int i = 0; i < numStudents; ++i) {
        if (grades[i] > average) {
            cout << "Student " << i + 1 << " is above average with grade: " << grades[i] << endl;
        } else if (grades[i] < average) {
            cout << "Student " << i + 1 << " is below average with grade: " << grades[i] << endl;
        } else {
            cout << "Student " << i + 1 << " has an average grade: " << grades[i] << endl;
        }
    }
}

void displayAboveAverage(const string names[], const double grades[], int numStudents, double average) {
    cout << "\nStudents who scored above the average (" << average << "):\n";
    for (int i = 0; i < numStudents; ++i) {
        if (grades[i] > average) {
            cout << names[i] << " with grade " << grades[i] << endl;
        }
    }
}
