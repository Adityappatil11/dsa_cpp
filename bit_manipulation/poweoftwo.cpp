#include <iostream>
using namespace std;

void checkpow2(int &num)
{
    int mask = num - 1;
    int ans = num & mask;
    if (ans)
        cout << "Not a power of 2" << "\n";
    else
        cout << "power of 2" << "\n";
}

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    checkpow2(num);
    return 0;
}