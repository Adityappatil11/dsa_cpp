#include <iostream>
using namespace std;

void countsetbits(int &num)
{ // brute force
    int ans = 0;
    int temp = num;
    while (temp)
    {
        ans += temp & 1;  // temp%2;
        temp = temp >> 1; // temp/2
    }
    cout << "number of set bits is : " << ans << "\n";
}

void countsetbits1(int &num)
{
    // iteratively setting rightmost bit to zero and checking
    int ans = 0;
    int temp = num;
    while (temp)
    {
        int mask = temp - 1;
        temp = temp & mask;
        ans++;
    }
    cout << "number of set bits is : " << ans << "\n";
}

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    countsetbits(num);
    countsetbits1(num);
    return 0;
}