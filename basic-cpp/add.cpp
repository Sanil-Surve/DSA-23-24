#include <iostream>
using namespace std;

int add(int a, int b);

int main()
{
    int a = 20;
    int b = 30;
    int c = add(a, b);
    cout << c;
    return 0;
}

int add(int a, int b)
{
    return a * b;
}