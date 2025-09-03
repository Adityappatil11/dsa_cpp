#include <bits/stdc++.h>
using namespace std;

void clearibit(int &num, int &i)
{
    int mask = ~(1 << i);
    int ans = num & mask;
    cout << "the updated ans is : " << ans << "\n";
}

int main()
{
    int num, i;
    cout << "enter a number and the bit to be cleared :";
    cin >> num >> i;
    clearibit(num, i);
    return 0;
}