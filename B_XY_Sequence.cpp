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
    long long int n,B,x,y,sum=0;
    cin>>n>>B>>x>>y;
    long long int arr[n];
    arr[0]=0;
    for(long long int i=1;i<=n;i++)
    {
        if(arr[i-1]+x <=B)
        {
            arr[i]=arr[i-1]+x;
            sum+=arr[i];
        }
        else{
             arr[i]=arr[i-1]-y;
            sum+=arr[i];
        }
    }
    cout<<sum<<endl;
}
    return 0;
}