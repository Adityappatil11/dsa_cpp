#include <bits/stdc++.h>
using namespace std;

void checkibit1(int &num, int &posn)
{
    int mask = 1 << posn;
    int flag = 0;
    if (num & mask)
    {
        flag = 1;
    }
    cout << "the " << posn << " bit is " << flag << "\n";
}

void checkibit2(int &num, int &posn)
{
    int mask = num >> posn;
    int flag = mask & 1;
    cout << "the " << posn << " bit is " << flag << "\n";
}

int main()
{
    int num, i;
    cout << "enter number and bit position : ";
    cin >> num >> i;
    checkibit1(num, i);
    checkibit2(num, i);
    return 0;
}