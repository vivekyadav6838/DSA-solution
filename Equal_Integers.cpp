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
  long long  int a,b;
    cin>>a>>b;
    if(b>=a)
    cout<<b-a<<endl;
    else{
        int ans = a-b;
        ans= ans/2 + 2*(ans%2);
        cout<<ans<<endl;
    }
    
}
    return 0;
}