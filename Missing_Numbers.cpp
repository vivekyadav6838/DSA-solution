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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int aa;
    int bb=a+d;
    int ans=bb/2;
   //cout<<bb-ans<<endl;
    if(ans * (d-ans)==b && floor(ans/(d-ans))==c)
    {
        cout<<ans<<" "<<d-ans<<endl;
    }
    else{
        cout<<"-1"<<" "<<"-1"<<endl;
    }
}
    return 0;
}