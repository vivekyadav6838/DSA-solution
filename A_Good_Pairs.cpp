#include<bits/stdc++.h>
// #define for(i,n) for (int i = 0; i < n; ++i)
// #define int long long int
// #define arr(n) int arr[n]
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k=1;
    int j=0;
    int mi=INT_MAX;
    for(int i=0;i<n;i++)
    {
      if(arr[i]<mi)
      {
          mi=i;
      }

    }
    int mx = INT_MIN;
     for(int i=0;i<n;i++)
    {
      if(arr[i]>mx)
      {
          mx=i;
      }

    }
    cout<<mx+1<<" "<<mi+1<<endl;
}
    return 0;
}