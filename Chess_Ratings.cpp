#include<bits/stdc++.h>
// /*** @author Vivek Yadav ***/
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
    while(x<y)
    {
        x+=8;
        c++;
    }
    cout<<c<<endl;
}
    return 0;
}