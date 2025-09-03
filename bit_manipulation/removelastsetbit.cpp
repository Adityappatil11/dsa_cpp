#include <iostream>
using namespace std;

void removelastbit(int &num){
    int mask = num-1;
    int ans = num & mask;
    cout<<"the ans is : "<<ans<<"\n";
}

int main()
{
    int num;
    cout<<"enter a number to remove its last bit : ";
    cin>>num;
    removelastbit(num);
    return 0;
}