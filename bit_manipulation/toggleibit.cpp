#include <bits/stdc++.h>
using namespace std;

void toggleibit(int &num, int &i)
{
    int mask = (1 << i);
    int ans = num ^ mask;
    cout << "the toggled ans is : " << ans << "\n";
}

int main()
{
    int num, i;
    cout << "enter a number and the bit to be toggled :";
    cin >> num >> i;
    toggleibit(num, i);
    return 0;
}