#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>
using namespace std;

int main()
{
    //variables
    string name;
    double syllabus, quiz1, quiz2, exam, practice, finalScore, avg;

    // questions 
    cout << "Enter Student's name: ";
    getline(cin, name);
    cout << endl;
    cout << "Enter Syllabus Quiz Score ranging from 0 to 100: ";
    cin >> syllabus;
    cout << endl;
    cout << "Enter Chapter 1 Quiz Score ranging from 0 to 100: ";
    cin >> quiz1;
    cout << endl;
    cout << "Enter Chapter 2 Quiz Score ranging from 0 to 100: ";
    cin >> quiz2;
    cout << endl;
    cout << "Enter Exam Score ranging from 0 to 100: ";
    cin >> exam;
    cout << endl;
    cout << "Enter Practice Score ranging from 0 to 100: ";
    cin >> practice;
    cout << endl;
    finalScore = (syllabus + quiz1 + quiz2 + exam + practice);
    avg = finalScore / 5;

    // story
    cout << name << ": ";
    cout << "Final Score: " << finalScore;
    cout << " Average Score: " << fixed << setprecision(2) << avg;


    return 0;
}