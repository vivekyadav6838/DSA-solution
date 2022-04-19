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
    int a,b,c;
    cin>>a>>b;
    if(a>b)
     c= max(a,b+b);
    else{
        c= max(a+a,b);
    }
    cout<<c*c<<endl;
}
    return 0;
}