#include <iostream>

using namespace std;

int main()
{
    int n, factorial = 1;

    cout << "n = ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    cout << "factorial = " << factorial << endl;

    return 0;
}