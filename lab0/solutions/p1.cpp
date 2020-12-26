#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3, n4;
    cout << "enter a number: ";
    cin >> n1;
    cout << "enter a number: ";
    cin >> n2;
    cout << "enter a number: ";
    cin >> n3;
    cout << "enter a number: ";
    cin >> n4;

    float avg = (n1 + n2 + n3 + n4) / 4.0;
    cout << "the average is: " << avg << endl;
    return 0;
}