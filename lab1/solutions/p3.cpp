#include <iostream>
using namespace std;

int main()
{
    int x, y, tmp;

    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;

    cout << "swapping ....\n";

    tmp = x;
    x = y;
    y = tmp;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}