#include <iostream>
using namespace std;

int gcd(int a, int b);

int main()
{
    int gcdResult;

    cout << "Test GCD Algorithm" << endl;

    gcdResult = gcd(4, 6);

    cout << gcdResult;
    return 0;
}

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    if (a == 0)
    {
        return b;
    }
    return gcd(b, a % b);
}