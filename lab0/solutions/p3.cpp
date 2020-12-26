#include <iostream>
using namespace std;

int main()
{
    float n1,n2,n3;

    cout << "enter a number: ";
    cin >> n1;
    cout << "enter a number: ";
    cin >> n2;
    cout << "enter a number: ";
    cin >> n3;

    if (n1 >= n2 && n1 >= n3 )
    {
        cout << "the largest number is: " << n1 << endl;
    } else if (n2 > n3)
    {
        cout << "the largest number is: " << n2 << endl;
    } else
    {
        cout << "the largest number is: " << n3 << endl;
    }
    
    
    

    return 0;
}