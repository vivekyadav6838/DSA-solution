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
    int x,y;
    cin>>x>>y;
    int c=0;
    int dy=y;
    while(x<=dy)
    {
        x=y-x;
        c++;
        y=y-x;
    }
   // if(y%x<y)
    cout<<c<<endl;
   // else{
        //cout<<"0"<<endl;
   // }
}
    return 0;
}