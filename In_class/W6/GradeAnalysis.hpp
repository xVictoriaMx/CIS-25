#ifndef GRADE_ANALYSIS_HPP
#define GRADE_ANALYSIS_HPP

#include <vector>
#include <string>

class GradeAnalysis {
public:
    // Method to allow manual input of scores
    void inputScores();

    // Method to calculate and return the average score
    double calculateAverage() const;

    // Method to find the highest score
    double getHighestScore() const;

    // Method to find the lowest score
    double getLowestScore() const;

    // Method to display students with scores above average
    std::vector<std::string> getAboveAverageStudents() const;

    // Method to compare scores between students
    void compareScores() const;

    // Method to display all results (average, highest, lowest, etc.)
    void displayResults() const;

private:
    std::vector<double> scores;  // Vector to store student scores
    std::vector<std::string> studentNames;  // Vector to store student names
};

#endif // GRADE_ANALYSIS_HPP