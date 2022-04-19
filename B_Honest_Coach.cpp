#include<bits/stdc++.h>
/*** @author Vivek Yadav ***/
// #define for(i,n) for (int i = 0; i < n; ++i)
// #define ll long long int
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
    sort(arr,arr+n);
    int ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            ans= min(ans,abs(arr[j]-arr[i]));
        }
    }
    cout<<ans<<endl;
}
    return 0;
}