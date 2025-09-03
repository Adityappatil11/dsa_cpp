#ifndef MERGESORT_H
#define MERGESORT_H

#include <vector>
using namespace std;                                       

void merge(vector<int> &arr,int low, int mid,int high);
void mergesort(vector<int> &arr,int low,int high);

#endif // MERGESORT_H