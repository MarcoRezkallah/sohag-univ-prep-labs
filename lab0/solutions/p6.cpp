#include <iostream>
using namespace std;
/*

Write a program to raise any number X to power N.
(Note: without using pow() function)

*/

int main()
{

    float x;
    int n;

    cout << "X (float): ";
    cin >> x;

    cout << "N (int): ";
    cin >> n;

    float result = 1;
    for (int i = 0; i < n; i++)
    {
        result *= x;
    }

    cout << "result: " << result << endl;

    return 0;
}