// time complexity O(n)
// space complexity O(1)

#include <bits/stdc++.h>
using namespace std;
#include <string>

void binary2decimal(string binary)
{
    int len = binary.length(), p2 = 1, num = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        if (binary[i] == '1')
            num += p2;
        p2 *= 2;
    }
    cout << num << "\n";
}

int main()
{
    string binary;
    cout << "enter a binary number: ";
    cin >> binary;
    binary2decimal(binary);
    return 0;
}