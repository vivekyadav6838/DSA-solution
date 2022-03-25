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
    int x=0,y=0;
    cin>>x>>y;
    float n= sqrt((x*x)+(y*y));
    int res=n/1;
    if(x==0 && y==0)
    {
        cout<<"0"<<endl;
    }
    
   else if(n<=0 || n>=0 && res*1==n)
    {
        cout<<"1"<<endl;
    }
    else{
        cout<<"2"<<endl;
    }
    }
    
    return 0;
}