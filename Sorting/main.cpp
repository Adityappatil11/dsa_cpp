#include<iostream>
#include "selectionsort.h"
#include "bubblesort.h"
#include "mergesort.h"

using namespace std;
int main()
{
    int n =10;
    int arr[10] = {45,7,1,9,2,3,6,8,4,5};
    vector<int> vec = {10,9,8,7,6,5,4,3,2,1};

    mergesort(vec,0,n-1);

    cout<<"Sorted arr: ";
    for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }
    cout<<"\n";
    return 0;
}