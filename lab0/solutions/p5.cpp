#include <iostream>
using namespace std;
/*
Write a program that takes a positive integer, print ‘T’ if
it is a prime and print ‘F’ otherwise.(Notice: A positive integer n is
said to be "a prime number" if and only if n is greater than 1 and is divisible only
by 1 and n.)
*/

int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;

    bool isPrime = true;

    if (n <= 1)
    {
        cout << "F\n";
        return 0;
    }

    for (int i = n - 1; i > 1; i--)
    {
        if ((n % i) == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
    {
        cout << "T\n";
    }
    else
    {
        cout << "F\n";
    }

    return 0;
}