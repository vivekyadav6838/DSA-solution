#include<bits/stdc++.h>
/*** @author Vivek Yadav ***/
#define for(i,n) for (int i = 0; i < n; ++i)
#define ll long long int
#define arr(n) int arr[n]
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    int x,y,z;
    cin>>x>>y>>z;
    int c= y/x;
    if(c<z)
    {
        cout<<z-c<<endl;
    }
    else {
        cout<<"0"<<endl;
    }
}
    return 0;
}