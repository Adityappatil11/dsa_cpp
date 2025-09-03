#include<iostream>
using namespace std;

void countbitflip(int &start,int &end){
    int mask = start ^ end;
    int ans =0;
    while(mask){
        ans += mask & 1;
        mask = mask>>1;
    }
    cout<<"mim no of bit flips requries are : "<<ans<<"\n";
}

int main()
{
    int start,end;
    cout<<"Enter Start and end numbers : ";
    cin>>start>>end;
    countbitflip(start,end);
 return 0;
}