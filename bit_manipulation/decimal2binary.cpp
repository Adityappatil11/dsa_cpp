// time complexity O(log2n)
// space complexity o(log2n)

#include <bits/stdc++.h>
using namespace std;
#include <string>

void convert2binary(int n)
{
    string ans = "";
    while (n != 0)
    {
        if (n % 2 == 1)
            ans.push_back('1');
        else
            ans.push_back('0');
        n /= 2;
    }

    reverse(ans.begin(), ans.end());

    cout << ans << "\n";
}

int main()
{
    int y;
    cout << "enter a number: ";
    cin >> y;
    convert2binary(y);
    return 0;
}