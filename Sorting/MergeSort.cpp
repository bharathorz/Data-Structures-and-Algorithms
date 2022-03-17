 
#include<bits/stdc++.h>
using namespace std;



void mergeSort(vector<int>& v, int l, int r, int n){

    while(l < r){
        int mid = l + (r-l)/2;
        mergeSort(v, l, mid);
        mergeSort(v, mid+1, n-1);
        merge(v, l, mid+1, r);
    }
}

int main()
{
    testCases();
}