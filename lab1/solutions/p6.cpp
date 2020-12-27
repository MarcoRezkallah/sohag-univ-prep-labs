#include <iostream>
#include <math.h>

using namespace std;

/*

Heron's formula

s = (a+b+c)/2
area = sqrt(s*(s-a)*(s-b)*(s-c))

*/

int main()
{
    float a, b, c, s, area;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << "area = " << area << endl;

    return 0;
}