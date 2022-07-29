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
    int a,b,c;string s;
    cin>>a>>b>>c;

    if(a>b)
    {
        if(a>c)
        s="Alice";

    }
    if(b>a)
    {
        if(b>c)
        s="Bob";
    }
    if(c>a && c>b)
    s="Charlie";

    cout<<s<<endl;

}
    return 0;
}