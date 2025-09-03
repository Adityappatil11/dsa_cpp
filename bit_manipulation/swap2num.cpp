#include <bits/stdc++.h>
using namespace std;

void swapnumbers(int &a, int &b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "a = " << a << ",b = " << b << "\n";
    swapnumbers(a, b);
    cout << "a = " << a << ",b = " << b << "\n";
    return 0;
}