#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "How many numbers? ";
    cin >> n;

    int zeros = 0, positive = 0, negative = 0;
    int number;

    for (int i = 1; i <= n; i++)
    {
        cout << "n" << i << " = ";
        cin >> number;
        if (number > 0)
        {
            positive++;
        }
        else if (number < 0)
        {
            negative++;
        }
        else
        {
            zeros++;
        }
    }
    cout << "positive numbers = " << positive << endl;
    cout << "negative numbers = " << negative << endl;
    cout << "zeros numbers = " << zeros << endl;

    return 0;
}