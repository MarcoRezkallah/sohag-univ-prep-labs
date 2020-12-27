#include <iostream>
using namespace std;

int main()
{
    int sum = 0, count = 0;

    for (int i = 105; i <= 500; i += 7)
    {
        sum += i;
        count++;
    }

    cout << "sum = " << sum << endl
         << "count = " << count << endl;

    return 0;
}