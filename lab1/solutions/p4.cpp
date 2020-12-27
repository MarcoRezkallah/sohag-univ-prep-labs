#include <iostream>
using namespace std;

int main()
{
    int len, n;

    cout << "how many numbers? ";
    cin >> len;

    int greatest = 0;

    for (int i = 1; i <= len; i++)
    {
        cout << "n" << i << " = ";
        cin >> n;
        if (n > greatest)
        {
            greatest = n;
        }
    }
    cout << "the greatest number is " << greatest << endl;
    return 0;
}