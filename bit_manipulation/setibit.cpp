#include <bits/stdc++.h>
using namespace std;

void setibit1(int &num, int &posn)
{
    cout << "the number is " << num << "\n";
    int mask = 1 << posn;
    num = num | mask;
    cout << "the number is " << num << "\n";
}

int main()
{
    int num, i;
    cout << "enter number and bit position : ";
    cin >> num >> i;
    setibit1(num, i);
    return 0;
}