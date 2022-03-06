 
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void fast()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
}
 
int binarySearch(vector<int>& v, int Element)
{   
   int low = 0;
   int high = v.size() - 1;

   while(low <= high){
        int mid = low + (high - low)/2;
        if(v[mid] == Element){
            return mid;
        }
        else if(v[mid] < Element){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
   }
   return -1;
}

// Input parameters...

void generateTest(vector<int>& v, int n){

    int min = 1;
    int max = 1e3;

    for(int i=1;i<=n;i++){
        int randomNumber = rand()%(max-min+1) + 1;
        v.push_back(randomNumber);
    }

    sort(v.begin(), v.end());

    int Element = 7;
    int ans = binarySearch(v, Element);
    cout << ans << endl;
}

int main()
{
    vector<int> v;
    int n = 100;
    generateTest(v,n);
}