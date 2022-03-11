 
#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>& v, int l, int r){    
    int pi = 0;
    for(int i=l; i < r; i++){
        if(v[i] <= v[r]){
            swap(v[i],v[pi]);
            pi++;
        }
    }
    swap(v[pi], v[r]);
    return pi;
}

void quickSort(vector<int>& v, int l, int r)
{
    if(l<r){
        int pivotIndex = partition(v, l, r);
        quickSort(v, l, pivotIndex - 1);
        quickSort(v, pivotIndex + 1, r);
    }
}

void solve(vector<int>& v)
{
   int l = 0;
   int r = v.size() - 1;
   quickSort(v, l, r);

    for(auto x:v){
        cout << x << " ";
    }

}

void testCases(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(5);
    //cout << "1";
    solve(v);
}

int main()
{
    testCases();
}












