#include <iostream>
#include <string>

using namespace std; 

//Check Job eligibility
int main() {
    string citizenship;
    string hasBachelorsDegree;
    int yearsOfExperience = 0;

    cout << "Are you a US citizen? Yes or No: ";
    cin >> citizenship;


    if (citizenship == "yes" || citizenship == "Yes") {
        cout << "Do you have a bachelor's degree? Yes or No: " ;
        cin >> hasBachelorsDegree;

        if (hasBachelorsDegree == "No" || hasBachelorsDegree =="no") {
            cout << "How many years of experience do you have?: ";
            cin >> yearsOfExperience;
        }
        if (hasBachelorsDegree == "Yes" || hasBachelorsDegree == "yes" || yearsOfExperience >= 2) {
            cout << "You are eligible for the job." << endl;
        } else {
            cout << "You are not eligible for the job." << endl;
        }
    } else {
        cout << "You are not eligible for the job." << endl;
    }

    return 0;
}