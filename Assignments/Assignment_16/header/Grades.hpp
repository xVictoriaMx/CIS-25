#ifndef GRADES_HPP
#define GRADES_HPP

#include <string>

using namespace std;

void inputGrades(string names[], double grades[], int numStudents);
double calculateAverage(const double grades[], int numStudents);
double findMaximum(const double grades[], int numStudents);
double findMinimum(const double grades[], int numStudents);
void compareGrades(const double grades[], int numStudents, double average);
void displayAboveAverage(const string names[], const double grades[], int numStudents, double average);

#endif 
