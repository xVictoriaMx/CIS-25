#include "GradeAnalysis.hpp"
#include <iostream>

using namespace std;

int main() {
    GradeAnalysis gradeAnalysis;
    int choice;

    do {
        cout << "\n===== Grade Analysis Program =====\n";
        cout << "1. Input Student Scores\n";
        cout << "2. Display Grade Analysis Results\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                gradeAnalysis.inputScores();
                break;
            case 2:
                gradeAnalysis.displayResults();
                break;
            case 3:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 3);

    return 0;
}