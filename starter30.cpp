#include<bits/stdc++.h>
//#define for(i,n) for (int i = 0; i < n; ++i)
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    int n,x,k;
    cin>>n>>x>>k;
    int c=k/x;
    if(c<=n)
    {
        cout<<c<<endl;
    }
    else if(c>n){
        cout<<n<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
}
    return 0;
}