#include "GradeAnalysis.hpp"
#include <iostream>
#include <algorithm>  // For std::max_element and std::min_element

using namespace std;

void GradeAnalysis::inputScores() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    for (int i = 0; i < numStudents; ++i) {
        string name;
        double score;

        cout << "Enter student name: ";
        cin.ignore();  // Clear input buffer before reading the name
        getline(cin, name);

        cout << "Enter score for " << name << ": ";
        while (!(cin >> score) || score < 0 || score > 100) {
            cout << "Invalid score. Enter a value between 0 and 100: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        studentNames.push_back(name);
        scores.push_back(score);
    }
}

double GradeAnalysis::calculateAverage() const {
    double sum = 0;
    for (double score : scores) {
        sum += score;
    }
    return scores.empty() ? 0 : sum / scores.size();
}

double GradeAnalysis::getHighestScore() const {
    return *max_element(scores.begin(), scores.end());
}

double GradeAnalysis::getLowestScore() const {
    return *min_element(scores.begin(), scores.end());
}

std::vector<std::string> GradeAnalysis::getAboveAverageStudents() const {
    double average = calculateAverage();
    vector<string> aboveAverageStudents;

    for (size_t i = 0; i < scores.size(); ++i) {
        if (scores[i] > average) {
            aboveAverageStudents.push_back(studentNames[i]);
        }
    }
    return aboveAverageStudents;
}

void GradeAnalysis::compareScores() const {
    cout << "\nComparison of Students' Scores:\n";
    for (size_t i = 0; i < scores.size(); ++i) {
        for (size_t j = i + 1; j < scores.size(); ++j) {
            cout << studentNames[i] << " (" << scores[i] << ") vs "
                 << studentNames[j] << " (" << scores[j] << ")\n";
        }
    }
}

void GradeAnalysis::displayResults() const {
    double average = calculateAverage();
    double highest = getHighestScore();
    double lowest = getLowestScore();

    cout << "\n----- Grade Analysis Results -----\n";
    cout << "Class Average: " << average << "\n";
    cout << "Highest Score: " << highest << "\n";
    cout << "Lowest Score: " << lowest << "\n";

    cout << "Students with above-average scores:\n";
    for (size_t i = 0; i < scores.size(); ++i) {
        if (scores[i] > average) {
            cout << studentNames[i] << ": " << scores[i] << "\n";
        }
    }

    // Compare scores between students
    compareScores();
}