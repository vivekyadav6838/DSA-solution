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
    int x,y,a,b;
    cin>>x>>y>>a>>b;
    int ans=2;
    if(x==a||x==b)
    {
      ans--;
    }
    if(y==a ||y==b)
    {
        ans--;
    }
    cout<<ans<<endl;
   
}
    return 0;
}