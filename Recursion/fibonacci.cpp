#include <iostream>
using namespace std;

long fib(long num); // prototype declaration;

int main() // main method
{
    int sizeSeries, i;
    cout << "Give Size to the Series: ";
    cin >> sizeSeries;

    cout << "Print a Fibonacci series. \n";

    for (i = 0; i < sizeSeries; i++)
    {
        if (i % 5)
        {
            cout << " " << fib(i);
        }
        else
        {
            cout << " " << fib(i);
        }
    }
}

long fib(long num) // function
{
    if (num == 0 || num == 1)
    {
        return num;
    }
    return (fib(num - 1) + fib(num - 2));
}