#include <iostream>
using namespace std;

int main()
{

    int len;

    cout << "how many numbers? ";
    cin >> len;
    
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        int num = 0;
        cout << "enter a number: ";
        cin >> num;
        sum += num;
    }

    float avg = sum / (len*1.0);
    cout << "the average is: " << avg << endl;
    return 0;
}