#include <iostream>
using namespace std;
/*
Write a program that determines a student’s grade. The
program will read three types of scores (quiz, mid-term,
and final scores) and determine the grade based on the
following rules:
    -if the average score = 90% (grade=A)
    -if the average score >= 70% and <90% (grade=B)
    -if the average score >= 50% and <70% (grade=C)
    -if the average score < 50% (grade=F)
*/

int main()
{
    float quiz, midterm, final;
    cout << "quiz score (normalized to 100): ";
    cin >> quiz;
    cout << "midterm score (normalized to 100): ";
    cin >> midterm;
    cout << "final score (normalized to 100): ";
    cin >> final;

    float avg = (quiz + midterm + final) / 300.0;

    if (avg >= 0.9)
    {
        cout << "grade: A\n";
    }
    else if (avg >= 0.7)
    {
        cout << "grade: B\n";
    }
    else if (avg >= 0.5)
    {
        cout << "grade: C\n";
    }
    else
    {
        cout << "grade: F\n";
    }

    return 0;
}